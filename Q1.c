#include <stdio.h>
int main(){
    int g,count=0;
    printf("enter your number");
    scanf("%d",&g);
    while(g!=0){
        g=g/10;
        count++;
    }
    if (count%2==0){
        printf("true");
    }
    else{
        printf("false");
    }
}

