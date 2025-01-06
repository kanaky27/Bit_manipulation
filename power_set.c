#include <stdio.h>
void power_set(int arr[],int n)
{
    int subset=1<<n;
    for (int i=0;i<subset;i++){
        printf("{");
        for(int j=0;j<n;j++){
            if((i&(1<<j))){
                printf("%d ",arr[j]);
            }
        }printf("}\n");
        
}
}
int main()
{
    int arr[]={1,2,3};
    power_set(arr,3);
    return 0;

}