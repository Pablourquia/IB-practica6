#include <iostream>
#include <string>
using namespace std;

int main (){
    cout << "Este programa esta hecho para que insertes palabras y luego te digo cual es mas grande y mas pequeña" << endl;
    cout << "¿Cuantas palabras vas a introducir?" << endl;
    int number_of_words;
    cin >> number_of_words;

    string word, longest_word, shortest_word = "estaesunacadenamuylarga";
    

    for (int i=1; i<=number_of_words; i++){

        cout  << "Palabra " << i << " :";
        cin >> word;

        if (word.length() >= longest_word.length()){
            longest_word = word;
        }

        if (word.length() <= shortest_word.length()){
            shortest_word = word;
        }

    }
    cout << "La palabra mas larga es " << longest_word << endl;
    cout << "La palabra mas corta es " << shortest_word << endl;
}
