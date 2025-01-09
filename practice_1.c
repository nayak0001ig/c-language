#include<stdio.h>
int main(){
  int date_of_birth;
  char name;
  
  printf("enter your name :");
  scanf("%s",&name);
  printf("enter your age :");
  scanf("%d",&date_of_birth);
  if(date_of_birth>=18){
    printf("you are eligble for vote");
  }
  else
  printf("you are under 18");
  return 0;
}
