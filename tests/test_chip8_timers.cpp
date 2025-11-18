#include <gtest/gtest.h>
#define TESTING
#include "../src/chip8.hpp"

class Chip8TimersTest : public ::testing::Test {
protected:
    void SetUp() override {
        chip8.initialize();
    }

    Chip8 chip8;
};

// Test delay timer functionality
TEST_F(Chip8TimersTest, DelayTimerDecrement) {
    chip8.setDelayTimer(10);
    
    // Call updateTimers and verify decrement
    chip8.updateTimers();
    EXPECT_EQ(chip8.getDelayTimer(), 9);
    
    // Multiple calls
    chip8.updateTimers();
    chip8.updateTimers();
    EXPECT_EQ(chip8.getDelayTimer(), 7);
}

TEST_F(Chip8TimersTest, DelayTimerStopsAtZero) {
    chip8.setDelayTimer(1);
    
    chip8.updateTimers();
    EXPECT_EQ(chip8.getDelayTimer(), 0);
    
    // Should not go below zero
    chip8.updateTimers();
    EXPECT_EQ(chip8.getDelayTimer(), 0);
}

TEST_F(Chip8TimersTest, DelayTimerZeroNoChange) {
    chip8.setDelayTimer(0);
    
    chip8.updateTimers();
    EXPECT_EQ(chip8.getDelayTimer(), 0);
}

// Test sound timer functionality
TEST_F(Chip8TimersTest, SoundTimerDecrement) {
    chip8.setSoundTimer(10);
    
    chip8.updateTimers();
    EXPECT_EQ(chip8.getSoundTimer(), 9);
    
    chip8.updateTimers();
    chip8.updateTimers();
    EXPECT_EQ(chip8.getSoundTimer(), 7);
}

TEST_F(Chip8TimersTest, SoundTimerStopsAtZero) {
    chip8.setSoundTimer(1);
    
    chip8.updateTimers();
    EXPECT_EQ(chip8.getSoundTimer(), 0);
    
    // Should not go below zero
    chip8.updateTimers();
    EXPECT_EQ(chip8.getSoundTimer(), 0);
}

// Test keypad functionality
TEST_F(Chip8TimersTest, KeypadInitialState) {
    // All keys should be initially released
    for (int i = 0; i < 16; i++) {
        EXPECT_EQ(chip8.getKeypad(i), 0);
    }
}

TEST_F(Chip8TimersTest, KeypadInput) {
    // Test key '1' -> keypad[0x1]
    chip8.updateKeypad('1');
    EXPECT_EQ(chip8.getKeypad(0x1), 1);
    
    // Test key 'q' -> keypad[0x4]
    chip8.resetKeypad();
    chip8.updateKeypad('q');
    EXPECT_EQ(chip8.getKeypad(0x4), 1);
    
    // Test key 'x' -> keypad[0x0]
    chip8.resetKeypad();
    chip8.updateKeypad('x');
    EXPECT_EQ(chip8.getKeypad(0x0), 1);
    
    // Test key 'v' -> keypad[0xF]
    chip8.resetKeypad();
    chip8.updateKeypad('v');
    EXPECT_EQ(chip8.getKeypad(0xF), 1);
}

TEST_F(Chip8TimersTest, KeypadMapping) {
    // Test complete keypad mapping
    struct KeyMapping {
        char key;
        int keypadIndex;
    };
    
    KeyMapping mappings[] = {
        {'1', 0x1}, {'2', 0x2}, {'3', 0x3}, {'4', 0xC},
        {'q', 0x4}, {'w', 0x5}, {'e', 0x6}, {'r', 0xD},
        {'a', 0x7}, {'s', 0x8}, {'d', 0x9}, {'f', 0xE},
        {'z', 0xA}, {'x', 0x0}, {'c', 0xB}, {'v', 0xF}
    };
    
    for (const auto& mapping : mappings) {
        chip8.resetKeypad();
        chip8.updateKeypad(mapping.key);
        EXPECT_EQ(chip8.getKeypad(mapping.keypadIndex), 1) 
            << "Key '" << mapping.key << "' should map to keypad[" 
            << std::hex << mapping.keypadIndex << "]";
        
        // Verify other keys are still zero
        for (int i = 0; i < 16; i++) {
            if (i != mapping.keypadIndex) {
                EXPECT_EQ(chip8.getKeypad(i), 0) 
                    << "Keypad[" << std::hex << i << "] should be 0 when key '" 
                    << mapping.key << "' is pressed";
            }
        }
    }
}

