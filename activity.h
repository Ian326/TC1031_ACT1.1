// =================================================================
//
// Description: This program represents three ways to code and run a basic
//							operation in C++ . Iterative, recursive and direct addtiion
// File: activity.h
// Author: Ian Joan Padrón Corona - A01708940
// Date: 25/08/2022
//
// =================================================================
#ifndef ACTIVITY_H
#define ACTIVITY_H

#include<iostream>
using namespace std;

// =================================================================
// sumaIterativa. This method will calculate the sum from 1 to n with
//  an iterative method.
//
// @param n	The maximum limit of the sum.
// @return	The result of the addition from 1 to n.
// @Complexity	O(n-1) + 4
// =================================================================
unsigned int sumaIterativa(unsigned int n) {
	int sum = 0;
	for (int i = 0 ; i <= n ; i++) {
		sum = sum + i;
	}
	cout << to_string(sum);
	return sum;
}

// =================================================================
// sumaRecursiva. This method will calculate the sum from 1 to n with
// a recursive method.
//
// @param n	The maximum limit of the sum.
// @return	The result of the addition from 1 to n.
// @Complexity	O(n)
// =================================================================
unsigned int sumaRecursiva(unsigned int n) {
	if(n == 1) {
    return n;
  }
  else {
    return n + sumaRecursiva(n - 1);
  }
}

// =================================================================
// sumaDirecta. This method will Calculate the sum from 1 to n with
//  a mathematical method.
//
// @param n	The maximum limit of the sum.
// @return	The result of the addition from 1 to n.
// @Complexity	O(4)
// =================================================================
unsigned int sumaDirecta(unsigned int n) {

	int sum = (n * (1 + n)) / 2;
	return sum;
}

#endif /* ACTIVITY_H */
