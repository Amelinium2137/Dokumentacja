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
### 1.4 Metofyka
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

### Podstawowe (MVP):

-  Stworzenie struktury pamięci (4 KB).
    
-  Implementacja rejestrów ogólnego przeznaczenia i specjalnych.
    
-  Obsługa stosu i licznika programu.
    
-  Dekoder i wykonanie podstawowych instrukcji CHIP-8.
    
-  Pętla główna emulatora.
    
-  Wyświetlanie grafiki 64×32 w oknie.
    
-  Mapowanie klawiszy klawiatury.
    
-  Uruchomienie przykładowej gry (np. Pong).
    

### Rozszerzone (opcjonalne):

-  Obsługa dźwięku (buzzera).
    
-  Pauza/wznawianie działania programu.
    
-  Regulacja prędkości działania emulatora.
    
-  Tryb pełnoekranowy.
    
-  Zapis/odczyt stanu gry.