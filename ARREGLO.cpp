
#include<iostream>

using namespace std;

main (){

string vector[5] = {"5", "hola", "2.7", "8,9", "adios"};    // vector indicando el lado de las posiciones

for(int i = 0; i < 5; i++)
    {
        cout << "\n******* DATO ALMACENADO " << i + 1 <<"********:\n";
        cout << vector[i];

}

return 0;

}