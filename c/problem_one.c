#include <stdio.h>

int sum_multiples_below(int number, int first_div, int second_div);

int main(int argc, char *argv[])
{ 
  printf("The sum of the multiples of 3 and 5 below 10 is: %d\n", sum_multiples_below(10, 3, 5));
  printf("The sum of the multiples of 3 and 5 below 1000 is: %d\n", sum_multiples_below(1000, 3, 5));
  return 0;
  
}

int sum_multiples_below(int number, int first_div, int second_div)
{
  int i;
  int sum = 0;
  
  for(i = 0; i < number; i++)
  {
    if(!(i % first_div) || !(i % second_div))
    sum += i;
  }
  return sum;
}