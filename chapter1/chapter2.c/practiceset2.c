#include<stdio.h>

int main(){
    int a;
    printf("the value of a is\n");
    scanf("%d",&a);

    if(a%2==0){
    printf("%d is even",a);
    }
    else{
    printf("%d is odd",a);

    }   
    return 0;

}