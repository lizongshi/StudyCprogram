#define _CRT_SECURE_NO_WARNINGS
//��ѧָ��
#include "May07.h"

//һ.Ұָ��
////ָ��δ��ʼ����ϵͳ�����һ����ַ����p,����Ұָ��
//int main(){
//	int *p;
//	*p = 20;
//	return 0;
//}

////����Խ�絼��Ұָ��
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

//�ڴ��ͷŵ���Ұָ��
//int *test(){
//	int a = 10;
//	return &a;
//}//test���������꣬a�ĵ�ַ���ͷţ����ظ�p�ĵ�ַ������ϵͳ��
//
//int main(){
//	int *p = test();
//	printf("%d\n", *p);
//	return 0;
//}

//int main(){
//	int a = 10;
//	int *pa = &a;//��ʼ������ֵ�����ĵ�ַ
//	int *p = NULL;//NULL�Ǹ�ָ���ʼ���ɿ�ָ�룬һ��ָ����е�ʱ��Ҫ��ֵNULL��ָ��
//	
//	if (p != NULL){  //ָ��ʹ��֮ǰҪ�ж�ָ�����Ч�ԣ��ж��Ƿ�Ϊ��ָ��
//		*p = 20;
//	}
//	return 0;
//}




//��.ָ������
/*
1.ָ��+-����
2.ָ��-ָ��
3.ָ��Ĺ�ϵ����
*/

////1.ָ�� + -����
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

//2.ָ�� - ָ��
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


////3.ָ��Ĺ�ϵ����
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



//��.ָ�������
//int main(){
//	int arr[10] = { 0 };
//	printf("%p\n", arr);      //0018F860   ��������������Ԫ�ص�ַ
//	printf("%p\n", arr+1);    //0018F864
//	printf("%p\n", &arr[0]);  //0018F860
//	printf("%p\n", &arr[0]+1);//0018F864
//	printf("%p\n", &arr);     //0018F860
//	printf("%p\n", &arr+1);   //0018F888
//	//ֻ��������������£�arr��ʾ��������
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




////��.����ָ��
//int main(){
//	int a = 10;
//	int *pa= &a;
//	int **ppa = &pa;//����ָ��
//	//int ***pppa = &ppa;//����ָ��
//	printf("%d\n", **ppa);
//	**ppa = 100;
//	printf("%d\n", a);
//	return 0;
//}



//��.ָ������
/*
ָ������  ���� -- ���ָ�������
����ָ��  ָ��
*/
int main(){
	int a = 10;
	int b = 20;
	int c = 30;
	//int *pa = &a;
	//int *pb = &b;
	//int *pc = &c;
	//�������� -- �������
	//�ַ�ָ�� -- ����ַ�
	//ָ������ -- ���ָ��
	int *arr[3] = { &a, &b, &c };
	int i = 0;
	for (i = 0; i < 3; i++){
		printf("%d\n", *(arr[i]));
	}
	return 0;
}


