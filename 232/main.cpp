#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

const float MAXPOSSIBLEQUERRY = 100;
const float MINPOSSIBLEQUERRY = 1;
const float MAXPOSSIBLEPOINTS = 175;
const float MINPOSSIBLEPOINTS = 1;

long playTheRace(long winningPoints) {
  
  long result = 0;

  float player1 = 0;
  float player2 = 0;

  

  return result;
}

int main() {

    int t;
    std::cin >> t;

    for (int i = 0; i < t; i++) {
      long n;
      std::cin >> n;
      if ((t >= MINPOSSIBLEQUERRY && t <= MAXPOSSIBLEQUERRY) && (n >= MINPOSSIBLEPOINTS && n <= MAXPOSSIBLEPOINTS)) {
        std::cout << playTheRace(n) << std::endl;
      }
    }

    return 0;
}


/*
float neededNumberToWin(float winningPoints) {
  return (((std::log(winningPoints) / std::log(2)) + 1));
}

float playTheGame(float numberOfTurns, int player1Turns) {
  float probabilityOfSuccess = 0.5 * numberOfTurns;

  if (probabilityOfSuccess < 0.5 * (numberOfTurns - 1) * player1Turns) {
    playTheGame(numberOfTurns - 1, player1Turns + 1);
  }
  else {
    return probabilityOfSuccess;
  }
}

float calculateProb(float number) {

}

long playTheRace(long winningPoints) {
  
  long result = 0;

  float player1 = 0;
  float player2 = 0;

  float optimalNumberForOneTurn = neededNumberToWin(winningPoints);
  std::cout << "Ganar de un turno necesito: " << optimalNumberForOneTurn << std::endl;

  int player1Turns = 1;
  float maximNumber = playTheGame(optimalNumberForOneTurn, player1Turns);
  std::cout << maximNumber << std::endl;

  float finalProbability = calculateProb(maximNumber);

  return result;
}

int main() {

    int t;
    std::cin >> t;

    for (int i = 0; i < t; i++) {
      long n;
      std::cin >> n;
      if ((t >= MINPOSSIBLEQUERRY && t <= MAXPOSSIBLEQUERRY) && (n >= MINPOSSIBLEPOINTS && n <= MAXPOSSIBLEPOINTS)) {
        std::cout << playTheRace(n) << std::endl;
      }
    }

    return 0;
}
*/