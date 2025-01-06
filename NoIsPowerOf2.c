#include<stdio.h>
#include<stdbool.h>
bool power(int n){
    return (n > 0 && (n & (n - 1)) == 0);
}
int main(){
    int n;
    printf("enter the number to be searched: ");
    scanf("%d",&n);
    bool result=power(n);
    if(result==true){
        printf("%d is the power of two",n);
    }
    else{
        printf("%d is not the power of two",n);
    }
    
}