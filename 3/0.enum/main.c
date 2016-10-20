#include <stdio.h>

enum Axis {
   XAxis,
   YAxis,
   ZAxis
};

int main()
{
   enum Axis axis = XAxis;
   axis = ZAxis;

   printf("axis = %d\n", (int)axis);

   return 0;
}
