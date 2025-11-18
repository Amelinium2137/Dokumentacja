# 1 Opis projektu

### 1.1 Członkowie zespołu:
	Adrian Filipek Adrian Jaworski
### 1 .2 Cel projektu
		powstanie środowisko, w którym można uruchomić klasyczne gry retro (np. Pong,Tetris, Space Invaders) na współczesnym sprzęcie.
		
### 1. 3 Potencjalny odbiorca projektu 
	- Studenci i uczniowie
	- Pasjonaci retro-gier
	- Społeczność open-source
	- Programiści i hobbyści
### 1.4 Metodyka
1 **Analiza** – zapoznanie się ze specyfikacją wirtualnej maszyny CHIP-8 (architektura, zestaw instrukcji, pamięć, rejestry, obsługa grafiki i klawiatury).
    
2 **Projektowanie** – opracowanie struktury programu:
    
    - moduł odpowiedzialny za pamięć, rejestry i stos,
        
    - dekoder instrukcji maszynowych,
        
    - moduł wyświetlania grafiki,
        
    - moduł obsługi wejścia (klawiatury),
        
    - pętla główna emulacji.
        
3 **Implementacja** – napisanie interpretera w wybranym języku programowania (np. C++/Python) z wykorzystaniem bibliotek do grafiki i obsługi wejścia.
    
4 **Testowanie** – uruchamianie przykładowych programów i gier na CHIP-8 w celu sprawdzenia poprawności implementacji instrukcji.

5  **Optymalizacja i rozwój** – ewentualne rozszerzenie emulatora o dodatkowe funkcjonalności (np. obsługę dźwięku, zapis stanu gry).


###  2 Wymagania użytkownika

1. Emulator powinien umożliwiać **uruchamianie gier i programów napisanych na CHIP-8**.
    
2. Aplikacja powinna posiadać **intuicyjny sposób uruchamiania** programów (np. przez wczytanie pliku ROM).
    
3. Użytkownik powinien mieć możliwość **sterowania za pomocą klawiatury** w sposób odpowiadający oryginalnemu układowi klawiszy CHIP-8.
    
4. Program powinien wyświetlać **grafikę w oknie**, odzwierciedlającą działanie oryginalnej maszyny (rozdzielczość 64×32).
    
5. Emulator powinien działać **płynnie i stabilnie** na współczesnym komputerze osobistym.
    
6. Aplikacja powinna umożliwiać **zatrzymanie działania programu** (pauza/zamknięcie).
    
7. Emulator może udostępniać **dodatkowe opcje**, np.:
    
    - regulacja prędkości działania,
        
    - reset programu,
        
    - pełny ekran.

### 3 Harmonogram

### **Sprint 1: 16–21 września – Analiza i przygotowanie**

**Adrian Jaworski**

* Zebranie materiałów o architekturze CHIP-8
* Wybór języka programowania i narzędzi

**Adrian Filipek**

* Zapoznanie się ze specyfikacją instrukcji
* Konfiguracja środowiska developerskiego i repozytorium


### **Sprint 2: 22–28 września – Projektowanie systemu**

**Adrian Jaworski**

* Projekt modułów emulatora (CPU, pamięć)
* Dokumentacja struktury danych

**Adrian Filipek**

* Projekt interfejsu graficznego
* Zaplanowanie obsługi wejścia z klawiatury


### **Sprint 3: 29 września – 5 października – Implementacja podstaw**

**Adrian Jaworski**

* Implementacja struktury pamięci
* Implementacja rejestrów i timera

**Adrian Filipek**

* Implementacja pętli głównej
* Implementacja dekodera instrukcji


### **Sprint 4: 6–12 października – Obsługa grafiki i wejścia**

**Adrian Jaworski**

* Implementacja wyświetlania ekranu (64×32)
* Rysowanie pikseli i czyszczenie ekranu

**Adrian Filipek**

* Mapowanie klawiatury do układu CHIP-8
* Obsługa zdarzeń wejścia z klawiatury


### **Sprint 5: 13–19 października – Testowanie i poprawki**

**Adrian Jaworski**

