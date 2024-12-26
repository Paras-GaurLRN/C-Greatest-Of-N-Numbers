#include <stdio.h>

int main()
{
    int cnt = 0;
    double OGgreat;
    double tmpdump;
    char inpchr = 'Y';
    while(inpchr == 'Y')
    {
    printf("Enter Number: "); scanf("%lf" , &tmpdump);
    if(cnt == 0){OGgreat = tmpdump; cnt++;}
    else
    {
        if(OGgreat>=tmpdump){goto PRINTER;}
        else{OGgreat = tmpdump;}
    }

    PRINTER:
        fflush(stdin);
        printf("Do You wish to Continue?\n(Y to Continue)\n(Any other input will stop the loop)\n-> "); scanf("%c" , &inpchr);
        }
        printf("Greatest = %lf" , OGgreat);
    return 0;
}