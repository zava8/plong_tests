/*
 * ctestknstrktrstr.cpp
 *
 *  Created on: 04-Feb-2022
 *      Author: viml
 //////
	if(
			(s=="0") || (s=="hX0") ||
			(s=="+0") || (s=="-0") || (s=="+hX0") || (s=="-hX0") ||
			(s==".0") || (s=="+.0") || (s=="-.0") ||
			(s=="hX.0") || (s=="+hX.0") || (s=="-hX.0")
	) { value = 0; pl = 0; }
	else if(slength<1) { throw "emptrystring_not_plong" ; }
	else if(
			(s=="+") || (s=="-") ||
			(s=="+.") || (s=="-.") || (s==".") ||
			(s=="+hX") || (s=="-hX") || (s=="hX") ||
			(s=="+hX.") || (s=="-hX.") || (s=="hX.")
	) { throw "thro_not_plong_str" ; }
 //////
 */

#include "ctestknstrktrstr.h"
#include <iostream>
#include "cplong.h"

// namespace std {
//if(
//		(s=="0") || (s=="hX0") ||
//		(s=="+0") || (s=="-0") || (s=="+hX0") || (s=="-hX0") ||
//		(s==".0") || (s=="+.0") || (s=="-.0") ||
//		(s=="hX.0") || (s=="+hX.0") || (s=="-hX.0")
//) { value = 0; pl = 0; }
int ctest_knstrktr_str::test_kns_str_ziro_value()
{
	long eksp_val; int eksp_pl;
	///////////////////////////////
	cout << "------test 1081(h) : ctest_knstrktr_str::test_kns_str_ziro_value ------------------------------------------------------------------" << endl ;
	try {
		cout << "tryingcatch cplong pl4('0');" << endl;
		cplong pl4("0"); eksp_val=0; eksp_pl=0;
		cout << "pl4 is " << pl4 << endl ;
		cout << "pl4.value is " << pl4.get_value() << " and eksp_val is " << eksp_val << endl ;
		cout << "pl4.pl is " << pl4.get_pl() << " and eksp_pl is " << eksp_pl << endl ;
		if((pl4.get_value() == eksp_val) && (pl4.get_pl() == eksp_pl))
		{ cout << "passed test 1081(h) : test_kns_str_ziro_value" << endl ; }
		else { cout << "failed test_kns_str_ziro_value 1081(h) : " << endl ; return 0x1081;}
	} catch(char const* thromsg) {
		cout << "unekspected thro occured failed thromsg is: "<< thromsg << endl;
		cout << "failed test 1081(h) : test_kns_str_ziro_value" << endl ;
		return 0x1081;
	}
	///////////////////////////////
	///////////////////////////////
	cout << "------test 1082(h) : test_kns_str_ziro_value ------------------------------------------------------------------" << endl ;
	try {
		cout << "tryingcatch cplong pl4('+0');" << endl;
		cplong pl4("+0"); eksp_val=0; eksp_pl=0;
		cout << "pl4 is " << pl4 << endl ;
		cout << "pl4.value is " << pl4.get_value() << " and eksp_val is " << eksp_val << endl ;
		cout << "pl4.pl is " << pl4.get_pl() << " and eksp_pl is " << eksp_pl << endl ;
		if((pl4.get_value() == eksp_val) && (pl4.get_pl() == eksp_pl))
		{ cout << "passed test 1082(h) : test_kns_str_ziro_value" << endl ; }
		else { cout << "failed test_kns_str_ziro_value 1082(h) : " << endl ; return 0x1082;}
	} catch(char const* thromsg) {
		cout << "unekspected thro occured failed thromsg is: "<< thromsg << endl;
		cout << "failed test 1082(h) : test_kns_str_ziro_value" << endl ;
		return 0x1082;
	}
	///////////////////////////////
	///////////////////////////////
	cout << "------test 1083(h) : test_kns_str_ziro_value ------------------------------------------------------------------" << endl ;
	try {
		cout << "tryingcatch cplong pl4('-0');" << endl;
		cplong pl4("-0"); eksp_val=0; eksp_pl=0;
		cout << "pl4 is " << pl4 << endl ;
		cout << "pl4.value is " << pl4.get_value() << " and eksp_val is " << eksp_val << endl ;
		cout << "pl4.pl is " << pl4.get_pl() << " and eksp_pl is " << eksp_pl << endl ;
		if((pl4.get_value() == eksp_val) && (pl4.get_pl() == eksp_pl))
		{ cout << "passed test 1083(h) : test_kns_str_ziro_value" << endl ; }
		else { cout << "failed test_kns_str_ziro_value 1083(h) : " << endl ; return 0x1083;}
	} catch(char const* thromsg) {
		cout << "unekspected thro occured failed thromsg is: "<< thromsg << endl;
		cout << "failed test 1083(h) : test_kns_str_ziro_value" << endl ;
		return 0x1083;
	}
	///////////////////////////////
	///////////////////////////////
	cout << "------test 1084(h) : test_kns_str_ziro_value ------------------------------------------------------------------" << endl ;
	try {
		cout << "tryingcatch cplong pl4('.0');" << endl;
		cplong pl4(".0"); eksp_val=0; eksp_pl=0;
		cout << "pl4 is " << pl4 << endl ;
		cout << "pl4.value is " << pl4.get_value() << " and eksp_val is " << eksp_val << endl ;
		cout << "pl4.pl is " << pl4.get_pl() << " and eksp_pl is " << eksp_pl << endl ;
		if((pl4.get_value() == eksp_val) && (pl4.get_pl() == eksp_pl))
		{ cout << "passed test 1084(h) : test_kns_str_ziro_value" << endl ; }
		else { cout << "failed test_kns_str_ziro_value 1084(h) : " << endl ; return 0x1084;}
	} catch(char const* thromsg) {
		cout << "unekspected thro occured failed thromsg is: "<< thromsg << endl;
		cout << "failed test 1084(h) : test_kns_str_ziro_value" << endl ;
		return 0x1084;
	}
	///////////////////////////////
	///////////////////////////////
	cout << "------test 1085(h) : test_kns_str_ziro_value ------------------------------------------------------------------" << endl ;
	try {
		cout << "tryingcatch cplong pl4('+.0');" << endl;
		cplong pl4("+.0"); eksp_val=0; eksp_pl=0;
		cout << "pl4 is " << pl4 << endl ;
		cout << "pl4.value is " << pl4.get_value() << " and eksp_val is " << eksp_val << endl ;
		cout << "pl4.pl is " << pl4.get_pl() << " and eksp_pl is " << eksp_pl << endl ;
		if((pl4.get_value() == eksp_val) && (pl4.get_pl() == eksp_pl))
		{ cout << "passed test 1085(h) : test_kns_str_ziro_value" << endl ; }
		else { cout << "failed test_kns_str_ziro_value 1085(h) : " << endl ; return 0x1085;}
	} catch(char const* thromsg) {
		cout << "unekspected thro occured failed thromsg is: "<< thromsg << endl;
		cout << "failed test 1085(h) : test_kns_str_ziro_value" << endl ;
		return 0x1085;
	}
	///////////////////////////////
	///////////////////////////////
	cout << "------test 1086(h) : test_kns_str_ziro_value ------------------------------------------------------------------" << endl ;
	try {
		cout << "tryingcatch cplong pl4('-.0');" << endl;
		cplong pl4("-.0"); eksp_val=0; eksp_pl=0;
		cout << "pl4 is " << pl4 << endl ;
		cout << "pl4.value is " << pl4.get_value() << " and eksp_val is " << eksp_val << endl ;
		cout << "pl4.pl is " << pl4.get_pl() << " and eksp_pl is " << eksp_pl << endl ;
		if((pl4.get_value() == eksp_val) && (pl4.get_pl() == eksp_pl))
		{ cout << "passed test 1086(h) : test_kns_str_ziro_value" << endl ; }
		else { cout << "failed test_kns_str_ziro_value 1086(h) : " << endl ; return 0x1086;}
	} catch(char const* thromsg) {
		cout << "unekspected thro occured failed thromsg is: "<< thromsg << endl;
		cout << "failed test 1086(h) : test_kns_str_ziro_value" << endl ;
		return 0x1086;
	}
	///////////////////////////////
	///////////////////////////////
	cout << "------test 1087(h) : test_kns_str_ziro_value ------------------------------------------------------------------" << endl ;
	try {
		cout << "tryingcatch cplong pl4('hX0');" << endl;
		cplong pl4("hX0"); eksp_val=0; eksp_pl=0;
		cout << "pl4 is " << pl4 << endl ;
		cout << "pl4.value is " << pl4.get_value() << " and eksp_val is " << eksp_val << endl ;
		cout << "pl4.pl is " << pl4.get_pl() << " and eksp_pl is " << eksp_pl << endl ;
		if((pl4.get_value() == eksp_val) && (pl4.get_pl() == eksp_pl))
		{ cout << "passed test 1087(h) : test_kns_str_ziro_value" << endl ; }
		else { cout << "failed test_kns_str_ziro_value 1087(h) : " << endl ; return 0x1087;}
	} catch(char const* thromsg) {
		cout << "unekspected thro occured failed thromsg is: "<< thromsg << endl;
		cout << "failed test 1087(h) : test_kns_str_ziro_value" << endl ;
		return 0x1087;
	}
	///////////////////////////////
	///////////////////////////////
	cout << "------test 1088(h) : test_kns_str_ziro_value ------------------------------------------------------------------" << endl ;
	try {
		cout << "tryingcatch cplong pl4('+hX0');" << endl;
		cplong pl4("+hX0"); eksp_val=0; eksp_pl=0;
		cout << "pl4 is " << pl4 << endl ;
		cout << "pl4.value is " << pl4.get_value() << " and eksp_val is " << eksp_val << endl ;
		cout << "pl4.pl is " << pl4.get_pl() << " and eksp_pl is " << eksp_pl << endl ;
		if((pl4.get_value() == eksp_val) && (pl4.get_pl() == eksp_pl))
		{ cout << "passed test 1088(h) : test_kns_str_ziro_value" << endl ; }
		else { cout << "failed test_kns_str_ziro_value 1088(h) : " << endl ; return 0x1088;}
	} catch(char const* thromsg) {
		cout << "unekspected thro occured failed thromsg is: "<< thromsg << endl;
		cout << "failed test 1088(h) : test_kns_str_ziro_value" << endl ;
		return 0x1088;
	}
	///////////////////////////////
	///////////////////////////////
	cout << "------test 1089(h) : test_kns_str_ziro_value ------------------------------------------------------------------" << endl ;
	try {
		cout << "tryingcatch cplong pl4('-hX0');" << endl;
		cplong pl4("-hX0"); eksp_val=0; eksp_pl=0;
		cout << "pl4 is " << pl4 << endl ;
		cout << "pl4.value is " << pl4.get_value() << " and eksp_val is " << eksp_val << endl ;
		cout << "pl4.pl is " << pl4.get_pl() << " and eksp_pl is " << eksp_pl << endl ;
		if((pl4.get_value() == eksp_val) && (pl4.get_pl() == eksp_pl))
		{ cout << "passed test 1089(h) : test_kns_str_ziro_value" << endl ; }
		else { cout << "failed test_kns_str_ziro_value 1089(h) : " << endl ; return 0x1089;}
	} catch(char const* thromsg) {
		cout << "unekspected thro occured failed thromsg is: "<< thromsg << endl;
		cout << "failed test 1089(h) : test_kns_str_ziro_value" << endl ;
		return 0x1089;
	}
	///////////////////////////////
	///////////////////////////////
	cout << "------test 108A(h) : test_kns_str_ziro_value ------------------------------------------------------------------" << endl ;
	try {
		cout << "tryingcatch cplong pl4('hX.0');" << endl;
		cplong pl4("hX.0"); eksp_val=0; eksp_pl=0;
		cout << "pl4 is " << pl4 << endl ;
		cout << "pl4.value is " << pl4.get_value() << " and eksp_val is " << eksp_val << endl ;
		cout << "pl4.pl is " << pl4.get_pl() << " and eksp_pl is " << eksp_pl << endl ;
		if((pl4.get_value() == eksp_val) && (pl4.get_pl() == eksp_pl))
		{ cout << "passed test 108A(h) : test_kns_str_ziro_value" << endl ; }
		else { cout << "failed test_kns_str_ziro_value 108A(h) : " << endl ; return 0x108A;}
	} catch(char const* thromsg) {
		cout << "unekspected thro occured failed thromsg is: "<< thromsg << endl;
		cout << "failed test 108A(h) : test_kns_str_ziro_value" << endl ;
		return 0x108A;
	}
	///////////////////////////////
	///////////////////////////////
	cout << "------test 108B(h) : test_kns_str_ziro_value ------------------------------------------------------------------" << endl ;
	try {
		cout << "tryingcatch cplong pl4('+hX.0');" << endl;
		cplong pl4("+hX.0"); eksp_val=0; eksp_pl=0;
		cout << "pl4 is " << pl4 << endl ;
		cout << "pl4.value is " << pl4.get_value() << " and eksp_val is " << eksp_val << endl ;
		cout << "pl4.pl is " << pl4.get_pl() << " and eksp_pl is " << eksp_pl << endl ;
		if((pl4.get_value() == eksp_val) && (pl4.get_pl() == eksp_pl))
		{ cout << "passed test 108B(h) : test_kns_str_ziro_value" << endl ; }
		else { cout << "failed test_kns_str_ziro_value 108B(h) : " << endl ; return 0x108B;}
	} catch(char const* thromsg) {
		cout << "unekspected thro occured failed thromsg is: "<< thromsg << endl;
		cout << "failed test 108B(h) : test_kns_str_ziro_value" << endl ;
		return 0x108B;
	}
	///////////////////////////////
	///////////////////////////////
	cout << "------test 108C(h) : test_kns_str_ziro_value ------------------------------------------------------------------" << endl ;
	try {
		cout << "tryingcatch cplong pl4('-hX.0');" << endl;
		cplong pl4("-hX.0"); eksp_val=0; eksp_pl=0;
		cout << "pl4 is " << pl4 << endl ;
		cout << "pl4.value is " << pl4.get_value() << " and eksp_val is " << eksp_val << endl ;
		cout << "pl4.pl is " << pl4.get_pl() << " and eksp_pl is " << eksp_pl << endl ;
		if((pl4.get_value() == eksp_val) && (pl4.get_pl() == eksp_pl))
		{ cout << "passed test 108C(h) : test_kns_str_ziro_value" << endl ; }
		else { cout << "failed test_kns_str_ziro_value 108C(h) : " << endl ; return 0x108C;}
	} catch(char const* thromsg) {
		cout << "unekspected thro occured failed thromsg is: "<< thromsg << endl;
		cout << "failed test 108C(h) : test_kns_str_ziro_value" << endl ;
		return 0x108C;
	}
	///////////////////////////////

	return 0;
}
int ctest_knstrktr_str::test_kns_str_vn_no_thro()
{
	long eksp_val; int eksp_pl;
	cout << "------test 10081(h) : ctest_knstrktr_str::test_kns_str_vn_no_thro ------------------------------------------------------------------" << endl ;
	///////////////////////////////
	try {
		cout << "tryingcatch cplong pl4('1');" << endl;
		cplong pl4("1"); eksp_val=1; eksp_pl=0;
		cout << "pl4 is " << pl4 << endl ;
		cout << "pl4.value is " << pl4.get_value() << " and eksp_val is " << eksp_val << endl ;
		cout << "pl4.pl is " << pl4.get_pl() << " and eksp_pl is " << eksp_pl << endl ;
		if((pl4.get_value() == eksp_val) && (pl4.get_pl() == eksp_pl))
		{ cout << "passed test 10081(h) : test_kns_str_vn_value" << endl ; }
		else { cout << "failed test_kns_str_vn_value 10081(h) : " << endl ; return 0x10081;}
	} catch(char const* thromsg) {
		cout << "unekspected thro occured failed thromsg is: "<< thromsg << endl;
		cout << "failed test 10081(h) : test_kns_str_vn_value" << endl ;
		return 0x10081;
	}
	///////////////////////////////
	///////////////////////////////
	try {
		cout << "tryingcatch cplong pl4('1000000000000000000');" << endl;
		cplong pl4("1000000000000000000"); eksp_val=0xDE0B6B3A764; eksp_pl=4;
		cout << "pl4 is " << pl4 << endl ;
		cout << "pl4.value is " << pl4.get_value() << " and eksp_val is " << eksp_val << endl ;
		cout << "pl4.pl is " << pl4.get_pl() << " and eksp_pl is " << eksp_pl << endl ;
		if((pl4.get_value() == eksp_val) && (pl4.get_pl() == eksp_pl))
		{ cout << "passed test 10081(h) : test_kns_str_vn_value" << endl ; }
		else { cout << "failed test_kns_str_vn_value 10081(h) : " << endl ; return 0x10081;}
	} catch(char const* thromsg) {
		cout << "unekspected thro occured failed thromsg is: "<< thromsg << endl;
		cout << "failed test 10081(h) : test_kns_str_vn_value" << endl ;
		return 0x10081;
	}
	///////////////////////////////
	///////////////////////////////
	try {
		cout << "tryingcatch cplong pl4('0000000000000000001');" << endl;
		cplong pl4("0000000000000000001"); eksp_val=1; eksp_pl=0;
		cout << "pl4 is " << pl4 << endl ;
		cout << "pl4.value is " << pl4.get_value() << " and eksp_val is " << eksp_val << endl ;
		cout << "pl4.pl is " << pl4.get_pl() << " and eksp_pl is " << eksp_pl << endl ;
		if((pl4.get_value() == eksp_val) && (pl4.get_pl() == eksp_pl))
		{ cout << "passed test 10081(h) : test_kns_str_vn_value" << endl ; }
		else { cout << "failed test_kns_str_vn_value 10081(h) : " << endl ; return 0x10081;}
	} catch(char const* thromsg) {
		cout << "unekspected thro occured failed thromsg is: "<< thromsg << endl;
		cout << "failed test 10081(h) : test_kns_str_vn_value" << endl ;
		return 0x10081;
	}
	///////////////////////////////
	///////////////////////////////
	try {
		cout << "tryingcatch cplong pl4('hX1');" << endl;
		cplong pl4("hX1"); eksp_val=1; eksp_pl=0;
		cout << "pl4 is " << pl4 << endl ;
		cout << "pl4.value is " << pl4.get_value() << " and eksp_val is " << eksp_val << endl ;
		cout << "pl4.pl is " << pl4.get_pl() << " and eksp_pl is " << eksp_pl << endl ;
		if((pl4.get_value() == eksp_val) && (pl4.get_pl() == eksp_pl))
		{ cout << "passed test 10081(h) : test_kns_str_vn_value" << endl ; }
		else { cout << "failed test_kns_str_vn_value 10081(h) : " << endl ; return 0x10081;}
	} catch(char const* thromsg) {
		cout << "unekspected thro occured failed thromsg is: "<< thromsg << endl;
		cout << "failed test 10081(h) : test_kns_str_vn_value" << endl ;
		return 0x10081;
	}
	///////////////////////////////
	///////////////////////////////
	try {
		cout << "tryingcatch cplong pl4('hX1000000000000000');" << endl;
		cplong pl4("hX1000000000000000"); eksp_val=0x1; eksp_pl=0xF;
		cout << "pl4 is " << pl4 << endl ;
		cout << "pl4.value is " << pl4.get_value() << " and eksp_val is " << eksp_val << endl ;
		cout << "pl4.pl is " << pl4.get_pl() << " and eksp_pl is " << eksp_pl << endl ;
		if((pl4.get_value() == eksp_val) && (pl4.get_pl() == eksp_pl))
		{ cout << "passed test 10081(h) : test_kns_str_vn_value" << endl ; }
		else { cout << "failed test_kns_str_vn_value 10081(h) : " << endl ; return 0x10081;}
	} catch(char const* thromsg) {
		cout << "unekspected thro occured failed thromsg is: "<< thromsg << endl;
		cout << "failed test 10081(h) : test_kns_str_vn_value" << endl ;
		return 0x10081;
	}
	///////////////////////////////
	///////////////////////////////
	try {
		cout << "tryingcatch cplong pl4('hX0000000000000001');" << endl;
		cplong pl4("hX0000000000000001"); eksp_val=1; eksp_pl=0;
		cout << "pl4 is " << pl4 << endl ;
		cout << "pl4.value is " << pl4.get_value() << " and eksp_val is " << eksp_val << endl ;
		cout << "pl4.pl is " << pl4.get_pl() << " and eksp_pl is " << eksp_pl << endl ;
		if((pl4.get_value() == eksp_val) && (pl4.get_pl() == eksp_pl))
		{ cout << "passed test 10081(h) : test_kns_str_vn_value" << endl ; }
		else { cout << "failed test_kns_str_vn_value 10081(h) : " << endl ; return 0x10081;}
	} catch(char const* thromsg) {
		cout << "unekspected thro occured failed thromsg is: "<< thromsg << endl;
		cout << "failed test 10081(h) : test_kns_str_vn_value" << endl ;
		return 0x10081;
	}
	///////////////////////////////

	return 0;
}
int ctest_knstrktr_str::test_kns_str_vnpoint_no_thro()
{
	long eksp_val; int eksp_pl;
	cout << "------test 10082(h) : ctest_knstrktr_str::test_kns_str_vnpoint_no_thro ------------------------------------------------------------------" << endl ;
	///////////////////////////////
//	try {
//		cout << "tryingcatch cplong pl4('.1');" << endl;
//		cplong pl4(".1"); eksp_val=0X1999999999; eksp_pl=-0XA;
//		cout << "pl4 is " << pl4 << endl ;
//		cout << "pl4.value is " << pl4.get_value() << " and eksp_val is " << eksp_val << endl ;
//		cout << "pl4.pl is -" << -pl4.get_pl() << " and eksp_pl is -" << -eksp_pl << endl ;
//		if((pl4.get_value() == eksp_val) && (pl4.get_pl() == eksp_pl))
//		{ cout << "passed test 10082(h) : test_kns_str_vnpoint_no_thro" << endl ; }
//		else { cout << "failed test_kns_str_vnpoint_no_thro 10082(h) : " << endl ; return 0x10082;}
//	} catch(char const* thromsg) {
//		cout << "unekspected thro occured failed thromsg is: "<< thromsg << endl;
//		cout << "failed test 10082(h) : test_kns_str_vnpoint_no_thro" << endl ;
//		return 0x10082;
//	}
	///////////////////////////////
	///////////////////////////////
//	try {
//		cout << "tryingcatch cplong pl4('1.');" << endl;
//		cplong pl4("1."); eksp_val=1; eksp_pl=0;
//		cout << "pl4 is " << pl4 << endl ;
//		cout << "pl4.value is " << pl4.get_value() << " and eksp_val is " << eksp_val << endl ;
//		cout << "pl4.pl is " << pl4.get_pl() << " and eksp_pl is " << eksp_pl << endl ;
//		if((pl4.get_value() == eksp_val) && (pl4.get_pl() == eksp_pl))
//		{ cout << "passed test 10082(h) : test_kns_str_vnpoint_no_thro" << endl ; }
//		else { cout << "failed test_kns_str_vnpoint_no_thro 10082(h) : " << endl ; return 0x10082;}
//	} catch(char const* thromsg) {
//		cout << "unekspected thro occured failed thromsg is: "<< thromsg << endl;
//		cout << "failed test 10082(h) : test_kns_str_vnpoint_no_thro" << endl ;
//		return 0x10082;
//	}
	///////////////////////////////
	///////////////////////////////
//	try {
//		cout << "tryingcatch cplong pl4('1000000000000000000.');" << endl;
//		cplong pl4("1000000000000000000."); eksp_val=0xDE0B6B3A764; eksp_pl=4;
//		cout << "pl4 is " << pl4 << endl ;
//		cout << "pl4.value is " << pl4.get_value() << " and eksp_val is " << eksp_val << endl ;
//		cout << "pl4.pl is " << pl4.get_pl() << " and eksp_pl is " << eksp_pl << endl ;
//		if((pl4.get_value() == eksp_val) && (pl4.get_pl() == eksp_pl))
//		{ cout << "passed test 10082(h) : test_kns_str_vnpoint_no_thro" << endl ; }
//		else { cout << "failed test_kns_str_vnpoint_no_thro 10082(h) : " << endl ; return 0x10082;}
//	} catch(char const* thromsg) {
//		cout << "unekspected thro occured failed thromsg is: "<< thromsg << endl;
//		cout << "failed test 10082(h) : test_kns_str_vnpoint_no_thro" << endl ;
//		return 0x10082;
//	}
	///////////////////////////////
	/////////////////////////// plong_failing
	try {
		cout << "tryingcatch cplong pl4('.000000000000000001');" << endl; // nr is 1 , dr is meks DE0B6B3A764
		cplong pl4(".00000000000000001"); eksp_val=0xB877AA; eksp_pl=-0x14; // B877AA.-10
		cout << "pl4 is " << pl4 << endl ;
		cout << "pl4.value is " << pl4.get_value() << " and eksp_val is " << eksp_val << endl ;
		cout << "pl4.pl is -" << -pl4.get_pl() << " and eksp_pl is -" << -eksp_pl << endl ;
		if((pl4.get_value() == eksp_val) && (pl4.get_pl() == eksp_pl))
		{ cout << "passed test 10082(h) : test_kns_str_vnpoint_no_thro" << endl ; }
		else { cout << "failed test_kns_str_vnpoint_no_thro 10082(h) : " << endl ; return 0x10082;}
	} catch(char const* thromsg) {
		cout << "unekspected thro occured failed thromsg is: "<< thromsg << endl;
		cout << "failed test 10082(h) : test_kns_str_vnpoint_no_thro" << endl ;
		return 0x10082;
	}
	///////////////////////////
	///////////////////////////////
	try {
		cout << "tryingcatch cplong pl4('hX.1');" << endl;
		cplong pl4("hX.1"); eksp_val=1; eksp_pl=-1;
		cout << "pl4 is " << pl4 << endl ;
		cout << "pl4.value is " << pl4.get_value() << " and eksp_val is " << eksp_val << endl ;
		cout << "pl4.pl is -" << -pl4.get_pl() << " and eksp_pl is -" << -eksp_pl << endl ;
		if((pl4.get_value() == eksp_val) && (pl4.get_pl() == eksp_pl))
		{ cout << "passed test 10082(h) : test_kns_str_vnpoint_no_thro" << endl ; }
		else { cout << "failed test_kns_str_vnpoint_no_thro 10082(h) : " << endl ; return 0x10082;}
	} catch(char const* thromsg) {
		cout << "unekspected thro occured failed thromsg is: "<< thromsg << endl;
		cout << "failed test 10082(h) : test_kns_str_vnpoint_no_thro" << endl ;
		return 0x10082;
	}
	///////////////////////////////
	///////////////////////////////
	try {
		cout << "tryingcatch cplong pl4('hX1.');" << endl;
		cplong pl4("hX1."); eksp_val=1; eksp_pl=0;
		cout << "pl4 is " << pl4 << endl ;
		cout << "pl4.value is " << pl4.get_value() << " and eksp_val is " << eksp_val << endl ;
		cout << "pl4.pl is " << pl4.get_pl() << " and eksp_pl is " << eksp_pl << endl ;
		if((pl4.get_value() == eksp_val) && (pl4.get_pl() == eksp_pl))
		{ cout << "passed test 10082(h) : test_kns_str_vnpoint_no_thro" << endl ; }
		else { cout << "failed test_kns_str_vnpoint_no_thro 10082(h) : " << endl ; return 0x10082;}
	} catch(char const* thromsg) {
		cout << "unekspected thro occured failed thromsg is: "<< thromsg << endl;
		cout << "failed test 10082(h) : test_kns_str_vnpoint_no_thro" << endl ;
		return 0x10082;
	}
	///////////////////////////////
	///////////////////////////////
	try {
		cout << "tryingcatch cplong pl4('hX1000000000000000.');" << endl;
		cplong pl4("hX1000000000000000."); eksp_val=0x1; eksp_pl=0xF;
		cout << "pl4 is " << pl4 << endl ;
		cout << "pl4.value is " << pl4.get_value() << " and eksp_val is " << eksp_val << endl ;
		cout << "pl4.pl is " << pl4.get_pl() << " and eksp_pl is " << eksp_pl << endl ;
		if((pl4.get_value() == eksp_val) && (pl4.get_pl() == eksp_pl))
		{ cout << "passed test 10082(h) : test_kns_str_vnpoint_no_thro" << endl ; }
		else { cout << "failed test_kns_str_vnpoint_no_thro 10082(h) : " << endl ; return 0x10082;}
	} catch(char const* thromsg) {
		cout << "unekspected thro occured failed thromsg is: "<< thromsg << endl;
		cout << "failed test 10082(h) : test_kns_str_vnpoint_no_thro" << endl ;
		return 0x10082;
	}
	///////////////////////////////
	/////////////////////////////
	try {
		cout << "tryingcatch cplong pl4('hX.0000000000000001');" << endl;
		cplong pl4("hX.0000000000000001"); eksp_val=1; eksp_pl=-0x10;
		cout << "pl4 is " << pl4 << endl ;
		cout << "pl4.value is " << pl4.get_value() << " and eksp_val is " << eksp_val << endl ;
		cout << "pl4.pl is -" << -pl4.get_pl() << " and eksp_pl is -" << -eksp_pl << endl ;
		if((pl4.get_value() == eksp_val) && (pl4.get_pl() == eksp_pl))
		{ cout << "passed test 10082(h) : test_kns_str_vnpoint_no_thro" << endl ; }
		else { cout << "failed test_kns_str_vnpoint_no_thro 10082(h) : " << endl ; return 0x10082;}
	} catch(char const* thromsg) {
		cout << "unekspected thro occured failed thromsg is: "<< thromsg << endl;
		cout << "failed test 10082(h) : test_kns_str_vnpoint_no_thro" << endl ;
		return 0x10082;
	}
	/////////////////////////////

	return 0;
}

