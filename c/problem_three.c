#include <stdio.h>
#include <math.h>

int is_prime(unsigned long int number);

int main(int argc, char *argv[])
{
  long int i;
  long int largest = 0;
  for(i = 0; i*i <= 600851475143; i++)
  {
    if(is_prime(i) && (600851475143 % i == 0))
    {
      largest = i;
    }
  }
  printf("The largest prime factor of 600851475143 is: %lu\n", largest);
  return 0;
}

int is_prime(unsigned long int number)
{
  if(number <= 1)
    return 0;
  unsigned long int i;
  for(i=2; i*i<=number; i++)
  {
    if(number % i == 0)
      return 0;
  }
  return 1;
}
