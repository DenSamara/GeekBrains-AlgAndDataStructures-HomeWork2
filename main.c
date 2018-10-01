#include "Main.h"
#include <stdio.h>
#include <locale.h>

#define ARR_SIZE 20

//Коновалов Денис
int command1(int a){
	return a+1;
}

int command2(int a){
	return 2*a;
}

//Калькулятор с массивом
int myCalcArray(int a, int b, int *result){
	int i;

	for(i = 1; i <= b; i++){
		result *= a;
	}

	return result;
}

//Рекурсивная функция Калькулятор
int myCalcReq(int a, int b, int result){
	//условие выхода из рекурсии
	if (a >= b){
		result++;
		printf(" result: %d\n", result);
		return result;
	}

	//так как число, умноженное на 2 больше, чем увеличенное на 1, то сначала выполняем команду 2.
	if (command2(a) <= b && command1(a) <= b){
		result = myCalcReq(a, b, result);
	}
	
	return myCalcReq(a, b, result);
}

int main(int argc, const char * argv[]){
	int a = 3, b = 20;
	int f [ ARR_SIZE ];

	setlocale(LC_ALL, "Rus");
	
	printf("\n---=== 3 ===---\n");
	printf("Введите начальное число, целое\n");
	scanf("%d", &a);
	printf("Введите конечное\n");
	scanf("%d", &b);
		
	if (a < b){
		printf("Количество программ рекурсией: %d\n", myCalcReq(a, b, 0));
		printf("Количество программ массив: %d\n", myCalcArray(a, b, 0));
	}
	else{
		printf("Некорректный ввод\n");
	}

	system("pause");
	return 0;
}