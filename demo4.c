#include<stdio.h>
#include<stdlib.h>
int main(void){
    int Year;
    scanf("%d",&Year);
    if(Year%4==0 &&Year%100!=0)
    {
        printf("%s\n","�|�~");
    }
        else{
            if(Year%400==0){
                printf("%s\n","�|�~");
            }else{
                printf("���~");
                printf("��%d�̪񪺶|�~�O%d�~�~%d�~\n",Year,Year+4,Year-4);
                
            }if(Year%4==1){
                printf("���~");
                printf("��%d�̪񪺶|�~�O%d�~\n",Year,Year-1);
            }else if (Year%4==3){
                printf("���~");
                printf("��%d�̪񪺶|�~�O%d�~\n",Year,Year+1);
            }else if (Year%4==2){
                printf("���~");
                printf("��%d�̪񪺶|�~�O%d�~\n",Year,Year+2,Year-2);
            }
}
}