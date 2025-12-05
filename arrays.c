#include <stdio.h>

int main(void)
{
  int grades[5];
  int sum = 0;
  float average;

  // init grades
  for (int i=0;i < 5; i++) {
    printf("Enter your %i 'th grade: ", i + 1);
    scanf("%i", &grades[i]);
  }

  for (int i = 0; i < 5; i++) {
    sum += grades[i];
    printf("Compute grade: %i \n", i);
    printf("actual sum after computation:  %i\n", sum);
  }

  average = sum / 5;
  printf("average: %f\n", average);
  return 0;
}
