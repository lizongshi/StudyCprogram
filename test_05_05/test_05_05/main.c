#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "May05.h"

//����������
int main(){
	int i = 0;
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	for (i = 0; i <= 12; i++){
		printf("%d\n",i);
		arr[i] = 0;//arr[12]�ĵ�ַ��i�ĵ�ַһ������arr[12]����ֵ0ʱ��������ѭ��
	}
	return 0;
}

//���ֲ��Ҳ���
//int main(){
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int length = sizeof(arr) / sizeof(arr[0]) - 1;
//	int x = 0;
//	printf("please input the number you want to find:\n");
//	scanf("%d", &x);
//	binarysearch(arr, x,length);
//}