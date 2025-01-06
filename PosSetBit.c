#include<stdio.h>
void count_and_pos(int data)
{
    int count=0,pos=0;
    while(data!=0)
    {
        if((data&1)==1)
        {
            printf("%d ",pos);
        }
        pos++;
        data=data>>1;
    }
}
int main()
{
    count_and_pos(42);
    return 0;
}


