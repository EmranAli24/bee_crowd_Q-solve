//Rock,Paper,scissor game
#include<stdio.h>
int main(){
	char ch1,ch2;
	printf("input from player1 and player2:");
	scanf("%c%c",&ch1,&ch2);
	if(ch1=='P'&& ch2=='R')
		printf("player1 wins\n");
	else if(ch1=='R'&& ch2=='S')
		printf("player1 wins\n");
	else if(ch1=='S'&& ch2=='P')
		printf("player1 wins\n");
		else

			printf("player2 wins\n");
			return 0;
}
