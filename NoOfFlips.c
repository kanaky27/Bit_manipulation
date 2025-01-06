#include<stdio.h>
int NoOfFlipsRequired(int start,int goal){
    int ans=start^goal;
    int count=0;
    while(ans!=0){
        if((ans&1)==1){
            count++;
        }
        ans=ans>>1;
    }return count;
}
int main(){
    int start,goal;
    printf("enter the first number : ");
    scanf("%d ",&start);
    printf("enter the second number : ");
    scanf("%d ",&goal);
    int result=NoOfFlipsRequired(start,goal);
    printf("%d no of flips are required ",result);
    return 0;
}