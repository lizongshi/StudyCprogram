#define _CRT_SECURE_NO_WARNINGS
#include "May06.h"
//设计一个strcpy函数，'\0'也拷贝过去
void My_strcpy1(char* dest, char* src){
	while (*src != '\0'){
		*dest = *src;
		src++;
		dest++;
	}
	*dest = *src;//拷贝'\0'
}
//优化函数
void My_strcpy2(char* dest, char* src){
	while (*src != '\0'){
		*dest++ = *src++;
	}
	*dest = *src;//拷贝'\0'
}

void My_strcpy3(char* dest, char* src){
	while (*dest++ = *src++){ //'\0'为0
		;
	}
}

void My_strcpy4(char* dest, char* src){
	if (dest != NULL&&src != NULL){
		while (*dest++ = *src++){ //'\0'为0
			;
		}
	}
}

void My_strcpy5(char* dest, char* src){
	assert(dest != NULL);//断言
	assert(src != NULL);
	while (*dest++ = *src++){ //'\0'为0
		;
	}
}

/*
int n=10;
int m=20;
const int* p=&n;不能通过p改变n的值，p=&m
int* const p=&n;不能p=&m，可以改变n的值
*/
char* My_strcpy6(char* dest, const char* src){
	char* ret = dest;
	assert(dest != NULL);//断言
	assert(src != NULL);
	while (*dest++ = *src++){ //'\0'为0
		;
	}
	return ret;
}

//设计一个计算字符串长度的函数，不包括'\0' 
int My_strlen(char* arr){
	assert(arr != NULL);
	int count = 0;
	while (*arr != '\0'){
		arr++;
		count++;
	}
	return count;
}