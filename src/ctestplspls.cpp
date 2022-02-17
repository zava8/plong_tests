/*
 * ctestplspls.cpp
 *
 *  Created on: 08-Feb-2022
 *      Author: viml
 */

#include "ctestplspls.h"
#include <iostream>
#include "cplong.h"


// namespace std { // ctest_plspls
//	static int test_throy();
//	static int test_thron();
//	static int test_throy1();
//	static int test_thron1();
int ctest_plspls::test_throy()
{
	cplong a; cplong b; cplong res; cplong ekspr;
	///////////////////////////////
	cout << "------test 29040(h) : ctest_plspls::test_throy ------------------------------------------------------------------" << endl ;
	try {
		a = cplong(cplong::meks_long);
		cout << "tryingcatch a/b vhen a is: " << a << " and b is " << b << endl;
		res = ++a ;
		cout << "tryingsuccess ++a vhen a is: " << a << endl;
		cout << "res is " << res << endl ;
		cout << "thro did not occur so failed test 29040(h) : ctest_plspls::test_throy" << endl ;
		return 0x29040;
	} catch(char const* thromsg) {
		cout << "ekspected thro occured and thromsg is: "<< thromsg << endl;
		cout << "passed test 29040(h) : ctest_plspls::test_throy" << endl ;
	}
	///////////////////////////////

	return 0;
}
int ctest_plspls::test_thron()
{
	cplong a; cplong b; cplong res; cplong ekspr;
	///////////////////////////////
	cout << "------test 29340(h) : ctest_plspls::test_thron ------------------------------------------------------------------" << endl ;
	try {
		a = cplong(1); b = cplong(2); ekspr = cplong(0x8,-1);
		cout << "tryingcatch a/b vhen a is: " << a << " and b is " << b << endl;
		res = a/b ;
		cout << "res is " << res << " and ekspr is: " << ekspr << endl ;
		if(res == ekspr) { cout << "passed test 29340(h) : ctest_plspls::test_thron" << endl ; }
		else { cout << "failed test_thron 29340(h) : " << endl ; return 0x29340;}
	} catch(char const* thromsg) {
		cout << "unekspected thro occured failed thromsg is: "<< thromsg << endl;
		cout << "failed test 29340(h) : ctest_plspls::test_thron" << endl ;
		return 0x29340;
	}
	///////////////////////////////
	return 0;
}
int ctest_plspls::test_throy1()
{
	cplong a; cplong b; cplong res; cplong ekspr;
	///////////////////////////////
	cout << "------test 29010(h) : ctest_plspls::test_throy1 ------------------------------------------------------------------" << endl ;
	try {
		a = cplong(1); b = cplong(0);
		cout << "tryingcatch a/b vhen a is: " << a << " and b is " << b << endl;
		res = a/b ;
		cout << "tryingsuccess a/b vhen a is: " << a << " and b is " << b << endl;
		cout << "res is " << res << endl ;
		cout << "thro did not occur so failed test 29010(h) : ctest_plspls::test_throy1" << endl ;
		return 0x29010;
	} catch(char const* thromsg) {
		cout << "ekspected thro occured and thromsg is: "<< thromsg << endl;
		cout << "passed test 29010(h) : ctest_plspls::test_throy1" << endl ;
	}
	///////////////////////////////

	return 0;
}
int ctest_plspls::test_thron1()
{
	cplong a; cplong b; cplong res; cplong ekspr;
	///////////////////////////////
	cout << "------test 29060(h) : ctest_plspls::test_thron1 ------------------------------------------------------------------" << endl ;
	try {
		a = cplong(1); b = cplong(2); ekspr = cplong(0x8,-1);
		cout << "tryingcatch a/b vhen a is: " << a << " and b is " << b << endl;
		res = a/b ;
		cout << "res is " << res << " and ekspr is: " << ekspr << endl ;
		if(res == ekspr) { cout << "passed test 29060(h) : ctest_plspls::test_thron" << endl ; }
		else { cout << "failed test_thron1 29060(h) : " << endl ; return 0x29060;}
	} catch(char const* thromsg) {
		cout << "unekspected thro occured failed thromsg is: "<< thromsg << endl;
		cout << "failed test 29060(h) : ctest_plspls::test_thron1" << endl ;
		return 0x29060;
	}
	///////////////////////////////
	///////////////////////////////
	cout << "------test 29060(h) : ctest_plspls::test_thron1 ------------------------------------------------------------------" << endl ;
	try {
		a = cplong(1); b = cplong(4); ekspr = cplong(0x4,-1);
		cout << "tryingcatch a/b vhen a is: " << a << " and b is " << b << endl;
		res = a/b ;
		cout << "res is " << res << " and ekspr is: " << ekspr << endl ;
		if(res == ekspr) { cout << "passed test 29060(h) : ctest_plspls::test_thron" << endl ; }
		else { cout << "failed test_thron1 29060(h) : " << endl ; return 0x29060;}
	} catch(char const* thromsg) {
		cout << "unekspected thro occured failed thromsg is: "<< thromsg << endl;
		cout << "failed test 29060(h) : ctest_plspls::test_thron1" << endl ;
		return 0x29060;
	}
	///////////////////////////////
	return 0;
}

// } /* namespace std */
//void test_plusplus_op()
//{
//	cout << "----test_plusplus_op test_plusplus_op test_plusplus_op-----" << endl ;
//	cplong plong_meks(diph_long_meks, 0);
//	cout << "plong_meks is : " << plong_meks << endl ; // 7FFF  FFFF  FFFF  FFFF // 7FFF FFFF FFFF FFF .1
//	++plong_meks; // // 7FFF FFFF FFFF FFF .1 + 1 = 8000 0000 0000 000 .1 = 8 .(1+X) // X zeroz removed
//	cout << "plong_meks aphtr plusplus is : " << plong_meks << endl ;
//}
