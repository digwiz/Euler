#include <stdio.h>

int main(int argc, char *argv[])
{
  int i;
  int sum_squares = 0;
  int square_sum = 0;
  for(i = 1; i <= 100; i++)
  {
    sum_squares += i*i;
    square_sum += i;
  }
  square_sum *= square_sum;
  printf("The difference is %d\n", (square_sum - sum_squares));
  return 0;
}