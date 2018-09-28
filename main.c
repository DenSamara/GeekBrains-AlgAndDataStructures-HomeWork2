#include "Main.h"
#include <stdio.h>
#include <locale.h>

//��������� �����


//����������� ������� ���������� a � b
int myPowIter(int a, int b){
	int i, result = 1;

	for(i = 1; i <= b; i++){
		result *= a;
	}

	return result;
}

//����������� ������� ���������� a � b
int myPowReq(int a, int b){
	//������� ������ �� ��������
	if (b <= 0){
		return 1;
	}

	return a*myPowReq(a, b-1);
}

//����������� ������� ���������� a � b � �������������� �������� �������� �������
int myPowReq2(int a, int b){
	//������� ������ �� ��������
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
	printf("������� ����� ��� ���������� � �������\n");
	scanf("%d", &a);
	printf("������� ������� �����\n");
	scanf("%d", &b);
		
	if (a == 0 && b == 0){
		printf("������: %d\n", 0);
		printf("����������: %d\n", 0);
		printf("�������������: %d\n", 0);
	}else{
		if (b >= 0){
			printf("������: %d\n", myPowIter(a, b));
			printf("����������: %d\n", myPowReq(a, b));
			printf("�������������: %d\n", myPowReq2(a, b));//
		}else
			printf("������� ����� �� ����� ���� �������������");
	}

	system("pause");
	return 0;
}