#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//����һ�����ڶ����ƣ����룩1�ĸ���
//һ�������ڴ������Զ����Ʋ������ʽ�洢��

int Count_Bit_One_1(int a){//��������׼ȷ����
	int count = 0;
	while (a){
		if (a % 2 == 1){
			count++;
		}
		a /= 2;
	}
	return count;
}
/*
32λ����
-1��ԭ��100000000000000000000000000000000
-1�ķ���111111111111111111111111111111110
-1�Ĳ���111111111111111111111111111111111
*/
int Count_Bit_One_2(unsigned int a){//unsigned int �޷�������
	int count = 0;
	while (a){
		if (a % 2 == 1){
			count++;
		}
		a/=2;
	}
	return count;
}

int Count_Bit_One_3(int a){
	int count = 0;
	int i = 0;
	for (i = 0; i < 32; i++){
		if (((a >> i) & 1) == 1){
/*
11111111111111111111111111111111
00000000000000000000000000000001
*/
			count++;
		}
	}
	return count;
}

int Count_Bit_One_4(int a){
	int count = 0;
	while (a){
		a &= (a - 1);
/*
n&=(n-1)
n=13
1101 n
1100 n-1
1100 n
1011 n-1
1000 n
0111 n-1
0000 n
*/
		count++;
	}
	return count;
}


//������int����m��n�Ķ����Ʊ��ʽ�У�bit��ͬ�ĸ����Ƕ���
int Count_Diff_Bit(int n, int m){
	int temp = n^m;//^ >> ���
	return Count_Bit_One_4(temp);
}


int main(){
	/*
	int a = -1;
	printf("please input a number:\n");
	scanf("%d", &a);
	printf("the number of 1 in complement is %d\n", Count_Bit_One_4(a));
	*/
	int n = 0;
	int m = 0;
	printf("please input two numbers:\n");
	scanf("%d%d", &n, &m);
	printf("the complement of these two numbers is %d bit different\n", Count_Diff_Bit(n, m));
	

	return 0;
	
}