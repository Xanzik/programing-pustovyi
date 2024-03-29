/**
 * @mainpage
 * # Загальне завдання
 * Переробити програми, що були розроблені під час виконання лабораторних робіт з тем
 * “Масиви” та “Цикли” таким чином, щоб використовувалися функції для обчислення результату.
 * Функції повинні задовольняти основну їх причетність - уникати дублювання коду. Тому,
 * для демонстрації роботи, ваша програма (функція main()) повинна мати можливість викликати
 * розроблену функцію з різними вхідними даними.
 *
 * @author Pustoviy I.
 * @date 15-dec-2021
 * @version 0.1
 *
 * @file main.c
 * @brief Файл з основним кодом.
 *
 *
 * @author Pustoviy I.
 * @date 15-dec-2021
 * @version 0.1
 * Головна функція.
 *
 * Послідовність дій:
 * - Створення змінної {@link int words} для результату 
 * - Створення масиву з текстом {@link char text[]}
 * - підрахунок слів у тексті за допомогою {@link char function(char x[])}
 * @return успішний код повернення з програми (0)
 */
char function(char x[]);
int main()
{
	int words; // результат
	char text[] = { 'I', ' ', 'c', 'a', 'n', ' ', 'f', 'i', 'g', 'h', 't' }; // текст
	words = function(text);
	return 0;
}
/**
 * Функція знаходження слів
 *
 * Послідовність дій:
 * - Створення змінної {@link int words} для результату 
 * - Створення дiaпазону {@link int limit}
 * - цикл, який робить розрахування кількостi слів з урахуванням перепусток
 */
char function(char x[])
{
	int words = 1;
	int limit = 255;
	for (int i = 1; i < limit; i++) {
		if (x[i] == ' ')
			if (x[i + 1] != ' ')
				words++;
	}
	return words;
}
