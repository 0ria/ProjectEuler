#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

std::vector<std::vector<int> > sudokuMatrix;

void showMatrix(void) {
  for (auto row : sudokuMatrix) {
    for (auto number : row) {
      std::cout << number;
    }
    std::cout << std::endl;
  } 
}

bool checkNumberInPos(int posY, int posX, int number) {
  for (int i = 0; i < 9; i++)
    if (sudokuMatrix[posY][i] == number)
      return false;
  for (int i = 0; i < 9; i++)
    if (sudokuMatrix[i][posX] == number)
      return false;
  int auxPosX = std::floor(posX / 3) * 3;
  int auxPosY = std::floor(posY / 3) * 3;
  for (int i = 0; i < 3; i++)
    for (int j = 0; j < 3; j++)
      if (sudokuMatrix[auxPosY + i][auxPosX + j] == number)
        return false;
  return true;
}

void implementSolution(void) {
  for (int j = 0; j < 9; j++) {
    for (int i = 0; i < 9; i++) {
      if (sudokuMatrix[j][i] == 0) {
        for (int num = 1; num <= 9; num++) {
          if (checkNumberInPos(j, i, num)) {
            sudokuMatrix[j][i] = num;
            implementSolution();
            sudokuMatrix[j][i] = 0;
          }
        }
        return; 
      }
    }
  }
  showMatrix();
}


int main() {
    for (int i = 0; i < 9; i++) {
      std::vector<int> numbers;
      std::string n;
      std::cin >> n;
      for (char const c: n) {
        numbers.push_back(c - '0');
      }
      sudokuMatrix.push_back(numbers);
      numbers.clear();
    }
    implementSolution();
    return 0;
}