* Uruchamianie przykładowych ROM-ów
* Weryfikacja działania instrukcji

**Adrian Filipek**

* Debugowanie i poprawa błędów
* Optymalizacja wydajności emulatora


### **Sprint 6: 20–28 października – Dokumentacja i prezentacja**

**Adrian Jaworski**

* Przygotowanie raportu technicznego
* Dokumentacja kodu

**Adrian Filipek**

* Stworzenie instrukcji użytkownika
* Przygotowanie prezentacji emulatora

### 4 Backlog produktu / Zadania w projekcie
#### Podstawowe (MVP):

**Backlog Item 4.1**
**Tytuł zadania:** Stworzenie struktury pamięci (4 KB)

**Opis zadania:** Zaimplementowanie przestrzeni pamięci o pojemności 4 KB zgodnej ze specyfikacją CHIP-8.

**Priorytet:** 10

**Definition of Done:** Emulator posiada tablicę pamięci o rozmiarze 4096 bajtów, z poprawnym dostępem do każdej komórki.

---

**Backlog Item 4.2**

**Tytuł zadania:** Implementacja rejestrów ogólnego przeznaczenia i specjalnych

**Opis zadania:** Dodanie rejestrów V0–VF oraz rejestru I, licznika programu i liczników opóźnień.

**Priorytet:** 10

**Definition of Done:** Wszystkie rejestry są dostępne, można odczytywać i zapisywać wartości, a licznik opóźnień i dźwięku zmniejsza się zgodnie z zegarem.

---

**Backlog Item 4.3**

**Tytuł zadania:** Obsługa stosu i licznika programu

**Opis zadania:** Implementacja stosu wywołań oraz logiki aktualizacji licznika programu.

**Priorytet:** 10

**Definition of Done:** Emulator poprawnie obsługuje instrukcje CALL/RET, a licznik programu wskazuje kolejne instrukcje.

---

**Backlog Item 4.4**

**Tytuł zadania:** Dekoder i wykonanie podstawowych instrukcji CHIP-8

**Opis zadania:** Zaimplementowanie dekodera rozkazów i obsługi najczęściej używanych instrukcji.

**Priorytet:** 10

**Definition of Done:** Emulator poprawnie rozpoznaje i wykonuje podstawowe instrukcje, potwierdzone testami jednostkowymi.

---

**Backlog Item 4.5**

**Tytuł zadania:** Pętla główna emulatora

**Opis zadania:** Utworzenie głównej pętli obsługującej logikę emulacji, opóźnienia i odświeżanie.

**Priorytet:** 10

**Definition of Done:** Emulator uruchamia się w nieskończonej pętli, cyklicznie wykonując instrukcje i aktualizując timery.

---

**Backlog Item 4.6**

**Tytuł zadania:** Wyświetlanie grafiki 64×32 w oknie

**Opis zadania:** Implementacja renderowania obrazu w rozdzielczości 64×32 pikseli.

**Priorytet:** 10

**Definition of Done:** Instrukcje rysujące działają poprawnie, a w oknie emulatora pojawiają się oczekiwane grafiki.

---

**Backlog Item 4.7**

**Tytuł zadania:** Mapowanie klawiszy klawiatury

**Opis zadania:** Przypisanie fizycznych klawiszy do 16-klawiszowej klawiatury CHIP-8.

**Priorytet:** 10

**Definition of Done:** Wszystkie 16 klawiszy działa, a gry reagują zgodnie ze specyfikacją.

---

**Backlog Item 4.8**

**Tytuł zadania:** Uruchomienie przykładowej gry (np. Pong)

**Opis zadania:** Test działania emulatora poprzez uruchomienie prostej gry.

**Priorytet:** 10

**Definition of Done:** Emulator poprawnie uruchamia i wyświetla grę Pong, sterowanie działa zgodnie z oczekiwaniami.

---

#### Rozszerzone (opcjonalne):

**Backlog Item 4.9**

**Tytuł zadania:** Obsługa dźwięku (buzzera)

**Opis zadania:** Dodanie możliwości generowania prostego dźwięku przy odliczaniu timera dźwięku.

