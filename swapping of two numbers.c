#include<stdio.h>
int main()
{
    
  int  a,b,c;
  scanf("%d%d",&a,&b);
  c=a;
  a=b;
  b=c;
  printf("%d %d",a,b);
  return 0;
}

#sample input : 3 4
#sample output : 4 3
