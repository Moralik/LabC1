#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include "triangle.c"
#include <locale.h>
int main() {
	setlocale(LC_ALL, "Rus");
	double a, b, c;
	
	SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    
	printf("������� ����� ������ a, b � c: ");
	scanf("%lf %lf %lf", &a, &b, &c);
		
	if (a + b > c && a + c > b && b + c > a){
		double perimeter = calculatePerimeter(a, b, c);
		double area = calculateArea(a, b, c);
		
		printf("�������� ������������: %.2f\n", perimeter);
		printf("������� ������������: %.2f\n", area);
	} else {
		printf("������ ������������ �� �����������.\n");		
	}
	
	return 0;
}
