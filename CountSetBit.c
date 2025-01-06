#include<stdio.h>
int count_set_bit(int data)
{
    int count=0;
    while(data!=0)
    {
        if((data&1)==1)
        count++;
        data=data>>1;
    }
    return count;
}
int main() {
    int num = 42; 
    printf("Number of set bits: %d\n", count_set_bit(num));
    return 0;
}

