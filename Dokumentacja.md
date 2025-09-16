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

1. **16–21 września – Analiza i przygotowanie**
    
    - zebranie materiałów o architekturze CHIP-8,
        
    - zapoznanie się ze specyfikacją instrukcji,
        
    - wybór języka i narzędzi.
        
2. **22–28 września – Projektowanie systemu**
    
    - opracowanie modułów emulatora,
        
    - zaplanowanie interfejsu graficznego i obsługi wejścia.
        
3. **29 września – 5 października – Implementacja podstaw**
    
    - stworzenie struktury pamięci i rejestrów,
        
    - implementacja pętli głównej i dekodera instrukcji.
        
4. **6–12 października – Obsługa grafiki i wejścia**
    
    - implementacja wyświetlania ekranu 64×32,
        
    - mapowanie klawiatury.
        
5. **13–19 października – Testowanie i poprawki**
    
    - uruchamianie przykładowych ROM-ów,
        
    - naprawa błędów i optymalizacja.
        
6. **20–28 października – Dokumentacja i prezentacja**
    
    - przygotowanie raportu technicznego,
        
    - stworzenie instrukcji użytkownika,
        
    - finalne testy i prezentacja działania.


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


