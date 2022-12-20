#include <stdio.h>

int main(void) {
  int h;
  float brutto;
  printf("Podaj liczbę przepracowanych godzin:\n");
  scanf("%d", &h);
  brutto = h * 40;
  printf("Liczba przepracowanych godzin: %d\n", h);
  printf("Wynagrodzenie brutto (bez premii): %.2f", brutto);
  printf("zł\n");
  int ilenadg = h - 40;
  float bruttop = ((ilenadg * 40) * 1.5) + (40 * 40);
  if (h > 40) {
    printf("Wynagrodzenie brutto po premii za nadgodziny: %.2f", bruttop);
    printf("zł\n");
  }

  if (bruttop > 0 && bruttop <= 1200) {
    float netto = bruttop * 0.85;
    float podatek = bruttop * 0.15;
    printf("Podatek: %.2f", podatek);
    printf("zł\n");
    printf("Wynagrodzenie netto: %.2f", netto);
    printf("zł\n");
  } else if (bruttop <= 1800 && bruttop > 1200) {
    float netto = (1200 * 0.85) + (bruttop - 1200) - (bruttop * 0.20);
    float podatek = (1200 * 0.15) + ((bruttop - 1200) * 0.20);
    printf("Podatek: %.2f", podatek);
    printf("zł\n");
    printf("Wynagrodzenie netto: %.2f", netto);
    printf("zł\n");
  } else if (bruttop > 1800) {
    float netto = (1200 * 0.85) + (600 * 0.80) + (bruttop - 1800) -
                  ((bruttop - 1800) * 0.25);
    float podatek = (1200 * 0.15) + (600 * 0.20) + ((bruttop - 1800) * 0.25);
    printf("Podatek: %.2f", podatek);
    printf("zł\n");
    printf("Wynagrodzenie netto: %.2f", netto);
    printf("zł\n");
  }

  return 0;
}
