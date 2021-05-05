#include "game.h"
//棋盘游戏
void game(){
	char ret;
	char board[ROW][COL] = { 0 };
	InitBoard(board, ROW, COL);
	DisplayBoard(board, ROW, COL);
	while (1){
		PlayerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		ret = IsWin(board, ROW, COL);
		if (ret != 'c'){
			break;
		}
		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		ret=IsWin(board,ROW,COL);
		if (ret != 'c'){
			break;
		}
	}
	if (ret == '*'){
		printf("Player wins\n");
	}
	else if (ret == "o"){
		printf("Computer wins\n");
	}
	else{
		printf("Drawn game\n");
	}
}

int IsFull(char board[ROW][COL], int row, int col){
	int i, j;
	for (i = 0; i < row; i++){
		for (j = 0; j < col; j++){
			if (board[row][col] == ' ');
			return 0;
		}
	}
	return 1;
}


char IsWin(char board[ROW][COL],int row,int col){
	int i, j;
	for (i = 0; i < row; i++){
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][2] != ' ')
			return board[i][2];
	}	
	for (i = 0; i < col; i++){
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[2][i] != ' ')
			return board[2][i];
	}
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[2][2] != ' ')
			return board[2][2];
		
	if (board[2][0] == board[1][1] && board[1][1] == board[0][2] && board[0][2] != ' ')
			return board[0][2];
	if (1 == IsFull(board, ROW, COL)){
		return '1';
	}
	else
		return 'c';
}
//电脑移动
void ComputerMove(char board[ROW][COL], int row, int col){
	printf("ComputerMove\n");
	int x, y;
	while (1){
		x = rand() % row;
		y = rand() % col;
		if (board[x][y]==' '){
			board[x][y] = 'o';
			break;
		}
	}
}


//玩家移动
void PlayerMove(char board[ROW][COL],int row,int col){
	printf("PlayerMove\n");
	int x, y;
	while (1){
		scanf("%d%d", &x, &y);
		if ( (x<1 || x>row)||(y<1 || y>col)){
			printf("input error,please input again:\n");
		}else if (board[x - 1][y - 1] != ' '){
			printf("this coordinate already has chess:\n");
		}else {
			board[x - 1][y - 1] = '*';
			break;
		}
	}
}
//初始化棋盘元素
void InitBoard(char board[ROW][COL], int row, int col){
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++){
		for (j = 0; j < col; j++){
			board[i][j] =' ';
		}
	}
}
/*
        |   |
     ---|---|---
	    |   |
     ---|---|---
	    |   |  

*/
//打印棋盘
void DisplayBoard(char board[ROW][COL], int row, int col){
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++){
		for (j = 0; j < col; j++){
			if (j == col - 1){
				printf(" %c ",board[i][j]);
			}
			else
				printf(" %c |", board[i][j]);
		
		}
		printf("\n");
		if (i < col - 1){
			for (j = 0; j < col; j++){
				if (j == col - 1){
					printf("---");
				}
				else
					printf("---|");
			}
			printf("\n");
		}
	}
}
