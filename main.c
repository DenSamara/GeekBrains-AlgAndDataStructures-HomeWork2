#include "Main.h"
#include <stdio.h>
#include <locale.h>

//��������� �����


//����������� ������� �������� ����������� ����� � ��������. ������ 1
int DexToBin(int x){
	int a = div(x, 2);
	
	//������� ������ �� ��������
	if (x % 2 == 0 && a == 0){
		printf("\n");
		return 0;
	}

	//�������� ���������
	printf("%d", x % 2);

	return DexToBin(a);
}


int main(int argc, const char * argv[]){
	int x = 0;

	setlocale(LC_ALL, "Rus");
	
	/*
	printf("\n---=== 1 ===---\n");
	do{
		printf("������� ���������� ����� ��� �������� � �������� ��. 0 - �����\n");
		printf("������ ���������� ������-������\n");
		scanf("%d", &x);
		
		if (x != 0) DexToBin(x);
	}while (x != 0);
	*/

	//system("pause");
	return 0;
}