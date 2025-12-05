#include <stdio.h>

int main(void)
{
  int grades[5];
  int sum = 0;
  float average;

  // init grades

  grades[0] = 97;
  grades[1] = 68;
  grades[2] = 37;
  grades[3] = 07;
  grades[4] = 77;

  for (int i = 0; i < 5; i++) {
    sum += grades[i];
    printf("Compute grade: %i \n", i);
  }

  average = sum/5;
  printf("average: %f\n", average);
  return 0;
}
