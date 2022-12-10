#include <iostream>
int main(){

	using namespace std;

	int n[7]; //declaring n as an array of 7 integers //
  	int i,j;

  	// initializing elements of array n //
	 for ( i = 0; i<7; i++ )
	 {
	 	cout << "Enter value of n[" << i << "]"<< endl;
    	        cin >> n[i];
  	}

  	// printing the values of elements of array //
  	for (j = 0; j < 7; j++ )
  	{
    	       cout << "n[" << j << "] = " << n[j] << endl;
  	}

	return 0;
}