#include <iostream>
#include "fibonacci.hpp"

int fibonacciRecursif(int n) {
  if (n < 2)
    return n;
  else
    return fibonacciRecursif(n-1) + fibonacciRecursif(n-2);
}

int fibonacciIteratif(int n) {
  int u = 0;
  int v = 1;
  int i, t;

  for(i = 2; i <= n; i++) {
    t = u + v;
    u = v;
    v = t;
  }
  return v;
}