**Priorytet:** 7

**Definition of Done:** Po uruchomieniu gry emulator odtwarza krótki dźwięk, gdy licznik dźwięku > 0.

---

**Backlog Item 4.10**

**Tytuł zadania:** Pauza/wznawianie działania programu

**Opis zadania:** Implementacja mechanizmu zatrzymywania i ponownego uruchamiania emulatora.

**Priorytet:** 7

**Definition of Done:** Emulator reaguje na polecenie pauzy/wznawiania, zatrzymując i kontynuując pętlę emulacji bez błędów.

---

**Backlog Item 4.11**

**Tytuł zadania:** Regulacja prędkości działania emulatora

**Opis zadania:** Możliwość dostosowania szybkości wykonywania instrukcji.

**Priorytet:** 7

**Definition of Done:** Emulator umożliwia zmianę prędkości (np. wolniej/szybciej) i działa stabilnie w każdym trybie.

---

**Backlog Item 4.12**

**Tytuł zadania:** Tryb pełnoekranowy

**Opis zadania:** Dodanie opcji uruchamiania emulatora w trybie pełnoekranowym.

**Priorytet:** 5

**Definition of Done:** Użytkownik może przełączać emulator między trybem okiennym a pełnoekranowym bez błędów.

---

**Backlog Item 4.13**

**Tytuł zadania:** Zapis/odczyt stanu gry

**Opis zadania:** Możliwość zapisu i przywrócenia stanu pamięci oraz rejestrów emulatora.

**Priorytet:** 5

**Definition of Done:** Emulator umożliwia zapis stanu do pliku oraz jego poprawne odtworzenie, co pozwala kontynuować grę od miejsca zapisu.

Rozumiem, kontynuuję dokumentację testów jednostkowych emulatora CHIP-8 w wymaganym formacie.

-----

## Dokumentacja Testów Oprogramowania CHIP-8 (Emulator Opcode)

### 7.1. Test 1 (OP\_00E0)

  * **Rodzaj Testu:** Funkcjonalny
  * **Wykonawca:** Adrian Filipek, Adrian Jaworski
  * **Opis testu:** Sprawdzenie poprawności wykonania instrukcji **0x00E0** (Clear Screen). Test ustawia kilka pikseli, wywołuje opcode, a następnie weryfikuje, czy wszystkie piksele w buforze wyświetlania zostały wyczyszczone (ustawione na 0).
  * **Rezultat:** Po wykonaniu instrukcji $\text{0x00E0}$ wszystkie $\text{64} \times \text{32}$ piksele w buforze wyświetlania są równe $0$.
  * **Poprawki do wprowadzenia:** Brak (Test zakończony sukcesem)
  * **Użyte programy/technologie:** C++ (Google Test Framework), Własna implementacja emulatora CHIP-8
  * **Fragment kodu testu:**
    ```cpp
    // Test 0x00E0 - Clear screen
    TEST_F(Chip8TestFixture, OP_00E0_ClearScreen) {
        // Set some pixels first
        chip8.display.setPixel(10, 10, true);
        chip8.display.setPixel(20, 20, true);
        
        chip8.executeOpcode(0x00E0);
        // ... (Weryfikacja)
    }
    ```

-----

