#include <iostream>

int main(){
  int number1, number2, sum;

  std::cout << "Entre com o primeiro número: \n";
  std::cin >> number1;

  std::cout << "Entre com o segundo número: \n";
  std::cin >> number2;

  sum = number1 + number2;

  std::cout << number1 << " + " << number2 << " = " << sum << std::endl;

  return 0;
}
