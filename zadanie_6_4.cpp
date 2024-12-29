#include <iostream>
#include <string>

using namespace std;

int main() {
    cout << "Wprowadz dowolny tekst: ";
    string userText;
    cin >> userText;
    int occurencies = 0;
    do {
        cout << "Wprowadz, ile razy powielic tekst: ";
        cin >> occurencies;
        if (occurencies < 1) {
            cout << "Blad! Wprowadz liczbe dodatnia!\n";
        }
    } while (occurencies < 1);
    string outputText = "";
    for (int i = 0; i < occurencies; i++) {
        outputText = outputText + userText;
    }
    cout << outputText;




    return 0;
}