#include "chip8.hpp"
#include <iostream>
#include <chrono>
#include <thread>
#include <ncurses.h>
#include <locale.h>  
#include <array>
#include <cctype>

void updateKeypad(Chip8& chip8) {
    const char keys[] = {'1','2','3','4','q','w','e','r','a','s','d','f','z','x','c','v'};
    const uint8_t keymap[] = {0x1,0x2,0x3,0xC,0x4,0x5,0x6,0xD,0x7,0x8,0x9,0xE,0xA,0x0,0xB,0xF};
    
    chip8.resetKeypad();
    
    int ch = getch();
    if (ch != ERR) {
        if (ch == 'Q') {
            endwin();
            exit(0);
        }
        
        ch = tolower(ch);
        for (size_t i = 0; i < sizeof(keys); ++i) {
            if (ch == keys[i]) {
                chip8.keypad[keymap[i]] = true;
                break;
            }
        }
    }
}

void initNcurses() {
    setlocale(LC_ALL, ""); 
    initscr();            
    noecho();             
    curs_set(FALSE);      
    keypad(stdscr, TRUE); 
    nodelay(stdscr, TRUE);
    raw();                 
}

void updateTimers(Chip8& chip8, std::chrono::high_resolution_clock::time_point& lastUpdate) {
    auto now = std::chrono::high_resolution_clock::now();
    auto elapsed = now - lastUpdate;
    if (elapsed >= std::chrono::microseconds(33334)) {
        chip8.updateTimers();
        lastUpdate = now;
    }
}

void updateEmulation(Chip8& chip8, int cyclesPerFrame) {
    for (int i = 0; i < cyclesPerFrame; ++i) {
        chip8.cycle();
    }
}

void sleepToNextFrame(std::chrono::high_resolution_clock::time_point frameStart, 
                     std::chrono::microseconds targetFrameTime) {
    auto frameEnd = std::chrono::high_resolution_clock::now();
    auto frameDuration = frameEnd - frameStart;
    auto sleepDuration = targetFrameTime - frameDuration;
    
    if (sleepDuration > std::chrono::microseconds::zero()) {
        std::this_thread::sleep_for(sleepDuration);
    }
}

int main(int argc, char* argv[]) {
    if (argc != 2) {
        std::cerr << "Usage: " << argv[0] << " <ROM>\n";
        return 1;
    }

    const char* filename = argv[1];
    Chip8 chip8;
    if (!chip8.loadROM(filename)) {
        return 1;
    }

    initNcurses();

    constexpr int CYCLES_PER_FRAME = 10;
    constexpr auto TARGET_FRAME_TIME = std::chrono::microseconds(33334);
    auto lastTimerUpdate = std::chrono::high_resolution_clock::now();

    bool running = true;
    while (running) {
        auto frameStart = std::chrono::high_resolution_clock::now();

        //updateKeypad(chip8); --- TODO ---
        updateEmulation(chip8, CYCLES_PER_FRAME);
        updateTimers(chip8, lastTimerUpdate);

        chip8.display.render();

        sleepToNextFrame(frameStart, TARGET_FRAME_TIME);
    }

    endwin();
    return 0;
}




