/* array.cpp defines "C style" array operations
 * Name:
 * Date:
 * Begun by: Joel Adams, for CS 112 at Calvin College.
 */
 
#include "array.h"

void initialize(double *a, unsigned size) {
	int val = 0;
	for (unsigned i = 0; i < size; i++) {
		val = i+1;
		a[i] = val;
	}
}
 
void print(double *a, unsigned size) {
	for (unsigned i = 0; i < size; i++) {
		cout << *a << '\t';
		a++;
	}
}		

double average(double *a, unsigned size) {
	double value = 0;
	for(unsigned i = 0; i < size; i++){
		value += *a;
		a++;
	}
	value = value/size;
	return value;
}

double sum(double *a, int size){
	double value = 0;
	for(unsigned i = 0; i < size; i++){
		value += *a;
		a++;
	}
	return value;
}
void read(istream& in, double *a, int size){
	//This function should read size values from in and store them in a.
	for(unsigned i = 0; i < size; i++){
		in >> a[i];
	}

}


void resize(double *&a, int oldSize, int newSize){
	int b[newSize];
	if (newSize > oldSize){
		for(unsigned i = 0; i <oldSize; i++){
			b[i] = *a;
		for(unsigned i = 0; i <newSize; i++){
			b[i+oldSize] = 0;
		}
		}


	}
	if (oldSize > newSize){
		for(unsigned i= 0; i<newSize; i++){
			b[i]= *a;
		}

	}
	delete [] a;
}

void fill(const string& fileName, double *&a, int &numValues){


}
void concat(double *a1, int size1, double *a2, int size2, double *&a3, int &size3){


}