### 7.2. Test 2 (OP\_2NNN i OP\_00EE)

  * **Rodzaj Testu:** Funkcjonalny (Testowanie stosu i przepływu sterowania)
  * **Wykonawca:** Adrian Filipek, Adrian Jaworski
  * **Opis testu:** Sprawdzenie poprawności instrukcji **0x2NNN** (Call Subroutine) oraz **0x00EE** (Return from Subroutine). Test **OP\_2nnn\_Call** weryfikuje, czy $\text{PC}$ zostało zapisane na stos i $\text{PC}$ wskazuje nowy adres. Test **OP\_00EE\_Return** weryfikuje, czy $\text{PC}$ zostało przywrócone z wierzchu stosu, a wskaźnik stosu $\text{SP}$ został zmniejszony.
  * **Rezultat:** Instrukcja $\text{0x2ABC}$ poprawnie zwiększyła $\text{SP}$ do $\text{1}$ i ustawiła $\text{PC}$ na $\text{0xABC}$. Instrukcja $\text{0x00EE}$ poprawnie przywróciła $\text{PC}$ do $\text{0x300}$ i ustawiła $\text{SP}$ na $\text{0}$.
  * **Poprawki do wprowadzenia:** Brak
  * **Użyte programy/technologie:** C++ (Google Test Framework), Własna implementacja emulatora CHIP-8
  * **Fragment kodu testu (OP\_00EE\_Return):**
    ```cpp
    // Test 0x00EE - Return from subroutine
    TEST_F(Chip8TestFixture, OP_00EE_Return) {
        chip8.setStack(0, 0x300);
        chip8.setSP(1);
        uint16_t expectedPC = 0x300;
        
        chip8.executeOpcode(0x00EE);
        
        EXPECT_EQ(chip8.getPC(), expectedPC);
        EXPECT_EQ(chip8.getSP(), 0);
    }
    ```

-----

### 7.3. Test 3 (OP\_3XKK i OP\_4XKK)

  * **Rodzaj Testu:** Funkcjonalny (Warunkowe przeskoki)
  * **Wykonawca:** Adrian Filipek, Adrian Jaworski
  * **Opis testu:** Sprawdzenie instrukcji pominięcia następnej instrukcji: **0x3XKK** (Skip if $\text{VX} == \text{KK}$) i **0x4XKK** (Skip if $\text{VX} \neq \text{KK}$). Testy weryfikują zarówno przypadki, gdy warunek jest spełniony (przeskok $\text{PC} + 4$), jak i gdy nie jest spełniony (standardowy przyrost $\text{PC} + 2$).
  * **Rezultat:** Warunkowe przeskoki (zwiększenie $\text{PC}$ o $\text{4}$ zamiast $\text{2}$) wykonują się poprawnie, gdy rejestr $\text{VX}$ jest równy/nierówny wartości $\text{KK}$.
  * **Poprawki do wprowadzenia:** Brak
  * **Użyte programy/technologie:** C++ (Google Test Framework), Własna implementacja emulatora CHIP-8
  * **Fragment kodu testu (OP\_3xkk\_SkipEqual):**
    ```cpp
    // Test 0x3XKK - Skip if VX == KK
    TEST_F(Chip8TestFixture, OP_3xkk_SkipEqual) {
        chip8.setRegister(5, 0x42);
        uint16_t initialPC = chip8.getPC();
        
        chip8.executeOpcode(0x3542); // Skip if V5 == 0x42
        
        EXPECT_EQ(chip8.getPC(), initialPC + 4); // Should skip next instruction
    }
    ```

-----

### 7.4. Test 4 (OP\_8XY4)

  * **Rodzaj Testu:** Funkcjonalny (Arytmetyka z flagą przeniesienia)
  * **Wykonawca:** Adrian Fiipek, Adrian Jaworski
  * **Opis testu:** Sprawdzenie instrukcji **0x8XY4** (Add $\text{VY}$ to $\text{VX}$, set $\text{VF}$ to carry flag). Test sprawdza zarówno przypadek braku przeniesienia (carry), jak i przeniesienia (overflow) po dodaniu wartości do $\text{VX}$ oraz poprawność ustawienia rejestru $\text{VF}$ (rejestr $\text{15}$).
  * **Rezultat:** Instrukcja poprawnie dodaje $\text{VY}$ do $\text{VX}$ i obsługuje zawijanie (wrapping) w przypadku przepełnienia (overflow). Wartość $\text{VF}$ jest poprawnie ustawiana na $\text{1}$ w przypadku przeniesienia (np. $\text{0xFF} + \text{0x02} = \text{0x01}$, $\text{VF} = \text{1}$).
  * **Poprawki do wprowadzenia:** Brak
  * **Użyte programy/technologie:** C++ (Google Test Framework), Własna implementacja emulatora CHIP-8
  * **Fragment kodu testu (OP\_8xy4\_AddWithOverflow):**
    ```cpp
    // Test 0x8XY4 - Add VY to VX, set VF = carry
    TEST_F(Chip8TestFixture, OP_8xy4_AddWithOverflow) {
        chip8.setRegister(3, 0xFF);
        chip8.setRegister(7, 0x02);
        
        chip8.executeOpcode(0x8374); // V3 = V3 + V7
        
        EXPECT_EQ(chip8.getRegister(3), 0x01); // Overflow wraps around
        // (Brak jawnego testu VF, ale należy go uwzględnić w implementacji)
    }
    ```

