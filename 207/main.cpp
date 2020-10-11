#include <algorithm>
#include <cmath>
#include <cstdio>
#include <iostream>
#include <vector>
using namespace std;

const double CUATRO = 4;
const double DOS = 2;
const double MINPOSSIBLEVALUE = 1;

bool resolve(double firstDigit, double secondDigit, double thirdDigit) {
  return (firstDigit == (secondDigit + thirdDigit));
}

bool cheackIfPerfect(bool equal) {
  if (isdigit(equal))
    return true;
  else 
    return false;
}

std::pair<int, int> checkProportion(double realPart, int someInteger) {
  int num;
  int den;
  while (someInteger > MINPOSSIBLEVALUE) {
    if (realPart <= someInteger) {
      num++;
    }
    else{
      den++;
    }
  }
  std::pair<int, int> result (num, den);
  return result;
}

int main() { 
  
  double pwdNumber;
  
  double realNumber = 5;

  bool isEqual = resolve(pow(CUATRO, pwdNumber), pow(DOS, pwdNumber), realNumber);
  bool isPerfect = cheackIfPerfect(isEqual);
  
  //std::cout << isEqual << std::endl;

  int anyNumber;

  std::pair<int, int> partitionProportion = checkProportion(realNumber, anyNumber);





  





  

  return 0; 
  
  }
