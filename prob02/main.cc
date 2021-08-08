

//
#include <iomanip>
#include <iostream>

//
using std::cout, std::cin, std::endl;

//
const float TAX_RATE = 0.075;

//
int main() {
  //  Declare variables
  float meal_cost, taxes, tip_percentage, tip, total;

  //
  cout << "Please input meal cost: ";
  cin >> meal_cost;

  //
  cout << "Please input tip percentage: ";
  cin >> tip_percentage;
  tip_percentage /= 100.0;

  //  Compute Taxes, Tip, and Total
  taxes = meal_cost * TAX_RATE;
  tip = meal_cost * tip_percentage;
  total = meal_cost + taxes + tip;

  //  Set float precision so money amounts come out right
  std::cout << std::fixed << std::setprecision(2);

  //
  cout << endl
       << "Restaurant Bill" << endl
       << "====================" << endl
       << "Subtotal: $" << meal_cost << endl
       << "Taxes: $" << taxes << endl
       << "Tip: $" << tip << endl
       << "====================" << endl
       << "Total: $" << total << endl;

  return 0;
}
