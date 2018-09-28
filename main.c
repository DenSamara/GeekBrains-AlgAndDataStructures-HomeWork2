#include "Main.h"
#include <stdio.h>
#include <locale.h>

//Коновалов Денис


//Рекурсивная функция перевода десятичного числа в двоичное. Задача 1
int DexToBin(int x){
	int a = div(x, 2);
	
	//условие выхода из рекурсии
	if (x % 2 == 0 && a == 0){
		printf("\n");
		return 0;
	}

	//печатаем результат
	printf("%d", x % 2);

	return DexToBin(a);
}


int main(int argc, const char * argv[]){
	int x = 0;

	setlocale(LC_ALL, "Rus");
	
	/*
	printf("\n---=== 1 ===---\n");
	do{
		printf("Введите десятичное число для перевода в двоичную СС. 0 - выход\n");
		printf("Чтение результата справа-налево\n");
		scanf("%d", &x);
		
		if (x != 0) DexToBin(x);
	}while (x != 0);
	*/

	//system("pause");
	return 0;
}