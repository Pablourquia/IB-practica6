#include <iostream>
#include <vector>
#include<time.h>
using namespace std;

double frand(double fMin, double fMax) {
  double f = (double)rand() / RAND_MAX;
  return fMin + f * (fMax - fMin);
}

int main(){
  vector <double> numbers;
  int kVectorSize{4};
  double minimum_value = 10;
  double maximum_value = 0;
  double sum = (0.0);
  srand(time(NULL));
  for (int i = 0; i<= kVectorSize; i++){
    double random_number = frand(0.0, 10.0); 
    numbers.push_back(random_number);
    if (numbers[i] > maximum_value){
      maximum_value = numbers[i];
}
    if (numbers[i] < minimum_value){
      minimum_value = numbers[i];
} 
   
    sum = sum + numbers[i];
   
}
  cout << "La media de los tres numeros aleatorios es " << sum/kVectorSize << endl;
  cout << "El valor maximo es " << maximum_value << endl;
  cout << "El valor minimo es " << minimum_value << endl;
  return 0;
}
