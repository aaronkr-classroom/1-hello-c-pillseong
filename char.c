#include <stdio.h>

int main() {
   char x = 72;
   char y = 105;
   char z = 33;
   printf("ASCII %d+%d%+%d= %c%c%c\n", x, y, z, x, y, z);

   char a = 'A';
   char b = a + 1;
   printf("\n%c+1= %c", a, b);

   printf("\n\nASCII 문자는 순서대로 출력하기 : ");
   for (int i = 48; i <= 57; i++) {
      printf("\n ASCII: %d=%c", i, i);
      printf("\n\n");
   }
}