int ctest_knstrktr_str::test_kns_str_overphlo_no()
{
	long eksp_val; int eksp_pl;
	///////////////////////////////
	cout << "------test 1091(h) : ctest_knstrktr_str::test_kns_str_overphlo_no ------------------------------------------------------------------" << endl ;
	try {
		cout << "tryingcatch cplong pl4('hX7???????????????');" << endl;
		cplong pl4("hX7???????????????"); eksp_val=0x7FFFFFFFFFFFFFFF; eksp_pl=0;
		cout << "pl4 is " << pl4 << endl ;
		cout << "pl4.value is " << pl4.get_value() << " and eksp_val is " << eksp_val << endl ;
		cout << "pl4.pl is " << pl4.get_pl() << " and eksp_pl is " << eksp_pl << endl ;
		if((pl4.get_value() == eksp_val) && (pl4.get_pl() == eksp_pl))
		{ cout << "passed test 1091(h) : test_kns_str_overphlo_no" << endl ; }
		else { cout << "failed test_kns_str_overphlo_no 1091(h) : " << endl ; return 0x1091;}
	} catch(char const* thromsg) {
		cout << "unekspected thro occured failed thromsg is: "<< thromsg << endl;
		cout << "failed test 1091(h) : test_kns_str_overphlo_no" << endl ;
		return 0x1091;
	}
	///////////////////////////////
	///////////////////////////////
	cout << "------test 1092(h) : ctest_knstrktr_str::test_kns_str_overphlo_no ------------------------------------------------------------------" << endl ;
	try {
		cout << "tryingcatch cplong pl4('+hX7???????????????');" << endl;
		cplong pl4("+hX7???????????????"); eksp_val=0x7FFFFFFFFFFFFFFF; eksp_pl=0;
		cout << "pl4 is " << pl4 << endl ;
		cout << "pl4.value is " << pl4.get_value() << " and eksp_val is " << eksp_val << endl ;
		cout << "pl4.pl is " << pl4.get_pl() << " and eksp_pl is " << eksp_pl << endl ;
		if((pl4.get_value() == eksp_val) && (pl4.get_pl() == eksp_pl))
		{ cout << "passed test 1092(h) : test_kns_str_overphlo_no" << endl ; }
		else { cout << "failed test_kns_str_overphlo_no 1092(h) : " << endl ; return 0x1092;}
	} catch(char const* thromsg) {
		cout << "unekspected thro occured failed thromsg is: "<< thromsg << endl;
		cout << "failed test 1092(h) : test_kns_str_overphlo_no" << endl ;
		return 0x1092;
	}
	///////////////////////////////
	///////////////////////////////
	cout << "------test 1093(h) : ctest_knstrktr_str::test_kns_str_overphlo_no ------------------------------------------------------------------" << endl ;
	try {
		cout << "tryingcatch cplong pl4('hX7???????????????.0');" << endl;
		cplong pl4("hX7???????????????.0"); eksp_val=0x7FFFFFFFFFFFFFFF; eksp_pl=0;
		cout << "pl4 is " << pl4 << endl ;
		cout << "pl4.value is " << pl4.get_value() << " and eksp_val is " << eksp_val << endl ;
		cout << "pl4.pl is " << pl4.get_pl() << " and eksp_pl is " << eksp_pl << endl ;
		if((pl4.get_value() == eksp_val) && (pl4.get_pl() == eksp_pl))
		{ cout << "passed test 1093(h) : test_kns_str_overphlo_no" << endl ; }
		else { cout << "failed test_kns_str_overphlo_no 1093(h) : " << endl ; return 0x1093;}
	} catch(char const* thromsg) {
		cout << "unekspected thro occured failed thromsg is: "<< thromsg << endl;
		cout << "failed test 1093(h) : test_kns_str_overphlo_no" << endl ;
		return 0x1093;
	}
	///////////////////////////////
	///////////////////////////////
	cout << "------test 1094(h) : ctest_knstrktr_str::test_kns_str_overphlo_no ------------------------------------------------------------------" << endl ;
	try {
		cout << "tryingcatch cplong pl4('+hX7???????????????.0');" << endl;
		cplong pl4("+hX7???????????????.0"); eksp_val=0x7FFFFFFFFFFFFFFF; eksp_pl=0;
		cout << "pl4 is " << pl4 << endl ;
		cout << "pl4.value is " << pl4.get_value() << " and eksp_val is " << eksp_val << endl ;
		cout << "pl4.pl is " << pl4.get_pl() << " and eksp_pl is " << eksp_pl << endl ;
		if((pl4.get_value() == eksp_val) && (pl4.get_pl() == eksp_pl))
		{ cout << "passed test 1094(h) : test_kns_str_overphlo_no" << endl ; }
		else { cout << "failed test_kns_str_overphlo_no 1094(h) : " << endl ; return 0x1094;}
	} catch(char const* thromsg) {
		cout << "unekspected thro occured failed thromsg is: "<< thromsg << endl;
		cout << "failed test 1094(h) : test_kns_str_overphlo_no" << endl ;
		return 0x1094;
	}
	///////////////////////////////
	///////////////////////////////
	cout << "------test 1095(h) : ctest_knstrktr_str::test_kns_str_overphlo_no ------------------------------------------------------------------" << endl ;
	try {
		cout << "tryingcatch cplong pl4('hX7???????????????.');" << endl;
		cplong pl4("hX7???????????????."); eksp_val=0x7FFFFFFFFFFFFFFF; eksp_pl=0;
		cout << "pl4 is " << pl4 << endl ;
		cout << "pl4.value is " << pl4.get_value() << " and eksp_val is " << eksp_val << endl ;
		cout << "pl4.pl is " << pl4.get_pl() << " and eksp_pl is " << eksp_pl << endl ;
		if((pl4.get_value() == eksp_val) && (pl4.get_pl() == eksp_pl))
		{ cout << "passed test 1095(h) : test_kns_str_overphlo_no" << endl ; }
		else { cout << "failed test_kns_str_overphlo_no 1095(h) : " << endl ; return 0x1095;}
	} catch(char const* thromsg) {
		cout << "unekspected thro occured failed thromsg is: "<< thromsg << endl;
		cout << "failed test 1095(h) : test_kns_str_overphlo_no" << endl ;
		return 0x1095;
	}
	///////////////////////////////
	///////////////////////////////
	cout << "------test 1096(h) : ctest_knstrktr_str::test_kns_str_overphlo_no ------------------------------------------------------------------" << endl ;
	try {
		cout << "tryingcatch cplong pl4('+hX7???????????????.');" << endl;
		cplong pl4("+hX7???????????????."); eksp_val=0x7FFFFFFFFFFFFFFF; eksp_pl=0;
		cout << "pl4 is " << pl4 << endl ;
		cout << "pl4.value is " << pl4.get_value() << " and eksp_val is " << eksp_val << endl ;
		cout << "pl4.pl is " << pl4.get_pl() << " and eksp_pl is " << eksp_pl << endl ;
		if((pl4.get_value() == eksp_val) && (pl4.get_pl() == eksp_pl))
		{ cout << "passed test 1096(h) : test_kns_str_overphlo_no" << endl ; }
		else { cout << "failed test_kns_str_overphlo_no 1096(h) : " << endl ; return 0x1096;}
	} catch(char const* thromsg) {
		cout << "unekspected thro occured failed thromsg is: "<< thromsg << endl;
		cout << "failed test 1096(h) : test_kns_str_overphlo_no" << endl ;
		return 0x1096;
	}
	///////////////////////////////
	return 0;
}
int ctest_knstrktr_str::test_kns_str_underphlo_no()
{
	long eksp_val; int eksp_pl;
	///////////////////////////////
	cout << "------test 1081(h) : ctest_knstrktr_str::test_kns_str_ziro_value ------------------------------------------------------------------" << endl ;
	try {
		cout << "tryingcatch cplong pl4('0');" << endl;
		cplong pl4("0"); eksp_val=0; eksp_pl=0;
		cout << "pl4 is " << pl4 << endl ;
		cout << "pl4.value is " << pl4.get_value() << " and eksp_val is " << eksp_val << endl ;
		cout << "pl4.pl is " << pl4.get_pl() << " and eksp_pl is " << eksp_pl << endl ;
		if((pl4.get_value() == eksp_val) && (pl4.get_pl() == eksp_pl))
		{ cout << "passed test 1081(h) : test_kns_str_ziro_value" << endl ; }
		else { cout << "failed test_kns_str_ziro_value 1081(h) : " << endl ; return 0x1081;}
	} catch(char const* thromsg) {
		cout << "unekspected thro occured failed thromsg is: "<< thromsg << endl;
		cout << "failed test 1081(h) : test_kns_str_ziro_value" << endl ;
		return 0x1081;
	}
	///////////////////////////////
	///////////////////////////////
	cout << "------test 1082(h) : test_kns_str_ziro_value ------------------------------------------------------------------" << endl ;
	try {
		cout << "tryingcatch cplong pl4('+0');" << endl;
		cplong pl4("+0"); eksp_val=0; eksp_pl=0;
		cout << "pl4 is " << pl4 << endl ;
		cout << "pl4.value is " << pl4.get_value() << " and eksp_val is " << eksp_val << endl ;
		cout << "pl4.pl is " << pl4.get_pl() << " and eksp_pl is " << eksp_pl << endl ;
		if((pl4.get_value() == eksp_val) && (pl4.get_pl() == eksp_pl))
		{ cout << "passed test 1082(h) : test_kns_str_ziro_value" << endl ; }
		else { cout << "failed test_kns_str_ziro_value 1082(h) : " << endl ; return 0x1082;}
	} catch(char const* thromsg) {
		cout << "unekspected thro occured failed thromsg is: "<< thromsg << endl;
		cout << "failed test 1082(h) : test_kns_str_ziro_value" << endl ;
		return 0x1082;
	}
	///////////////////////////////
	///////////////////////////////
	cout << "------test 1083(h) : test_kns_str_ziro_value ------------------------------------------------------------------" << endl ;
	try {
		cout << "tryingcatch cplong pl4('-0');" << endl;
		cplong pl4("-0"); eksp_val=0; eksp_pl=0;
		cout << "pl4 is " << pl4 << endl ;
		cout << "pl4.value is " << pl4.get_value() << " and eksp_val is " << eksp_val << endl ;
		cout << "pl4.pl is " << pl4.get_pl() << " and eksp_pl is " << eksp_pl << endl ;
		if((pl4.get_value() == eksp_val) && (pl4.get_pl() == eksp_pl))
		{ cout << "passed test 1083(h) : test_kns_str_ziro_value" << endl ; }
		else { cout << "failed test_kns_str_ziro_value 1083(h) : " << endl ; return 0x1083;}
	} catch(char const* thromsg) {
		cout << "unekspected thro occured failed thromsg is: "<< thromsg << endl;
		cout << "failed test 1083(h) : test_kns_str_ziro_value" << endl ;
		return 0x1083;
	}
	///////////////////////////////
	///////////////////////////////
	cout << "------test 1084(h) : test_kns_str_ziro_value ------------------------------------------------------------------" << endl ;
	try {
		cout << "tryingcatch cplong pl4('.0');" << endl;
		cplong pl4(".0"); eksp_val=0; eksp_pl=0;
		cout << "pl4 is " << pl4 << endl ;
		cout << "pl4.value is " << pl4.get_value() << " and eksp_val is " << eksp_val << endl ;
		cout << "pl4.pl is " << pl4.get_pl() << " and eksp_pl is " << eksp_pl << endl ;
		if((pl4.get_value() == eksp_val) && (pl4.get_pl() == eksp_pl))
		{ cout << "passed test 1084(h) : test_kns_str_ziro_value" << endl ; }
		else { cout << "failed test_kns_str_ziro_value 1084(h) : " << endl ; return 0x1084;}
	} catch(char const* thromsg) {
		cout << "unekspected thro occured failed thromsg is: "<< thromsg << endl;
		cout << "failed test 1084(h) : test_kns_str_ziro_value" << endl ;
		return 0x1084;
	}
	///////////////////////////////
	///////////////////////////////
	cout << "------test 1085(h) : test_kns_str_ziro_value ------------------------------------------------------------------" << endl ;
	try {
		cout << "tryingcatch cplong pl4('+.0');" << endl;
		cplong pl4("+.0"); eksp_val=0; eksp_pl=0;
		cout << "pl4 is " << pl4 << endl ;
		cout << "pl4.value is " << pl4.get_value() << " and eksp_val is " << eksp_val << endl ;
		cout << "pl4.pl is " << pl4.get_pl() << " and eksp_pl is " << eksp_pl << endl ;
		if((pl4.get_value() == eksp_val) && (pl4.get_pl() == eksp_pl))
		{ cout << "passed test 1085(h) : test_kns_str_ziro_value" << endl ; }
		else { cout << "failed test_kns_str_ziro_value 1085(h) : " << endl ; return 0x1085;}
	} catch(char const* thromsg) {
		cout << "unekspected thro occured failed thromsg is: "<< thromsg << endl;
		cout << "failed test 1085(h) : test_kns_str_ziro_value" << endl ;
		return 0x1085;
	}
	///////////////////////////////
	///////////////////////////////
	cout << "------test 1086(h) : test_kns_str_ziro_value ------------------------------------------------------------------" << endl ;
	try {
		cout << "tryingcatch cplong pl4('-.0');" << endl;
		cplong pl4("-.0"); eksp_val=0; eksp_pl=0;
		cout << "pl4 is " << pl4 << endl ;
		cout << "pl4.value is " << pl4.get_value() << " and eksp_val is " << eksp_val << endl ;
		cout << "pl4.pl is " << pl4.get_pl() << " and eksp_pl is " << eksp_pl << endl ;
		if((pl4.get_value() == eksp_val) && (pl4.get_pl() == eksp_pl))
		{ cout << "passed test 1086(h) : test_kns_str_ziro_value" << endl ; }
		else { cout << "failed test_kns_str_ziro_value 1086(h) : " << endl ; return 0x1086;}
	} catch(char const* thromsg) {
		cout << "unekspected thro occured failed thromsg is: "<< thromsg << endl;
		cout << "failed test 1086(h) : test_kns_str_ziro_value" << endl ;
		return 0x1086;
	}
	///////////////////////////////
	///////////////////////////////
	cout << "------test 1087(h) : test_kns_str_ziro_value ------------------------------------------------------------------" << endl ;
	try {
		cout << "tryingcatch cplong pl4('hX0');" << endl;
		cplong pl4("hX0"); eksp_val=0; eksp_pl=0;
		cout << "pl4 is " << pl4 << endl ;
		cout << "pl4.value is " << pl4.get_value() << " and eksp_val is " << eksp_val << endl ;
		cout << "pl4.pl is " << pl4.get_pl() << " and eksp_pl is " << eksp_pl << endl ;
		if((pl4.get_value() == eksp_val) && (pl4.get_pl() == eksp_pl))
		{ cout << "passed test 1087(h) : test_kns_str_ziro_value" << endl ; }
		else { cout << "failed test_kns_str_ziro_value 1087(h) : " << endl ; return 0x1087;}
	} catch(char const* thromsg) {
		cout << "unekspected thro occured failed thromsg is: "<< thromsg << endl;
		cout << "failed test 1087(h) : test_kns_str_ziro_value" << endl ;
		return 0x1087;
	}
	///////////////////////////////
	///////////////////////////////
	cout << "------test 1088(h) : test_kns_str_ziro_value ------------------------------------------------------------------" << endl ;
	try {
		cout << "tryingcatch cplong pl4('+hX0');" << endl;
		cplong pl4("+hX0"); eksp_val=0; eksp_pl=0;
		cout << "pl4 is " << pl4 << endl ;
		cout << "pl4.value is " << pl4.get_value() << " and eksp_val is " << eksp_val << endl ;
		cout << "pl4.pl is " << pl4.get_pl() << " and eksp_pl is " << eksp_pl << endl ;
		if((pl4.get_value() == eksp_val) && (pl4.get_pl() == eksp_pl))
		{ cout << "passed test 1088(h) : test_kns_str_ziro_value" << endl ; }
		else { cout << "failed test_kns_str_ziro_value 1088(h) : " << endl ; return 0x1088;}
	} catch(char const* thromsg) {
		cout << "unekspected thro occured failed thromsg is: "<< thromsg << endl;
		cout << "failed test 1088(h) : test_kns_str_ziro_value" << endl ;
		return 0x1088;
	}
	///////////////////////////////
	///////////////////////////////
	cout << "------test 1089(h) : test_kns_str_ziro_value ------------------------------------------------------------------" << endl ;
	try {
		cout << "tryingcatch cplong pl4('-hX0');" << endl;
		cplong pl4("-hX0"); eksp_val=0; eksp_pl=0;
		cout << "pl4 is " << pl4 << endl ;
		cout << "pl4.value is " << pl4.get_value() << " and eksp_val is " << eksp_val << endl ;
		cout << "pl4.pl is " << pl4.get_pl() << " and eksp_pl is " << eksp_pl << endl ;
		if((pl4.get_value() == eksp_val) && (pl4.get_pl() == eksp_pl))
		{ cout << "passed test 1089(h) : test_kns_str_ziro_value" << endl ; }
		else { cout << "failed test_kns_str_ziro_value 1089(h) : " << endl ; return 0x1089;}
	} catch(char const* thromsg) {
		cout << "unekspected thro occured failed thromsg is: "<< thromsg << endl;
		cout << "failed test 1089(h) : test_kns_str_ziro_value" << endl ;
		return 0x1089;
	}
	///////////////////////////////
	///////////////////////////////
	cout << "------test 108A(h) : test_kns_str_ziro_value ------------------------------------------------------------------" << endl ;
	try {
		cout << "tryingcatch cplong pl4('hX.0');" << endl;
		cplong pl4("hX.0"); eksp_val=0; eksp_pl=0;
		cout << "pl4 is " << pl4 << endl ;
		cout << "pl4.value is " << pl4.get_value() << " and eksp_val is " << eksp_val << endl ;
		cout << "pl4.pl is " << pl4.get_pl() << " and eksp_pl is " << eksp_pl << endl ;
		if((pl4.get_value() == eksp_val) && (pl4.get_pl() == eksp_pl))
		{ cout << "passed test 108A(h) : test_kns_str_ziro_value" << endl ; }
		else { cout << "failed test_kns_str_ziro_value 108A(h) : " << endl ; return 0x108A;}
	} catch(char const* thromsg) {
		cout << "unekspected thro occured failed thromsg is: "<< thromsg << endl;
		cout << "failed test 108A(h) : test_kns_str_ziro_value" << endl ;
		return 0x108A;
	}
	///////////////////////////////
	///////////////////////////////
	cout << "------test 108B(h) : test_kns_str_ziro_value ------------------------------------------------------------------" << endl ;
	try {
		cout << "tryingcatch cplong pl4('+hX.0');" << endl;
		cplong pl4("+hX.0"); eksp_val=0; eksp_pl=0;
		cout << "pl4 is " << pl4 << endl ;
		cout << "pl4.value is " << pl4.get_value() << " and eksp_val is " << eksp_val << endl ;
		cout << "pl4.pl is " << pl4.get_pl() << " and eksp_pl is " << eksp_pl << endl ;
		if((pl4.get_value() == eksp_val) && (pl4.get_pl() == eksp_pl))
		{ cout << "passed test 108B(h) : test_kns_str_ziro_value" << endl ; }
		else { cout << "failed test_kns_str_ziro_value 108B(h) : " << endl ; return 0x108B;}
	} catch(char const* thromsg) {
		cout << "unekspected thro occured failed thromsg is: "<< thromsg << endl;
		cout << "failed test 108B(h) : test_kns_str_ziro_value" << endl ;
		return 0x108B;
	}
	///////////////////////////////
	///////////////////////////////
	cout << "------test 108C(h) : test_kns_str_ziro_value ------------------------------------------------------------------" << endl ;
	try {
		cout << "tryingcatch cplong pl4('-hX.0');" << endl;
		cplong pl4("-hX.0"); eksp_val=0; eksp_pl=0;
		cout << "pl4 is " << pl4 << endl ;
		cout << "pl4.value is " << pl4.get_value() << " and eksp_val is " << eksp_val << endl ;
		cout << "pl4.pl is " << pl4.get_pl() << " and eksp_pl is " << eksp_pl << endl ;
		if((pl4.get_value() == eksp_val) && (pl4.get_pl() == eksp_pl))
		{ cout << "passed test 108C(h) : test_kns_str_ziro_value" << endl ; }
		else { cout << "failed test_kns_str_ziro_value 108C(h) : " << endl ; return 0x108C;}
	} catch(char const* thromsg) {
		cout << "unekspected thro occured failed thromsg is: "<< thromsg << endl;
		cout << "failed test 108C(h) : test_kns_str_ziro_value" << endl ;
		return 0x108C;
	}
	///////////////////////////////

	return 0;
}