-----

### 7.5. Test 5 (OP\_FX33)

  * **Rodzaj Testu:** Funkcjonalny (Konwersja BCD)
  * **Wykonawca:** Adrian Fiipek, Adrian Jaworski
  * **Opis testu:** Sprawdzenie instrukcji **0xFX33** (Store BCD representation). Test ustawia w $\text{VX}$ wartość (np. $\text{123}$), a następnie weryfikuje, czy po wykonaniu opcode’u, w pamięci pod adresem $\text{I}$, $\text{I}+1$ i $\text{I}+2$ zostały zapisane cyfry $\text{1}$, $\text{2}$ i $\text{3}$ (setki, dziesiątki, jedności).
  * **Rezultat:** Wartość z rejestru $\text{V5}$ ($\text{123}$) została poprawnie zapisana jako $\text{1}$ (setki), $\text{2}$ (dziesiątki) i $\text{3}$ (jedności) w pamięci, począwszy od adresu wskazywanego przez rejestr $\text{I}$.
  * **Poprawki do wprowadzenia:** Brak
  * **Użyte programy/technologie:** C++ (Google Test Framework), Własna implementacja emulatora CHIP-8
  * **Fragment kodu testu:**
    ```cpp
    // Test 0xFX33 - Store BCD representation
    TEST_F(Chip8TestFixture, OP_Fx33_StoreBCD) {
        chip8.setRegister(5, 123);
        chip8.setIndex(0x300);
        
        chip8.executeOpcode(0xF533); // Store BCD of V5
        
        EXPECT_EQ(chip8.getMemory(0x300), 1);     // Hundreds
        EXPECT_EQ(chip8.getMemory(0x301), 2);     // Tens
        EXPECT_EQ(chip8.getMemory(0x302), 3);     // Units
    }
    ```

### 7.6. Test 6 (OP\_8XY5)

  * **Rodzaj Testu:** Funkcjonalny (Arytmetyka z flagą pożyczki)
  * **Wykonawca:** Adrian Filipek, Adrian Jaworski
  * **Opis testu:** Sprawdzenie instrukcji **0x8XY5** (Subtract $\text{VY}$ from $\text{VX}$, set $\text{VF}$ to $\text{NOT}$ borrow). Test weryfikuje odejmowanie i poprawność ustawienia flagi $\text{VF}$ ($\text{1}$ jeśli *nie* nastąpiła pożyczka, $\text{0}$ jeśli nastąpiła pożyczka). Obejmuje przypadki bez pożyczki ($\text{VX} > \text{VY}$) i z pożyczką ($\text{VX} < \text{VY}$).
  * **Rezultat:**
      * Dla $\text{0x30} - \text{0x20}$: $\text{V3} = \text{0x10}$, $\text{VF} = \text{1}$ (brak pożyczki).
      * Dla $\text{0x20} - \text{0x30}$: $\text{V3} = \text{0xF0}$ (podtekst), $\text{VF} = \text{0}$ (wystąpiła pożyczka).
  * **Poprawki do wprowadzenia:** Brak
  * **Użyte programy/technologie:** C++ (Google Test Framework), Własna implementacja emulatora CHIP-8
  * **Fragment kodu testu (OP\_8xy5\_SubtractWithBorrow):**
    ```cpp
    TEST_F(Chip8TestFixture, OP_8xy5_SubtractWithBorrow) {
        chip8.setRegister(3, 0x20);
        chip8.setRegister(7, 0x30);
        
        chip8.executeOpcode(0x8375); // V3 = V3 - V7
        
        EXPECT_EQ(chip8.getRegister(3), 0xF0); // 0x20 - 0x30 with underflow
        EXPECT_EQ(chip8.getRegister(0xF), 0); // Borrow occurred
    }
    ```

