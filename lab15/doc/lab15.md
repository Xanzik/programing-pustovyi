# Лабораторна робота № 15.   Динамічні масиви

## 1 Вимоги

### 1.1 Розробник

* Пустовий Iлля Iванович;
* студент групи КІТ-121в;
* 15-гру-2022.

### 1.2 Загальне завдання

На базі попередньо розробленого функціоналу по роботі з прикладною областю сформувати
динамічний масив елементів розробленої структури. Реалізувати наступні функції роботи зі
списком:
• вивід вмісту списку на екран;
• реалізувати функцію №1 з категорії “Методи для роботи з колекцією” (див. завдання з РЗ);
• додавання об’єкта у кінець списку;
• видалення об’єкта зі списку за індексом.
• сортування вмісту списку за одним з критерії

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

#### Функція додавання у список

```c
    void add(struct Container *container, unsigned long int *x)
```
*Призначення*: додає у список елемент з консолі.

#### Функція видалення

```c
    void put_away(struct Container * container, size_t size, unsigned long int *x)
```
*Призначення*: видаляє елемент

#### Функція виводу

```c
    void show1(struct Container *p)
```
*Призначення*: виводить список

#### Структура проекту

```
└── lab15
├── Doxyfile
├── Makefile
├── README.md
├── assets
│ └── input.txt
├── doc
│ └── lab15.md
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
    unsigned long int cout = (unsigned long int)count();
	struct watch *watches = malloc(cout * sizeof(struct watch));
	struct Container *container = malloc(1 * sizeof(struct Container));
```

#### Функція додавання у список

```c
void add(struct Container *container, unsigned long int *x) {
    size_t place = 1000;
    struct watch *newwatches = malloc(1 * sizeof(struct watch));
    scanf("%s %s %d %s %s %s", newwatches->name, newwatches->water, &newwatches->price, newwatches->made_by.firma, newwatches->made_by.country, newwatches->type);
    place = container->size;
    struct watch *p = malloc((container->size + 1) * sizeof(struct watch));
    memcpy(p, container->watches, place* sizeof(struct watch));
    memcpy(p + place, newwatches, sizeof(struct watch));
    memcpy(p + place + 1, container->watches + place, (container->size - place) * sizeof(struct watch));
    free(container->watches);
    container->watches = p;
    container->size++;
    for(unsigned long int i = 0; i < container->size; i++) {
        printf("Watch: %s\nPermeability: %s\nPrice: %d$\nMade By - %s from %s\nType: %s\n\n", (p+i)->name, (p+i)->water, (p+i)->price, (p+i)->made_by.firma, (p+i)->made_by.country, (p+i)->type);
    }
    x++;
    free(newwatches);
}
```

#### Функція видалення

```c
void put_away(struct Container * container, size_t size, unsigned long int *x) {
    struct watch *p = malloc((container->size - 1) * sizeof(struct watch));
    if (size >= container->size) size = container->size - 1;
    memcpy(p, container->watches, size * sizeof(struct watch));
    memcpy(p + size, container->watches + size + 1, (container->size - size - 1) * sizeof(struct watch));
    free(container->watches);
    container->size--;
    container->watches = p;
    for(unsigned long int i = 0; i<container->size; i++) {
        printf("Watch: %s\nPermeability: %s\nPrice: %d$\nMade By - %s from %s\nType: %s\n\n", (p+i)->name, (p+i)->water, (p+i)->price, (p+i)->made_by.firma, (p+i)->made_by.country, (p+i)->type);
    }
    x--;
}
```

#### Функція виводу

```c
void show1(struct Container *p) {
    for(unsigned long int i = 0; i < (p->size)-1; i++) {
        printf("Watch: %s\nPermeability: %s\nPrice: %d$\nMade By - %s from %s\nType: %s\n\n", (p+i)->watches->name, (p+i)->watches->water, (p+i)->watches->price, (p+i)->watches->made_by.firma, (p+i)->watches->made_by.country, (p+i)->watches->type);
}
}
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
m -rf dist
mkdir dist
clang -std=gnu11 -g -Wall -Wextra -Werror -Wformat-security -Wfloat-equal -Wshadow -Wconversion -Wlogical-not-parentheses -Wnull-dereference -Wno-unused-variable -Werror=vla -I./src src/list.c src/entity.c src/main.c -o ./dist/main.bin
clang -std=gnu11 -g -Wall -Wextra -Werror -Wformat-security -Wfloat-equal -Wshadow -Wconversion -Wlogical-not-parentheses -Wnull-dereference -Wno-unused-variable -Werror=vla -I./src src/list.c src/entity.c test/test.c  -fprofile-instr-generate -fcoverage-mapping -o ./dist/test.bin -lcheck -lm -lrt -lpthread -lsubunit
./dist/main.bin
ЧАсі                    
Ні
50
ХПІ
Україна
Навчання
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

Watch: ЧАсі
Permeability: Ні
Price: 50$
Made By - ХПІ from Україна
Type: Навчання

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

Watch: ЧАсі
Permeability: Ні
Price: 50$
Made By - ХПІ from Україна
Type: Навчання

Watch: Microsoftwatch
Permeability: Yes
Price: 5500$
Made By - Microsoft from UK
Type: Sport

Watch: Microsoftwatch
Permeability: Yes
Price: 5500$
Made By - Microsoft from UK
Type: Sport

```
## Висновки

При виконанні даної лабораторної роботи було набуто практичного досвіду роботи із динамічими масивами