///////////////////////////////document v
//if(
//			(s=="+") || (s=="-") ||
//			(s=="+.") || (s=="-.") || (s==".") ||
//			(s=="+hX") || (s=="-hX") || (s=="hX") ||
//			(s=="+hX.") || (s=="-hX.") || (s=="hX.")
//	) { throw "thro_not_plong_str" ; }
///////////////////////////////document ^
int ctest_knstrktr_str::test_kns_str_thro_yes()
{
	long eksp_val; int eksp_pl;
	///////////////////////////////
	cout << "------test 270(h) : test_kns_str_thro_yes ------------------------------------------------------------------" << endl ;
	try {
		cout << "tryingcatch cplong pl4('emptystring');" << endl;
		eksp_val=0; eksp_pl=0;
		cplong pl4("");
		cout << "tryingsuccess cplong pl4('emptystring');"  << endl ;
		cout << "pl4 is " << pl4 << endl ;
		cout << "pl4.value is " << pl4.get_value() << endl ;
		cout << "pl4.pl is " << pl4.get_pl() << endl ;
		cout << "thro did not occur so failed test 270(h) : test_kns_str_thro_yes" << endl ;
		return 0x270;
	} catch(char const* thromsg) {
		cout << "ekspected thro occured and thromsg is: "<< thromsg << endl;
		cout << "passed test 270(h) : test_kns_str_thro_yes" << endl ;
	}
	///////////////////////////////
	///////////////////////////////
	cout << "------test 271(h) : test_kns_str_thro_yes ------------------------------------------------------------------" << endl ;
	try {
		cout << "tryingcatch cplong pl4(string'+');" << endl;
		eksp_val=0; eksp_pl=0;
		cplong pl4("+");
		cout << "tryingsuccess cplong pl4(string'+');"  << endl ;
		cout << "pl4 is " << pl4 << endl ;
		cout << "pl4.value is " << pl4.get_value() << endl ;
		cout << "pl4.pl is " << pl4.get_pl() << endl ;
		cout << "thro did not occur so failed test 271(h) : test_kns_str_thro_yes" << endl ;
		return 0x271;
	} catch(char const* thromsg) {
		cout << "ekspected thro occured and thromsg is: "<< thromsg << endl;
		cout << "passed test 271(h) : test_kns_str_thro_yes" << endl ;
	}
	///////////////////////////////
	///////////////////////////////
	cout << "------test 272(h) : test_kns_str_thro_yes ------------------------------------------------------------------" << endl ;
	try {
		cout << "tryingcatch cplong pl4(string'-');" << endl;
		eksp_val=0; eksp_pl=0;
		cplong pl4("-");
		cout << "tryingsuccess cplong pl4(string'-');"  << endl ;
		cout << "pl4 is " << pl4 << endl ;
		cout << "pl4.value is " << pl4.get_value() << endl ;
		cout << "pl4.pl is " << pl4.get_pl() << endl ;
		cout << "thro did not occur so failed test 272(h) : test_kns_str_thro_yes" << endl ;
		return 0x272;
	} catch(char const* thromsg) {
		cout << "ekspected thro occured and thromsg is: "<< thromsg << endl;
		cout << "passed test 272(h) : test_kns_str_thro_yes" << endl ;
	}
	///////////////////////////////
	///////////////////////////////
	cout << "------test 273(h) : test_kns_str_thro_yes ------------------------------------------------------------------" << endl ;
	try {
		cout << "tryingcatch cplong pl4(string'hX');" << endl;
		eksp_val=0; eksp_pl=0;
		cplong pl4("hX");
		cout << "tryingsuccess cplong pl4(string'hX');"  << endl ;
		cout << "pl4 is " << pl4 << endl ;
		cout << "pl4.value is " << pl4.get_value() << endl ;
		cout << "pl4.pl is " << pl4.get_pl() << endl ;
		cout << "thro did not occur so failed test 273(h) : test_kns_str_thro_yes" << endl ;
		return 0x273;
	} catch(char const* thromsg) {
		cout << "ekspected thro occured and thromsg is: "<< thromsg << endl;
		cout << "passed test 273(h) : test_kns_str_thro_yes" << endl ;
	}
	///////////////////////////////
	///////////////////////////////
	cout << "------test 274(h) : test_kns_str_thro_yes ------------------------------------------------------------------" << endl ;
	try {
		cout << "tryingcatch cplong pl4(string'+hX');" << endl;
		eksp_val=0; eksp_pl=0;
		cplong pl4("+hX");
		cout << "tryingsuccess cplong pl4(string'+hX');"  << endl ;
		cout << "pl4 is " << pl4 << endl ;
		cout << "pl4.value is " << pl4.get_value() << endl ;
		cout << "pl4.pl is " << pl4.get_pl() << endl ;
		cout << "thro did not occur so failed test 274(h) : test_kns_str_thro_yes" << endl ;
		return 0x274;
	} catch(char const* thromsg) {
		cout << "ekspected thro occured and thromsg is: "<< thromsg << endl;
		cout << "passed test 274(h) : test_kns_str_thro_yes" << endl ;
	}
	///////////////////////////////
	///////////////////////////////
	cout << "------test 275(h) : test_kns_str_thro_yes ------------------------------------------------------------------" << endl ;
	try {
		cout << "tryingcatch cplong pl4(string'-hX');" << endl;
		eksp_val=0; eksp_pl=0;
		cplong pl4("-hX");
		cout << "tryingsuccess cplong pl4(string'-hX');"  << endl ;
		cout << "pl4 is " << pl4 << endl ;
		cout << "pl4.value is " << pl4.get_value() << endl ;
		cout << "pl4.pl is " << pl4.get_pl() << endl ;
		cout << "thro did not occur so failed test 275(h) : test_kns_str_thro_yes" << endl ;
		return 0x275;
	} catch(char const* thromsg) {
		cout << "ekspected thro occured and thromsg is: "<< thromsg << endl;
		cout << "passed test 275(h) : test_kns_str_thro_yes" << endl ;
	}
	///////////////////////////////
	///////////////////////////////
	cout << "------test 276(h) : test_kns_str_thro_yes ------------------------------------------------------------------" << endl ;
	try {
		cout << "tryingcatch cplong pl4(string'hX.');" << endl;
		eksp_val=0; eksp_pl=0;
		cplong pl4("hX.");
		cout << "tryingsuccess cplong pl4(string'hX.');"  << endl ;
		cout << "pl4 is " << pl4 << endl ;
		cout << "pl4.value is " << pl4.get_value() << endl ;
		cout << "pl4.pl is " << pl4.get_pl() << endl ;
		cout << "thro did not occur so failed test 276(h) : test_kns_str_thro_yes" << endl ;
		return 0x276;
	} catch(char const* thromsg) {
		cout << "ekspected thro occured and thromsg is: "<< thromsg << endl;
		cout << "passed test 276(h) : test_kns_str_thro_yes" << endl ;
	}
	///////////////////////////////
	///////////////////////////////
	cout << "------test 277(h) : test_kns_str_thro_yes ------------------------------------------------------------------" << endl ;
	try {
		cout << "tryingcatch cplong pl4(string'+hX.');" << endl;
		eksp_val=0; eksp_pl=0;
		cplong pl4("+hX.");
		cout << "tryingsuccess cplong pl4(string'+hX.');"  << endl ;
		cout << "pl4 is " << pl4 << endl ;
		cout << "pl4.value is " << pl4.get_value() << endl ;
		cout << "pl4.pl is " << pl4.get_pl() << endl ;
		cout << "thro did not occur so failed test 277(h) : test_kns_str_thro_yes" << endl ;
		return 0x277;
	} catch(char const* thromsg) {
		cout << "ekspected thro occured and thromsg is: "<< thromsg << endl;
		cout << "passed test 277(h) : test_kns_str_thro_yes" << endl ;
	}
	///////////////////////////////
	///////////////////////////////
	cout << "------test 278(h) : test_kns_str_thro_yes ------------------------------------------------------------------" << endl ;
	try {
		cout << "tryingcatch cplong pl4(string'-hX.');" << endl;
		eksp_val=0; eksp_pl=0;
		cplong pl4("-hX.");
		cout << "tryingsuccess cplong pl4(string'-hX.');"  << endl ;
		cout << "pl4 is " << pl4 << endl ;
		cout << "pl4.value is " << pl4.get_value() << endl ;
		cout << "pl4.pl is " << pl4.get_pl() << endl ;
		cout << "thro did not occur so failed test 278(h) : test_kns_str_thro_yes" << endl ;
		return 0x278;
	} catch(char const* thromsg) {
		cout << "ekspected thro occured and thromsg is: "<< thromsg << endl;
		cout << "passed test 278(h) : test_kns_str_thro_yes" << endl ;
	}
	///////////////////////////////
	///////////////////////////////
	cout << "------test 279(h) : test_kns_str_thro_yes ------------------------------------------------------------------" << endl ;
	try {
		cout << "tryingcatch cplong pl4(string'.');" << endl;
		eksp_val=0; eksp_pl=0;
		cplong pl4(".");
		cout << "tryingsuccess cplong pl4(string'.');"  << endl ;
		cout << "pl4 is " << pl4 << endl ;
		cout << "pl4.value is " << pl4.get_value() << endl ;
		cout << "pl4.pl is " << pl4.get_pl() << endl ;
		cout << "thro did not occur so failed test 279(h) : test_kns_str_thro_yes" << endl ;
		return 0x279;
	} catch(char const* thromsg) {
		cout << "ekspected thro occured and thromsg is: "<< thromsg << endl;
		cout << "passed test 279(h) : test_kns_str_thro_yes" << endl ;
	}
	///////////////////////////////
	///////////////////////////////
	cout << "------test 27A(h) : test_kns_str_thro_yes ------------------------------------------------------------------" << endl ;
	try {
		cout << "tryingcatch cplong pl4(string'+.');" << endl;
		eksp_val=0; eksp_pl=0;
		cplong pl4("+.");
		cout << "tryingsuccess cplong pl4(string'+.');"  << endl ;
		cout << "pl4 is " << pl4 << endl ;
		cout << "pl4.value is " << pl4.get_value() << endl ;
		cout << "pl4.pl is " << pl4.get_pl() << endl ;
		cout << "thro did not occur so failed test 27A(h) : test_kns_str_thro_yes" << endl ;
		return 0x27A;
	} catch(char const* thromsg) {
		cout << "ekspected thro occured and thromsg is: "<< thromsg << endl;
		cout << "passed test 27A(h) : test_kns_str_thro_yes" << endl ;
	}
	///////////////////////////////
	///////////////////////////////
	cout << "------test 27B(h) : test_kns_str_thro_yes ------------------------------------------------------------------" << endl ;
	try {
		cout << "tryingcatch cplong pl4(string'-.');" << endl;
		eksp_val=0; eksp_pl=0;
		cplong pl4("-.");
		cout << "tryingsuccess cplong pl4(string'-.');"  << endl ;
		cout << "pl4 is " << pl4 << endl ;
		cout << "pl4.value is " << pl4.get_value() << endl ;
		cout << "pl4.pl is " << pl4.get_pl() << endl ;
		cout << "thro did not occur so failed test 27B(h) : test_kns_str_thro_yes" << endl ;
		return 0x27B;
	} catch(char const* thromsg) {
		cout << "ekspected thro occured and thromsg is: "<< thromsg << endl;
		cout << "passed test 27B(h) : test_kns_str_thro_yes" << endl ;
	}
	///////////////////////////////

	return 0;
}
int ctest_knstrktr_str::test_kns_str_underphlo_yes()
{
	long eksp_val; int eksp_pl;
 	///////////////////////////////
	cout << "------test 2791(h) : test_kns_str_underphlo_yes ------------------------------------------------------------------" << endl ;
	try {
		cout << "tryingcatch cplong pl4('-9223372036854775808');" << endl;
		eksp_val=0; eksp_pl=0;
		cplong pl4("-9223372036854775808");
		cout << "tryingsuccess cplong pl4('-9223372036854775808');"  << endl ;
		cout << "pl4 is " << pl4 << endl ;
		cout << "pl4.value is " << pl4.get_value() << endl ;
		cout << "pl4.pl is " << pl4.get_pl() << endl ;
		cout << "thro did not occur so failed test 2791(h) : test_kns_str_underphlo_yes" << endl ;
		return 0x2791;
	} catch(char const* thromsg) {
		cout << "ekspected thro occured and thromsg is: "<< thromsg << endl;
		cout << "passed test 2791(h) : test_kns_str_underphlo_yes" << endl ;
	}
	///////////////////////////////
	///////////////////////////////
	cout << "------test 2792(h) : test_kns_str_underphlo_yes ------------------------------------------------------------------" << endl ;
	try {
		cout << "tryingcatch cplong pl4('-hX8???????????????');" << endl;
		eksp_val=0; eksp_pl=0;
		cplong pl4("-hX8???????????????");
		cout << "tryingsuccess cplong pl4('hX8???????????????');"  << endl ;
		cout << "pl4 is " << pl4 << endl ;
		cout << "pl4.value is " << pl4.get_value() << endl ;
		cout << "pl4.pl is " << pl4.get_pl() << endl ;
		cout << "thro did not occur so failed test 2792(h) : test_kns_str_underphlo_yes" << endl ;
		return 0x2792;
	} catch(char const* thromsg) {
		cout << "ekspected thro occured and thromsg is: "<< thromsg << endl;
		cout << "passed test 2792(h) : test_kns_str_underphlo_yes" << endl ;
	}
	///////////////////////////////

	return 0;
}
int ctest_knstrktr_str::test_kns_str_overphlo_yes()
{
	long eksp_val; int eksp_pl;
	///////////////////////////////
	cout << "------test 2781(h) : test_kns_str_overphlo_yes ------------------------------------------------------------------" << endl ;
	try {
		cout << "tryingcatch cplong pl4('+9223372036854775808');" << endl;
		eksp_val=0; eksp_pl=0;
		cplong pl4("+9223372036854775808");
		cout << "tryingsuccess cplong pl4('+9223372036854775808');"  << endl ;
		cout << "pl4 is " << pl4 << endl ;
		cout << "pl4.value is " << pl4.get_value() << endl ;
		cout << "pl4.pl is " << pl4.get_pl() << endl ;
		cout << "thro did not occur so failed test 2781(h) : test_kns_str_overphlo_yes" << endl ;
		return 0x2781;
	} catch(char const* thromsg) {
		cout << "ekspected thro occured and thromsg is: "<< thromsg << endl;
		cout << "passed test 2781(h) : test_kns_str_overphlo_yes" << endl ;
	}
	///////////////////////////////
	///////////////////////////////
	cout << "------test 2782(h) : test_kns_str_overphlo_yes ------------------------------------------------------------------" << endl ;
	try {
		cout << "tryingcatch cplong pl4('hX8???????????????');" << endl;
		eksp_val=0; eksp_pl=0;
		cplong pl4("hX8???????????????");
		cout << "tryingsuccess cplong pl4('hX8???????????????');"  << endl ;
		cout << "pl4 is " << pl4 << endl ;
		cout << "pl4.value is " << pl4.get_value() << endl ;
		cout << "pl4.pl is " << pl4.get_pl() << endl ;
		cout << "thro did not occur so failed test 2782(h) : test_kns_str_overphlo_yes" << endl ;
		return 0x2782;
	} catch(char const* thromsg) {
		cout << "ekspected thro occured and thromsg is: "<< thromsg << endl;
		cout << "passed test 2782(h) : test_kns_str_overphlo_yes" << endl ;
	}
	///////////////////////////////

	return 0;
}

