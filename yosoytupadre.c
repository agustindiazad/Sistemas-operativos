#include "types.h"
#include "stat.h"
#include "user.h"

int main(void) {
   char buf[10];
   int n;
   printf(1, "Enter ancestor level: ");
   gets(buf, sizeof(buf));
   n = atoi(buf);
   int ancestor_pid = getancestor(n);
   if (n == 0) {
      printf(1, "El proceso actual es %d\n", ancestor_pid);
   }
   else if (n == 1) {
      printf(1, "El proceso padre es %d\n", ancestor_pid);
   }
   else if (n == 2) {
      printf(1, "El proceso abuelo es %d\n", ancestor_pid);
   } else {
      printf(1, "-1");
   }
   exit();
}
