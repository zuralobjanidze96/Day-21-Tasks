#include <iostream>

using namespace std;

int main()
{
    float a, b, c;
    cout << "შეიყვანეთ რიცხვი a: ";
    cin >> a;
    
    cout << "შეიყვანეთ რიცხვი b: ";
    cin >> b;
    
    cout << "შეიყვანეთ რიცხვი c: ";
    cin >> c;
    
    if ((a>b) && (a>c)) {
        cout << "შეყვანილი რიცხვებიდან უდიდესი არის a";
    } else if ((b>a) && (b>c)) {
        cout << "შეყვანილი რიცხვებიდან უდიდესი არის b";
    } else if ((c>a) && (c>b)) {
        cout << "შეყვანილი რიცხვებიდან უდიდესი არის c";
    } else if ((a==b) || (a==c) || (b==c)) {
        cout << "შეყვანილი რიცხვებიდან უდიდესები ერთმანეთის ტოლია";
    } else {
        cout << "შეიყვანეთ რიცხვები სწორად";
    }

    return 0;
}

