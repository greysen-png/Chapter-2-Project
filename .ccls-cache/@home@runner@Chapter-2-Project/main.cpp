// This is the main branch for the next three mini programs
// I'll be doing
// Greysen Roy-Pascoe
// 09/25/2024
// Chapter 2 Programming Project
// Program 2 (the car one)

#include <iostream>
using namespace std;

int main()
{
  float driving_in_town = 23.5;
  float driving_on_highway = 28.9;
  int gas_tank = 20;

  cout << "The distance the car can travel on one tank of gas when driven in town is " << driving_in_town * gas_tank << " miles." << endl;

  cout << "The distance it can travel when driving on the highway is " << driving_on_highway * gas_tank << " miles." << endl;

  cout << "WOW!\n";

  return 0;
}