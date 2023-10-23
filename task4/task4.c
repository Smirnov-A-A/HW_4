#include <stdio.h>

int main() {

   int n, x = 9; 
   long long int res = 8;

   printf("Enter n (n > 8): ");
   do {
      scanf("%d", &n);
      if (n < 9) {
         printf("n less than 9, try again: ");
      }
   }
   while (n < 9);

   while (x <= n) {
      res *= x;
      ++x;
   }
   printf("res = %lld\n", res);

   return 0;
}
