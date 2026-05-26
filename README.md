\# Testy



Punkt wyjścia do projektu C++ z testami jednostkowymi (Google Test).



\## Struktura



```

MyProject/

├── main.cpp              # Punkt wejścia programu

├── my\_func.h             # Deklaracja funkcji

├── my\_func.cpp           # Definicja funkcji

├── tests/

│   └── test\_my\_func.cpp  # Testy jednostkowe

└── CMakeLists.txt

```



\## Wymagania



\- [CMake](https://cmake.org/) (minimum 3.14)

\- Kompilator C++ (np. MSVC, GCC, Clang)

\- Dostęp do internetu przy pierwszym buildzie (pobieranie Google Test)



\## Budowanie



```bash

cmake -S . -B build

cmake --build build

```



\## Uruchamianie programu



```bash

./build/MyProgram

```



Na Windowsie:

```bash

.\\build\\Debug\\MyProgram.exe

```



\## Uruchamianie testów



```bash

ctest --test-dir build --output-on-failure

```



Powinieneś zobaczyć:

```

Test #1: MyFunc.CzyDziala ... Passed

```

