#include<stdio.h>
#include<stdlib.h>

int main(void){
    int a, b, c, d;
    scanf("%d",&a);
    printf("�~��\n");
    if (a<=30){
        printf("����?(0:No, 1:Yes)\n");
        }
        else{
            printf("����");
        }scanf("%d",&b);
            if (b==0){
                printf("��\n����");
        }   else{
                printf("���J?(��:2, ��:1, �C:0)\n");
        }   scanf("%d",&c);
                if(c==1){
                    printf("���ȭ�?(0:No, 1:Yes)\n");
        }       else{
                    if(c==2){
                        printf("��");
            }       else{
                        printf("����");
            }
        }           scanf("%d",&d);
                        if (d==1){
                            printf("��");
        }               else{
                            printf("����");
    }
    }      
