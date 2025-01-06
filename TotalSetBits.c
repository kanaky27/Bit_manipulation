#include<stdio.h>
void count_set_bit(int n)
{
    for(int i=1;i<n+1;i++){
        int data=i;
        int count=0,data2=i;
        while(data!=0)
        {
            if((data&1)==1){
            count++;
            }
            data=data>>1;
        }
    printf("%d has %d set bits \n",data2,count);
    }
}
int main()
{
    count_set_bit(8);
    return 0;

}