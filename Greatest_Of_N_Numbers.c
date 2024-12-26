#include <stdio.h>
// #include <math.h> | Since Floating Numbers Are Not Here, fabs is not required thus abs is used
// #include <stdbool.h> | No Use For It
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#define Fout fflush(stdout)
#define NLN printf("\n")
// #define Fin fflush(stdin) | No Use For It Here

void main() {
// const bool T=true; | No Use For It Here
char Bound_Change_Request[2] = "N"; Bound_Change_Request[1] = "\0";
int i = 0;
while (i==0){
    int Bound=2;
    printf("Do You Want To Change Number Of Inputs?\nType 'Y' for Yes | 'N' for No | Anything Else to Exit\n-> ");
    scanf("%s",&Bound_Change_Request);NLN;
    // A NAND gate or an XOR gate will both work here as the first case where both statements are false will never occur
    // and both gates have same Truth Table for all other combination of outputs
    assert(!(abs(strcmp(Bound_Change_Request,"Y")) && abs(strcmp(Bound_Change_Request,"N"))));

    if (!abs(strcmp(Bound_Change_Request,"Y"))){
        printf("Enter Required Number Of Inputs\n-> ");
        scanf("%i",&Bound);NLN;}

    double Numlist[Bound] , Dummy_Var;

    printf("Enter %i Numbers with a gap in between: \n",Bound);

    for(int x=0;x<Bound;x++){
        scanf("%lf",&Numlist[x]);NLN;
    }
    Dummy_Var = Numlist[0];
    for(int x=1;x<Bound;x++){
        if(Dummy_Var < Numlist[x]){Dummy_Var = Numlist[x];}
    }

    printf("The Greatest Is: %lf\n",Dummy_Var);
}}