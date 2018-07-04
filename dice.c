#include<stdio.h>
#include<stdlib.h>
int main(){
  char name[10];
  int num1,num2,sum;
  srand(time(NULL));
  num1 = rand()%6 + 1;
  num2 = rand()%6 + 1;
  sum = num1 + num2;

  printf("What is your name?\n> ");
  scanf("%s",name);
  printf("Hello, %s!\n",name);
  printf("Rolling the dice...\n");
  printf("Dice 1: %d\n",num1);
  printf("Dice 2: %d\n",num2);
  printf("Total value: %d\n",sum);
  return 0;
}
