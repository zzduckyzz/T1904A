#include <stdio.h>

int main() {
   int a, b, c, i, n;

   n = 100;

   a = 1;
   b = 2;
   printf("%d %d ",a,b);

   for(i = 1; i <= n-2; i++) {
      c = a + b;
      printf("%d ", c);
      
      a = b;
      b = c;
   }
   
   return 0;
}
