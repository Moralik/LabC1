#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <locale.h>
int main() {
	setlocale(LC_ALL, "Rus");
    char input[81]; // ������ ��� ������ ��������
    printf("������ ������ ��������(�� 80 ��������, ������� �������): ");
    fgets(input, 81, stdin); // ����
    int i;
    int j;

    for (i = 0; input[i] != '\0'; i++) { // ���� ��� ������� �� ���� �������� ������
        if (input[i] == 'a' || input[i] == 'b' || input[i] == '?') { // ��������, ��������� �� ���� ������ 'a' ��� 'b'
            input[i] = toupper(input[i]); // ������ "a" ��� "b" �� ��������� ������ "A" ��� "B"
            input[i] = '!';
        }
    }

    printf("���������: %s", input); // �����

    return 0;
}
