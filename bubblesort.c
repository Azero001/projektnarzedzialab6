#include <stdio.h>
void sortowanie(int *pt) {
  printf("TESTTTTTTTTTTTTTTTTTTTTTTTTT");
  for (int j = 1; j < 30; j++) {
    if (*(pt + 1) < *pt) {
      int t = (*(pt + 1));
      *(pt + 1) = *pt;
      *pt = t;
      pt++;
    }
  }
}
int main(void) {
  int tab[30] = {1,1,1,1,1,1,1,1,1,1};
  int *pt;
  pt = &tab[0];
  sortowanie(pt);
  for (int i = 0; i < 10; i++) {
    printf("%d ", tab[i]);
  }
  return 0;
}