int ctest_knstrktr_str::test_kns_str()
{
	long eksp_val; int eksp_pl;
	///////////////////////////////
	cout << "------test 1000(h) : test_kns_str ------------------------------------------------------------------" << endl ;
	try {
		cout << "tryingcatch cplong pl4('0');" << endl;
		cplong pl4("0"); eksp_val=0; eksp_pl=0;
		cout << "pl4 is " << pl4 << endl ;
		cout << "pl4.value is " << pl4.get_value() << " and eksp_val is " << eksp_val << endl ;
		cout << "pl4.pl is " << pl4.get_pl() << " and eksp_pl is " << eksp_pl << endl ;
		if((pl4.get_value() == eksp_val) && (pl4.get_pl() == eksp_pl))
		{ cout << "passed test 1000(h) : test_kns_str" << endl ; }
		else { cout << "failed test_kns_str 1000(h) : " << endl ; return 0x100;}
	} catch(char const* thromsg) {
		cout << "unekspected thro occured failed thromsg is: "<< thromsg << endl;
		cout << "failed test 1000(h) : test_kns_str" << endl ;
		return 0x1000;
	}
	///////////////////////////////
	///////////////////////////////
	cout << "------test 1001(h) : test_kns_str ------------------------------------------------------------------" << endl ;
	try {
		cout << "tryingcatch cplong pl4('+0');" << endl;
		cplong pl4("+0"); eksp_val=0; eksp_pl=0;
		cout << "pl4 is " << pl4 << endl ;
		cout << "pl4.value is " << pl4.get_value() << " and eksp_val is " << eksp_val << endl ;
		cout << "pl4.pl is " << pl4.get_pl() << " and eksp_pl is " << eksp_pl << endl ;
		if((pl4.get_value() == eksp_val) && (pl4.get_pl() == eksp_pl))
		{ cout << "passed test 1001(h) : test_kns_str" << endl ; }
		else { cout << "failed test_kns_str 1001(h) : " << endl ; return 0x100;}
	} catch(char const* thromsg) {
		cout << "unekspected thro occured failed thromsg is: "<< thromsg << endl;
		cout << "failed test 1001(h) : test_kns_str" << endl ;
		return 0x1001;
	}
	///////////////////////////////
	///////////////////////////////
	cout << "------test 1002(h) : test_kns_str ------------------------------------------------------------------" << endl ;
	try {
		cout << "tryingcatch cplong pl4('-0');" << endl;
		cplong pl4("-0"); eksp_val=0; eksp_pl=0;
		cout << "pl4 is " << pl4 << endl ;
		cout << "pl4.value is " << pl4.get_value() << " and eksp_val is " << eksp_val << endl ;
		cout << "pl4.pl is " << pl4.get_pl() << " and eksp_pl is " << eksp_pl << endl ;
		if((pl4.get_value() == eksp_val) && (pl4.get_pl() == eksp_pl))
		{ cout << "passed test 1002(h) : test_kns_str" << endl ; }
		else { cout << "failed test_kns_str 1002(h) : " << endl ; return 0x100;}
	} catch(char const* thromsg) {
		cout << "unekspected thro occured failed thromsg is: "<< thromsg << endl;
		cout << "failed test 1002(h) : test_kns_str" << endl ;
		return 0x1002;
	}
	///////////////////////////////
	///////////////////////////////
	cout << "------test 1011(h) : test_kns_str ------------------------------------------------------------------" << endl ;
	try {
		cout << "tryingcatch cplong pl4('1');" << endl;
		cplong pl4("1"); eksp_val=1; eksp_pl=0;
		cout << "pl4 is " << pl4 << endl ;
		cout << "pl4.value is " << pl4.get_value() << " and eksp_val is " << eksp_val << endl ;
		cout << "pl4.pl is " << pl4.get_pl() << " and eksp_pl is " << eksp_pl << endl ;
		if((pl4.get_value() == eksp_val) && (pl4.get_pl() == eksp_pl))
		{ cout << "passed test 1011(h) : test_kns_str" << endl ; }
		else { cout << "failed test_kns_str 1011(h) : " << endl ; return 0x100;}
	} catch(char const* thromsg) {
		cout << "unekspected thro occured failed thromsg is: "<< thromsg << endl;
		cout << "failed test 1011(h) : test_kns_str" << endl ;
		return 0x1011;
	}
	///////////////////////////////
	///////////////////////////////
	cout << "------test 1012(h) : test_kns_str ------------------------------------------------------------------" << endl ;
	try {
		cout << "tryingcatch cplong pl4('hX1');" << endl;
		cplong pl4("hX1"); eksp_val=1; eksp_pl=0;
		cout << "pl4 is " << pl4 << endl ;
		cout << "pl4.value is " << pl4.get_value() << " and eksp_val is " << eksp_val << endl ;
		cout << "pl4.pl is " << pl4.get_pl() << " and eksp_pl is " << eksp_pl << endl ;
		if((pl4.get_value() == eksp_val) && (pl4.get_pl() == eksp_pl))
		{ cout << "passed test 1012(h) : test_kns_str" << endl ; }
		else { cout << "failed test_kns_str 1012(h) : " << endl ; return 0x100;}
	} catch(char const* thromsg) {
		cout << "unekspected thro occured failed thromsg is: "<< thromsg << endl;
		cout << "failed test 1012(h) : test_kns_str" << endl ;
		return 0x1012;
	}
	///////////////////////////////
	///////////////////////////////
	cout << "------test 1021(h) : test_kns_str ------------------------------------------------------------------" << endl ;
	try {
		cout << "tryingcatch cplong pl4('-1');" << endl;
		cplong pl4("-1"); eksp_val=-1; eksp_pl=0;
		cout << "pl4 is " << pl4 << endl ;
		cout << "pl4.value is -" << -pl4.get_value() << " and eksp_val is -" << -eksp_val << endl ;
		cout << "pl4.pl is " << pl4.get_pl() << " and eksp_pl is " << eksp_pl << endl ;
		if((pl4.get_value() == eksp_val) && (pl4.get_pl() == eksp_pl))
		{ cout << "passed test 1021(h) : test_kns_str" << endl ; }
		else { cout << "failed test_kns_str 1021(h) : " << endl ; return 0x100;}
	} catch(char const* thromsg) {
		cout << "unekspected thro occured failed thromsg is: "<< thromsg << endl;
		cout << "failed test 1021(h) : test_kns_str" << endl ;
		return 0x1021;
	}
	///////////////////////////////
	///////////////////////////////
	cout << "------test 1022(h) : test_kns_str ------------------------------------------------------------------" << endl ;
	try {
		cout << "tryingcatch cplong pl4('-hX1');" << endl;
		cplong pl4("-hX1"); eksp_val=-1; eksp_pl=0;
		cout << "pl4 is " << pl4 << endl ;
		cout << "pl4.value is -" << -pl4.get_value() << " and eksp_val is -" << -eksp_val << endl ;
		cout << "pl4.pl is " << pl4.get_pl() << " and eksp_pl is " << eksp_pl << endl ;
		if((pl4.get_value() == eksp_val) && (pl4.get_pl() == eksp_pl))
		{ cout << "passed test 1022(h) : test_kns_str" << endl ; }
		else { cout << "failed test_kns_str 1022(h) : " << endl ; return 0x100;}
	} catch(char const* thromsg) {
		cout << "unekspected thro occured failed thromsg is: "<< thromsg << endl;
		cout << "failed test 1022(h) : test_kns_str" << endl ;
		return 0x1022;
	}
	///////////////////////////////
	///////////////////////////////
//	void test_str_constructor()
//	{
//		 // 5.Q  slength=3 i=1 pl=-1 // .Q  slength=2 i=0 pl=-1
//		// 0.Q  slength=3 i=1 pl=-1 // 007.Q  slength=5 i=3 epl=-1 pl // 009000.00Q  slength=2 i=0 pl=-1
//		cout << "----test_str_constructor test_str_constructor test_str_constructor-----" << endl ;
//		cplong dv1("h;;;.56::="); cout << "in test_str_constructor : dv1 is : " << dv1 << endl ;
//		cplong dv2("h005.<"); cout << "in test_str_constructor : dv2 is : " << dv2 << endl ;
//		cplong dv3("-h005.<"); cout << "in test_str_constructor : dv3 is : " << dv3 << endl ;
//		cplong dv4("-h.000<"); cout << "in test_str_constructor : dv4 is : " << dv4 << endl ;
//		cplong dv5("-h9.0009"); cout << "in test_str_constructor : dv5 is : " << dv5 << endl ;
//		cplong dv6(0x580000000,-8); cout << "in test_str_constructor : dv6 is : " << dv6 << endl ;
//		cplong dv7 = 2 * dv6; cout << "in test_str_constructor : dv7 is : " << dv7 << endl ;
//		cplong dv8("1.6"); cout << "in test_str_constructor : dv8 is : " << dv8 << endl ;
//		cplong dv9 = 5 * dv8; cout << "in test_str_constructor : dv9 is : " << dv9 << endl ;
//	}
	///////////////////////////////

	return 0;
}
int ctest_knstrktr_str::test_kns_str_trim()
{
	long eksp_val; int eksp_pl;
	///////////////////////////////
	cout << "------test 1122(h) : test_kns_str_trim ------------------------------------------------------------------" << endl ;
	try {
		cout << "tryingcatch cplong pl4('-hX000000000000100000000.5670000000');" << endl;
		cplong pl4("-hX000000000000100000000.5670000000"); eksp_val=-0x100000000567; eksp_pl=-3;
		cout << "pl4 is " << pl4 << endl ;
		cout << "pl4.value is -" << -pl4.get_value() << " and eksp_val is -" << -eksp_val << endl ;
		cout << "pl4.pl is -" << -pl4.get_pl() << " and eksp_pl is -" << -eksp_pl << endl ;
		if((pl4.get_value() == eksp_val) && (pl4.get_pl() == eksp_pl))
		{ cout << "passed test 1122(h) : test_kns_str_trim" << endl ; }
		else { cout << "failed test_kns_str_trim 1122(h) : " << endl ; return 0x1122;}
	} catch(char const* thromsg) {
		cout << "unekspected thro occured failed thromsg is: "<< thromsg << endl;
		cout << "failed test 1122(h) : test_kns_str_trim" << endl ;
		return 0x1122;
	}
	///////////////////////////////
	return 0;
}
int ctest_knstrktr_str::test_kns_str_decimal()
{
	long eksp_val; int eksp_pl;
	///////////////////////////////
	cout << "------test 1304(h) : test_kns_str_decimal ------------------------------------------------------------------" << endl ;
	try {
		cout << "tryingcatch cplong pl4('+0000.80000');" << endl;
		cplong pl4("+0000.80000"); eksp_val=0xCCCCCCCCCCCCCCC; eksp_pl=-0xF; // CCCCCCCCCCCCCCC.-F
		cout << "pl4 is " << pl4 << endl ;
		cout << "pl4.value is " << pl4.get_value() << " and eksp_val is " << eksp_val << endl ;
		cout << "pl4.pl is -" << -pl4.get_pl() << " and eksp_pl is -" << -eksp_pl << endl ;
		if((pl4.get_value() == eksp_val) && (pl4.get_pl() == eksp_pl))
		{ cout << "passed test 1304(h) : test_kns_str_decimal" << endl ; }
		else { cout << "failed test_kns_str 1304(h) : " << endl ; return 0x1304;}
	} catch(char const* thromsg) {
		cout << "unekspected thro occured failed thromsg is: "<< thromsg << endl;
		cout << "failed test 1304(h) : test_kns_str_decimal" << endl ;
		return 0x1304;
	}
	///////////////////////////////
	///////////////////////////////
	cout << "------test 1301(h) : test_kns_str_decimal ------------------------------------------------------------------" << endl ;
	try {
		cout << "tryingcatch cplong pl4('-000000000000000000005.750000000');" << endl;
		cplong pl4("-000000000000000000005.750000000"); eksp_val=-0x5C; eksp_pl=-1;
		cout << "pl4 is " << pl4 << endl ;
		cout << "pl4.value is -" << -pl4.get_value() << " and eksp_val is -" << -eksp_val << endl ;
		cout << "pl4.pl is -" << -pl4.get_pl() << " and eksp_pl is -" << -eksp_pl << endl ;
		if((pl4.get_value() == eksp_val) && (pl4.get_pl() == eksp_pl))
		{ cout << "passed test 1301(h) : test_kns_str_decimal" << endl ; }
		else { cout << "failed test_kns_str_decimal 1301(h) : " << endl ; return 0x1301;}
	} catch(char const* thromsg) {
		cout << "unekspected thro occured failed thromsg is: "<< thromsg << endl;
		cout << "failed test 1301(h) : test_kns_str_decimal" << endl ;
		return 0x1301;
	}
	///////////////////////////////
	///////////////////////////////
	cout << "------test 1302(h) : test_kns_str_decimal ------------------------------------------------------------------" << endl ;
	try {
		cout << "tryingcatch cplong pl4('-9223372036854775807');" << endl;
		cplong pl4("-9223372036854775807"); eksp_val=-9223372036854775807; eksp_pl=0;
		cout << "pl4 is " << pl4 << endl ;
		cout << "pl4.value is -" << -pl4.get_value() << " and eksp_val is -" << -eksp_val << endl ;
		cout << "pl4.pl is " << pl4.get_pl() << " and eksp_pl is " << eksp_pl << endl ;
		if((pl4.get_value() == eksp_val) && (pl4.get_pl() == eksp_pl))
		{ cout << "passed test 1302(h) : test_kns_str_decimal" << endl ; }
		else { cout << "failed test_kns_str 1302(h) : " << endl ; return 0x1302;}
	} catch(char const* thromsg) {
		cout << "unekspected thro occured failed thromsg is: "<< thromsg << endl;
		cout << "failed test 1302(h) : test_kns_str_decimal" << endl ;
		return 0x1302;
	}
	///////////////////////////////
	///////////////////////////////
	cout << "------test 1303(h) : test_kns_str_decimal ------------------------------------------------------------------" << endl ;
	try {
		cout << "tryingcatch cplong pl4('+9223372036854775807.00000');" << endl;
		cplong pl4("+9223372036854775807.00000"); eksp_val=9223372036854775807; eksp_pl=0;
		cout << "pl4 is " << pl4 << endl ;
		cout << "pl4.value is " << pl4.get_value() << " and eksp_val is " << eksp_val << endl ;
		cout << "pl4.pl is " << pl4.get_pl() << " and eksp_pl is " << eksp_pl << endl ;
		if((pl4.get_value() == eksp_val) && (pl4.get_pl() == eksp_pl))
		{ cout << "passed test 1303(h) : test_kns_str_decimal" << endl ; }
		else { cout << "failed test_kns_str 1303(h) : " << endl ; return 0x1303;}
	} catch(char const* thromsg) {
		cout << "unekspected thro occured failed thromsg is: "<< thromsg << endl;
		cout << "failed test 1303(h) : test_kns_str_decimal" << endl ;
		return 0x1303;
	}
	///////////////////////////////
	return 0;
}

// } /* namespace std */
