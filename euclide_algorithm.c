#include <stdio.h>


int gcd(int m, int n) {

  if (m == 0  || n == 0) {
    return m > n ? m : n;
  }
  if (m < n) {
    return gcd(n, m);
  }
  int remainder = m % n;
  if (remainder == 0) {
    return n;
  } else {
    return gcd(n, remainder);
  }
}

int main(void) {

  int n, m, result;

  printf("Euclid's algorithm\n");
  printf(" Given two positive integers m and n, find their greatest common divisor, that is, the largest positive integer that evenly divides both m and n.\n");
  printf("Enter n value: ");
  scanf("%i", &n);
  if (n < 0) {
    printf("value of n should be a positive number\n");
    return -1;
  }

  printf("Enter m value: ");
  scanf("%i", &m);
  if (m < 0) {
    printf("value of m should be a positive number\n\n");
    return -1;
  }

  result =  gcd(m, n);

  printf("The greatest common divisor of m and n is : %i\n", result);

  return 0;
}
