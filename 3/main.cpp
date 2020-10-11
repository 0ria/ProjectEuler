#include <algorithm>
#include <bitset>
#include <climits>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <deque>
#include <fstream>
#include <iostream>
#include <limits>
#include <list>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <unordered_map>
#include <vector>

const long MAXPOSSIBLENUMBER = pow(10, 12);

bool isPrime(long number) {
  if (number <= 1)
    return false;
  
  for (int i = 2; i < number; i++)
    if (number % i == 0)
      return false;

  return true;
}

long findNextPrime(long current, long maxNumber) {
  current++;
  while (current <= maxNumber) {
    if (isPrime(current))
      return current;
    else current++;
  }
  return maxNumber;
}

long findLargestPrimeFactor(long number) { 
  long currentPrime = 2;
  long biggestPrime = 0;
  while (!isPrime(number)) {
    if (number % currentPrime == 0) {
      if (currentPrime > biggestPrime)
        biggestPrime = currentPrime;

      number /=  currentPrime;
      currentPrime = 2;
    }
    else {
      currentPrime = findNextPrime(currentPrime, number);
    }
  }
  if (isPrime(number) && number > biggestPrime)
    return number;
  else
    return biggestPrime;
}


int main() {
  int t;
  std::cin >> t;
  for (int a0 = 0; a0 < t; a0++) {
    long n;
    std::cin >> n;
    if ((t >= 1 && t <= 10) && (n >= 10 && n <= MAXPOSSIBLENUMBER)) {
      std::cout << findLargestPrimeFactor(n) << std::endl;
    }
    else
      return 0;
  }
  return 0;
}