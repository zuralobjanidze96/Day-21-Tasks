#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float a, b, c, D;
    
    cout << "შეიყვანეთ a-ს რიცხვითი მნიშვნელობა: ";
    cin >> a;
    
    cout << "შეიყვანეთ b-ს რიცხვითი მნიშვნელობა: ";
    cin >> b;
    
    cout << "შეიყვანეთ c-ს რიცხვითი მნიშვნელობა: ";
    cin >> c;
    cout << endl;
    
    D = b*b - 4 * a * c;
    cout << "დისკრიმინანტი ტოლია: " << D << "-ის, ";
    
    if ((a!=0) && (D > 0)) {
        cout << "X1 ტოლია: " << (-b - sqrt(D)) / (4 * a) << "-ის, ";
        cout << "X2 ტოლია: " << (-b + sqrt(D)) / (4 * a) << "-ის.";
    } else if (D == 0) {
        cout << "X ტოლია: " << -b / (4 * a) << "-ის.";
    } else if (D < 0) {
        cout << "რადგან დისკრიმინანტი ნაკლებია 0-ზე, განტოლებას ამონახსნი არ აქვს.";
    } else {
        cout << "a ტოლია ნულის.";
    }

    return 0;
}
