#include <stdio.h>

int main() {

   int month;

   do {
      printf("Select month number:\n");
      scanf("%d", &month);
      if (month < 1 || month > 12) {
         printf("There are only 12 month in the year (from 1 to 12), try again!\n");
      }
   }
   while (month < 1 || month > 12);

   switch (month) {
      case 1: printf("winter\n"); break;
      case 2: printf("winter\n"); break;
      case 3: printf("spring\n"); break;
      case 4: printf("spring\n"); break;
      case 5: printf("spring\n"); break;
      case 6: printf("summer\n"); break;
      case 7: printf("summer\n"); break;
      case 8: printf("summer\n"); break;
      case 9: printf("autumn\n"); break;
      case 10: printf("autumn\n"); break;
      case 11: printf("autumn\n"); break;
      case 12: printf("winter\n"); break;
      default: break;
   }
   return 0;
}
