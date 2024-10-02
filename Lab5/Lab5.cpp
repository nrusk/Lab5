#include <iostream>
#include <vector>
#include <string>


using namespace std;

static char Cypher(char& c) {

    vector<char> cypherVector{ 'V','F','X','B','L','I','T','Z','J','R','P','H','D','K','N','O','W','S','G','U','Y','Q','M','A','C','E' };

    if (c >= 65 && c <= 90) {                   //is a capital letter
        return (c = (cypherVector[c - 65]));
    }
    else if (c >= 97 && c <= 122) {             //is a lower case letter
        c = (c - 32);                           //convert to upper case
        c = (cypherVector[c - 65]);             //switch with cypher letter
        return (c = (c + 32));                  //convert back to lower case
    }
    else {
        return c;                               //not a letter
    }
}

int main() {

    vector<char> vector2;
    string inputText;
    string message;

    cout << "Enter some text for the cypher: ";
    getline(cin, inputText);

    for (char c : inputText) {
        Cypher(c);
        message += c;
        
    }

    cout << "Encoded message: " << message;
}


