#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "May05.h"

//错误代码分析
int main(){
	int i = 0;
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	for (i = 0; i <= 12; i++){
		printf("%d\n",i);
		arr[i] = 0;//arr[12]的地址跟i的地址一样，当arr[12]被赋值0时，陷入死循环
	}
	return 0;
}

//二分查找测试
//int main(){
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int length = sizeof(arr) / sizeof(arr[0]) - 1;
//	int x = 0;
//	printf("please input the number you want to find:\n");
//	scanf("%d", &x);
//	binarysearch(arr, x,length);
//}