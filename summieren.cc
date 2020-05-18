#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
  int zahl;
  ifstream fin("daten.txt"); 
  int b;
  int c;
  string zahlenpaareMitSumme = "";
  //const char* Ergebnisse [234];
  for(int i=0; i<234 ; i++){
    fin >> b;
    fin >> c;
    //Zahlenpaare mit Summe ausgeben
    //cout<<"("<< b << " , " << c << ")" <<" Summe: " << b+c <<endl;

    /*
    hier habe ich versucht die Zahlenpaare in ein Array zu speichern und dann in daten.txt zu schreiben das hat aber irgendwie nicht geklappt.Würde gerne wissen wieso, weil sonst kann ich die Zahlenpaare in daten.txt nicht überschreiben.

    Ergebnisse[i] =("("+ to_string(b)+"," + to_string(c) + ")"+" Summe: " + to_string(b+c)+ "\n").c_str();
    */
    zahlenpaareMitSumme.append("\n").append("(").append(to_string(b)).append(",").append(to_string(c)).append(")").append(" Summe: ").append(to_string(c+b));
    cout<<zahlenpaareMitSumme;
       std::ofstream fout("daten.txt" , fstream::app); fout << zahlenpaareMitSumme;
    fout.close();
    zahlenpaareMitSumme="";
  }
  fin.close();
}