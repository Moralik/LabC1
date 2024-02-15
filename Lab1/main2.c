#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>
#include <locale.h>



/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	//SetConsoleOutputCP(CP_UTF8);
	setlocale(LC_ALL, "Rus");
while (1) {

	double a,b,c,d,x1,x2;
	printf("Введите коэффициет a: ");
	scanf("%lf", &a);
	printf("Введите коэффициет b: ");
	scanf("%lf", &b);
	printf("Введите коэффициет c: ");
	scanf("%lf", &c);
	printf("a=%lf b=%lf c=%lf", a, b, c);
	d = pow(b, 2) -(4*a*c);
	printf("\nd = %lf", d);
	printf("\n");
	if (d < 0) {
		printf("Korney net");
		
	} 
	else if (d == 0) {
		
		x1 = (-b-sqrt(d))/(2*a);
		printf("d=0 => x1=%lf", x1);
	} 
	else if(d>0) {
		x1 = (-b-sqrt(d))/(2*a);
		x2 = (-b+sqrt(d))/(2*a);
		printf("d>0 => x1=%lf x2=%lf", x1, x2);
	}

	int n;
	printf("\nIf u want repeat - put any key, if no - text 2: ");
	scanf("%d", &n);
	if (n == 2) {
		break;
	}
	
}
	return 0;
}
