#include <stdio.h>

int main(void)
{
  double banana_length = 7.5;
  int football_field_length = 3500;
  double football_banana_length = football_field_length / banana_length;
  printf("%lf", football_banana_length); // Roughly 480
  return 0;
}
