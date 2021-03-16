#include <iostream>
#include <fstream>

using namespace std;

const int SIZE = 1000;



int main() {
	
  ifstream in;
  in.open("ciagi.txt");
  int tab[1000];
  int length, roznica;
  int licznik = 0, max = 0;
  bool flag;
  for (int i = 0; i < SIZE; i++) {
    flag = true;
    in >> length;
    for (int j = 0; j < length; j++) in >> tab[j];
    roznica = tab[1] - tab[0];
    for (int j = 1; j < length; j++) {
      if (tab[j] - tab[j - 1] != roznica) flag = false;
    }
    if (flag) {
      licznik++;
      if (roznica > max) max = roznica;
    }
  }
  
  
  
  in.close();
  ofstream out;
  out.open("wynik.txt", ios::out );
  out << "Liczba ciagow: " << licznik << "\n";
  cout << "Liczba ciagow: " << licznik << "\n";
  out << "Najwieksza roznica: " << max << "\n";
  cout << "Najwieksza roznica: " << max << "\n";
  out.close();



}
