#include<stdio.h>
#include<stdlib.h>

int main (void){
    int month;
    int date;
    scanf("%d%d",&month,&date);
    if(month==1 && date>=18 && date<=31){
        printf("¤ô²~");
    }if(month==2 && date>=1 && date<=18){
        printf("¤ô²~");
    }if(month==2 && date>=19 && date<=28){
        printf("Âù³½");
    }if(month==3 && date>=1 && date<=20){
        printf("Âù³½");
    }if(month==3 && date>=21 && date<=31){  
        printf("¨d¦Ï");
    }if(month==4 && date>=1 && date<=20){
        printf("¨d¦Ï");
    }if(month==4 && date>=21 && date<=30){
        printf("ª÷¤û");
    }if(month==5 && date>=1 && date<=21){
        printf("ª÷¤û");
    }if(month==5 && date>=22 && date<=31){
        printf("Âù¤l");
    }if(month==6 && date>=1 && date<=22){
        printf("Âù¤l");
    }if(month==6 && date>=22 && date<=30){
        printf("¥¨ÃÉ");
    }if(month==7 && date>=1 && date<=22){
        printf("¥¨ÃÉ");
    }if(month==7 && date>=23 && date<=31){
        printf("·à¤l");
    }if(month==8 && date>=1 && date<=23){
        printf("·à¤l");
    }if(month==8 && date>=24 && date<=31){
        printf("³B¤k");
    }if(month==9 && date>=1 && date<=23){
        printf("³B¤k");
    }if(month==9 && date>=24 && date<=30){
        printf("¤Ñ¯¯");
    }if(month==10 && date>=1 && date<=23){
        printf("¤Ñ¯¯");
    }if(month==10 && date>=24 && date<=31){
        printf("¤ÑÃÈ");
    }if(month==11 && date>=1 && date<=22){
        printf("¤ÑÃÈ");
    }if(month==11 && date>=23 && date<=30){
        printf("®g¤â");
    }if(month==12 && date>=1 && date<=21){
        printf("®g¤â");
    }if(month==12 && date>=22 && date<=21){
        printf("Å]½~");
    }if(month==1 && date>=1 && date<=20){
        printf("Å]½~");
    }
    
}