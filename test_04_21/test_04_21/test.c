#include "game.h"
//²Ëµ¥
void menu(){
	printf("Welcome to the game system\n");
	printf("**************************\n");
	printf("*****0:exit****1:game*****\n");
	printf("**************************\n");
}


void test(){
	srand((unsigned int)time(NULL));
	menu();
	int input = 0;
	do{
		printf("please input a number to select the function\n");
		scanf("%d",&input);
		switch (input){
		case 0:
			printf("drop of the game system\n");
			break;
		case 1:
			game();
			break;
		default:
			printf("input error,please input again\n");
			break;
		}
	} while (input);
}
