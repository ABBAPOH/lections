#include <stdio.h>

int main()
{
   int array[] = {0, 1, 2, 4, 5, 6, 7, 8, 9};
   int value0 = array[0];
   int *ptr0 = 0;
   int *ptr = array;
   int value1 = ptr[1];
   int *ptr2 = ptr + 2;
   int value2 = *ptr2;
   int value3 = 3;
   int *ptr3 = &value3;

   printf("value0 = %d\n", value0);
   printf("value1 = %d\n", value1);
   printf("value2 = %d\n", value2);
   printf("value3 = %d\n", value3);

   printf("array = %lld\n", (long long)array);
   printf("ptr0 = %lld\n", (long long)ptr0);
   printf("ptr2 = %lld\n", (long long)ptr2);
   printf("ptr3 = %lld\n", (long long)ptr3);

   return 0;
}
