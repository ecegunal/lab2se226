// lab2 question 3
#include <iostream>
using namespace std;

int main() {
    int x;
    
    
    cout << "enter a number: ";
    cin >> x;
    
    
    for (int i = 1; i <= x; i++) {
        for (int j = 0; j < i; j++) {
            cout << "*";
        }
        cout << endl;  
    }
    
    
    for (int i = x - 1; i > 0; i--) {
        for (int j = 0; j < i; j++) {
            cout << "*";
        }
        cout << endl;  
    }
    
    return 0;
}


//lab 2 question 1
#include <iostream>
#include <string>
using namespace std;

int main() {
    string words[] = {"a","ability","able","about","above","accept","edge","education","effect","effort","eight","either","election",
                      "each","early","earth","easy","economic","economy","edge","education","effect","effort","eight","either",
                      "happen","happy","hard","have","he","head","health","hear","heart","heat","heavy","help","her","here","herself",
                      "history","hit","hold","home","hope","hospital","hot","hotel","hour","house","how","however","huge","human",
                      "academy", "amazing", "art", "article", "artist", "ask", "assume", "at", "attack", "attention", "attorney"};
    
    int size = sizeof(words) / sizeof(words[0]);

    cout << "Words starting with 'e':\n";
    for (int i = 0; i < size; i++) {
        if (words[i][0] == 'e') {
            cout << words[i] << " ";
        }
    }

    cout << "\n\nWords starting with 'h':\n";
    for (int i = 0; i < size; i++) {
        if (words[i][0] == 'h'&& words[i][1] == 'a') {
            cout << words[i] << " ";
        }
    }

    return 0;
}
