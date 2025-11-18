#include <gtest/gtest.h>
#define TESTING
#include "../src/chip8.hpp"
#include <fstream>

class Chip8MemoryTest : public ::testing::Test {
protected:
    void SetUp() override {
        chip8.initialize();
    }

    Chip8 chip8;
};

// Test memory initialization
TEST_F(Chip8MemoryTest, InitialMemoryState) {
    // Check that font data is loaded at correct location
    EXPECT_EQ(chip8.getMemory(0x50), 0xF0); // First byte of '0' sprite
    EXPECT_EQ(chip8.getMemory(0x51), 0x90); // Second byte of '0' sprite
    
    // Check PC starts at correct address
    EXPECT_EQ(chip8.getPC(), 0x200);
    
    // Check that memory beyond font area is initially zero
    bool memoryClean = true;
    for (int i = 0x200; i < 4096; i++) {
        if (chip8.getMemory(i) != 0) {
            memoryClean = false;
            break;
        }
    }
    EXPECT_TRUE(memoryClean);
}

// Test font loading
TEST_F(Chip8MemoryTest, FontDataCorrectness) {
    // Test specific font patterns
    uint8_t expected_0[] = {0xF0, 0x90, 0x90, 0x90, 0xF0};
    uint8_t expected_1[] = {0x20, 0x60, 0x20, 0x20, 0x70};
    uint8_t expected_F[] = {0xF0, 0x80, 0xF0, 0x80, 0x80};
    
    // Check digit '0'
    for (int i = 0; i < 5; i++) {
        EXPECT_EQ(chip8.getMemory(0x50 + i), expected_0[i]);
    }
    
    // Check digit '1'
    for (int i = 0; i < 5; i++) {
        EXPECT_EQ(chip8.getMemory(0x55 + i), expected_1[i]);
    }
    
    // Check digit 'F'
    for (int i = 0; i < 5; i++) {
        EXPECT_EQ(chip8.getMemory(0x50 + (0xF * 5) + i), expected_F[i]);
    }
}

// Test ROM loading functionality
TEST_F(Chip8MemoryTest, ROMLoadingBounds) {
    // Create a temporary test file
    const char* testROMPath = "/tmp/test_chip8.rom";
    std::ofstream testROM(testROMPath, std::ios::binary);
    
    // Write some test data
    uint8_t testData[] = {0x12, 0x34, 0x56, 0x78, 0x9A, 0xBC};
    testROM.write(reinterpret_cast<const char*>(testData), sizeof(testData));
    testROM.close();
    
    // Load ROM and verify
    EXPECT_TRUE(chip8.loadROM(testROMPath));
    
    // Check that data was loaded at correct location
    for (int i = 0; i < 6; i++) {
        EXPECT_EQ(chip8.getMemory(0x200 + i), testData[i]);
    }
    
    // Clean up
    std::remove(testROMPath);
}

// Test stack operations
TEST_F(Chip8MemoryTest, StackOperations) {
    // Test stack push/pop simulation
    chip8.setStack(0, 0x123);
    chip8.setStack(1, 0x456);
    chip8.setSP(2);
    
    EXPECT_EQ(chip8.getStack(0), 0x123);
    EXPECT_EQ(chip8.getStack(1), 0x456);
    EXPECT_EQ(chip8.getSP(), 2);
    
    // Simulate stack pop
    chip8.setSP(chip8.getSP() - 1);
    EXPECT_EQ(chip8.getSP(), 1);
    EXPECT_EQ(chip8.getStack(chip8.getSP()), 0x456);
}

// Test register operations
TEST_F(Chip8MemoryTest, RegisterOperations) {
    // Test all 16 registers
    for (int i = 0; i < 16; i++) {
        chip8.setRegister(i, i * 0x11);
        EXPECT_EQ(chip8.getRegister(i), i * 0x11);
    }
    
    // Test VF register (flag register) specifically
    chip8.setRegister(0xF, 1);
    EXPECT_EQ(chip8.getRegister(0xF), 1);
    
    chip8.setRegister(0xF, 0);
    EXPECT_EQ(chip8.getRegister(0xF), 0);
}

// Test memory boundaries
TEST_F(Chip8MemoryTest, MemoryBoundaries) {
    // Test that we can access all memory locations
    chip8.setMemory(0, 0xFF);
    chip8.setMemory(4095, 0xAA);
    
    EXPECT_EQ(chip8.getMemory(0), 0xFF);
    EXPECT_EQ(chip8.getMemory(4095), 0xAA);
}

// Test index register operations
TEST_F(Chip8MemoryTest, IndexRegisterOperations) {
    chip8.setIndex(0x300);
    EXPECT_EQ(chip8.getIndex(), 0x300);
    
    // Test index overflow behavior
    chip8.setIndex(0xFFF);
    chip8.setIndex(chip8.getIndex() + 1);
    EXPECT_EQ(chip8.getIndex(), 0x1000); // Should overflow naturally
}

// Test program counter operations
TEST_F(Chip8MemoryTest, ProgramCounterOperations) {
    uint16_t initialPC = chip8.getPC();
    EXPECT_EQ(initialPC, 0x200);
    
    // Test PC increment
    chip8.setPC(chip8.getPC() + 2);
    EXPECT_EQ(chip8.getPC(), 0x202);
    
    // Test PC jump
    chip8.setPC(0x300);
    EXPECT_EQ(chip8.getPC(), 0x300);
}

// Test memory write and read consistency
TEST_F(Chip8MemoryTest, MemoryReadWriteConsistency) {
    // Write different patterns to memory and verify
    for (uint16_t addr = 0x200; addr < 0x300; addr++) {
        uint8_t testValue = static_cast<uint8_t>(addr & 0xFF);
        chip8.setMemory(addr, testValue);
        EXPECT_EQ(chip8.getMemory(addr), testValue);
    }
}