/*
 * ctestmultiplyop.cpp
 *
 *  Created on: 08-Feb-2022
 *      Author: viml
 */

#include "ctestmultiplyop.h"
#include <iostream>
#include "cplong.h"

// namespace std {
int ctest_op::test_throy()
{
	cplong a; cplong b; cplong res; cplong ekspr;
	///////////////////////////////
	cout << "------test 27040(h) : test_throy ------------------------------------------------------------------" << endl ;
	try {
		a = cplong(1); b = cplong(0);
		cout << "tryingcatch a/b vhen a is: " << a << " and b is " << b << endl;
		res = a/b ;
		cout << "tryingsuccess a/b vhen a is: " << a << " and b is " << b << endl;
		cout << "res is " << res << endl ;
		cout << "thro did not occur so failed test 27040(h) : test_throy" << endl ;
		return 0x27040;
	} catch(char const* thromsg) {
		cout << "ekspected thro occured and thromsg is: "<< thromsg << endl;
		cout << "passed test 27040(h) : test_throy" << endl ;
	}
	///////////////////////////////

	return 0;
}
int ctest_op::test_thron()
{
	cplong a; cplong b; cplong res; cplong ekspr;
	///////////////////////////////
	cout << "------test 29340(h) : ctest_op::test_thron ------------------------------------------------------------------" << endl ;
	try {
		a = cplong(1); b = cplong(2); ekspr = cplong(0x8,-1);
		cout << "tryingcatch a/b vhen a is: " << a << " and b is " << b << endl;
		res = a/b ;
		cout << "res is " << res << " and ekspr is: " << ekspr << endl ;
		if(res == ekspr) { cout << "passed test 29340(h) : test_thron" << endl ; }
		else { cout << "failed test_thron 29340(h) : " << endl ; return 0x29340;}
	} catch(char const* thromsg) {
		cout << "unekspected thro occured failed thromsg is: "<< thromsg << endl;
		cout << "failed test 29340(h) : test_thron" << endl ;
		return 0x29340;
	}
	///////////////////////////////
	return 0;
}
int ctest_op::test_throy1()
{
	cplong a; cplong b; cplong res; cplong ekspr;
	///////////////////////////////
	cout << "------test 27010(h) : test_throy1 ------------------------------------------------------------------" << endl ;
	try {
		a = cplong(1); b = cplong(0);
		cout << "tryingcatch a/b vhen a is: " << a << " and b is " << b << endl;
		res = a/b ;
		cout << "tryingsuccess a/b vhen a is: " << a << " and b is " << b << endl;
		cout << "res is " << res << endl ;
		cout << "thro did not occur so failed test 27010(h) : test_throy1" << endl ;
		return 0x27010;
	} catch(char const* thromsg) {
		cout << "ekspected thro occured and thromsg is: "<< thromsg << endl;
		cout << "passed test 27010(h) : test_throy1" << endl ;
	}
	///////////////////////////////

	return 0;
}
int ctest_op::test_thron1()
{
	cplong a; cplong b; cplong res; cplong ekspr;
	///////////////////////////////
	cout << "------test 27060(h) : ctest_op::test_thron1 ------------------------------------------------------------------" << endl ;
	try {
		a = cplong(1); b = cplong(2); ekspr = cplong(0x8,-1);
		cout << "tryingcatch a/b vhen a is: " << a << " and b is " << b << endl;
		res = a/b ;
		cout << "res is " << res << " and ekspr is: " << ekspr << endl ;
		if(res == ekspr) { cout << "passed test 27060(h) : test_thron" << endl ; }
		else { cout << "failed test_thron1 27060(h) : " << endl ; return 0x27060;}
	} catch(char const* thromsg) {
		cout << "unekspected thro occured failed thromsg is: "<< thromsg << endl;
		cout << "failed test 27060(h) : test_thron1" << endl ;
		return 0x27060;
	}
	///////////////////////////////
	///////////////////////////////
	cout << "------test 27060(h) : ctest_op::test_thron1 ------------------------------------------------------------------" << endl ;
	try {
		a = cplong(1); b = cplong(4); ekspr = cplong(0x4,-1);
		cout << "tryingcatch a/b vhen a is: " << a << " and b is " << b << endl;
		res = a/b ;
		cout << "res is " << res << " and ekspr is: " << ekspr << endl ;
		if(res == ekspr) { cout << "passed test 27060(h) : test_thron" << endl ; }
		else { cout << "failed test_thron1 27060(h) : " << endl ; return 0x27060;}
	} catch(char const* thromsg) {
		cout << "unekspected thro occured failed thromsg is: "<< thromsg << endl;
		cout << "failed test 27060(h) : test_thron1" << endl ;
		return 0x27060;
	}
	///////////////////////////////
	return 0;
}

// } /* namespace std */
//void test_mltiply_op()
//{
//	cout << "----test_mltiply_op test_mltiply_op test_mltiply_op-----" << endl ;
//	cplong pl4(1,-8);
//	cplong pl5(1,2);
//	cplong pl7m = pl4 * pl5 ;
//	cout << "pl7m = "<< pl4 << " * " << pl5 << " = " << pl7m << endl  ;
//	cplong pl9m = pl4 * 0x5 ;
//	cout << "pl9m = "<< pl4 << " * 0x5 = " << pl9m << endl  ;
//	cplong plbm = 0x2 * pl4 ;
//	cout << "plbm = 0x2 * "<< pl4 << " = " << plbm << endl  ;
//	plbm *= pl4 ;
//	cout << "plbm *= " << pl4 <<". nao plbm = " << plbm << endl  ;
//} // test_mltiply_op
