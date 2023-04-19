#include <stdio.h>
#include <stdlib.h>

 void  decimal2binary(unsigned int num);
 unsigned int tobinary(unsigned int num);
   unsigned int to_octal(unsigned int num);

int main()
{
    to_octal(20);
    tobinary(20);

    return 0;
}
 void  decimal2binary(unsigned int num)
 {

    double n = (double) num;
    unsigned int binary =0;
    unsigned int int_num =0;


    while (n>=1)
        {
            n=n/2.0;
           // printf("%f \n",n);
            int_num = (int) n;

            //printf("%d \n",int_num);

            if (n > int_num)
            {
                binary = 1;

            }
            else if (n == int_num)
            {
                binary = 0;

            }

            n= (double)int_num;
            printf("%i\n",binary);
        }

    printf("\n");
 }


  unsigned int tobinary(unsigned int num)
  {
      long bin=0;
      long p=1;
      while (num>=1)
        {
          int remainder = num%2;

          num = num/2;
          bin=bin + remainder*p;
          p=p*10;
        }

      printf("%d\n",bin);
  }

    unsigned int to_octal(unsigned int num)
  {
      long oct=0;
      long p=1;
      while (num>=1)
        {
          int remainder = num%8;

          num = num/8;
          oct=oct + remainder*p;
          p=p*10;
        }

      printf("%d\n",oct);
  }
