#include<stdio.h>
int i=1,s=0;
int sum_rec(int data){
    s=0;
    while(data!=0){
        s=s+data%10;
        data=data/10;
    }
    if(s<=9){
        return s;
    }
    else{
        return sum_rec(s);
    }
    
}

int main(){
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    int a=sum_rec(n);
    if(a==1){
        printf("Uno!!!");
    }
    else{
        printf("Not a uno");
    }
    
}