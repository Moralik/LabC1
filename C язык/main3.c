#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <locale.h>
int main() {
	setlocale(LC_ALL, "Rus");
    char input[81]; // Массив для строки символов
    printf("Ведите строку символов(до 80 символов, включая пробелы): ");
    fgets(input, 81, stdin); // ВВод
    int i;

    for (i = 0; input[i] != '\0'; i++) { // Цикл для прохода по всем символам строки
        if (input[i] == 'a' || input[i] == 'b') { // Проверка, являетсся ли этот символ 'a' или 'b'
            input[i] = toupper(input[i]); // Замена "a" или "b" на заглавные букавы "A" или "B"
        }
    }

    printf("Результат: %s", input); // Вывод

    return 0;
}
