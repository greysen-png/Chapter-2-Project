// This is the main branch for the next three mini programs
// I'll be doing
// Greysen Roy-Pascoe
// 09/25/2024
// Chapter 2 Programming Project
// Program 1!

#include <iostream>
using namespace std;

int main()
{
  float ocean_level = 1.5;
  float five_years = ocean_level * 5;
  float seven_years = ocean_level * 7;
  float ten_years = ocean_level * 10;

  cout << "In 5 years, sea level will be " << five_years << "mm higher." << endl;
  cout << "In 7 years, the sea level will be " << seven_years << "mm higher than before.\n";
  cout << "And in 10 years, the sea level will be " << ten_years << "mm higher than before.\n";
  cout << "That's a lot of sea level!" << endl; // lol
  return 0; // WHY DOES THIS HAVE TO BE HERE?
            // you told us once and now I don't remember
            // why are we returning 0 in the function?
}