#include <iostream>
using namespace std;

// Homework 3

int main() {
  int num1 , num2;
  cout << "Enter The First Number: ";
  cin >> num1 ;
  cout << "\nEnter The Second Number: ";
  cin >> num2;

  int sum, sub, multication, division;
  sum = num1 + num2;
  sub = num1 - num2;
  multication = num1 * num2;
  division = num1 / num2;

  cout << "\nSum is:  " << sum;
  cout << "\nSubtraction is:  " << sub;
  cout << "\nMultication is:  " << multication;
  cout << "\nDivision is:  " << division;

  if(num1 == 4){
    cout <<"num1 is four";
  } 
  cout <<endl<< endl;
  return 0;
}