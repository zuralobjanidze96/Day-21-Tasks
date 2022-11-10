#include <iostream>

using namespace std;

int main()
{
    int year;
    cout << "შეიყვანეთ წელი: ";
    cin >> year;
    
    if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)) {
        cout << year << " არის ნაკიანი წელი.";
    } else {
        cout << year << " არ არის ნაკიანი წელი.";
  }

  return 0;
}

