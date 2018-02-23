#include<iostream>
#include<math.h>

#define x 2.5


/*
Title : Linear Interpolation
Subject : Numerical Methods
*/

using namespace std;



//formula for linear interpolation which returns double
double func(double x1, double x2, double f1, double f2){
	double sum = f1 + ( x - x1) * ((f2-f1)/(x2-x1));
	return sum;
}

int main(){
    //loop counters

	int i=0,j=0;

	//given finite arrays
	double xs[5]= { 1, 2, 3, 4, 5};
	double f[5] = {1,1.4142,1.7320,2,2.2360};


    cout << "root of 2.5 = " << pow(x,0.5)<<endl;
    cout << "-----------------------------"<<endl;

	//checking if constant "x" is  between two sets of number or not.
	for(i=0; i<=4; i++){
		for(j=0; j<=4; j++){
			if(x>xs[i] && x<xs[j]){
			cout << "interpolation from " << xs[i] << " and " << xs[j] << endl;
            cout << "error count is " << func(xs[i],xs[j], f[i],f[j])<<endl;
            cout << "----------------------------------------"<<endl;
            }
		}
	}
return 0;
}










