#include <iostream>

  using std::cout;
  using std::cin;
  using std::endl;

int main(){

  int number1, number2;
  cout << "Entre com 2 valores inteiros:\n";
  cin >> number1 >> number2;

  if (number1 == number2)
    cout << "Os números são iguais" << endl;

  if (number1 != number2)
    cout << "Os números são diferentes" << endl;

  if (number1 > number2)
    cout << number1 << " é maior que " << number2 << endl;

  if (number1 < number2)
    cout << number1 << " é menor que " << number2 << endl;

  return 0;
}
