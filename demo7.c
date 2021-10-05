#include<stdio.h>
#include<stdlib.h>

int main(void){
    int a, b, c;
    scanf("%d%d%d",&a,&b,&c);
    if(a<=b && b<=c){
        if(a+b==c){
            printf("flase");
        }else{
            if (a+b>c){
                printf("ture");
            }
        }
    }else{
        printf("flase");
    }
}
 
