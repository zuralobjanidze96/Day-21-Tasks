#include <iostream>

using namespace std;

int main()
{
    
    char Temp;
    cout << "შეიყვანეთ ტემპერატურის საზომი ერთეული (C ან F) : ";
    cin >> Temp;
    
    float Number;
    cout << "შეიყვანეთ რიცხვითი მნიშვნელობა : ";
    cin >> Number;
    
    if ((Temp == 'C') || (Temp == 'c')) {
        cout << "F (ფარენჰეიტი) ტოლია " << Number * 1.8 + 32 << "-ის";
    } else if ((Temp == 'F') || (Temp == 'f')) {
        cout << "C (ცელსიუსი) ტოლია " << (Number - 32) / 1.8 << "-ის";
    } else {
        cout << "შეიყვანეთ სწორად მონაცემები";
    }
    

    return 0;
}
