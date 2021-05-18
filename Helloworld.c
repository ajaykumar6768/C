#include<stdio.h>
int main()
{
    
  char s[20];
  scanf("%s",s);
  printf(s);
  return 0;
}

#sample input : helloworld
#sample output : helloworld

#sample input : hello world
#sample output : hello
#if the char consists the space then the next element is treated as empty or null 
