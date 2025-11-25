#include <stdio.h>


int gcd(int m, int n) {
  int upperBound = m;
  int lowerBound = n;
  int remainder;
  if (n > m) {
    return gcd(n, m);
  }
  while (lowerBound != 0) {
    remainder = upperBound % lowerBound;
    upperBound = lowerBound;
    lowerBound = remainder;
  }
  return upperBound;
}



int main(void)
{
  int n, m, result;

  printf("Euclid algorithm : direct approach\n");

  printf("Enter n value: \n");
  scanf("%i", &n);
  if (n < 0) {
    printf("n should be positive\n");
    return -1;
  }

  printf("Enter m value: \n");
  scanf("%i", &m);
  if (m < 0) {
    printf("m should be positive\n\n");
    return -1;
  }

  if (m == 0 && n == 0) {
    printf("m =0 and n = o , Invalid state\n");
    return -1;
  }

  printf("gcd(m, n) = %i\n", gcd(m, n));
  return 0;
}
