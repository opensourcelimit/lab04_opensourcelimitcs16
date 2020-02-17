#include "arrayFuncs.h"
#include <cstdlib>
#include <iostream>
using namespace std;

int maxOfArray(int a[], int size) {
  if(size <1){
	  cerr <<"Error: maxOfArray called with size < 1" << endl;
	  exit(1);
  }
  int max = 0; // STUB!  Replace with correct code.
  for (int i = 0; i < size; i++){
	  if(a[i] > max)
		  max = a[i];
  
  }
  return max;
}

