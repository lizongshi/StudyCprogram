#define _CRT_SECURE_NO_WARNINGS
//初学指针
#include "May07.h"

//一.野指针
////指针未初始化，系统随机给一个地址赋给p,导致野指针
//int main(){
//	int *p;
//	*p = 20;
//	return 0;
//}

////数组越界导致野指针
//int main(){
//	int arr[10] = { 0 };
//	int *p = arr;
//	int i=0;
//	for (i = 0; i < 12; i++){
//		/**p = i;
//		p++;*/
//		*p++ = i;
//	}
//	return 0;
//}

//内存释放导致野指针
//int *test(){
//	int a = 10;
//	return &a;
//}//test函数调用完，a的地址被释放，返回给p的地址交还给系统，
//
//int main(){
//	int *p = test();
//	printf("%d\n", *p);
//	return 0;
//}

//int main(){
//	int a = 10;
//	int *pa = &a;//初始化，赋值变量的地址
//	int *p = NULL;//NULL是给指针初始化成空指针，一般指针空闲的时候要赋值NULL给指针
//	
//	if (p != NULL){  //指针使用之前要判断指针的有效性，判断是否为空指针
//		*p = 20;
//	}
//	return 0;
//}




//二.指针运算
/*
1.指针+-整数
2.指针-指针
3.指针的关系运算
*/

////1.指针 + -整数
//int main(){
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int i = 0;
//	int length = sizeof(arr) / sizeof(arr[0]);
//	int *p = arr;
//	for (i = 0; i < length; i++){
//		printf("%d\n", *p++);
//	}
//	return 0;
//}

//2.指针 - 指针
//int main(){
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	printf("%d\n", &arr[9] - &arr[0]);
//	return 0;
//}

//int My_strlen(char *str){
//	char *start = str;
//	char *end = str;
//	while (*end++ != '\0'){
//		//end++;
//	}
//	return end - start-1;
//}
//int main(){
//	char arr[] = "hello";
//	int length = My_strlen(arr);
//	printf("%d\n", length);
//	return 0;
//}


////3.指针的关系运算
//int main(){
//	int arr[5];
//	int *p = NULL;
//	int i = 1;
//	for (p = &arr[0]; p < &arr[5];){
//		*p++ = i++;
//		
//	}
//	for (p = &arr[0]; p < &arr[5];){
//		printf("%d\n",*p);
//		p++;
//	}
//	return 0;
//}



//三.指针和数组
//int main(){
//	int arr[10] = { 0 };
//	printf("%p\n", arr);      //0018F860   数组名是数组首元素地址
//	printf("%p\n", arr+1);    //0018F864
//	printf("%p\n", &arr[0]);  //0018F860
//	printf("%p\n", &arr[0]+1);//0018F864
//	printf("%p\n", &arr);     //0018F860
//	printf("%p\n", &arr+1);   //0018F888
//	//只有下面两种情况下，arr表示整个数组
//	/*
//	1.&arr
//	2.sizeof(arr)
//	*/
//	return 0;
//}

//int main(){
//	int arr[10] = { 0 };
//	int *p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++){
//		//printf("%p=====%p\n", p + i, &arr[i]);
//		*(p + i) = i+1;
//		printf("%d\n", arr[i]);
//	}
//	return 0;
//}




////三.二级指针
//int main(){
//	int a = 10;
//	int *pa= &a;
//	int **ppa = &pa;//二级指针
//	//int ***pppa = &ppa;//三级指针
//	printf("%d\n", **ppa);
//	**ppa = 100;
//	printf("%d\n", a);
//	return 0;
//}



//四.指针数组
/*
指针数组  数组 -- 存放指针的数组
数组指针  指针
*/
int main(){
	int a = 10;
	int b = 20;
	int c = 30;
	//int *pa = &a;
	//int *pb = &b;
	//int *pc = &c;
	//整形数组 -- 存放整形
	//字符指针 -- 存放字符
	//指针数组 -- 存放指针
	int *arr[3] = { &a, &b, &c };
	int i = 0;
	for (i = 0; i < 3; i++){
		printf("%d\n", *(arr[i]));
	}
	return 0;
}


