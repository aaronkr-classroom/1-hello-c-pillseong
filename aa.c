#include <stdio.h>
#include <limits.h>
#include <float.h>

int main() {
   char ch = 'A';
   printf("char: \n");
   printf("Value: %c \n", ch);
   printf("Max: %d \n", CHAR_MAX);
   printf("Min: %d \n", CHAR_MIN);

   signed short int sshort = 1234;
   printf("\nsigned short int:\n");
   printf("Value: %d\n", sshort);
   printf("Max: %d \n", SHRT_MAX);
   printf("Min: %d \n", SHRT_MIN);

   unsigned short int ushort = 1234U;
   printf("\nunsigned short int:\n");
   printf("Value: %u\n", ushort);
   printf("Max: %u \n", USHRT_MAX);

   unsigned int uint = 12345U;
   printf("\nunsigned int:\n");
   printf("Value: %u\n", uint);
   printf("Max: %u \n", UINT_MAX);

   unsigned long int ulongt = 12345UL;
   printf("\nunsigned long int:\n");
   printf("Value: %lu\n", ulongt);
   printf("Max: %lu \n", ULONG_MAX);

   float f = 123.456F;
   printf("\nfloat:\n");
   printf("Value: %f\n", f);
   printf("Max: %e \n", FLT_MAX);
   printf("Min: %e \n", FLT_MIN);

   double d = 123456.7890123;  // 기본 double 리터럴
   printf("\ndouble:\n");
   printf("Value: %.3f\n", d);
   printf("Max: %e \n", DBL_MAX);
   printf("Min: %e \n", DBL_MIN);

   return 0;
}
