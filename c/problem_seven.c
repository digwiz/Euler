#include <stdio.h>
int is_prime(unsigned long int number);

int main(int argc, char *argv[])
{
  int i;
  int count = 0;
  int largest = 2;
  for(i = 2; count < 10001; i++)
  {
    printf("i is %d\n", i);
    if(is_prime(i))
    {
      count++;
    }
    largest = i;
  }
  printf("The 10001st prime is %d\n", largest);
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