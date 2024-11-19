#include <iostream>
using namespace std;

int main() {
    double num1, num2;
    char simvol;

    cout << "               ***Kalkulyator*** " << endl;
    cout << "Birinci ededi daxil edin: ";
    cin >> num1;
    cout << "Emeliyyat (+, -, *, /) daxil edin: ";
    cin >> simvol;
    cout << "Ikinci ededi daxil edin: ";
    cin >> num2;

    switch(simvol) {
        case '+':
            cout << "Cavab: " << num1 + num2 << endl;
            break;
        case '-':
            cout << "Cavab: " << num1 - num2 << endl;
            break;
        case '*':
            cout << "Cavab: " << num1 * num2 << endl;
            break;
        case '/':
            if (num2 != 0) {
                cout << "Cavab: " << num1 / num2 << endl;
            } else {
                cout << "0-a bolme mumkun deyil!" << endl;
            }
            break;
        default:
            cout << "Duzgun emeliyyat daxil etmemisiz "<< endl;
            break;
    }

    return 0;
}

