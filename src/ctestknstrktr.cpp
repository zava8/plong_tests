/*
 * ctestknstrktr.cpp
 *
 *  Created on: 03-Feb-2022
 *      Author: viml
 */

#include "ctestknstrktr.h"
#include <iostream>
#include "cplong.h"

// namespace std {
int ctest_knstrktr::tn_argd_ml()
{
	cplong a; long eval; int epl; // int val; int pl;
	cout << "----ctest_knstrktr::tn_argd_ml tests bilo----------------------------------------------" << endl ;

	///////////////////////////////
	try {
		cout << "----try catch----- a = cplong(cplong::min_long);" <<  endl;
		a = cplong(cplong::min_long); eval = cplong::min_long ; epl = 0;
		cout << "a is " << a << " and a.get_value() is: -" << -a.get_value() <<  " and a.get_pl() is: " << a.get_pl() << endl ;
		if((eval == a.get_value()) && (epl == a.get_pl())) { cout << "passed test 0x1 : ctest_knstrktr::tn_argd_ml" << endl ; }
		else { cout << "failed ctest_knstrktr::tn_argd_ml 0x1 : " << endl ; return 0x1;}
	} catch(char const* thromsg) {
		cout << "unekspected thro occured failed thromsg is: "<< thromsg << endl;
		cout << "failed test 0x1 : ctest_knstrktr::tn_argd_ml" << endl ;
		return 0x1;
	}
	///////////////////////////////

	///////////////////////////////
	try {
		cout << "----try catch----- a = cplong();" <<  endl;
		a = cplong(); eval = 0 ; epl = 0;
		cout << "a is " << a << " and a.get_value() is: " << a.get_value() <<  " and a.get_pl() is: " << a.get_pl() << endl ;
		if((eval == a.get_value()) && (epl == a.get_pl())) { cout << "passed test 0x2 : tn_argd" << endl ; }
		else { cout << "failed ctest_knstrktr::tn_argd_ml 0x2 : " << endl ; return 0x2;}
	} catch(char const* thromsg) {
		cout << "unekspected thro occured failed thromsg is: "<< thromsg << endl;
		cout << "failed test 0x2 : ctest_knstrktr::tn_argd_ml" << endl ;
		return 0x2;
	}
	///////////////////////////////
	///////////////////////////////
	try {
		cout << "---tn_argd_ml 0x4-try catch----- a = cplong(cplong::min_long-2);" <<  endl;
		a = cplong(cplong::min_long-2); eval = cplong::min_long-2 ; epl = 0;
		cout << "a is " << a << " and a.get_value() is: -" << -a.get_value() <<  " and a.get_pl() is: " << a.get_pl() << endl ;
		if((eval == a.get_value()) && (epl == a.get_pl())) { cout << "passed test 0x4 : ctest_knstrktr::tn_argd_ml" << endl ; }
		else { cout << "failed ctest_knstrktr::tn_argd_ml 0x4 : " << endl ; return 0x1;}
	} catch(char const* thromsg) {
		cout << "unekspected thro occured failed thromsg is: "<< thromsg << endl;
		cout << "failed test ctest_knstrktr::tn_argd_ml : 0x4" << endl ;
		return 0x4;
	}
	///////////////////////////////
	cout << "----ctest_knstrktr::tn_argd tests Aal passed----------------------------------------------" << endl ;
	return 0;
}
int ctest_knstrktr::ty_argd_ml()
{
	cplong a; // long eval; int epl; // int val; int pl;
	cout << hex << "----ctest_knstrktr::ty_argd_ml tests bilo----------------------------------------------" << endl ;
	///////////////////////////////
	cout << "------test 0x1 --ty_argd_ml------" << endl ;
	try {
		cout << "----try catch----- a = cplong(cplong::min_long-1) vhen cplong::min_long-1 is: -" << -(cplong::min_long-1) << endl;
		a = cplong(cplong::min_long-1);
		cout << "a = cplong(cplong::min_long-1) a is " << a << endl;
		cout << "thro did not occur so failed test 0x1 : ty_argd_ml" << endl ;
		return 0x1;
	} catch(char const* thromsg) {
		cout << "ekspected thro occured and thromsg is: "<< thromsg << endl;
		cout << "passed test 0x1 : ty_argd_ml" << endl ;
	}
	///////////////////////////////
	/////////////////////////////// -8000 0000 0000 0001
	cout << "------test 0x2 ---ty_argd_ml----" << endl ;
	try {
		cout << "cplong::min_long is -" << -cplong::min_long << endl;
		cout << "cplong::min_long-1 is -" << -(cplong::min_long-1) << endl;
		cout << "cplong::min_long-2 is -" << -(cplong::min_long-2) << endl;
		cout << hex << "----try catch----- a = cplong(cplong::min_long-2) vhen cplong::min_long-2 is: -" << -(cplong::min_long-2) << endl;
		a = cplong(cplong::min_long-2);
		cout << "a = cplong(cplong::min_long-2) a is " << a << endl;
		cout << "thro did not occur so failed test 0x2 : ty_argd_ml" << endl ;
		return 0x2;
	} catch(char const* thromsg) {
		cout << "ekspected thro occured and thromsg is: "<< thromsg << endl;
		cout << "passed test 0x2 : ty_argd_ml" << endl ;
	}
	///////////////////////////////
	cout << "----ctest_knstrktr::tn_argd tests Aal passed----------------------------------------------" << endl ;

	return 0;
}
int ctest_knstrktr::tn_argd_mr()
{
	cplong a; long eval; int epl; // int val; int pl;
	cout << "----ctest_knstrktr::tn_argd_mr tests bilo----------------------------------------------" << endl ;
	///////////////////////////////
		try {
			cout << "----tn_argd_mr trycat----- a = cplong(cplong::meks_long);" <<  endl;
			a = cplong(cplong::meks_long); eval = cplong::meks_long ; epl = 0;
			cout << "a is " << a << " and a.get_value() is: " << a.get_value() <<  " and a.get_pl() is: " << a.get_pl() << endl ;
			if((eval == a.get_value()) && (epl == a.get_pl())) { cout << "passed test 0x2 : ctest_knstrktr::tn_argd_mr" << endl ; }
			else { cout << "failed ctest_knstrktr::tn_argd_mr 0x1 : " << endl ; return 0x2;}
		} catch(char const* thromsg) {
			cout << "unekspected thro occured failed thromsg is: "<< thromsg << endl;
			cout << "failed test 0x2 : ctest_knstrktr::tn_argd_mr" << endl ;
			return 0x2;
		}
	///////////////////////////////
	cout << "----ctest_knstrktr::tn_argd tests Aal passed----------------------------------------------" << endl ;
	return 0;
}

