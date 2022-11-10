#include <iostream>
using namespace std;

int main()
{
   float a, b;
   char oprt;
   
   cout << "შეიყვანეთ პირველი რიცხვი: ";
   cin >> a;
   cout << "შეიყვანეთ ოპერატორი (+, -, *, /): ";
   cin >> oprt;
   cout << "შეიყვანეთ მეორე რიცხვი: ";
   cin >> b;
   cout << endl;
   
   switch (oprt) {
       case '+' :
       cout << a + b;
       break;
       
       case '-' :
       cout << a -b;
       break;
       
       case '*' :
       cout << a * b;
       break;
       
       case '/' :
       cout << a / b;
       break;
       
       default :
       cout << "შეიყვანეთ ოპერატორი სწორად.";
   }

    return 0;
}