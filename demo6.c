#include<stdio.h>
#include<stdlib.h>

int main (void){
    int month;
    int date;
    scanf("%d%d",&month,&date);
    if(month==1 && date>=18 && date<=31){
        printf("���~");
    }if(month==2 && date>=1 && date<=18){
        printf("���~");
    }if(month==2 && date>=19 && date<=28){
        printf("����");
    }if(month==3 && date>=1 && date<=20){
        printf("����");
    }if(month==3 && date>=21 && date<=31){  
        printf("�d��");
    }if(month==4 && date>=1 && date<=20){
        printf("�d��");
    }if(month==4 && date>=21 && date<=30){
        printf("����");
    }if(month==5 && date>=1 && date<=21){
        printf("����");
    }if(month==5 && date>=22 && date<=31){
        printf("���l");
    }if(month==6 && date>=1 && date<=22){
        printf("���l");
    }if(month==6 && date>=22 && date<=30){
        printf("����");
    }if(month==7 && date>=1 && date<=22){
        printf("����");
    }if(month==7 && date>=23 && date<=31){
        printf("��l");
    }if(month==8 && date>=1 && date<=23){
        printf("��l");
    }if(month==8 && date>=24 && date<=31){
        printf("�B�k");
    }if(month==9 && date>=1 && date<=23){
        printf("�B�k");
    }if(month==9 && date>=24 && date<=30){
        printf("�ѯ�");
    }if(month==10 && date>=1 && date<=23){
        printf("�ѯ�");
    }if(month==10 && date>=24 && date<=31){
        printf("����");
    }if(month==11 && date>=1 && date<=22){
        printf("����");
    }if(month==11 && date>=23 && date<=30){
        printf("�g��");
    }if(month==12 && date>=1 && date<=21){
        printf("�g��");
    }if(month==12 && date>=22 && date<=21){
        printf("�]�~");
    }if(month==1 && date>=1 && date<=20){
        printf("�]�~");
    }
    
}