// Ordenamiento QuickSort con ficheros
// Joseph Santamaria
// 10/12/2022

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
    string nombreArchivo = "numeros.dat";
    int newLine[10], i=0;
    ifstream archivo(nombreArchivo.c_str()); 
    string linea;
    while (getline(archivo, linea)) {
        // convierte los strings en enteros
        newLine[i] = atoi(linea.c_str());
        cout<<newLine[i]<<endl;
        i++;
    } 
    return 0;
}