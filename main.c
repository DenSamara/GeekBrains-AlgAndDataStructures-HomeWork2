#include "Main.h"
#include <stdio.h>
#include <locale.h>

//Коновалов Денис


//Итеративная функция возведения a в b
int myPowIter(int a, int b){
	int i, result = 1;

	for(i = 1; i <= b; i++){
		result *= a;
	}

	return result;
}

//Рекурсивная функция возведения a в b
int myPowReq(int a, int b){
	//условие выхода из рекурсии
	if (b <= 0){
		return 1;
	}

	return a*myPowReq(a, b-1);
}

//Рекурсивная функция возведения a в b с использованием свойства чётности степени
int myPowReq2(int a, int b){
	//условие выхода из рекурсии
	if (b % 2 == 0 && div(b, 2) == 0){
		return a;
	}

	if (b % 2){
		return a * myPowReq2(a, div(b, 2));
	}

	return myPowReq2(a, div(b, 2));
}


int main(int argc, const char * argv[]){
	int a = 0, b = 0;

	setlocale(LC_ALL, "Rus");
	
	printf("\n---=== 2 ===---\n");
	printf("Введите число для возведения в степень\n");
	scanf("%d", &a);
	printf("Введите степень числа\n");
	scanf("%d", &b);
		
	if (a == 0 && b == 0){
		printf("Циклом: %d\n", 0);
		printf("Рекурсивно: %d\n", 0);
		printf("Дихотомически: %d\n", 0);
	}else{
		if (b >= 0){
			printf("Циклом: %d\n", myPowIter(a, b));
			printf("Рекурсивно: %d\n", myPowReq(a, b));
			printf("Дихотомически: %d\n", myPowReq2(a, b));//
		}else
			printf("Степень числа не может быть отрицательной");
	}

	system("pause");
	return 0;
}