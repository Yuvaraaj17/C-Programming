#include<stdio.h>

int main(){
    int ip;
    printf("Enter input:");
    scanf("%d",&ip);
    int a;
    for(int i=1;i<ip+1;i++){
        a=i;
        if(a%2==0){
            a=i+1;
        }
        printf("%d",a);
        a=i;
        for(int j=0;j<3;j++){
            printf("%d",i);
        }
        if(a%2!=0){
            a=i+1;
        }
        printf("%d\n",a);
    }
}