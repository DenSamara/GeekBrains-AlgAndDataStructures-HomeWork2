#include "Main.h"
#include <stdio.h>
#include <locale.h>

//��������� �����

int command1(int a){
	return a+1;
}

int command2(int a){
	return 2*a;
}

//����������� ������� �����������
int myCalcIter(int a, int b){
	int i, result = 1;

	for(i = 1; i <= b; i++){
		result *= a;
	}

	return result;
}

//����������� ������� �����������
int myCalcReq(int a, int b, int result){
	//������� ������ �� ��������
	if (a >= b){
		result++;
		printf(" result: %d\n", result);
		return result;
	}

	//��� ��� �����, ���������� �� 2 ������, ��� ����������� �� 1, �� ������� ��������� ������� 2.
	if (command2(a) <= b){
		a = command2(a);
		if (a < b){
			printf("2:%d ", a);
		}
		result = myCalcReq(a, b, result);
	}
	else {
		if (command1(a) <= b) {
			a = command1(a);
			if (a < b){
				printf("1:%d ", a);
			}
			result = myCalcReq(a, b, result);
		}
	}

	return myCalcReq(a, b, result);
}

int main(int argc, const char * argv[]){
	int a = 3, b = 20;

	setlocale(LC_ALL, "Rus");
	
	printf("\n---=== 3 ===---\n");
	printf("������� ��������� �����, �����\n");
	scanf("%d", &a);
	printf("������� ��������\n");
	scanf("%d", &b);
		
	if (a < b){
		printf("���������� �������� ���������: %d\n", myCalcReq(a, b, 0));
	}
	else{
		printf("������������ ����\n");
	}

	system("pause");
	return 0;
}