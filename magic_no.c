#include<stdio.h>
#include<math.h>
int main(){
    int n,count=0,sum1=0,temp,rem,x,rev=0;
    printf("Enter the number:");
    scanf("%d",&n);
    
    while(n!=0){
        rem=n%10;
        sum1=sum1+rem; 
        n=n/10;
    }
    printf("%d\n",sum1);
    temp=sum1;
    while(temp!=0){
        rev*=10;
        rev+=temp%10;
        temp=temp/10;
    }
    printf("%d\n",rev);
    printf("%d\n",rev*sum1);
}