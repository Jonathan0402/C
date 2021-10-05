#include<stdio.h>
#include<stdlib.h>

int main(void){
    int a, b, c;     
    printf("是否有房產 ? (0:No, 1:Yes)\n");
    scanf("%d",&a);
    if (a==0){
        printf("是否已婚 ? (0:No, 1:Yes)\n");
    }
    else{
        printf("可以貸款");
    }   
            scanf("%d",&b);
            if (b==0){
                printf("是否年收>100萬? (0:No, 1:Yes)\n");
            }   else{
                    printf("可以貸款\n");
            }           scanf("%d",&c);
                        if (c==0){
                            printf("不能貸款\n");
         }           else{
                            printf("可以貸款\n");
                        }                  
    
        
}   
