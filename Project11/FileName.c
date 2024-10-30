#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <math.h>
#define N 100
#define M 10

double calculate_value(double x) {
    double y;
    y = pow(x, 2) - pow(cos(x + 1), 2);
    return y;
}

int main() {
    dz();
}

void task01() {
    float A[N];
    float temp;
    for (int i = 0; i < N; i++) {
        printf("a[%d] = ", i + 1);
        scanf("%f", &temp);
        A[i] = temp;
    }
    for (int i = 0; i < N; i++) {
        temp = A[i];
        A[i] = pow(A[i], 2);
        printf("| %d | %10.3f | %10.3f |\n", i, temp, A[i]);
    }
    return 0;
}

void task02() {
    setlocale(LC_CTYPE, "RUS");
    double arr[100];
    double positive_sum = 0;
    double negative_sum = 0;
    int positive_count = 0;
    int negative_count = 0;
    double x;
    double average;
    printf("Введите значение x: ");
    scanf("%lf", &x);
    for (int i = 0; i < 100; i++) {
        arr[i] = calculate_value(x + i * (2.2 - 0.1) / 99);
        if (arr[i] > 0) {
            positive_sum += arr[i];
            positive_count++;
        }
        else {
            negative_sum += arr[i];
            negative_count++;
        }
        if (positive_count > 0) {
            average = positive_sum / positive_count;
        }
        else {
            average = 0;
        }
        printf("Массив arr:\n");
        printf("Сумма положительных элементов: %.2lf\n", positive_sum);
        printf("Сумма отрицательных элементов: %.2lf\n", negative_sum);
        printf("Количество положительных элементов: %d\n", positive_count);
        printf("Количество отрицательных элементов: %d\n", negative_count);
        printf("Среднее значение положительных элементов: %.2lf\n", average);
        return 0;
    }
}

int dz(){
    int arr[M];
    int first_positive = -1;
    int last_positive = -1;
    int sum = 0;
    setlocale(LC_CTYPE, "RUS");
    printf("Введите элементы массива:\n");
    for (int i = 0; i < M; i++) {
        scanf("%d", &arr[i]);

        if (arr[i] > 0) {
            if (first_positive == -1) {
                first_positive = i;
            }
            last_positive = i;
        }
    }

    if (first_positive != -1 && last_positive != -1) {
        for (int i = first_positive + 1; i < last_positive; i++) {
            sum += arr[i];
        }
        printf("Сумма элементов между первым и последним положительными элементами: %d\n", sum);
    }
    else {
        printf("В массиве нет положительных элементов или только один.\n");
    }
}
