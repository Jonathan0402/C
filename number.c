/*
#include<stdio.h>

int main(void){
    int v1;
    scanf("%d",&v1);
    int a;
    int b;
    int c;
    int d;
    a=(v1/1000+7)*10;
    b=(v1/100+7)*1;
    c=(v1/10+7)*1000;
    d=(v1/1)*100;
    printf("%d",v1);
}
*/
#include<stdio.h>

int main(void){
    int v1;
    scanf("%d",&v1);
    int a;
    int b;
    int c;
    int d;
    a=(v1/1000+7)%10;
    b=(v1/100+7)%10;
    c=(v1/10+7)%10;
    d=(v1/1+7)%10;
    printf("%d%d%d%d\n",c,d,a,b);
}

    