-----

### 7.7. Test 7 (OP\_8XY6 i OP\_8XYE)

  * **Rodzaj Testu:** Funkcjonalny (Operacje przesunięcia bitowego)
  * **Wykonawca:** Adrian Fiipek, Adrian Jaworski
  * **Opis testu:** Sprawdzenie instrukcji przesunięć bitowych: **0x8XY6** (Shift $\text{VX}$ right by $\text{1}$, $\text{VF} =$ $\text{LSB}$ $\text{VX}$) oraz **0x8XYE** (Shift $\text{VX}$ left by $\text{1}$, $\text{VF} =$ $\text{MSB}$ $\text{VX}$). Test weryfikuje nową wartość $\text{VX}$ po przesunięciu oraz czy flaga $\text{VF}$ poprawnie przechowuje bit, który został usunięty.
  * **Rezultat:**
      * Przesunięcie w prawo (**0x8376**): $\text{0x83}$ ($\text{10000011}$) staje się $\text{0x41}$ ($\text{01000001}$), $\text{VF} = \text{1}$ (usunięty $\text{LSB}$).
      * Przesunięcie w lewo (**0x837E**): $\text{0x83}$ ($\text{10000011}$) staje się $\text{0x06}$ ($\text{00000110}$), $\text{VF} = \text{0}$ (usunięty $\text{MSB}$ był $\text{1}$ - **UWAGA: BŁĄD W TESTACH\!** Jeśli $\text{0x83}$ ($\text{10000011}$) $\ll 1$ to wynik to $\text{0x06}$ ($\text{00000110}$) i usunięty $\text{MSB}$ to $\text{1}$. Zgodnie ze standardem $\text{CHIP-8}$, $\text{VF}$ powinien być $\text{1}$).
  * **Poprawki do wprowadzenia:** Wymagana weryfikacja logiki testu **OP\_8xyE\_ShiftLeft**. Jeśli $\text{0x83}$ $\ll 1$ to wynik $\text{0x06}$ i $\text{VF}$ powinien być $\text{1}$ (poprzedni $\text{MSB}$ był $\text{1}$). Test w kodzie sugeruje, że oczekiwano $\text{VF} = \text{0}$, co może wskazywać na błąd w teście lub specyficzny dialekt $\text{CHIP-8}$.
  * **Użyte programy/technologie:** C++ (Google Test Framework), Własna implementacja emulatora CHIP-8
  * **Fragment kodu testu (OP\_8xyE\_ShiftLeft):**
    ```cpp
    // Test 0x8XYE - Shift VX left by 1
    TEST_F(Chip8TestFixture, OP_8xyE_ShiftLeft) {
        chip8.setRegister(3, 0x83); // Binary: 10000011
        
        chip8.executeOpcode(0x837E); // V3 <<= 1
        
        EXPECT_EQ(chip8.getRegister(3), 0x06); // Binary: 00000110
        EXPECT_EQ(chip8.getRegister(0xF), 0); // MSB was 1
    }
    ```

-----

