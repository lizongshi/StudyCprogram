#define _CRT_SECURE_NO_WARNINGS
#include "May06.h"

int main(){
	int a = 0x11223344;
	int *pa = &a;
	int *pc = &a;
	char arr1[] = "##########";
	char arr2[] = "hi";
	printf("arr1���ַ���������%d\n", My_strlen(arr1));
	My_strcpy6(arr1, arr2);
	//strcpy(arr1, arr2);//�ַ������� strcpy(Ŀ��,Դͷ);  \0Ҳ��������ȥ
	printf("%s\n", arr1);
	return 0;
}

//Ұָ�루1.ָ��δ��ʼ�� 2.ָ��Խ�� 3.ָ���ͷţ�
/*
��α���Ұָ�룿
1.ָ���ʼ��
2.С��ָ��Խ��
3.ָ��ָ��ռ��ͷż�ʹ��NULL
4.ָ��ʹ��֮ǰ�����Ч��
*/
//int main(){
//	////ָ��Խ��
//	//int arr[10] = { 0 };
//	//int *p = arr;
//	//int i = 0;
//	//for (i = 0; i < 12; i++){
//	//	p++;
//	//}
//
//	//int a;//δ��ʼ����Ĭ�����ֵ
//	//int *p;//δ��ʼ����Ĭ�������ַ
//	//*p = 20;//���һ����ַ��ֵ20
//	//return 0;
//}

//int main(){
//	int arr[10] = { 0 };
//	int *p = arr;//arr������Ҳ��������Ԫ�صĵ�ַ
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
//	printf("%p\n", pc+1);//0034FC41    ָ�����;�����ָ����һ���Ƕ�Զ��ָ��Ĳ�����
//	return 0;
//}

//int main(){
//	int a = 0x11223344;
//	int *pa = &a;
//	int *pc = &a;
//	printf("%p\n", pa);//0046FAE4
//	printf("%p\n", pc);//0046FAE4
//	//ָ�����;�����ָ����н����ò���ʱ���ܹ����ʵĿռ�
//	return 0;
//}

//int main(){
//	printf("%d\n", sizeof(int*));//4
//	printf("%d\n", sizeof(char*));//4
//	printf("%d\n", sizeof(double*));//4  32λ�Ļ����ϣ�ָ��Ĵ�С��4���ֽ�
//	printf("%d\n", sizeof(float*));//4  64λ�Ļ����ϣ�ָ��Ĵ�С��8���ֽ�
//	return 0;
//}

