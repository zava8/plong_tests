/*
 * ctestbodmas.cpp
 *
 *  Created on: 16-Feb-2022
 *      Author: viml
 */

#include "ctestbodmas.h"
#include <iostream>
#include "cplong.h"
//namespace c8 {
int ctest_bodmas::tn()
{
	cplong a, b, c, d, r , er;
	///////////////////////////////
//	cout << "------test 1 : ctest_bodmas::tn ------------------------------------------------------------------" << endl ;
//	try {
//		a = cplong(0x5,0); b = cplong(0x8); c = cplong(2); er=cplong(-6,0);
//		cout << "try r = (a-b)*c; vhen a is: " << a << " and b is " << b << " and c is " << c << endl;
//		r = (a-b)*c;
//		cout << "r is " << r << " and er is: " << er << endl ;
//		if(r == er) { cout << "passed ctest_bodmas::tn 1" << endl ; }
//		else { cout << "failed ctest_bodmas::tn 1" << endl ; return 1;}
//	} catch(char const* thromsg) {
//		cout << "unekspected thro occured failed thromsg is: "<< thromsg << endl;
//		cout << "failed test 1 : ctest_bodmas::tn" << endl ;
//		return 1;
//	}
	///////////////////////////////
	///////////////////////////////
	cout << "------test 2 : ctest_bodmas::tn ------------------------------------------------------------------" << endl ;
	try {
		a = cplong(0x8,0); b = cplong(0x8); c = cplong(3,1); d = cplong(0x60,-1); er=cplong(9,0);
//		cout << "try a = (a+b+c)/d ; vhen a is: " << a << " and b is " << b << " and c is " << c << endl;
//		cout << "a is: " << a << " and b is " << b << endl;
//		cout << "c is: " << c << " and d is " << d << endl;
		a = (a+b+c)/d ;
//		cout << "a is " << a << " and er is: " << er << endl ;
		if(a == er) { cout << "passed ctest_bodmas::tn 2" << endl ; }
		else { cout << "failed ctest_bodmas::tn 2" << endl ; return 1;}
	} catch(char const* thromsg) {
		cout << "unekspected thro occured failed thromsg is: "<< thromsg << endl;
		cout << "failed test 2 : ctest_bodmas::tn" << endl ;
		return 2;
	}
	///////////////////////////////

	return 0;
}
//} /* namespace c8 */
