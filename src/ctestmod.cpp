/*
 * ctestmod.cpp
 *
 *  Created on: 08-Feb-2022
 *      Author: viml
 */

#include "ctestmod.h"
#include <iostream>
#include "cplong.h"


//ctest_mod
// namespace std {
int ctest_mod::test_throy()
{
	cplong a; cplong b; cplong res; cplong ekspr;
	///////////////////////////////
	cout << "------test 32040(h) : ctest_mod::test_throy ------------------------------------------------------------------" << endl ;
	try {
		a = cplong(1); b = cplong(0);
		cout << "tryingcatch a/b vhen a is: " << a << " and b is " << b << endl;
		res = a/b ;
		cout << "tryingsuccess a/b vhen a is: " << a << " and b is " << b << endl;
		cout << "res is " << res << endl ;
		cout << "thro did not occur so failed test 32040(h) : ctest_mod::test_throy" << endl ;
		return 0x32040;
	} catch(char const* thromsg) {
		cout << "ekspected thro occured and thromsg is: "<< thromsg << endl;
		cout << "passed test 32040(h) : ctest_mod::test_throy" << endl ;
	}
	///////////////////////////////

	return 0;
}
int ctest_mod::test_thron()
{
	cplong a; cplong b; cplong res; cplong ekspr;
	///////////////////////////////
	cout << "------test 29340(h) : ctest_mod::test_thron ------------------------------------------------------------------" << endl ;
	try {
		a = cplong(1); b = cplong(2); ekspr = cplong(0x8,-1);
		cout << "tryingcatch a/b vhen a is: " << a << " and b is " << b << endl;
		res = a/b ;
		cout << "res is " << res << " and ekspr is: " << ekspr << endl ;
		if(res == ekspr) { cout << "passed test 29340(h) : ctest_mod::test_thron" << endl ; }
		else { cout << "failed test_thron 29340(h) : " << endl ; return 0x29340;}
	} catch(char const* thromsg) {
		cout << "unekspected thro occured failed thromsg is: "<< thromsg << endl;
		cout << "failed test 29340(h) : ctest_mod::test_thron" << endl ;
		return 0x29340;
	}
	///////////////////////////////
	return 0;
}
int ctest_mod::test_throy1()
{
	cplong a; cplong b; cplong res; cplong ekspr;
	///////////////////////////////
	cout << "------test 32010(h) : ctest_mod::test_throy1 ------------------------------------------------------------------" << endl ;
	try {
		a = cplong(1); b = cplong(0);
		cout << "tryingcatch a/b vhen a is: " << a << " and b is " << b << endl;
		res = a/b ;
		cout << "tryingsuccess a/b vhen a is: " << a << " and b is " << b << endl;
		cout << "res is " << res << endl ;
		cout << "thro did not occur so failed test 32010(h) : ctest_mod::test_throy1" << endl ;
		return 0x32010;
	} catch(char const* thromsg) {
		cout << "ekspected thro occured and thromsg is: "<< thromsg << endl;
		cout << "passed test 32010(h) : ctest_mod::test_throy1" << endl ;
	}
	///////////////////////////////

	return 0;
}
int ctest_mod::test_thron1()
{
	cplong a; cplong b; cplong res; cplong ekspr;
	///////////////////////////////
	cout << "------test 32060(h) : ctest_mod::test_thron1 ------------------------------------------------------------------" << endl ;
	try {
		a = cplong(1); b = cplong(2); ekspr = cplong(0x8,-1);
		cout << "tryingcatch a/b vhen a is: " << a << " and b is " << b << endl;
		res = a/b ;
		cout << "res is " << res << " and ekspr is: " << ekspr << endl ;
		if(res == ekspr) { cout << "passed test 32060(h) : ctest_mod::test_thron" << endl ; }
		else { cout << "failed test_thron1 32060(h) : " << endl ; return 0x32060;}
	} catch(char const* thromsg) {
		cout << "unekspected thro occured failed thromsg is: "<< thromsg << endl;
		cout << "failed test 32060(h) : ctest_mod::test_thron1" << endl ;
		return 0x32060;
	}
	///////////////////////////////
	///////////////////////////////
	cout << "------test 32060(h) : ctest_mod::test_thron1 ------------------------------------------------------------------" << endl ;
	try {
		a = cplong(1); b = cplong(4); ekspr = cplong(0x4,-1);
		cout << "tryingcatch a/b vhen a is: " << a << " and b is " << b << endl;
		res = a/b ;
		cout << "res is " << res << " and ekspr is: " << ekspr << endl ;
		if(res == ekspr) { cout << "passed test 32060(h) : ctest_mod::test_thron" << endl ; }
		else { cout << "failed test_thron1 32060(h) : " << endl ; return 0x32060;}
	} catch(char const* thromsg) {
		cout << "unekspected thro occured failed thromsg is: "<< thromsg << endl;
		cout << "failed test 32060(h) : ctest_mod::test_thron1" << endl ;
		return 0x32060;
	}
	///////////////////////////////
	return 0;
}

// } /* namespace std */
//void test_mod_op()
//{
//	cout << "----test_mod_op test_mod_op test_mod_op-----" << endl ;
//	cplong pl4(1,-8);
//	cplong pl5(1,2);
//	cplong pl7r = pl4 % pl5 ;
//	cout << "pl7r = "<< pl4 << " % " << pl5 << " = " << pl7r << endl  ;
//	cplong pl9r = pl4 % 0x5 ;
//	cout << "pl9r = "<< pl4 << " % 0x5 = " << pl9r << endl  ;
//	cplong plbr = 0x2 % pl4 ;
//	cout << "plbr = 0x2 % "<< pl4 << " = " << plbr << endl  ;
//	plbr %= pl4 ;
//	cout << "plbr %= " << pl4 <<". nao plbr = " << plbr << endl  ;
//} // test_mod_op
