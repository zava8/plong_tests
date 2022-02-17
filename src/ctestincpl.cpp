/*
 * ctestincpl.cpp
 *
 *  Created on: 08-Feb-2022
 *      Author: viml
 */

#include "ctestincpl.h"
#include <iostream>
#include "cplong.h"


// namespace std {
int ctest_incpl::test_throy()
{
	cplong a; cplong b; cplong res; cplong ekspr;
	///////////////////////////////
	cout << "------test 29040(h) : test_throy ------------------------------------------------------------------" << endl ;
	try {
		a = cplong(1); b = cplong(0);
		cout << "tryingcatch a/b vhen a is: " << a << " and b is " << b << endl;
		res = a/b ;
		cout << "tryingsuccess a/b vhen a is: " << a << " and b is " << b << endl;
		cout << "res is " << res << endl ;
		cout << "thro did not occur so failed test 29040(h) : test_throy" << endl ;
		return 0x29040;
	} catch(char const* thromsg) {
		cout << "ekspected thro occured and thromsg is: "<< thromsg << endl;
		cout << "passed test 29040(h) : test_throy" << endl ;
	}
	///////////////////////////////

	return 0;
}
int ctest_incpl::test_thron()
{
	cplong a; cplong b; cplong res; cplong ekspr;
	///////////////////////////////
	cout << "------test 29340(h) : ctest_incpl::test_thron ------------------------------------------------------------------" << endl ;
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
int ctest_incpl::test_throy1()
{
	cplong a; cplong b; cplong res; cplong ekspr;
	///////////////////////////////
	cout << "------test 29010(h) : test_throy1 ------------------------------------------------------------------" << endl ;
	try {
		a = cplong(1); b = cplong(0);
		cout << "tryingcatch a/b vhen a is: " << a << " and b is " << b << endl;
		res = a/b ;
		cout << "tryingsuccess a/b vhen a is: " << a << " and b is " << b << endl;
		cout << "res is " << res << endl ;
		cout << "thro did not occur so failed test 29010(h) : test_throy1" << endl ;
		return 0x29010;
	} catch(char const* thromsg) {
		cout << "ekspected thro occured and thromsg is: "<< thromsg << endl;
		cout << "passed test 29010(h) : test_throy1" << endl ;
	}
	///////////////////////////////

	return 0;
}
int ctest_incpl::test_thron1()
{
	cplong a; cplong b; cplong res; cplong ekspr;
	///////////////////////////////
	cout << "------test 29060(h) : ctest_incpl::test_thron1 ------------------------------------------------------------------" << endl ;
	try {
		a = cplong(1); b = cplong(2); ekspr = cplong(0x8,-1);
		cout << "tryingcatch a/b vhen a is: " << a << " and b is " << b << endl;
		res = a/b ;
		cout << "res is " << res << " and ekspr is: " << ekspr << endl ;
		if(res == ekspr) { cout << "passed test 29060(h) : test_thron" << endl ; }
		else { cout << "failed test_thron1 29060(h) : " << endl ; return 0x29060;}
	} catch(char const* thromsg) {
		cout << "unekspected thro occured failed thromsg is: "<< thromsg << endl;
		cout << "failed test 29060(h) : test_thron1" << endl ;
		return 0x29060;
	}
	///////////////////////////////
	///////////////////////////////
	cout << "------test 29060(h) : ctest_incpl::test_thron1 ------------------------------------------------------------------" << endl ;
	try {
		a = cplong(1); b = cplong(4); ekspr = cplong(0x4,-1);
		cout << "tryingcatch a/b vhen a is: " << a << " and b is " << b << endl;
		res = a/b ;
		cout << "res is " << res << " and ekspr is: " << ekspr << endl ;
		if(res == ekspr) { cout << "passed test 29060(h) : test_thron" << endl ; }
		else { cout << "failed test_thron1 29060(h) : " << endl ; return 0x29060;}
	} catch(char const* thromsg) {
		cout << "unekspected thro occured failed thromsg is: "<< thromsg << endl;
		cout << "failed test 29060(h) : test_thron1" << endl ;
		return 0x29060;
	}
	///////////////////////////////
	return 0;
}

// } /* namespace std */
//void test_inc_pl() {
//	cout << "----test_inc_pl test_inc_pl test_inc_pl-----" << endl ;
//	cplong dv6(0x580000000,-8); cout << "in test_inc_pl : dv6 is : " << dv6 << endl ;
//	int increased_pl = dv6.inc_pl(0);
//	cout << "increased_pl is : " << increased_pl << endl ;
//	cout << "in test_inc_pl : dv6 is : " << dv6 << endl ;
//}
