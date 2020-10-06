#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int card_num, select_num;

struct CardInfo {
	char name[20];
    char account[10];
	int pin;
	int money;
}card[3];

int showCard(){
	int i;
	for(i=0; i<card_num; i++){
		printf("Card : num=%d, name=%s\n", i, card[card_num].name);
	}
	return 0;
}

int addCardInfo(){
	if(card_num > 2){
		printf("The storage limit has been exceeded.\n");
		return 1;
	}

	printf("Input your Card infomation\n");
	printf("name pin account\n");
	printf("ex) name = personal pin = 1234, account = abc\n");
	printf("input : personal 1234 abc\n");

	scanf("%s %d %s", &card[card_num].name, &card[card_num].pin, &card[card_num].account);
	card_num++;
	return 0;
}

int delCardInfo(){
	int i, inputNum;
	printf("check your Card infomation\n");
	showCard();
	printf("Input your Card num for delete\n");
	scanf("%d", &inputNum);

	for(i=inputNum+1; i<3; i++){
		memcpy(&card[i-1], &card[i], sizeof(struct CardInfo));
	}
	card_num--;

	return 0;
}

int insertCard(){
	printf("check your Card infomation\n");
	showCard();
	while(1){
		printf("Input your Card num for insert\n");
		scanf("%d", &select_num);
		if(select_num>=0 && select_num <=2){
			printf("insert Card num = %d\n", select_num);
			break;
		}
		else {
			printf("Wrong input\n");
		}
	}

	return 0;
}

int check(){
	int inputPin;
	char inputAccount[20];

	printf("Input your PIN\n");
	scanf("%d", &inputPin);

	if(inputPin != card[select_num].pin) return 1;

	printf("Input your Account\n");
	scanf("%s", &inputAccount);

	if(!strncmp(inputAccount, card[card_num].account, strlen(card[card_num].account))) return 1;

	return 0;
}

int main(int argc, char *argv[]) {
	return 0;
}
