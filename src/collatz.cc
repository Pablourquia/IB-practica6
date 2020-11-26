#include <iostream>
using namespace std;

int main(){
    cout << "Dame un numero de entrada para comprobar la secuencia de Collatz " << endl;
    int kInitialValue;
    cin >> kInitialValue;

    while (kInitialValue != 1){
        if (kInitialValue %2 == 0){
          kInitialValue = kInitialValue /2;
        }
        else {
            kInitialValue= kInitialValue * 3 +1;
        }
        cout << kInitialValue << endl;
    }
    
    




        

        

    }

    


