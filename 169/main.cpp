#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

const long double MAXPOSSIBLEVALUE = pow (10, 27);
const long double TWO = 2;
std::vector<long double> nValues;

long double getMostProximatePow(long double n) {
  return (log(n) / log(2));
}
/*
void getResult (void) {
  nValues.
}
*/
void getNumberOfCombinations(long double number) {
  long double mostProximatePow = floor(getMostProximatePow(number));
  long double n = powl(TWO, mostProximatePow);
  nValues.push_back(n);
  number = number - n;
  if (number > 1)
    getNumberOfCombinations(number);
  else if (number == 1)
    nValues.push_back(number);
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    long double n;
    std::cin >> n;
    if (n >= 1 && n <= MAXPOSSIBLEVALUE) {
      getNumberOfCombinations(n);
      //getResult();
    }
/*
  for (auto it : nValues)
    std::cout << it << " ";
  std::cout << std::endl;
*/
    return 0;
}
