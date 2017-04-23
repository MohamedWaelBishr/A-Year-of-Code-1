#include <iostream>
using namespace std;

int main() {

  float stoppingDistance, speed, distance;

  cout << "Enter Speed in mph :" << endl;
  cin >> speed;

  cout << "Enter Distance :" << endl;
  cin >> distance;

  stoppingDistance = speed * (2.25 + speed / 21);

  if (stoppingDistance == distance + 0.1 || stoppingDistance == distance - 0.1 || stoppingDistance == distance) {

    cout << "Minor Wreck";
  } else {
    cout << "Major Wreck";

  }

  return 0;
}
