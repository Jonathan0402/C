#include<stdio.h>

int main(void){
    int M;
    int C;
    int E;
    int T;
    scanf("%d%d%d",&M,&C,&E);
    T=M+E+C;
    printf("%d\n",T);
    T=(M+E+C)/3;
    printf("%d\n",T);
}