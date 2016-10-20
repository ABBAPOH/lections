#include <stdio.h>

enum Type { Int, Float, String };

struct Variant
{
   enum Type type;
   union {
       int i;
       float f;
       char *s;
   };
};

int main()
{
   struct Variant array[3];
   array[0].type = Int; array[0].i = 10;
   array[1].type = Float; array[1].f = 1.5;
   array[2].type = String; array[2].s = "hello";

   for (int i = 0; i < 3; ++i) {
       struct Variant v = array[i];
       if (v.type == Int)
           printf("v = %d\n", v.i);
       else if (v.type == Float)
           printf("v = %f\n", v.f);
       else if (v.type == String)
           printf("v = %s\n", v.s);
   }

   return 0;
}

