# Лабораторна робота № 13.   Взаємодія з файлами

## 1 Вимоги

### 1.1 Розробник

* Пустовий Iлля Iванович;
* студент групи КІТ-121в;
* 15-гру-2022.

### 1.2 Загальне завдання

Розробити програму, що в заданому файлі створює суцільний рівнобедрений трикутник із
заданих символів (наприклад, зірочок). Висота трикутника, символ заповнювача та ширина
основи задається у вхідному файлу. Наприклад, при висоті 4, ширині 7 та заповнювачі *

## 2 Опис програми

### 2.1 Функціональне призначення

Програма призначена для виводу трикутника у файлі.

Результат зберігається у файлі "output.txt".

### 2.2 Опис логічної структури

#### Основна функція

```c
		int main() 
```

*Призначення*: головна функція.

*Схема алгоритму функції* подана на нижче.

*Опис роботи*: 

- створення змінних для висоти та символу
- читання з файлу
- запис у файл
- повертає функція код повернення з програми (0).

#### Функція читання з файлу

```c
		void read_from_file(FILE *filein, int *x, char *y);
```
*Призначення*: читання з файлу.

- читання з файлу та запис у змінні

#### Функція запису у файл

```c
		void write_to_file(FILE *fileout, int height, char symbol);
```
*Призначення*: запис у файл.

- завдяки циклам записує у файл трикутник

#### Структура проекту

```
── lab13
├── Doxyfile
├── Makefile
├── README.md
├── assets
│ └── input.txt
├── test
│ └── test.c
├── doc
│ └── lab13.md
└── src
├── lib.c
├── lib.h
└── main.c

```


### 2.3 Важливі фрагменти програми

#### Початкові дані. Константи, перерахування

```c
	int h = 0;//висота
	char symbol = '\0';//символ
```

#### читання з файлу

```c
void read_from_file(FILE *filein, int *x, char *y) {
    fscanf(filein, "%d %c", x, y);
}
```
#### запис з файлу

```c
void write_to_file(FILE *fileout, int height, char symbol) {
    for (int i = 0; i < height; i++, fprintf(fileout, "\n")) {
    for (int j = (height - i) - 1; j > 0 ; --j, fprintf(fileout, " "));
    for (int j = (i * 2) + 1; j > 0 ; --j, fprintf(fileout, "%c", symbol));
    }
}
```


## 3 Варіанти використання

Для демонстрації результатів кожної задачі використовується:

- видача результатів у консоль за допомогою функції виводу.

**Варіант використання**: послідовність дій:

- запустити програму
- подивитись результати виконання програми

```
make clean prep compile run
make[1]: вход в каталог «/home/xanzik/programing-pustovyi/lab13»
rm -rf dist
mkdir dist
clang -std=gnu11 -g -Wall -Wextra -Werror -Wformat-security -Wfloat-equal -Wshadow -Wconversion -Wlogical-not-parentheses -Wnull-dereference -Wno-unused-variable -Werror=vla -I./src src/lib.c src/main.c -o ./dist/main.bin
clang -std=gnu11 -g -Wall -Wextra -Werror -Wformat-security -Wfloat-equal -Wshadow -Wconversion -Wlogical-not-parentheses -Wnull-dereference -Wno-unused-variable -Werror=vla -I./src src/lib.c test/test.c  -fprofile-instr-generate -fcoverage-mapping -o ./dist/test.bin -lcheck -lm -lrt -lpthread -lsubunit
./dist/main.bin
make[1]: выход из каталога «/home/xanzik/programing-pustovyi/lab13»	
	Рисунок у файлі при вхідних даних: 5 *
    *
   ***
  *****
 *******
*********
```
## Висновки

При виконанні даної лабораторної роботи було набуто практичного досвіду з взаємодії з файлами