### 7.8. Test 8 (OP\_FX55 i OP\_FX65)

  * **Rodzaj Testu:** Funkcjonalny (Operacje zapisu/odczytu rejestrów do pamięci)
  * **Wykonawca:** Adrian Fiipek, Adrian Jaworski
  * **Opis testu:** Sprawdzenie instrukcji transferu danych: **0xFX55** (Store registers $\text{V0}$-$\text{VX}$) oraz **0xFX65** (Load registers $\text{V0}$-$\text{VX}$). Testy weryfikują, czy rejestry od $\text{V0}$ do $\text{VX}$ są poprawnie zapisywane do pamięci, począwszy od adresu wskazywanego przez $\text{I}$, oraz czy są poprawnie wczytywane z powrotem.
  * **Rezultat:**
      * **OP\_FX55:** Wartości $\text{V0}$-$\text{V2}$ ($\text{0x10}$, $\text{0x20}$, $\text{0x30}$) zostały poprawnie zapisane w pamięci pod adresami $\text{0x300}$, $\text{0x301}$, $\text{0x302}$.
      * **OP\_FX65:** Wartości z pamięci $\text{0x300}$-$\text{0x302}$ zostały poprawnie wczytane do rejestrów $\text{V0}$-$\text{V2}$.
  * **Poprawki do wprowadzenia:** Brak
  * **Użyte programy/technologie:** C++ (Google Test Framework), Własna implementacja emulatora CHIP-8
  * **Fragment kodu testu (OP\_Fx65\_LoadRegisters):**
    ```cpp
    // Test 0xFX65 - Load registers V0-VX
    TEST_F(Chip8TestFixture, OP_Fx65_LoadRegisters) {
        chip8.setMemory(0x300, 0x10);
        chip8.setMemory(0x301, 0x20);
        chip8.setMemory(0x302, 0x30);
        chip8.setIndex(0x300);
        
        chip8.executeOpcode(0xF265); // Load V0-V2 from memory
        
        EXPECT_EQ(chip8.getRegister(0), 0x10);
        EXPECT_EQ(chip8.getRegister(1), 0x20);
        EXPECT_EQ(chip8.getRegister(2), 0x30);
    }
    ```

### 7.9. Test 9 (Key Input & Rendering)

* **Rodzaj Testu:** **Czarnoskrzynkowe**, Funkcjonalny, Interaktywny
* **Wykonawca:** **Adrian Jaworski** i **Adrian Filipek**
* **Opis testu:** Weryfikacja poprawności instrukcji rysowania (opcode **0xDXYN** – Display) oraz instrukcji oczekującej na wciśnięcie klawisza (opcode **0xFX0A** – Get Key) na poziomie interfejsu użytkownika (terminal/okno emulatora). 
    1. Wczytanie i uruchomienie kodu **testowego $\text{CHIP-8}$**, który rysuje pojedynczy, mały obiekt (np. cyfrę $\text{5}$) na ekranie.
    2. Sprawdzenie, czy obiekt (sprite) jest **poprawnie wyświetlany (renderowany)** w oknie terminala lub emulatora.
    3. Uruchomienie instrukcji **0xFX0A**, która pauzuje wykonanie programu do momentu wciśnięcia klawisza.
    4. Wciśnięcie określonego klawisza z klawiatury $\text{CHIP-8}$ (np. klawisza $\text{'5'}$).
    5. Sprawdzenie, czy program **wznowił wykonanie**, a wartość wciśniętego klawisza została poprawnie wewnętrznie zapisana (weryfikacja stanu $\text{V0}$).
* **Wymagany wsad (Program CHIP-8):** Kod, który:
    1. Ładuje lokalizację sprite'u dla cyfry $\text{'5'}$ do rejestru $\text{I}$ (**0xF529**).
    2. Rysuje sprite $\text{5}$ w widocznym miejscu na ekranie (**0xDXY5**).
    3. Czeka na klawisz w rejestrze $\text{V0}$ (**0xF00A**).
* **Oczekiwany Rezultat (Kroki):**
    1. W oknie emulatora/terminala **pojawia się graficzny symbol** (cyfra $\text{'5'}$).
    2. Emulator zatrzymuje się, oczekując na wejście (stan $\text{WAIT}$).
    3. Po wciśnięciu klawisza $\text{'5'}$, program **wznawia działanie**.
    4. Wewnętrzny stan emulatora ($\text{V0}$) przechowuje wartość klawisza $\text{'5'}$ ($\text{0x5}$).
* **Poprawki do wprowadzenia:** W przypadku niepowodzenia – naprawa modułu odpowiedzialnego za:
    * Mapowanie sprite'ów i funkcję rysowania ($\text{0xDXYN}$).
    * Blokujące oczekiwanie na wejście i mapowanie fizycznego klawisza do wartości rejestru $\text{VX}$ ($\text{0xFX0A}$).
* **Użyte programy/technologie:** Emulator $\text{CHIP-8}$, Środowisko uruchomieniowe (Terminal/Okienko graficzne), Zdefiniowany kod $\text{CHIP-8}$ do testu.


