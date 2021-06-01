#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
    {
       int n, d, s=0;
       scanf("%d", &n);
       while (n!=0)
       {
          s=s+n%10;
          n=n/10;
       }
       printf("%d",s);
       return 0;
    }

#Sample Input :

10564
  
#Sample Output :
  
16
