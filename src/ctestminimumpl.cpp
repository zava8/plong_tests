/*
 * ctestminimumpl.cpp
 *
 *  Created on: 09-Feb-2022
 *      Author: viml
 */

#include "ctestminimumpl.h"
#include <iostream>
#include "cplong.h"

// namespace std {
int ctest_minimumpl::test_throy()
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
int ctest_minimumpl::test_thron()
{
	cplong a; cplong b; cplong res; cplong ekspr;
	///////////////////////////////
	cout << "------test 29340(h) : ctest_minimumpl::test_thron ------------------------------------------------------------------" << endl ;
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
int ctest_minimumpl::test_throy1()
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
int ctest_minimumpl::test_thron1()
{
	cplong a; cplong b; cplong res; cplong ekspr;
	///////////////////////////////
	cout << "------test 27060(h) : ctest_minimumpl::test_thron1 ------------------------------------------------------------------" << endl ;
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
	cout << "------test 27060(h) : ctest_minimumpl::test_thron1 ------------------------------------------------------------------" << endl ;
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
//int test_minimum_pl_setover()
//{
//	cout << "----test_minimum_pl_setover test_minimum_pl_setover -----" << endl ;
//	try { cplong pl4(0x4, -0x9); } catch(c_plong_ekseption& plong_ekseption1) {
//		cout << "eksepsn caught: " << plong_ekseption1.vat() << endl;
//		cout << "c_plong::minimum_pl is : -" << -cplong::minimum_pl << endl;
//		return -1;
//	}
//	cout << "testing agar ekseption ke baaw yha phuchega ki nhi" << endl ;
//	return 0;
//}
