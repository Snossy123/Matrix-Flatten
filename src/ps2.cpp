//============================================================================
// Name        : ps2.cpp
// Author      : snossy
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main() {

	// This array can store upto 12 elements (2x3x2)

		int n=2, m=3, p=2;

	    int M3D[n][m][p] = {
	                            {
	                                {1, 2},
	                                {3, 4},
	                                {5, 6}
	                            },
	                            {
	                                {7, 8},
	                                {9, 10},
	                                {11, 12}
	                            }
	                        };


	    int q = n*m*p;
	    int vector1D[q];

	    int y=0;
	    // Displaying the values with proper index.
	    for (int i = 0; i < n; ++i) {
	        for (int j = 0; j < m; ++j) {
	            for (int k = 0; k < p; ++k) {
	            	y =  i*m*p + j*p + k;
	                cout << "test[" << i << "][" << j << "][" << k << "] = " << M3D[i][j][k] << " y= " << y << endl;
//	                3-D array index [i][j][k]             =>  1-D array index [i*5*5 + j*5 + k]
	                vector1D[y] = M3D[i][j][k];
	            }
	        }
	    }

	    for (int y = 0; y < q; ++y) {
	    	cout << "y = " << y << " Val = " << vector1D[y] << endl;
	    }

 return 0;
}
