#define _CRT_SECURE_NO_WARNINGS
#include "May06.h"

int main(){
	int a = 0x11223344;
	int *pa = &a;
	int *pc = &a;
	char arr1[] = "##########";
	char arr2[] = "hi";
	printf("arr1的字符串长度是%d\n", My_strlen(arr1));
	My_strcpy6(arr1, arr2);
	//strcpy(arr1, arr2);//字符串拷贝 strcpy(目的,源头);  \0也被拷贝过去
	printf("%s\n", arr1);
	return 0;
}

//野指针（1.指针未初始化 2.指针越界 3.指针释放）
/*
如何避免野指针？
1.指针初始化
2.小心指针越界
3.指针指向空间释放即使置NULL
4.指针使用之前检查有效性
*/
//int main(){
//	////指针越界
//	//int arr[10] = { 0 };
//	//int *p = arr;
//	//int i = 0;
//	//for (i = 0; i < 12; i++){
//	//	p++;
//	//}
//
//	//int a;//未初始化，默认随机值
//	//int *p;//未初始化，默认随机地址
//	//*p = 20;//随机一个地址赋值20
//	//return 0;
//}

//int main(){
//	int arr[10] = { 0 };
//	int *p = arr;//arr数组名也是数组首元素的地址
//	//char *p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++){
//		*(p + i) = 1;
//	}
//
//	for (i = 0; i < 10; i++){
//		printf("%d\n", arr[i]);
//	}
//	return 0;
//}

//int main(){
//	int a = 0x11223344;
//	int *pa = &a;
//	char *pc = &a;
//	printf("%p\n", pa);//0034FC40
//	printf("%p\n", pa+1);//0034FC44  
//	printf("%p\n", pc);//0034FC40
//	printf("%p\n", pc+1);//0034FC41    指针类型决定了指针走一步是多远（指针的步长）
//	return 0;
//}

//int main(){
//	int a = 0x11223344;
//	int *pa = &a;
//	int *pc = &a;
//	printf("%p\n", pa);//0046FAE4
//	printf("%p\n", pc);//0046FAE4
//	//指针类型决定了指针进行解引用操作时，能够访问的空间
//	return 0;
//}

//int main(){
//	printf("%d\n", sizeof(int*));//4
//	printf("%d\n", sizeof(char*));//4
//	printf("%d\n", sizeof(double*));//4  32位的机器上，指针的大小上4个字节
//	printf("%d\n", sizeof(float*));//4  64位的机器上，指针的大小上8个字节
//	return 0;
//}

