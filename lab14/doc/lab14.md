# Лабораторна робота № 14.  Структуровані типи даних

## 1 Вимоги

### 1.1 Розробник

* Пустовий Iлля Iванович;
* студент групи КІТ-121в;
* 15-гру-2022.

### 1.2 Загальне завдання

• розробити функцію, яка читає дані (масив елементів) з файлу;
• розробити функцію, яка записує дані (масив елементів) у файл;
• розробити функцію, яка виводить масив елементів на екран;
• реалізувати функцію №1 з категорії “Методи для роботи з колекцією”, на вхід якої
потрапляє масив об’єктів. Слід звернути увагу, що усі необхідні дані повинні бути
передані як аргументи функції. Наприклад, якщо треба знайти всі машини марки “Форд”,
то функція потрібна мати аргумент “марка машини”, та у main() викликати цю функцію з
потрібним значенням марки.
• розробити функцію, яка буде сортувати масив елементів за заданим критерієм (полем);

## 2 Опис програми

### 2.1 Функціональне призначення

Програма призначена для праці з масивом елементів.

Демонстрація знайдених результатів передбачає видача даних у вікні консолі.

### 2.2 Опис логічної структури

За допомогою ключового слова *struct* описуємо описуємо часи з 5 полями: імя, водопроніцайність, ціна, вложениа структура з фірмою і страною, тип.

Опис розроблених структур і функцій наводиться на базі результатів роботи системи автодокументування *Doxygen*.

#### Основна функція

```c
		int main() 
```

*Призначення*: головна функція.

*Схема алгоритму функції* подана на нижче.

*Опис роботи*: 

 - створюємо масив елементів.
 - відкриваємо файл та заповнюємо масив
 - вивод на екран
 - поіск нееобхідних часів за ціною
 - повертає функція код повернення з програми (0).

#### Функція читання з файлу

```c
		void input(watch *watches, int size);
```
*Призначення*: читання з файлу.

- читання з файлу та запис у змінні

#### Функція запису у файл

```c
		void output(watch *p);
```
*Призначення*: запис у файл.

- завдяки циклам записує у файл масив елементів.

#### Функція виводу структур

```c
	void show(watch *p);
```
*Призначення*: вивод структур.

- завдяки циклам виводить масив елементів.


#### функція сортіровки

```c
	void sort(watch *p);
```
*Призначення*: сортирує масив

- завдяки циклам сортирує масив елементів.

#### Функція поіску за ціною

```c
	void search(watch *p, int cost);
```
*Призначення*: вивод структур.

- завдяки циклам шукає часи ніжче заданої ціни.
- записує у файл часи, які підходять


#### Структура проекту

```
└── lab14
├── Doxyfile
├── Makefile
├── README.md
├── assets
│ └── input.txt
├── doc
│ └── lab14.md
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
    	watch watches[count_of_watches];// масив елементів
    	int size = sizeof(watches) / sizeof(watches[0]);// розмір масиву
```

#### Функція читання з файлу

```c
void input(struct watch *watches, int size) {
    FILE *file = fopen("/home/xanzik/programing-pustovyi/lab14/assets/input.txt", "r");
    if (file == NULL) {
        printf("Error: File is empty");
    }
    else {
    for(watch *p = watches; p < watches + size; p++) {
        fscanf(file, "%[^\n] %[^\n] %d\n %[^\n] %[^\n] %[^\n]\n", p->name, p->water, &p->price, p->made_by.firma, p->made_by.country, p->type);
    }
    fclose(file);
    }
}
```

#### Функція запису у файл

```c
void output(watch *p) {
    FILE *file = fopen("C/home/xanzik/programing-pustovyi/lab14/assets/output.txt", "w");
    for(int i = 0; i < count_of_watches; i++) {
        fprintf(file, "%s\n %s\n %d$\n %s\n %s\n %s\n\n", (p+i)->name, (p+i)->water, (p+i)->price, (p+i)->made_by.firma, (p+i)->made_by.country, (p+i)->type);
    }
    fclose(file);
}
```

#### Функція виводу структур

```c
void show(watch *p) {
    for(int i = 0; i < count_of_watches; i++) {
        printf("Watch: %s\nPermeability: %s\nPrice: %d$\nMade By - %s from %s\nType: %s\n\n", (p+i)->name, (p+i)->water, (p+i)->price, (p+i)->made_by.firma, (p+i)->made_by.country, (p+i)->type);
}
}
```
#### Функція поіску за ціною

```c
void search(watch *p, int cost)  {
    FILE *file = fopen("/home/xanzik/programing-pustovyi/lab14/assets/output.txt", "w");
    for(int i = 0; i < count_of_watches; i++) {
        if((p+i)->price < cost) {
        fprintf(file, "%s\n %s\n %d$\n %s\n %s\n %s\n\n", (p+i)->name, (p+i)->water, (p+i)->price, (p+i)->made_by.firma, (p+i)->made_by.country, (p+i)->type);
        }
    }
    fclose(file);
}
```

#### функція сортіровки

```c
void sort(watch *p) {
    watch tmp;
    for(int i = 0; i < count_of_watches; i++) {
        for(int j = 0; j < count_of_watches - 1; j++) {
            if(p[j].price > p[j + 1].price) {
                tmp = p[j];
                p[j] = p[j + 1];
                p[j + 1] = tmp;
                
            }
        }
    }
}
```

## 3 Варіанти використання

Для демонстрації результатів кожної задачі використовується:

- видача результатів у консоль за допомогою функції виводу.
- видача результатів у файл

**Варіант використання**:

- запустити програму;
- подивитись результати виконання програми, оглядаючи значення вивод у файл

```
	Початкові дані:
Watch: Applewatch
Permeability: Yes
Price: 300$
Made By - Apple from USA
Type: Sport

Watch: Microsoftwatch
Permeability: Yes
Price: 5500$
Made By - Microsoft from UK
Type: Sport

Watch: Rolex
Permeability: No
Price: 399$
Made By - RolexCompany from Ukraine
Type: Fashion

	Вивод у консоль:
rm -rf dist
mkdir dist
clang -std=gnu11 -g -Wall -Wextra -Werror -Wformat-security -Wfloat-equal -Wshadow -Wconversion -Wlogical-not-parentheses -Wnull-dereference -Wno-unused-variable -Werror=vla -I./src src/lib.c src/main.c -o ./dist/main.bin
clang -std=gnu11 -g -Wall -Wextra -Werror -Wformat-security -Wfloat-equal -Wshadow -Wconversion -Wlogical-not-parentheses -Wnull-dereference -Wno-unused-variable -Werror=vla -I./src src/lib.c test/test.c  -fprofile-instr-generate -fcoverage-mapping -o ./dist/test.bin -lcheck -lm -lrt -lpthread -lsubunit
./dist/main.bin
Watch: Applewatch
Permeability: Yes
Price: 300$
Made By - Apple from USA
Type: Sport

Watch: Rolex
Permeability: No
Price: 399$
Made By - RolexCompany from Ukraine
Type: Fashion

Watch: Microsoftwatch
Permeability: Yes
Price: 5500$
Made By - Microsoft from UK
Type: Sport
	Вивод у файл:
Applewatch
 Yes
 300$
 Apple
 USA
 Sport

Rolex
 No
 399$
 RolexCompany
 Ukraine
 Fashion



```
## Висновки

При виконанні даної лабораторної роботи було набуто практичного досвіду роботи із структурами.
