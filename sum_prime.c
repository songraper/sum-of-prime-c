#include <stdio.h>
#include <stdlib.h>
#include "sum_prime.h"

int check_prime(int x)
{
  int check = 1;
  for (int j = 2; j <= x / 2; j++)
  {
    if (x % j == 0)
    {
      check = 0;
      break;
    }
  }

  return check;
}

int sum_prime(int n)
{
  int isPrime = 0, sum = 0;

  for (int i = 0; i <= n; i++)
  {
    isPrime = check_prime(i);
    if (isPrime == 1)
    {
      sum += i;
    }
  }

  return sum;
}
