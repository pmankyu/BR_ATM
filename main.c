#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int card_num;

struct CardInfo {
    int pin;
    char account[10];
	int money;
}card[3];

int addCardInfo(){
	if(card_num > 2){
		printf("The storage limit has been exceeded.\n");
		return 1;
	}

	printf("Input your Card infomation\n");
	printf("pin account\n");
	printf("ex) pin = 1234, account = abc\n");
	printf("input : 1234 abc\n");

	scanf("%d %s", &card[card_num].pin, &card[card_num].account);
	card_num++;
	return 0;
}

int delCardInfo(){
	return 0;
}

int insertCard(){
	return 0;
}

int main(int argc, char *argv[]) {
	return 0;
}
