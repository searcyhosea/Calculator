#include <iostream>

int main(int argc, char *argv[])
{
  while (true) {
    
    int NumberOne;
    int NumberTwo;
    char Operator;
    int Result;
    
    std::cout << "First Number: ";
    std::cin >> NumberOne;
    std::cout << endl;

    std::cout << "Mathematical Operator: ";
    std::cin >> Operator;
    std::cout << endl;

    std::cout << "Second Number: ";
    std::cin >> NumberTwo;
    std::cout << endl;

    if (Operator == '+') {
      Result = NumberOne + NumberTwo;
      printf("%s", Result);
    }
    else if (Operator == '-') {
      Result = NumberOne - NumberTwo;
      printf("%s", Result);
    }
    else if (Operator == '*') {
      Result = NumberOne * NumberTwo;
      printf("%s", Result);
    }
    else if (Operator == '/') {
      Result = NumberOne / NumberTwo;
      printf("%s", Result);
    }
    
  }
  return 0; 
}
