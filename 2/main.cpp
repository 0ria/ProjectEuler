#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

const unsigned long long int MAXRANGENUMBER = 4 * pow(10, 16);
const unsigned long long int MAXRANGETEST = pow(10, 5);


unsigned long long int calculateFibEven(unsigned long long int number) {
  unsigned long long int result = 0;
  unsigned long long int secondLast = 1;
  unsigned long long int last = 2;

  while (secondLast + last <= number) {
    unsigned long long int newNumber = secondLast + last;
    if (newNumber < number) {
      secondLast = last;
      last = newNumber;
      if (newNumber % 2 == 0)
        result += newNumber;
    }
  }
  return result + 2;
}

int main(){
    int t; 
    std::cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        unsigned long long int n;
        std::cin >> n;
        if ((t >= 1 && t <= MAXRANGETEST) && (n >= 10 && n <= MAXRANGENUMBER)) {
          std::cout << calculateFibEven(n) << std::endl;
        }
        else {
          return 0;
        } 
    }
    return 0;
}