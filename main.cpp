#include <iostream>
#include "lib.h"
using namespace std;
int main() {

 int dimensione;
 cout<<"inserisci dimensione"<<endl;
 cin>>dimensione;
 float array[dimensione];

  for(int i=0; i<dimensione; i++){
      cout<<"inserisci valore "<<i<<" array"<<endl;
      cin>>array[i];
  }

  float ris=max(dimensione,array);
  cout<<"il valore maggiore inserito e': "<<ris<<endl;

    return 0;
}
