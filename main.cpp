// This is the main branch for the next three mini programs
// I'll be doing
// Greysen Roy-Pascoe
// 09/25/2024
// Chapter 2 Programming Project
// Program 3

#include <iostream>
using namespace std;

int main()
{
  int soda_customers = 16500;
  float percent_that_purchase_drinks = 0.15;
  float percent_of_drink_people_buying_citrus = 0.58;
  int soda_purchasers = soda_customers * percent_that_purchase_drinks;
  int citrus_soda_purchasers = soda_purchasers * percent_of_drink_people_buying_citrus;

  cout << "About " << soda_purchasers << " people purchase energy drinks while about " << citrus_soda_purchasers << " people prefer citrus-y energy drinks.";

  return 0;
}