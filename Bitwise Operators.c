#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{
 int a,b,c=0,d=0,e=0,n,k;
 scanf("%d %d",&n,&k);  
  for (a=1;a<n;a++)
  {
      for (b=n;b>a;b--)
      {
          if ((a&b)<k && (a&b)>c) {c = a&b;}
          if ((a|b)<k && (a|b)>d) {d = a|b;}
          if ((a^b)<k && (a^b)>e) {e = a^b;}
      }
  }
printf ("%d\n%d\n%d", c,d,e);
    return 0;
}

#Sample Input :

5 4
  
#Sample Ouput :
  
2
3
3