TEST_F(Chip8TimersTest, KeypadReset) {
    // Press multiple keys
    chip8.updateKeypad('1');
    chip8.updateKeypad('q');
    chip8.updateKeypad('a');
    chip8.updateKeypad('x');
    
    EXPECT_EQ(chip8.getKeypad(0x1), 1);
    EXPECT_EQ(chip8.getKeypad(0x4), 1);
    EXPECT_EQ(chip8.getKeypad(0x7), 1);
    EXPECT_EQ(chip8.getKeypad(0x0), 1);
    
    // Reset and verify all keys are released
    chip8.resetKeypad();
    for (int i = 0; i < 16; i++) {
        EXPECT_EQ(chip8.getKeypad(i), 0);
    }
}

TEST_F(Chip8TimersTest, UnsupportedKeyInput) {
    // Test unsupported keys don't affect keypad
    chip8.updateKeypad('y'); // Not mapped
    chip8.updateKeypad('h'); // Not mapped
    chip8.updateKeypad(' '); // Space - not mapped
    
    // All keypad entries should remain 0
    for (int i = 0; i < 16; i++) {
        EXPECT_EQ(chip8.getKeypad(i), 0);
    }
}

// Test timer and keypad integration scenarios
TEST_F(Chip8TimersTest, TimersAndKeypadIntegration) {
    // Set timers and keypad state
    chip8.setDelayTimer(5);
    chip8.setSoundTimer(3);
    chip8.updateKeypad('1');
    
    // Update timers and verify keypad state is preserved
    chip8.updateTimers();
    
    EXPECT_EQ(chip8.getDelayTimer(), 4);
    EXPECT_EQ(chip8.getSoundTimer(), 2);
    EXPECT_EQ(chip8.getKeypad(0x1), 1);
    
    // Continue updating
    chip8.updateTimers();
    chip8.updateTimers();
    
    EXPECT_EQ(chip8.getDelayTimer(), 2);
    EXPECT_EQ(chip8.getSoundTimer(), 0);
    EXPECT_EQ(chip8.getKeypad(0x1), 1); // Keypad state should persist
}

// Test edge cases
TEST_F(Chip8TimersTest, TimerEdgeCases) {
    // Test setting maximum timer values
    chip8.setDelayTimer(255);
    chip8.setSoundTimer(255);
    
    EXPECT_EQ(chip8.getDelayTimer(), 255);
    EXPECT_EQ(chip8.getSoundTimer(), 255);
    
    // Decrement once
    chip8.updateTimers();
    EXPECT_EQ(chip8.getDelayTimer(), 254);
    EXPECT_EQ(chip8.getSoundTimer(), 254);
}

TEST_F(Chip8TimersTest, MultipleKeyPresses) {
    // Test that multiple key presses work correctly
    chip8.updateKeypad('1');
    EXPECT_EQ(chip8.getKeypad(0x1), 1);
    
    // Press another key without reset
    chip8.updateKeypad('q');
    EXPECT_EQ(chip8.getKeypad(0x1), 1); // Should still be pressed
    EXPECT_EQ(chip8.getKeypad(0x4), 1); // New key should also be pressed
    
    // Reset and verify
    chip8.resetKeypad();
    EXPECT_EQ(chip8.getKeypad(0x1), 0);
    EXPECT_EQ(chip8.getKeypad(0x4), 0);
}

// Test instruction 0xFX0A - Wait for key press
TEST_F(Chip8TimersTest, WaitForKeyPress) {
    uint16_t initialPC = chip8.getPC();
    
    // Execute wait for key instruction when no key is pressed
    chip8.executeOpcode(0xF50A); // Wait for key press, store in V5
    
    // PC should be decremented by 2 (waiting)
    EXPECT_EQ(chip8.getPC(), initialPC);
    
    // Press a key and execute again
    chip8.updateKeypad('3');
    chip8.setPC(initialPC); // Reset PC
    chip8.executeOpcode(0xF50A);
    
    // Key should be stored in register V5
    EXPECT_EQ(chip8.getRegister(5), 0x3);
    // PC should advance normally this time
    EXPECT_EQ(chip8.getPC(), initialPC + 2);
}