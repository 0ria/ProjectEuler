#include <algorithm>
#include <cmath>
#include <cstdio>
#include <iostream>
#include <vector>

const double MAXVALUE = pow(10, 100);
const long MODULE = pow(10, 9) + 7;

int sumDigits(int n) {
  int m = 0; 
  int sum = 0;
  while (n > 0) {
    m = n % 10;
    sum += pow(m, 2);
    n /= 10;
  }
  return sum;
}

bool isPerfect(int num) {
  long double sr = sqrt(num);
  return ((sr - floor(sr)) == 0);
}

bool checkPerfectSquare(int number) {
  int sum = sumDigits(number);
  //int n = pow(n, 2);
  if (isPerfect(sum))
    return true;
  else
    return false;
}

void getSolution(double maxPossibleNumber) {
  double sum = 0;
  for (int i = 1; i <= maxPossibleNumber; i++) {
    if (checkPerfectSquare(i)) {
      sum += i;
    }
  }
  std::cout << sum << std::endl;
}

int main(void) {
  double k;
  std::cin >> k;
  if (k >= 1 && k <= MAXVALUE) getSolution(k);
  return 0;
}
