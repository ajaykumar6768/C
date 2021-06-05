#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int i;
    char s[1000];
    scanf("%[^\n\t]s",&s);
    for(i=0;s[i]!='\0';i++)
    {
        printf("%c",s[i]);
        if(s[i]==' ')
            printf("\n");
    }
    return 0;
}

#Sample Input :

This is C 


#Sampple Output :

This
is
C{-truncated-}
