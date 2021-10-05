#include<stdio.h>
#include<math.h>

int main(void){
int x, y, R;
scanf("%d%d",&x,&y);
R=x*x+y*y;
if (sqrt(R)<=200){
    printf("%s\n","inside");
}else{
    printf("%s\n","outside");

}
}
