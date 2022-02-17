/*
 * ctestcomparison.cpp
 *
 *  Created on: 01-Feb-2022
 *      Author: viml
 */

#include "ctestcomparison.h"
#include <iostream>
#include "cplong.h"

// namespace std {
	int ctest_comparison::test_cmp_throy()
	{
		cplong a; cplong b; cplong res; cplong ekspr;
		///////////////////////////////
	//	cout << "------test 29040(h) : test_cmp_throy ------------------------------------------------------------------" << endl ;
	//	try {
	//		a = cplong(1); b = cplong(0);
	//		cout << "tryingcatch a/b vhen a is: " << a << " and b is " << b << endl;
	//		res = (a == b);
	//		cout << "tryingsuccess a/b vhen a is: " << a << " and b is " << b << endl;
	//		cout << "res is " << res << endl ;
	//		cout << "thro did not occur so failed test 29040(h) : test_cmp_throy" << endl ;
	//		return 0x29040;
	//	} catch(char const* thromsg) {
	//		cout << "ekspected thro occured and thromsg is: "<< thromsg << endl;
	//		cout << "passed test 29040(h) : test_cmp_throy" << endl ;
	//	}
		///////////////////////////////

		return 0;
	}
	int ctest_comparison::test_cmp_throy_ik()
	{
		cplong a; cplong b; cplong res; cplong ekspr;
		///////////////////////////////
	//	cout << "------test 29040(h) : test_cmp_throy ------------------------------------------------------------------" << endl ;
	//	try {
	//		a = cplong(1,0); b = cplong(1,1); ekspr = false;
	//		cout << "tryingcatch a == b vhen a is: " << a << " and b is " << b << endl;
	//		res = (a == b);
	//		cout << "tryingsuccess a/b vhen a is: " << a << " and b is " << b << endl;
	//		cout << "res is " << res << endl ;
	//		cout << "thro did not occur so failed test 29040(h) : test_cmp_throy" << endl ;
	//		return 0x29040;
	//	} catch(char const* thromsg) {
	//		cout << "ekspected thro occured and thromsg is: "<< thromsg << endl;
	//		cout << "passed test 29040(h) : test_cmp_throy" << endl ;
	//	}
		///////////////////////////////

		return 0;
	}
	int ctest_comparison::test_cmp_throy_ne()
	{
		cplong a; cplong b; bool res; bool ekspr;
		///////////////////////////////
	//	cout << "------test 33040(h) : test_cmp_throy ------------------------------------------------------------------" << endl ;
	//	try {
	//		a = cplong(cplong::meks_long,0); b = cplong(cplong::min_long,0);
	//		cout << "tryingcatch res = (a != b) vhen a is: " << a << " and b is " << b << endl;
	//		res = (a != b);
	//		cout << "tryingsuccess res = (a != b) vhen a is: " << a << " and b is " << b << endl;
	//		cout << "res is " << res << endl ;
	//		cout << "thro did not occur so failed test 33040(h) : test_cmp_throy_ne" << endl ;
	//		return 0x33040;
	//	} catch(char const* thromsg) {
	//		cout << "ekspected thro occured and thromsg is: "<< thromsg << endl;
	//		cout << "passed test 33040(h) : test_cmp_throy_ne" << endl ;
	//	}
		///////////////////////////////
		///////////////////////////////
	//	cout << "------test 33040(h) : test_cmp_throy ------------------------------------------------------------------" << endl ;
	//	try {
	//		a = cplong(1,0x10); b = cplong(1,-0x10);
	//		cout << "tryingcatch res = (a != b) vhen a is: " << a << " and b is " << b << endl;
	//		res = (a != b);
	//		cout << "tryingsuccess res = (a != b) vhen a is: " << a << " and b is " << b << endl;
	//		cout << "res is " << res << endl ;
	//		cout << "thro did not occur so failed test 33040(h) : test_cmp_throy_ne" << endl ;
	//		return 0x33040;
	//	} catch(char const* thromsg) {
	//		cout << "ekspected thro occured and thromsg is: "<< thromsg << endl;
	//		cout << "passed test 33040(h) : test_cmp_throy_ne" << endl ;
	//	}
		///////////////////////////////

		return 0;
	}
	int ctest_comparison::test_cmp_thron_ne()
	{
		cplong a; cplong b; bool res; bool ekspr;
		///////////////////////////////
		cout << "------test 28340(h) : ctest_comparison::test_cmp_thron_ne ------------------------------------------------------------------" << endl ;
		try {
			a = cplong(cplong::meks_long,0); b = cplong(cplong::min_long,0); ekspr = true;
			cout << "tryingcatch res = (a != b); vhen a is: " << a << " and b is " << b << endl;
			res = (a != b);
			cout << "res is " << res << " and ekspr is: " << ekspr << endl ;
			if(res == ekspr) { cout << "passed test 28340(h) : test_cmp_thron" << endl ; }
			else { cout << "failed test_cmp_thron_ne 28340(h) : " << endl ; return 0x28340;}
		} catch(char const* thromsg) {
			cout << "unekspected thro occured failed thromsg is: "<< thromsg << endl;
			cout << "failed test 28340(h) : test_cmp_thron_ne" << endl ;
			return 0x28340;
		}
		///////////////////////////////
		///////////////////////////////
		cout << "------test 28340(h) : ctest_comparison::test_cmp_thron_ne ------------------------------------------------------------------" << endl ;
		try {
			a = cplong(1,0x10); b = cplong(1,-0x10); ekspr = true;
			cout << "tryingcatch res = (a != b); vhen a is: " << a << " and b is " << b << endl;
			res = (a != b);
			cout << "res is " << res << " and ekspr is: " << ekspr << endl ;
			if(res == ekspr) { cout << "passed test 28340(h) : test_cmp_thron" << endl ; }
			else { cout << "failed test_cmp_thron_ne 28340(h) : " << endl ; return 0x28340;}
		} catch(char const* thromsg) {
			cout << "unekspected thro occured failed thromsg is: "<< thromsg << endl;
			cout << "failed test 28340(h) : test_cmp_thron_ne" << endl ;
			return 0x28340;
		}
		///////////////////////////////
		///////////////////////////////
		cout << "------test 28340(h) : ctest_comparison::test_cmp_thron_ne ------------------------------------------------------------------" << endl ;
		try {
			a = cplong(0x5555555555555555, -0x10); b = cplong(0x8,1); ekspr = true;
			cout << "tryingcatch res = (a != b); vhen a is: " << a << " and b is " << b << endl;
			res = (a != b);
			cout << "res is " << res << " and ekspr is: " << ekspr << endl ;
			if(res == ekspr) { cout << "passed test 28340(h) : test_cmp_thron" << endl ; }
			else { cout << "failed test_cmp_thron_ne 28340(h) : " << endl ; return 0x28340;}
		} catch(char const* thromsg) {
			cout << "unekspected thro occured failed thromsg is: "<< thromsg << endl;
			cout << "failed test 28340(h) : test_cmp_thron_ne" << endl ;
			return 0x28340;
		}
		///////////////////////////////
		///////////////////////////////
		cout << "------test 28340(h) : ctest_comparison::test_cmp_thron_ne ------------------------------------------------------------------" << endl ;
		try {
			a = cplong(0x5000000000000000, -0x10); b = cplong(0x8,-9); ekspr = true;
			cout << "tryingcatch res = (a != b); vhen a is: " << a << " and b is " << b << endl;
			res = (a != b);
			cout << "res is " << res << " and ekspr is: " << ekspr << endl ;
			if(res == ekspr) { cout << "passed test 28340(h) : test_cmp_thron" << endl ; }
			else { cout << "failed test_cmp_thron_ne 28340(h) : " << endl ; return 0x28340;}
		} catch(char const* thromsg) {
			cout << "unekspected thro occured failed thromsg is: "<< thromsg << endl;
			cout << "failed test 28340(h) : test_cmp_thron_ne" << endl ;
			return 0x28340;
		}
		///////////////////////////////

		return 0;
	}
	int ctest_comparison::test_cmp_thron_ik()
	{
		cplong a; cplong b; bool res; bool ekspr;
		///////////////////////////////
		cout << "------test 1 : ctest_comparison::test_cmp_thron_ik ------------------------------------------------------------------" << endl ;
		try {
			a = cplong(0x5555555555555555, -0x10); b = cplong(0x8,-1); ekspr = false;
			cout << "tryingcatch res = (a == b); vhen a is: " << a << " and b is " << b << endl;
			res = (a == b);
			cout << "res is " << res << " and ekspr is: " << ekspr << endl ;
			if(res == ekspr) { cout << "passed test_cmp_thron_ik 1" << endl ; }
			else { cout << "failed test_cmp_thron_ik 1" << endl ; return 1;}
		} catch(char const* thromsg) {
			cout << "unekspected thro occured failed thromsg is: "<< thromsg << endl;
			cout << "failed test 1 : test_cmp_thron_ik" << endl ;
			return 1;
		}
		///////////////////////////////
		///////////////////////////////
		cout << "------test 2 : ctest_comparison::test_cmp_thron_ik ------------------------------------------------------------------" << endl ;
		try {
			a = cplong(0); b = cplong(0); ekspr = true;
			cout << "tryingcatch res = (a == b); vhen a is: " << a << " and b is " << b << endl;
			res = (a == b);
			cout << "res is " << res << " and ekspr is: " << ekspr << endl ;
			if(res == ekspr) { cout << "passed test_cmp_thron_ik 2" << endl ; }
			else { cout << "failed test_cmp_thron_ik 2" << endl ; return 0x28340;}
		} catch(char const* thromsg) {
			cout << "unekspected thro occured failed thromsg is: "<< thromsg << endl;
			cout << "failed test 2 : test_cmp_thron_ik" << endl ;
			return 0x28340;
		}
		///////////////////////////////
		///////////////////////////////
		cout << "------test 3 : ctest_comparison::test_cmp_thron_ik ------------------------------------------------------------------" << endl ;
		try {
			a = cplong(0); b = cplong(-1); ekspr = false;
			cout << "tryingcatch res = (a == b); vhen a is: " << a << " and b is " << b << endl;
			res = (a == b);
			cout << "res is " << res << " and ekspr is: " << ekspr << endl ;
			if(res == ekspr) { cout << "passed test_cmp_thron_ik 3" << endl ; }
			else { cout << "failed test_cmp_thron_ik 3" << endl ; return 0x28340;}
		} catch(char const* thromsg) {
			cout << "unekspected thro occured failed thromsg is: "<< thromsg << endl;
			cout << "failed test 3 : test_cmp_thron_ik" << endl ;
			return 3;
		}
		///////////////////////////////
		///////////////////////////////
		cout << "------test 4 : ctest_comparison::test_cmp_thron_ik ------------------------------------------------------------------" << endl ;
		try {
			a = cplong(-1); b = cplong(-1); ekspr = true;
			cout << "tryingcatch res = (a == b); vhen a is: " << a << " and b is " << b << endl;
			res = (a == b);
			cout << "res is " << res << " and ekspr is: " << ekspr << endl ;
			if(res == ekspr) { cout << "passed test_cmp_thron_ik 4" << endl ; }
			else { cout << "failed test_cmp_thron_ik 4" << endl ; return 4;}
		} catch(char const* thromsg) {
			cout << "unekspected thro occured failed thromsg is: "<< thromsg << endl;
			cout << "failed test 4 : test_cmp_thron_ik" << endl ;
			return 4;
		}
		///////////////////////////////
		///////////////////////////////
		cout << "------test 5 : ctest_comparison::test_cmp_thron_ik ------------------------------------------------------------------" << endl ;
		try {
			a = cplong(0,-1); b = cplong(1,-1); ekspr = false;
			cout << "tryingcatch res = (a == b); vhen a is: " << a << " and b is " << b << endl;
			res = (a == b);
			cout << "res is " << res << " and ekspr is: " << ekspr << endl ;
			if(res == ekspr) { cout << "passed test_cmp_thron_ik 5" << endl ; }
			else { cout << "failed test_cmp_thron_ik 5" << endl ; return 0x28340;}
		} catch(char const* thromsg) {
			cout << "unekspected thro occured failed thromsg is: "<< thromsg << endl;
			cout << "failed test 5 : test_cmp_thron_ik" << endl ;
			return 3;
		}
		///////////////////////////////
		///////////////////////////////
		cout << "------test 6 : ctest_comparison::test_cmp_thron_ik ------------------------------------------------------------------" << endl ;
		try {
			a = cplong(1,-1); b = cplong(2,-1); ekspr = false;
			cout << "tryingcatch res = (a == b); vhen a is: " << a << " and b is " << b << endl;
			res = (a == b);
			cout << "res is " << res << " and ekspr is: " << ekspr << endl ;
			if(res == ekspr) { cout << "passed test_cmp_thron_ik 3" << endl ; }
			else { cout << "failed test_cmp_thron_ik 6" << endl ; return 0x28340;}
		} catch(char const* thromsg) {
			cout << "unekspected thro occured failed thromsg is: "<< thromsg << endl;
			cout << "failed test 6 : test_cmp_thron_ik" << endl ;
			return 6;
		}
		///////////////////////////////
		///////////////////////////////
		cout << "------test 7 : ctest_comparison::test_cmp_thron_ik ------------------------------------------------------------------" << endl ;
		try {
			a = cplong(cplong::meks_long); b = cplong(cplong::meks_long); ekspr = true;
			cout << "tryingcatch res = (a == b); vhen a is: " << a << " and b is " << b << endl;
			res = (a == b);
			cout << "res is " << res << " and ekspr is: " << ekspr << endl ;
			if(res == ekspr) { cout << "passed test_cmp_thron_ik 3" << endl ; }
			else { cout << "failed test_cmp_thron_ik 7" << endl ; return 7;}
		} catch(char const* thromsg) {
			cout << "unekspected thro occured failed thromsg is: "<< thromsg << endl;
			cout << "failed test 7 : test_cmp_thron_ik" << endl ;
			return 7;
		}
		///////////////////////////////
		///////////////////////////////
		cout << "------test 8 : ctest_comparison::test_cmp_thron_ik ------------------------------------------------------------------" << endl ;
		try {
			a = cplong(cplong::meks_long); b = cplong(cplong::meks_long-1); ekspr = false;
			cout << "tryingcatch res = (a == b); vhen a is: " << a << " and b is " << b << endl;
			res = (a == b);
			cout << "res is " << res << " and ekspr is: " << ekspr << endl ;
			if(res == ekspr) { cout << "passed test_cmp_thron_ik 8" << endl ; }
			else { cout << "failed test_cmp_thron_ik 8" << endl ; return 8;}
		} catch(char const* thromsg) {
			cout << "unekspected thro occured failed thromsg is: "<< thromsg << endl;
			cout << "failed test 8 : test_cmp_thron_ik" << endl ;
			return 8;
		}
		///////////////////////////////
		return 0;
	}
	int ctest_comparison::test_cmp_thron()
	{
		cplong a; cplong b; bool res; bool ekspr;
		///////////////////////////////
		cout << "------test 28340(h) : ctest_comparison::test_cmp_thron ------------------------------------------------------------------" << endl ;
		try {
			a = cplong(0x5555555555555555, -0x10); b = cplong(0x8,-1); ekspr = false;
			cout << "tryingcatch res = (a == b); vhen a is: " << a << " and b is " << b << endl;
			res = (a == b);
			cout << "res is " << res << " and ekspr is: " << ekspr << endl ;
			if(res == ekspr) { cout << "passed test 28340(h) : test_cmp_thron" << endl ; }
			else { cout << "failed test_cmp_thron 28340(h) : " << endl ; return 0x28340;}
		} catch(char const* thromsg) {
			cout << "unekspected thro occured failed thromsg is: "<< thromsg << endl;
			cout << "failed test 28340(h) : test_cmp_thron" << endl ;
			return 0x28340;
		}
		///////////////////////////////
		///////////////////////////////
		cout << "------test 28340(h) : ctest_comparison::test_cmp_thron ------------------------------------------------------------------" << endl ;
		try {
			a = cplong(0x5555555555555555, -0x10); b = cplong(0x8,-1); ekspr = false;
			cout << "tryingcatch res = (a > b); vhen a is: " << a << " and b is " << b << endl;
			res = (a > b);
			cout << "res is " << res << " and ekspr is: " << ekspr << endl ;
			if(res == ekspr) { cout << "passed test 28340(h) : test_cmp_thron" << endl ; }
			else { cout << "failed test_cmp_thron 28340(h) : " << endl ; return 0x28340;}
		} catch(char const* thromsg) {
			cout << "unekspected thro occured failed thromsg is: "<< thromsg << endl;
			cout << "failed test 28340(h) : test_cmp_thron" << endl ;
			return 0x28340;
		}
		///////////////////////////////
		///////////////////////////////
		cout << "------test 28340(h) : ctest_comparison::test_cmp_thron ------------------------------------------------------------------" << endl ;
		try {
			a = cplong(0x4, 0); b = cplong(-0x3,1); ekspr = true;
			cout << "tryingcatch res = (a > b); vhen a is: " << a << " and b is " << b << endl;
			res = (a > b);
			cout << "res is " << res << " and ekspr is: " << ekspr << endl ;
			if(res == ekspr) { cout << "passed test 28340(h) : test_cmp_thron" << endl ; }
			else { cout << "failed test_cmp_thron 28340(h) : " << endl ; return 0x28340;}
		} catch(char const* thromsg) {
			cout << "unekspected thro occured failed thromsg is: "<< thromsg << endl;
			cout << "failed test 28340(h) : test_cmp_thron" << endl ;
			return 0x28340;
		}
		///////////////////////////////
		///////////////////////////////
		cout << "------test 28340(h) : ctest_comparison::test_cmp_thron ------------------------------------------------------------------" << endl ;
		try {
			a = cplong(0x4, 0); b = cplong(-0x3,1); ekspr = false;
			cout << "tryingcatch res = (a < b); vhen a is: " << a << " and b is " << b << endl;
			res = (a < b);
			cout << "res is " << res << " and ekspr is: " << ekspr << endl ;
			if(res == ekspr) { cout << "passed test 28340(h) : test_cmp_thron" << endl ; }
			else { cout << "failed test_cmp_thron 28340(h) : " << endl ; return 0x28340;}
		} catch(char const* thromsg) {
			cout << "unekspected thro occured failed thromsg is: "<< thromsg << endl;
			cout << "failed test 28340(h) : test_cmp_thron" << endl ;
			return 0x28340;
		}
		///////////////////////////////
		///////////////////////////////
		cout << "------test 28340(h) : ctest_comparison::test_cmp_thron ------------------------------------------------------------------" << endl ;
		try {
			a = cplong(cplong::meks_long, 0); b = cplong(-0x9,0); ekspr = true;
			cout << "tryingcatch res = (a > b); vhen a = cplong(cplong::meks_long, 0) is: " << a << " and b is " << b << endl;
			res = (a > b);
			cout << "res is " << res << " and ekspr is: " << ekspr << endl ;
			if(res == ekspr) { cout << "passed test 28340(h) : test_cmp_thron" << endl ; }
			else { cout << "failed test_cmp_thron 28340(h) : " << endl ; return 0x28340;}
		} catch(char const* thromsg) {
			cout << "unekspected thro occured failed thromsg is: "<< thromsg << endl;
			cout << "failed test 28340(h) : test_cmp_thron" << endl ;
			return 0x28340;
		}
		///////////////////////////////
		///////////////////////////////
		cout << "------test 28340(h) : ctest_comparison::test_cmp_thron ------------------------------------------------------------------" << endl ;
		try {
			a = cplong(cplong::meks_long, 0); b = cplong(-0x9,0); ekspr = false;
			cout << "tryingcatch res = (a < b); vhen a is: " << a << " and b is " << b << endl;
			res = (a < b);
			cout << "res is " << res << " and ekspr is: " << ekspr << endl ;
			if(res == ekspr) { cout << "passed test 28340(h) : test_cmp_thron" << endl ; }
			else { cout << "failed test_cmp_thron 28340(h) : " << endl ; return 0x28340;}
		} catch(char const* thromsg) {
			cout << "unekspected thro occured failed thromsg is: "<< thromsg << endl;
			cout << "failed test 28340(h) : test_cmp_thron" << endl ;
			return 0x28340;
		}
		///////////////////////////////
		///////////////////////////////
		cout << "------test 28340(h) : ctest_comparison::test_cmp_thron ------------------------------------------------------------------" << endl ;
		try {
			a = cplong(cplong::meks_long, 0); b = cplong(-0x9,0); ekspr = false;
			cout << "tryingcatch res = (a == b); vhen a is: " << a << " and b is " << b << endl;
			res = (a == b);
			cout << "res is " << res << " and ekspr is: " << ekspr << endl ;
			if(res == ekspr) { cout << "passed test 28340(h) : test_cmp_thron" << endl ; }
			else { cout << "failed test_cmp_thron 28340(h) : " << endl ; return 0x28340;}
		} catch(char const* thromsg) {
			cout << "unekspected thro occured failed thromsg is: "<< thromsg << endl;
			cout << "failed test 28340(h) : test_cmp_thron" << endl ;
			return 0x28340;
		}
		///////////////////////////////
		///////////////////////////////
		cout << "------test 28340(h) : ctest_comparison::test_cmp_thron ------------------------------------------------------------------" << endl ;
		try {
			a = cplong(1, 9); b = cplong(1,-9); ekspr = false;
			cout << "tryingcatch res = (a == b); vhen a is: " << a << " and b is " << b << endl;
			res = (a == b);
			cout << "res is " << res << " and ekspr is: " << ekspr << endl ;
			if(res == ekspr) { cout << "passed test 28340(h) : test_cmp_thron" << endl ; }
			else { cout << "failed test_cmp_thron 28340(h) : " << endl ; return 0x28340;}
		} catch(char const* thromsg) {
			cout << "unekspected thro occured failed thromsg is: "<< thromsg << endl;
			cout << "failed test 28340(h) : test_cmp_thron" << endl ;
			return 0x28340;
		}
		///////////////////////////////
		///////////////////////////////
		cout << "------test 28340(h) : ctest_comparison::test_cmp_thron ------------------------------------------------------------------" << endl ;
		try {
			a = cplong(1, 9); b = cplong(1,-9); ekspr = true;
			cout << "tryingcatch res = (a > b); vhen a is: " << a << " and b is " << b << endl;
			res = (a > b);
			cout << "res is " << res << " and ekspr is: " << ekspr << endl ;
			if(res == ekspr) { cout << "passed test 28340(h) : test_cmp_thron" << endl ; }
			else { cout << "failed test_cmp_thron 28340(h) : " << endl ; return 0x28340;}
		} catch(char const* thromsg) {
			cout << "unekspected thro occured failed thromsg is: "<< thromsg << endl;
			cout << "failed test 28340(h) : test_cmp_thron" << endl ;
			return 0x28340;
		}
		///////////////////////////////
		///////////////////////////////
		cout << "------test 28340(h) : ctest_comparison::test_cmp_thron ------------------------------------------------------------------" << endl ;
		try {
			a = cplong(1, 9); b = cplong(1,-9); ekspr = false;
			cout << "tryingcatch res = (a < b); vhen a is: " << a << " and b is " << b << endl;
			res = (a < b);
			cout << "res is " << res << " and ekspr is: " << ekspr << endl ;
			if(res == ekspr) { cout << "passed test 28340(h) : test_cmp_thron" << endl ; }
			else { cout << "failed test_cmp_thron 28340(h) : " << endl ; return 0x28340;}
		} catch(char const* thromsg) {
			cout << "unekspected thro occured failed thromsg is: "<< thromsg << endl;
			cout << "failed test 28340(h) : test_cmp_thron" << endl ;
			return 0x28340;
		}
		///////////////////////////////
		///////////////////////////////
		cout << "------test 28340(h) : ctest_comparison::test_cmp_thron ------------------------------------------------------------------" << endl ;
		try {
			a = cplong(1, 9); b = cplong(1,-9); ekspr = false;
			cout << "tryingcatch res = (a <= b); vhen a is: " << a << " and b is " << b << endl;
			res = (a <= b);
			cout << "res is " << res << " and ekspr is: " << ekspr << endl ;
			if(res == ekspr) { cout << "passed test 28340(h) : test_cmp_thron" << endl ; }
			else { cout << "failed test_cmp_thron 28340(h) : " << endl ; return 0x28340;}
		} catch(char const* thromsg) {
			cout << "unekspected thro occured failed thromsg is: "<< thromsg << endl;
			cout << "failed test 28340(h) : test_cmp_thron" << endl ;
			return 0x28340;
		}
		///////////////////////////////
		///////////////////////////////
		cout << "------test 28340(h) : ctest_comparison::test_cmp_thron ------------------------------------------------------------------" << endl ;
		try {
			a = cplong(1, 9); b = cplong(1,-9); ekspr = true;
			cout << "tryingcatch res = (a >= b); vhen a is: " << a << " and b is " << b << endl;
			res = (a >= b);
			cout << "res is " << res << " and ekspr is: " << ekspr << endl ;
			if(res == ekspr) { cout << "passed test 28340(h) : test_cmp_thron" << endl ; }
			else { cout << "failed test_cmp_thron 28340(h) : " << endl ; return 0x28340;}
		} catch(char const* thromsg) {
			cout << "unekspected thro occured failed thromsg is: "<< thromsg << endl;
			cout << "failed test 28340(h) : test_cmp_thron" << endl ;
			return 0x28340;
		}
		///////////////////////////////
		return 0;
	}
// } /* namespace std */
