#include <stdio.h>

int main(void)
{
  int val1, val2;
  printf("Enter the first number: ");
  scanf("%i", &val1);

  printf("Enter the second number: ");
  scanf("%i", &val2);

  if (val2 == 0) {
    printf("Division by 0 is not possible.\n");
    return 0;
  }

  if (val1 % val2 == 0) {
    printf("the first number is divisible by the second number\n");
  } else {
    printf("the two number is not evently divisible\n");
  }
  return 0;
}
