#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
		//SetConsoleOutputCP(CP_UTF8);
		setlocale(LC_ALL, "Rus");
    double matrix[3][3];
    int(i);
    int(j);
    printf("Введите значения элементов матрицы 3x3:\n");

    // Ввод значений матрицы
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%lf", &matrix[i][j]);
        }
    }

    // Вывод суммы элементов на главной диагонали
    double sumMainDiagonal = 0.0;
    for (i = 0; i < 3; i++) {
        sumMainDiagonal += matrix[i][i];
    }
    printf("Сумма элементов на главной диагонали: %lf\n", sumMainDiagonal);

    // Вывод суммы элементов на побочной диагонали
    double sumSecondaryDiagonal = 0.0;
    for (i = 0; i < 3; i++) {
        sumSecondaryDiagonal += matrix[i][2 - i];
    }
    printf("Сумма элементов на побочной диагонали: %lf\n", sumSecondaryDiagonal);
    
    

    void multiplyMatrices(int matA[][2], int matB[][2], int res[][2]) {
    res[0][0] = matA[0][0] * matB[0][0] + matA[0][1] * matB[1][0];
    res[0][1] = matA[0][0] * matB[0][1] + matA[0][1] * matB[1][1];
    res[1][0] = matA[1][0] * matB[0][0] + matA[1][1] * matB[1][0];
    res[1][1] = matA[1][0] * matB[0][1] + matA[1][1] * matB[1][1];
}

    int matrix2[2][2];
    int result[2][2];
    multiplyMatrices(matrix2, matrix2, result);
    printf("Введите значения элементов матрицы 2x2:\n");


    // Ввод значений второй матрицы
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }

    // Вывод квадрата матрицы
    printf("Квадрат заданной матрицы:\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}

