#include<stdio.h>
#include<stdlib.h>

int main(void){
    int a, b, c, d;
    scanf("%d",&a);
    printf("年齡\n");
    if (a<=30){
        printf("長相?(0:No, 1:Yes)\n");
        }
        else{
            printf("不見");
        }scanf("%d",&b);
            if (b==0){
                printf("醜\n不見");
        }   else{
                printf("收入?(高:2, 中:1, 低:0)\n");
        }   scanf("%d",&c);
                if(c==1){
                    printf("公務員?(0:No, 1:Yes)\n");
        }       else{
                    if(c==2){
                        printf("見");
            }       else{
                        printf("不見");
            }
        }           scanf("%d",&d);
                        if (d==1){
                            printf("見");
        }               else{
                            printf("不見");
    }
    }      
