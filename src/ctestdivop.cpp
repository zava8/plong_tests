/*
 * ctestdivop.cpp
 *
 *  Created on: 08-Feb-2022
 *      Author: viml
 */

#include "ctestdivop.h"
#include <iostream>
#include "cplong.h"


// namespace std {
int ctest_divop::test_divop_throy()
{
	cplong a; cplong b; cplong res; cplong ekspr;
	///////////////////////////////
	cout << "------test 29040(h) : test_divop_throy ------------------------------------------------------------------" << endl ;
	try {
		a = cplong(1); b = cplong(0);
		cout << "tryingcatch a/b vhen a is: " << a << " and b is " << b << endl;
		res = a/b ;
		cout << "tryingsuccess a/b vhen a is: " << a << " and b is " << b << endl;
		cout << "res is " << res << endl ;
		cout << "thro did not occur so failed test 29040(h) : test_divop_throy" << endl ;
		return 0x29040;
	} catch(char const* thromsg) {
		cout << "ekspected thro occured and thromsg is: "<< thromsg << endl;
		cout << "passed test 29040(h) : test_divop_throy" << endl ;
	}
	///////////////////////////////

	return 0;
}
int ctest_divop::test_divop_thron()
{
	cplong a; cplong b; cplong res; cplong ekspr;
	cout << "------ctest_divop::test_divop_thron bilo------------------------------------------------------------------" << endl ;
	///////////////////////////////
	try {
		a = cplong(0x40,0); b = cplong(6,0); ekspr = cplong(0xAAAAAAAAAAAAAAA,-0xE);
		cout << "------test 0x1 tryingcatch a/b vhen a is: " << a << " and b is " << b << endl;
		res = a/b ;
		cout << "res is " << res << " and ekspr is: " << ekspr << endl ;
		if(res == ekspr) { cout << "passed test 0x1 : test_divop_thron" << endl ; }
		else { cout << "failed test_divop_thron 0x1 : " << endl ; return 0x1;}
	} catch(char const* thromsg) {
		cout << "unekspected thro occured failed thromsg is: "<< thromsg << endl;
		cout << "failed test 0x1 : test_divop_thron" << endl ;
		return 0x1;
	}
	///////////////////////////////
	///////////////////////////////
	try {
		a = cplong(0x14,0); b = cplong(3,0); ekspr = cplong(0x6AAAAAAAAAAAAAAA,-0xF);
		cout << "------test 0x2 tryingcatch a/b vhen a is: " << a << " and b is " << b << endl;
		res = a/b ;
		cout << "res is " << res << " and ekspr is: " << ekspr << endl ;
		if(res == ekspr) { cout << "passed test 0x2 : test_divop_thron" << endl ; }
		else { cout << "failed test_divop_thron 0x2 : " << endl ; return 0x2;}
	} catch(char const* thromsg) {
		cout << "unekspected thro occured failed thromsg is: "<< thromsg << endl;
		cout << "failed test 0x2 : test_divop_thron" << endl ;
		return 0x2;
	}
	///////////////////////////////

	///////////////////////////////
	try {
		a = cplong(1); b = cplong(2); ekspr = cplong(0x8,-1);
		cout << "------test 0x3 tryingcatch a/b vhen a is: " << a << " and b is " << b << endl;
		res = a/b ;
		cout << "res is " << res << " and ekspr is: " << ekspr << endl ;
		if(res == ekspr) { cout << "passed test 0x3 : test_divop_thron" << endl ; }
		else { cout << "failed test_divop_thron 0x3 : " << endl ; return 0x3;}
	} catch(char const* thromsg) {
		cout << "unekspected thro occured failed thromsg is: "<< thromsg << endl;
		cout << "failed test 0x3 : test_divop_thron" << endl ;
		return 0x3;
	}
	///////////////////////////////
	///////////////////////////////
	try {
		a = cplong(1); b = cplong(5); ekspr = cplong(0x3333333333333333,-0x10);
		cout << "------test 0x4 tryingcatch a/b vhen a is: " << a << " and b is " << b << endl;
		res = a/b ;
		cout << "res is " << res << " and ekspr is: " << ekspr << endl ;
		if(res == ekspr) { cout << "passed test 0x4 : test_divop_thron" << endl ; }
		else { cout << "failed test_divop_thron 0x4 : " << endl ; return 0x4;}
	} catch(char const* thromsg) {
		cout << "unekspected thro occured failed thromsg is: "<< thromsg << endl;
		cout << "failed test 0x4 : test_divop_thron" << endl ;
		return 0x4;
	}
	///////////////////////////////
	cout << "------test 0x4 : ctest_divop::test_divop_thron all passed -------------------------------------------------------" << endl ;
	return 0;
}
int ctest_divop::test_divop_thron_self()
{
	cplong a; cplong b; cplong res; cplong ekspr;
	///////////////////////////////
	cout << "------test 29349(h) : ctest_divop::test_divop_thron_self ------------------------------------------------------------------" << endl ;
	try {
		a = cplong(1); b = cplong(2); ekspr = cplong(0x8,-1);
		cout << "tryingcatch a = a/b ; vhen a is: " << a << " and b is " << b << endl;
		a = a/b ;
		cout << "a is " << a << " and ekspr is: " << ekspr << endl ;
		if(a == ekspr) { cout << "passed test 29349(h) : test_divop_thron" << endl ; }
		else { cout << "failed test_divop_thron_self 29349(h) : " << endl ; return 0x29349;}
	} catch(char const* thromsg) {
		cout << "unekspected thro occured failed thromsg is: "<< thromsg << endl;
		cout << "failed test 29349(h) : test_divop_thron_self" << endl ;
		return 0x29349;
	}
	///////////////////////////////
	///////////////////////////////
	cout << "------test 29349(h) : ctest_divop::test_divop_thron_self ------------------------------------------------------------------" << endl ;
	try {
		a = cplong(1); b = cplong(3); ekspr = cplong(0x8,-1);
		cout << "tryingcatch a = a/b ; vhen a is: " << a << " and b is " << b << endl;
		a = a/b ;
		cout << "a is " << a << " and ekspr is: " << ekspr << endl ;
		if(a == ekspr) { cout << "passed test 29349(h) : test_divop_thron" << endl ; }
		else { cout << "failed test_divop_thron_self 29349(h) : " << endl ; return 0x29349;}
	} catch(char const* thromsg) {
		cout << "unekspected thro occured failed thromsg is: "<< thromsg << endl;
		cout << "failed test 29349(h) : test_divop_thron_self" << endl ;
		return 0x29349;
	}
	///////////////////////////////
	return 0;
	//void test_divz_op()
	//{
	//	cout << "----test_divz_op test_divz_op test_divz_op-----" << endl ;
	//	cplong dv1(1,0);
	//	cplong ra1(3,0);
	//	cplong res1 = dv1 / ra1 ;
	//	cout << "res1 = "<< dv1 << " / " << ra1 << " = " << res1 << endl  ;
	//	cplong dv2(5, 0);
	//	cplong ra2(3,0);
	//	cplong res2 = dv2 / ra2 ;
	//	cout << "res2 = "<< dv2 << " / " << ra2 << " = " << res2 << endl  ;
	//
	//	cplong dv3(1,0);
	//	cplong ra3(3,0);
	//	cout << "selph divizn : " << dv3 << " /= "<< ra3 << endl ;
	//	dv3 /= ra3 ;
	//	cout << ". nao dv3 is " << dv3 << endl  ;
	//	cplong dv4(5, 0);
	//	cplong ra4(3,0);
	//	cout << "selph divizn : " << dv4 << " /= "<< ra4 << endl ;
	//	dv4 /= ra4 ;
	//	cout << ". nao dv4 is " << dv4 << endl  ;
	//
	//	cplong dv5(1,0);
	//	cout << "selph divizn : " << dv5 << " /= 3" << endl ;
	//	dv5 /= 3 ;
	//	cout << ". nao dv5 is " << dv5 << endl  ;
	//	cplong dv6(5, 0);
	//	cout << "selph divizn : " << dv6 << " /= 3" << endl ;
	//	dv6 /= 3 ;
	//	cout << ". nao dv6 is " << dv6 << endl  ;
	//
	//	cplong dl8(1,0);
	//	cplong dl7 = dl8 / 0x3 ;
	//	cout << "dl7 = "<< dl8 << " / 0x3 = " << dl7 << endl  ;
	//	cplong dl9(5,0);
	//	cplong dlA = dl9 / 0x3 ;
	//	cout << "dlA = "<< dl9 << " / 0x3 = " << dlA << endl  ;
	//
	//	cplong dlB(3,0);
	//	cplong dlC = 1 / dlB ;
	//	cout << "dlC = "<< "1 / " << dlB << " = " << dlC << endl  ;
	//	cplong dlD = 5 / dlB ;
	//	cout << "dlD = "<< "5 / " << dlB << " = " << dlD << endl  ;
	//}

}
int ctest_divop::test_divop_throy1()
{
	cplong a; cplong b; cplong res; cplong ekspr;
	///////////////////////////////
	cout << "------test 29010(h) : test_divop_throy1 ------------------------------------------------------------------" << endl ;
	try {
		a = cplong(1); b = cplong(0);
		cout << "tryingcatch a/b vhen a is: " << a << " and b is " << b << endl;
		res = a/b ;
		cout << "tryingsuccess a/b vhen a is: " << a << " and b is " << b << endl;
		cout << "res is " << res << endl ;
		cout << "thro did not occur so failed test 29010(h) : test_divop_throy1" << endl ;
		return 0x29010;
	} catch(char const* thromsg) {
		cout << "ekspected thro occured and thromsg is: "<< thromsg << endl;
		cout << "passed test 29010(h) : test_divop_throy1" << endl ;
	}
	///////////////////////////////

	return 0;
}
int ctest_divop::test_divop_thron1()
{
	cplong a; cplong b; cplong res; cplong ekspr;
	///////////////////////////////
	cout << "------test 29060(h) : ctest_divop::test_divop_thron1 ------------------------------------------------------------------" << endl ;
	try {
		a = cplong(1); b = cplong(2); ekspr = cplong(0x8,-1);
		cout << "tryingcatch a/b vhen a is: " << a << " and b is " << b << endl;
		res = a/b ;
		cout << "res is " << res << " and ekspr is: " << ekspr << endl ;
		if(res == ekspr) { cout << "passed test 29060(h) : test_divop_thron" << endl ; }
		else { cout << "failed test_divop_thron1 29060(h) : " << endl ; return 0x29060;}
	} catch(char const* thromsg) {
		cout << "unekspected thro occured failed thromsg is: "<< thromsg << endl;
		cout << "failed test 29060(h) : test_divop_thron1" << endl ;
		return 0x29060;
	}
	///////////////////////////////
	///////////////////////////////
	cout << "------test 29060(h) : ctest_divop::test_divop_thron1 ------------------------------------------------------------------" << endl ;
	try {
		a = cplong(1); b = cplong(4); ekspr = cplong(0x4,-1);
		cout << "tryingcatch a/b vhen a is: " << a << " and b is " << b << endl;
		res = a/b ;
		cout << "res is " << res << " and ekspr is: " << ekspr << endl ;
		if(res == ekspr) { cout << "passed test 29060(h) : test_divop_thron" << endl ; }
		else { cout << "failed test_divop_thron1 29060(h) : " << endl ; return 0x29060;}
	} catch(char const* thromsg) {
		cout << "unekspected thro occured failed thromsg is: "<< thromsg << endl;
		cout << "failed test 29060(h) : test_divop_thron1" << endl ;
		return 0x29060;
	}
	///////////////////////////////
	return 0;
}

// } /* namespace std */
