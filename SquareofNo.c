#include<stdio.h>
int square(int n)
{
    int result=0,temp=n;
    while(temp!=0){
        if(temp&1)
        {
            result=result+n;
        }
        n=n<<1;
        temp=temp>>1;
    }
    return result;
}
int main()
{
    int num;
    printf("Enter the number:");
    scanf("%d",&num);
    int sq=square(num);
    printf("Square of %d id %d:",num,sq);
return 0;

}