# CHIP-8 Emulator

Prosty emulator systemu **CHIP-8**, napisany w C++.  
Pozwala uruchamiać klasyczne ROM-y CHIP-8, takie jak gry lub testy instrukcji.

---

## 🔧 Wymagania

Aby zbudować projekt, potrzebujesz:

- **CMake** (≥ 3.10)  
- **kompilator C++** (np. g++, clang)  
- **biblioteka ncurses / ncursesw**  
- *(opcjonalnie)* **SDL2** — jeśli planujesz wersję graficzną

### Instalacja na macOS (Homebrew):
```bash
brew install cmake ncurses
```

### Instalacja na Ubuntu/Debian:
``` bash
sudo apt update
sudo apt install cmake g++ libncurses5-dev libncursesw5-dev
```

## 🚀 Kompilacja i uruchomienie

W głównym katalogu projektu wykonaj:
``` bash
mkdir build
cd build
cmake ..
make
```

Po zakończeniu kompilacji uruchom emulator z wybranym ROM-em:

``` bash
./chip8 ../roms/test_opcode.ch8
```