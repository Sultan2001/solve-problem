#include <stdio.h>
#include <stdlib.h>


int *max_min_arr(int arr[], unsigned int size);
int arr_ []={1,2,5,0,10};
int *pt_max_min=NULL;
int main()
{

    pt_max_min=max_min_arr(arr_,5);
    printf("max value = %d\n",*(pt_max_min));
    printf("min value = %d\n",*(pt_max_min+1));

    return 0;
}
int *max_min_arr(int arr[], unsigned int size)
{
     int  static max_min [2];
     max_min[0] = arr[0];
     max_min[1] = arr[0];

    int i=0;
    for (i=0 ; i<size-1 ; i++)
    {

        //printf("i= %d | arr[i]=  %d   \n", i,arr[i]);
        if (max_min[0]< arr[i+1])
        {
             max_min[0]=arr[i+1];
        }

        if (max_min[1]> arr[i+1])
        {
             max_min[1]=arr[i+1];

        }

    }



    return max_min;
}



