# Лабораторна робота № 12.  Cтроки

## 1 Вимоги

### 1.1 Розробник

* Пустовий Iлля Iванович;
* студент групи КІТ-121в;
* 15-гру-2022.

### 1.2 Загальне завдання

Визначити, скільки у тексті голосних і скільки приголосних букв. Вивести на екран процентне співвідношення.

## 2 Опис програми

### 2.1 Функціональне призначення

Програма призначена для підрахунку гласних та согласних у заданому тексті.

Результат зберігається у змінних vow, end.

Демонстрація знайдених результатів передбачає видача даних у вікні консолі.

### 2.2 Опис логічної структури

#### Основна функція

```c
		int main() 
```

*Призначення*: головна функція.

*Схема алгоритму функції* подана на нижче.

*Опис роботи*: 
 - створюємо динамічний масив
 - відкриваємо файл
 - разуємо скільки у строчці гласних та согласних
 - успішний код повернення з програми (0)
 */

#### Функція підрахунку слів у тексті

```c
		void percent(char *arr, int x);
```
*Призначення*: підрахунок гласних та согласних.

- цикл проходить масив, під час якого вважаються букви під час яких заповнюється змінні.

#### Структура проекту

```
── lab12
├── Doxyfile
├── Makefile
├── README.md
├── assets
│ └── input.txt
├── doc
│ └── lab12.md
├── test
│ └── test.c
└── src
├── lib.c
├── lib.h
└── main.c
```


### 2.3 Важливі фрагменти програми

#### Початкові дані. Константи, перерахування

```c
	char *line = (char*)malloc(size * sizeof(char)); //створюємо масив для тексту
```

#### рахування слiв

```c
void percent(char *arr, int x) {
    double vowels = 0;
    double glas = 0;
    for (int i = 0; i < x; i++) {
        switch(*(arr + i)) {
            case 'a': vowels++; break;
            case 'e': vowels++; break;
            case 'i': vowels++; break;
            case 'o': vowels++; break;
            case 'u': vowels++; break;
            case 'y': vowels++; break;
            case 'A': vowels++; break;
            case 'E': vowels++; break;
            case 'I': vowels++; break;
            case 'O': vowels++; break;
            case 'U': vowels++; break;
            case 'Y': vowels++; break;
            case 'b': glas++; break;
            case 'c': glas++; break;
            case 'd': glas++; break;
            case 'f': glas++; break;
            case 'g': glas++; break;
            case 'h': glas++; break;
            case 'j': glas++; break;
            case 'k': glas++; break;
            case 'l': glas++; break;
            case 'm': glas++; break;
            case 'n': glas++; break;
            case 'p': glas++; break;
            case 'q': glas++; break;
            case 'r': glas++; break;
            case 's': glas++; break;
            case 't': glas++; break;
            case 'v': glas++; break;
            case 'w': glas++; break;
            case 'x': glas++; break;
            case 'z': glas++; break;
            case 'B': glas++; break;
            case 'C': glas++; break;
            case 'D': glas++; break;
            case 'F': glas++; break;
            case 'G': glas++; break;
            case 'H': glas++; break;
            case 'J': glas++; break;
            case 'K': glas++; break;
            case 'L': glas++; break;
            case 'M': glas++; break;
            case 'N': glas++; break;
            case 'P': glas++; break;
            case 'Q': glas++; break;
            case 'R': glas++; break;
            case 'S': glas++; break;
            case 'T': glas++; break;
            case 'V': glas++; break;
            case 'W': glas++; break;
            case 'X': glas++; break;
            case 'Z': glas++; break;
        };
}
	printf("Glas;%f Soglas:%f", glas, vowels);
    	double end = (glas / (glas+vowels)) * 100;
    	double vow = 100-end;
    printf("Гласных:%1.fвідсоткі, согласных:%1.fвідсотків", end, vow);
}
```
## 3 Варіанти використання

Для демонстрації результатів кожної задачі використовується:

- видача результатів у консоль за допомогою функції виводу.

**Варіант використання**: послідовність дій:

- запустити програму;
- подивитись результати виконання програми, оглядаючи вивод.
```
./dist/main.bin
Like Grab look nuclear!!
Glas;11.000000 
Soglas:8.000000
Гласных:58відсоткі, согласных:42відсотків

```
## Висновки

При виконанні даної лабораторної роботи було набуто практичного досвіду роботи із строками.
