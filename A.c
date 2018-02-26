#include <stdio.h>
#include <string.h>


int main ()
{
    char name[100];
    char strbreak[] = "-1";
    while (strcmp(name,strbreak)!= 0)
        {
            printf("Whats your name? ");
            scanf("%s", name);
            printf("Your name is %s.\n", name);


        }


   return(0);
}
