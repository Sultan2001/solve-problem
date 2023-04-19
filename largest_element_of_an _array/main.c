#include <stdio.h>
#include <stdlib.h>


signed int max_element(signed int arr[],unsigned int size);
int main()
{
    int arr_[]={1 ,10,22,0,90};
    printf("%d\n",max_element(arr_,5));
    return 0;
}
signed int max_element(signed int arr[],unsigned int size)
{
    int i =0;
    signed int max =arr[0];
    for(i=0 ; i<size-1 ; i++)
    {

        if (max<arr[i+1])
        {
            max=arr[i+1];

        }

    }

    return max;

}
