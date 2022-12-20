#include <iostream>

using namespace std;

int main()
{
  double num1, num2;
  char op;

  cout << "Wprowadź pierwszą liczbę: ";
  cin >> num1;

  cout << "Wprowadź drugą liczbę: ";
  cin >> num2;

  cout << "Wprowadź symbol operacji (+, -, *, /): ";
  cin >> op;

  if (op == '+')
  {
    cout << num1 + num2 << endl;
  }
  else if (op == '-')
  {
    cout << num1 - num2 << endl;
  }
  else if (op == '*')
  {
    cout << num1 * num2 << endl;
  }
  else if (op == '/')
  {
    if (num2 == 0)
    {
      cout << "Nie można dzielić przez zero!" << endl;
    }
    else
    {
      cout << num1 / num2 << endl;
    }
  }
  else
  {
    cout << "Nieznana operacja" << endl;
  }

  return 0;
}