int ctest_knstrktr::tn_argd_val0()
{
	cplong along; long eksp_val; int eksp_pl;
	cout << "------ctest_knstrktr::tn_argd_val0 Aal tests----------------------------------------------------------" << endl ;
	///////////////////////////////
	try {
		cout << "----try catch-1---- cplong along;" << endl;
		along = cplong(); eksp_val=0; eksp_pl=0;
		cout << "along is " << along << endl ;
		cout << "along.value is " << along.get_value() << " and eksp_val is " << eksp_val << endl ;
		cout << "along.pl is " << along.get_pl() << " and eksp_pl is " << eksp_pl << endl ;
		if((along.get_value() == eksp_val) && (along.get_pl() == eksp_pl))
		{ cout << "passed test 100(h) : test_kns" << endl ; }
		else { cout << "failed test_kns 100(h) : " << endl ; return 0x100;}
	} catch(char const* thromsg) {
		cout << "unekspected thro occured failed thromsg is: "<< thromsg << endl;
		cout << "failed test 100(h) : test_kns" << endl ;
		return 0x100;
	}
	///////////////////////////////
	///////////////////////////////
	try {
		cout << "----try catch-2---- cplong along(0);" << endl;
		along = cplong(0); eksp_val=0; eksp_pl=0;
		cout << "along is " << along << endl ;
		cout << "along.value is " << along.get_value() << " and eksp_val is " << eksp_val << endl ;
		cout << "along.pl is " << along.get_pl() << " and eksp_pl is " << eksp_pl << endl ;
		if((along.get_value() == eksp_val) && (along.get_pl() == eksp_pl))
		{ cout << "passed test 103(h) : test_kns" << endl ; }
		else { cout << "failed test_kns 103(h) : " << endl ; return 0x100;}
	} catch(char const* thromsg) {
		cout << "unekspected thro occured failed thromsg is: "<< thromsg << endl;
		cout << "failed test 103(h) : test_kns" << endl ;
		return 0x103;
	}
	///////////////////////////////
	///////////////////////////////
	cout << "------test 104(h) : test_kns ------------------------------------------------------------------" << endl ;
	try {
		cout << "----try catch----- cplong along(cplong::min_long);" << endl;
		cplong along(cplong::min_long); eksp_val=cplong::min_long; eksp_pl=0;
		cout << "along is " << along << endl ;
		cout << "along.value is -" << -along.get_value() << " and eksp_val is -" << -eksp_val << endl ;
		cout << "along.pl is " << along.get_pl() << " and eksp_pl is " << eksp_pl << endl ;
		if((along.get_value() == eksp_val) && (along.get_pl() == eksp_pl))
		{ cout << "passed test 104(h) : test_kns" << endl ; }
		else { cout << "failed test_kns 104(h) : " << endl ; return 0x100;}
	} catch(char const* thromsg) {
		cout << "unekspected thro occured failed thromsg is: "<< thromsg << endl;
		cout << "failed test 104(h) : test_kns" << endl ;
		return 0x104;
	}
	///////////////////////////////
	///////////////////////////////
	cout << "------test 105(h) : test_kns ------------------------------------------------------------------" << endl ;
	try {
		cout << "----try catch----- cplong along(cplong::meks_long);" << endl;
		cplong along(cplong::meks_long); eksp_val=cplong::meks_long; eksp_pl=0;
		cout << "along is " << along << endl ;
		cout << "along.value is " << along.get_value() << " and eksp_val is " << eksp_val << endl ;
		cout << "along.pl is " << along.get_pl() << " and eksp_pl is " << eksp_pl << endl ;
		if((along.get_value() == eksp_val) && (along.get_pl() == eksp_pl))
		{ cout << "passed test 105(h) : test_kns" << endl ; }
		else { cout << "failed test_kns 105(h) : " << endl ; return 0x100;}
	} catch(char const* thromsg) {
		cout << "unekspected thro occured failed thromsg is: "<< thromsg << endl;
		cout << "failed test 105(h) : test_kns" << endl ;
		return 0x105;
	}
	///////////////////////////////
	///////////////////////////////
	cout << "------test 110(h) : test_kns_near_ziro_value ------------------------------------------------------------------" << endl ;
	try {
		cout << "----try catch----- cplong along(0,-5);" << endl;
		cplong along(0,-5); eksp_val=0; eksp_pl=0;
		cout << "along is " << along << endl ;
		cout << "along.value is " << along.get_value() << " and eksp_val is " << eksp_val << endl ;
		cout << "along.pl is " << along.get_pl() << " and eksp_pl is " << eksp_pl << endl ;
		if((along.get_value() == eksp_val) && (along.get_pl() == eksp_pl))
		{ cout << "passed test 110(h) : test_kns_near_ziro_value" << endl ; }
		else { cout << "failed test_kns_near_ziro_value 100(h) : " << endl ; return 0x110;}
	} catch(char const* thromsg) {
		cout << "unekspected thro occured failed thromsg is: "<< thromsg << endl;
		cout << "failed test 110(h) : test_kns_near_ziro_value" << endl ;
		return 0x110;
	}
	///////////////////////////////
	///////////////////////////////
	cout << "------test 111(h) : test_kns_near_ziro_value ------------------------------------------------------------------" << endl ;
	try {
		cout << "----try catch----- cplong along(0,-0xaa);" << endl;
		cplong along(0,-0xaa); eksp_val=0; eksp_pl=0;
		cout << "along is " << along << endl ;
		cout << "along.value is " << along.get_value() << " and eksp_val is " << eksp_val << endl ;
		cout << "along.pl is " << along.get_pl() << " and eksp_pl is " << eksp_pl << endl ;
		if((along.get_value() == eksp_val) && (along.get_pl() == eksp_pl))
		{ cout << "passed test 111(h) : test_kns_near_ziro_value" << endl ; }
		else { cout << "failed test_kns_near_ziro_value 101(h) : " << endl ; return 0x111;}
	} catch(char const* thromsg) {
		cout << "unekspected thro occured failed thromsg is: "<< thromsg << endl;
		cout << "failed test 111(h) : test_kns_near_ziro_value" << endl ;
		return 0x111;
	}
	///////////////////////////////
	///////////////////////////////
	cout << "------test 102(h) : test_kns_near_ziro_value ------------------------------------------------------------------" << endl ;
	try {
		cout << "----try catch----- cplong along(-0x1);" << endl;
		cplong along(-0x1); eksp_val=-1; eksp_pl=0;
		cout << "along is " << along << endl ;
		cout << "along.value is -" << -along.get_value() << " and eksp_val is -" << -eksp_val << endl ;
		cout << "along.pl is " << along.get_pl() << " and eksp_pl is " << eksp_pl << endl ;
		if((along.get_value() == eksp_val) && (along.get_pl() == eksp_pl))
		{ cout << "passed test 102(h) : test_kns_near_ziro_value" << endl ; }
		else { cout << "failed test_kns_near_ziro_value 102(h) : " << endl ; return 0x100;}
	} catch(char const* thromsg) {
		cout << "unekspected thro occured failed thromsg is: "<< thromsg << endl;
		cout << "failed test 102(h) : test_kns_near_ziro_value" << endl ;
		return 0x102;
	}
	///////////////////////////////
	return 0;
}
int ctest_knstrktr::ty_argd_mr()
{
//	cplong a; // long eval; int epl; // int val; int pl;
//	cout << hex << "----ctest_knstrktr::ty_argd_ml tests bilo----------------------------------------------" << endl ;
//	cout << "----ctest_knstrktr::tn_argd tests Aal passed----------------------------------------------" << endl ;
	return 0;
}
// } /* namespace std */
