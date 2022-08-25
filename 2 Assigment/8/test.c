#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void printBoard();
char box[]={'0','1','2','3','4','5','6','7','8','9'};
int main(){
	int player=1,input;
	printBoard();
	char mark=(player==1)?'X':'0';
	printf("Plase Enter number for Plyer %d: ",player);
	scanf("%d",input);
	if(input<1||input<9){
		printf("Invalid Input");
	}
	box[input]=mark;
	printBoard();
}

void printBoard(){
	
//	system("cls");
	printf("\n\t T I C   T A C   T O E   G A M E\n\n\n");
	printf("\t\t     |     |\n");
	printf("\t\t  %c  |  %c  |  %c\n",box[1],box[2],box[3]);
	printf("\t\t_____|_____|_____\n");
	printf("\t\t     |     |\n");
	printf("\t\t  %c  |  %c  |  %c\n",box[4],box[5],box[6]);
	printf("\t\t_____|_____|_____\n");
	printf("\t\t     |     |\n");
	printf("\t\t  %c  |  %c  |  %c\n",box[7],box[8],box[9]);
	printf("\t\t     |     |\n");
}
