#include<stdio.h>

int main(void)
{
    int kg;
    int cm;
    float v1;
    float v2;
    scanf("%d%d",&cm,&kg);
    v1=cm/2.54;
    printf("%f\n",(float)v1);
    v2=kg/0.454;
    printf("%f\n",(float)v2);

}
