#include <stdio.h>
void sortowanie(int *pt) {

  for (int j = 1; j < 10; j++) {
    if (*(pt + 1) < *pt) {
      int t = (*(pt + 1));
      *(pt + 1) = *pt;
      *pt = t;
      pt++;
    }
  }
}
int main(void) {
  int tab[10] = {7, 1, 1, 2, 3, 4, 5, 4, 6, 10};
  int *pt;
  pt = &tab[0];
  sortowanie(pt);
  for (int i = 0; i < 10; i++) {
    printf("%d ", tab[i]);
  }
  return 0;
}