#define _CRT_SECURE_NO_WARNINGS
#include "May06.h"
//���һ��strcpy������'\0'Ҳ������ȥ
void My_strcpy1(char* dest, char* src){
	while (*src != '\0'){
		*dest = *src;
		src++;
		dest++;
	}
	*dest = *src;//����'\0'
}
//�Ż�����
void My_strcpy2(char* dest, char* src){
	while (*src != '\0'){
		*dest++ = *src++;
	}
	*dest = *src;//����'\0'
}

void My_strcpy3(char* dest, char* src){
	while (*dest++ = *src++){ //'\0'Ϊ0
		;
	}
}

void My_strcpy4(char* dest, char* src){
	if (dest != NULL&&src != NULL){
		while (*dest++ = *src++){ //'\0'Ϊ0
			;
		}
	}
}

void My_strcpy5(char* dest, char* src){
	assert(dest != NULL);//����
	assert(src != NULL);
	while (*dest++ = *src++){ //'\0'Ϊ0
		;
	}
}

/*
int n=10;
int m=20;
const int* p=&n;����ͨ��p�ı�n��ֵ��p=&m
int* const p=&n;����p=&m�����Ըı�n��ֵ
*/
char* My_strcpy6(char* dest, const char* src){
	char* ret = dest;
	assert(dest != NULL);//����
	assert(src != NULL);
	while (*dest++ = *src++){ //'\0'Ϊ0
		;
	}
	return ret;
}

//���һ�������ַ������ȵĺ�����������'\0' 
int My_strlen(char* arr){
	assert(arr != NULL);
	int count = 0;
	while (*arr != '\0'){
		arr++;
		count++;
	}
	return count;
}