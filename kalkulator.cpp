#include <iostream>

using namespace std;


void main()
{
  char num1, num2;
  int num1, num2;
  char op;
  cout << "Wprowadź pierwszą liczbę: ";
  cin >> num1;

  cout << "Wprowadź drugą liczbę: ";
  cin >> num2;

  cout << "Wprowadź symbol operacji (+, -, *, /): ";
  cin >> op;

  switch (op)
  {
    case '+':
      cout << num1 + num2 << endl;
      break;
    case '-':
      cout << num1 - num2 << endl;
      break;
    case '*':
      cout << num1 * num2 << endl;
      break;
    case '/':
      if (num2 == 0)
      {
        cout << "Nie można dzielić przez zero!" << endl;
      }
      else
      {
        cout << num1 / num2 << endl;
      }
      break;
    default:
      cout << "Nieznana operacja" << endl;
      break;
  }

  return 1;
}
