/*
 * ctestplusop.cpp
 *
 *  Created on: 02-Feb-2022
 *      Author: viml
 */

#include "ctestplusop.h"
#include <iostream>
#include "cplong.h"

// namespace std {

//int ctest_plusop::runtests()
//{
//	cout << "***********ctest_plusop::runtests***********" << endl ;
//	return 0;
//}
int ctest_plusop::test_plus_op()
{
	cout << "----test_plus_op test_plus_op test_plus_op-----" << endl ;

	///////////////////////////////

	cout << "------test 401(h) : test_plus_op ------------------------------------------------------------------" << endl ;
	cplong pl4(0x0, 0); cplong pl5(-0x0, 1);
	cplong sumlong = pl4 + pl5 ; cplong sumlong_ekspkt(0,0) ;
	cout << "pl4 is " << pl4 << " and pl5 is : " << pl5 << endl ;
	cout << "cplong sumlong = pl4 + pl5 ; so nao sumlong is " << sumlong ;
	cout << " and sumlong_ekspkt is " << sumlong_ekspkt << endl  ;
	if(sumlong != sumlong_ekspkt) { cout << "failed test 401(h) : test_plus_op" << endl ; return 0x401;}
	else { cout << "=========================================================passed test 401(h) : test_plus_op========" << endl ; }

	///////////////////////////////
	///////////////////////////////

	cout << "------test 402(h) : test_plus_op ------------------------------------------------------------------" << endl ;
	pl4 = cplong(0x0, 0); pl5 = cplong(-1, 0);
	sumlong = pl4 + pl5 ; sumlong_ekspkt = cplong(-1,0) ;
	cout << "pl4 is " << pl4 << " and pl5 is : " << pl5 << endl ;
	cout << "cplong sumlong = pl4 + pl5 ; so nao sumlong is " << sumlong ;
	cout << " and sumlong_ekspkt is " << sumlong_ekspkt << endl  ;
	if(sumlong != sumlong_ekspkt) { cout << "failed test 402(h) : test_plus_op" << endl ; return 0x402;}
	else { cout << "=========================================================passed test 402(h) : test_plus_op========" << endl ; }

	///////////////////////////////
	///////////////////////////////

	cout << "------test 403(h) : test_plus_op ------------------------------------------------------------------" << endl ;
	pl4 = cplong(-1, 0); pl5 = cplong(0x0, 0);
	sumlong = pl4 + pl5 ; sumlong_ekspkt = cplong(-1,0) ;
	cout << "pl4 is " << pl4 << " and pl5 is : " << pl5 << endl ;
	cout << "cplong sumlong = pl4 + pl5 ; so nao sumlong is " << sumlong ;
	cout << " and sumlong_ekspkt is " << sumlong_ekspkt << endl  ;
	if(sumlong != sumlong_ekspkt) { cout << "failed test 403(h) : test_plus_op" << endl ; return 0x403;}
	else { cout << "=========================================================passed test 403(h) : test_plus_op========" << endl ; }

	///////////////////////////////
	///////////////////////////////

	cout << "------test 404(h) : test_plus_op ------------------------------------------------------------------" << endl ;
	pl4 = cplong(-1, 0); pl5 = cplong(1, 0);
	sumlong = pl4 + pl5 ; sumlong_ekspkt = cplong(0,0) ;
	cout << "pl4 is " << pl4 << " and pl5 is : " << pl5 << endl ;
	cout << "cplong sumlong = pl4 + pl5 ; so nao sumlong is " << sumlong ;
	cout << " and sumlong_ekspkt is " << sumlong_ekspkt << endl  ;
	if(sumlong != sumlong_ekspkt) { cout << "failed test 404(h) : test_plus_op" << endl ; return 0x404;}
	else { cout << "=========================================================passed test 404(h) : test_plus_op========" << endl ; }

	///////////////////////////////
	///////////////////////////////

	cout << "------test 405(h) : test_plus_op ------------------------------------------------------------------" << endl ;
	pl4 = cplong(diph_long_meks,1); pl5 = cplong(diph_long_min,1); sumlong_ekspkt = cplong(0,0) ; // 1000 0000 001.-8
	try {
		sumlong = pl4 + pl5 ;
	} catch(char const* thromsg) {
		cout << "thromsg is: "<< thromsg <<endl;
		cout << "=========================================================passed test 405(h) : test_plus_op========" << endl ;
	}
	cout << "pl4 is " << pl4 << " and pl5 is : " << pl5 << endl ;
	cout << "cplong sumlong = pl4 + pl5 ; so nao sumlong is " << sumlong ;
	cout << " and sumlong_ekspkt is " << sumlong_ekspkt << endl  ;
	if(sumlong != sumlong_ekspkt) { cout << "failed test 405(h) : test_plus_op" << endl ; return 0x405;}
	else { cout << "=========================================================passed test 405(h) : test_plus_op========" << endl ; }

	///////////////////////////////
	///////////////////////////////

//	cout << "------test 40L(h) : test_plus_op ------------------------------------------------------------------" << endl ;
//	pl4 = cplong(1,-8); pl5 = cplong(1,2); sumlong_ekspkt = cplong(0x10000000001,-8) ; // 1000 0000 001.-8
//	try {
//		sumlong = pl4 + pl5 ;
//	} catch(char const* thromsg) {
//		cout << "thromsg is: "<< thromsg <<endl;
//		cout << "=========================================================passed test 40L(h) : test_plus_op========" << endl ;
//	}
//	cout << "pl4 is " << pl4 << " and pl5 is : " << pl5 << endl ;
//	cout << "cplong sumlong = pl4 + pl5 ; so nao sumlong is " << sumlong ;
//	cout << " and sumlong_ekspkt is " << sumlong_ekspkt << endl  ;
//	if(sumlong != sumlong_ekspkt) { cout << "failed test 40L(h) : test_plus_op" << endl ; return 0x40A;}
//	else { cout << "=========================================================passed test 40L(h) : test_plus_op========" << endl ; }

	///////////////////////////////

//	void test_plus_op()
//	{
//		cout << "----test_plus_op test_plus_op test_plus_op-----" << endl ;
//		cplong pl4();
//		cplong pl5(1,2);
//		cplong pl6 = pl4 + pl5 ;
//		cout << "pl6 = "<< pl4 << " + " << pl5 << " = " << pl6 << endl  ;
//		cplong pl8 = pl4 + 0x5 ;
//		cout << "pl8 = "<< pl4 << " + 0x5 = " << pl8 << endl  ;
//		cplong pla = 0x5 + pl4 ;
//		cout << "pla = 0x5 + "<< pl4 << " = " << pla << endl  ;
//		pla += 0x5  ;
//		cout << "pla += 0x5. nao pla = " << pla << endl  ;
//	}
	return 0;
}
int ctest_plusop::test_plus_op_near_ziro()
{
//	cout << "----test_plus_op_near_ziro test_plus_op_near_ziro test_plus_op_near_ziro-----" << endl ;
	cplong pl4; cplong pl5; cplong sumlong; cplong sumlong_ekspkt;
	///////////////////////////////
	cout << "------test 420(h) : test_plus_op_near_ziro ------------------------------------------------------------------" << endl ;
	pl4 = cplong(0, 0); pl5 = cplong(0, 0); sumlong_ekspkt = cplong(diph_long_meks,0) ;
	try {
		cout << "pl4 is " << pl4 << " and pl5 is : " << pl5 << endl ;
		cout << "tryingcatch cplong sumlong = pl4 + pl5 ;" << endl;
		sumlong = pl4 + pl5 ;
		cout << "sumlong is " << sumlong << " and sumlong_ekspkt is " << sumlong_ekspkt << endl ;
		if(sumlong != sumlong_ekspkt) { cout << "failed test_plus_op_near_ziro 441(h) : " << endl ; return 0x401;}
		else { cout << "passed test 420(h) : test_plus_op_near_ziro" << endl ; }
	} catch(char const* thromsg) {
		cout << "unekspected thro occured failed thromsg is: "<< thromsg << endl;
		cout << "failed test 420(h) : test_plus_op_near_ziro" << endl ;
		return 0x420;
	}
	///////////////////////////////
	return 0;
}
int ctest_plusop::test_plus_op_negetive_nmbrs()
{
//	cout << "----test_plus_overphlo_no test_plus_overphlo_no test_plus_overphlo_no-----" << endl ;
	cplong pl4; cplong pl5; cplong sumlong; cplong sumlong_ekspkt;
	///////////////////////////////
	cout << "------test 430(h) : test_plus_op_negetive_nmbrs ------------------------------------------------------------------" << endl ;
	pl4 = cplong(1, 0); pl5 = cplong(-2, 0); sumlong_ekspkt = cplong(-1,0) ;
	try {
		cout << "pl4 is " << pl4 << " and pl5 is : " << pl5 << endl ;
		cout << "tryingcatch cplong sumlong = pl4 + pl5 ;" << endl;
		sumlong = pl4 + pl5 ;
		cout << "sumlong is " << sumlong << " and sumlong_ekspkt is " << sumlong_ekspkt << endl ;
		if(sumlong != sumlong_ekspkt) { cout << "failed test_plus_overphlo_no 441(h) : " << endl ; return 0x401;}
		else { cout << "passed test 430(h) : test_plus_op_negetive_nmbrs" << endl ; }
	} catch(char const* thromsg) {
		cout << "unekspected thro occured failed thromsg is: "<< thromsg << endl;
		cout << "failed test 430(h) : test_plus_op_negetive_nmbrs" << endl ;
		return 0x430;
	}
	///////////////////////////////
	///////////////////////////////
	cout << "------test 431(h) : test_plus_op_negetive_nmbrs ------------------------------------------------------------------" << endl ;
	pl4 = cplong(0, 0); pl5 = cplong(-1, 0); sumlong_ekspkt = cplong(-1,0) ;
	try {
		cout << "pl4 is " << pl4 << " and pl5 is : " << pl5 << endl ;
		cout << "tryingcatch cplong sumlong = pl4 + pl5 ;" << endl;
		sumlong = pl4 + pl5 ;
		cout << "sumlong is " << sumlong << " and sumlong_ekspkt is " << sumlong_ekspkt << endl ;
		if(sumlong != sumlong_ekspkt) { cout << "failed test_plus_overphlo_no 441(h) : " << endl ; return 0x401;}
		else { cout << "passed test 431(h) : test_plus_op_negetive_nmbrs" << endl ; }
	} catch(char const* thromsg) {
		cout << "unekspected thro occured failed thromsg is: "<< thromsg << endl;
		cout << "failed test 431(h) : test_plus_op_negetive_nmbrs" << endl ;
		return 0x431;
	}
	///////////////////////////////
	///////////////////////////////
	cout << "------test 432(h) : test_plus_op_negetive_nmbrs ------------------------------------------------------------------" << endl ;
	pl4 = cplong(-1, 0); pl5 = cplong(0, 0); sumlong_ekspkt = cplong(-1,0) ;
	try {
		cout << "pl4 is " << pl4 << " and pl5 is : " << pl5 << endl ;
		cout << "tryingcatch cplong sumlong = pl4 + pl5 ;" << endl;
		sumlong = pl4 + pl5 ;
		cout << "sumlong is " << sumlong << " and sumlong_ekspkt is " << sumlong_ekspkt << endl ;
		if(sumlong != sumlong_ekspkt) { cout << "failed test_plus_overphlo_no 441(h) : " << endl ; return 0x401;}
		else { cout << "passed test 432(h) : test_plus_op_negetive_nmbrs" << endl ; }
	} catch(char const* thromsg) {
		cout << "unekspected thro occured failed thromsg is: "<< thromsg << endl;
		cout << "failed test 432(h) : test_plus_op_negetive_nmbrs" << endl ;
		return 0x432;
	}
	///////////////////////////////
	///////////////////////////////
	cout << "------test 433(h) : test_plus_op_negetive_nmbrs ------------------------------------------------------------------" << endl ;
	pl4 = cplong(-1, 0); pl5 = cplong(-1, 0); sumlong_ekspkt = cplong(-2,0) ;
	try {
		cout << "pl4 is " << pl4 << " and pl5 is : " << pl5 << endl ;
		cout << "tryingcatch cplong sumlong = pl4 + pl5 ;" << endl;
		sumlong = pl4 + pl5 ;
		cout << "sumlong is " << sumlong << " and sumlong_ekspkt is " << sumlong_ekspkt << endl ;
		if(sumlong != sumlong_ekspkt) { cout << "failed test_plus_overphlo_no 441(h) : " << endl ; return 0x401;}
		else { cout << "passed test 433(h) : test_plus_op_negetive_nmbrs" << endl ; }
	} catch(char const* thromsg) {
		cout << "unekspected thro occured failed thromsg is: "<< thromsg << endl;
		cout << "failed test 433(h) : test_plus_op_negetive_nmbrs" << endl ;
		return 0x433;
	}
	///////////////////////////////
	///////////////////////////////
	cout << "------test 434(h) : test_plus_op_negetive_nmbrs ------------------------------------------------------------------" << endl ;
	pl4 = cplong(1, 0); pl5 = cplong(-5, 0); sumlong_ekspkt = cplong(-4,0) ;
	try {
		cout << "pl4 is " << pl4 << " and pl5 is : " << pl5 << endl ;
		cout << "tryingcatch cplong sumlong = pl4 + pl5 ;" << endl;
		sumlong = pl4 + pl5 ;
		cout << "sumlong is " << sumlong << " and sumlong_ekspkt is " << sumlong_ekspkt << endl ;
		if(sumlong != sumlong_ekspkt) { cout << "failed test_plus_overphlo_no 441(h) : " << endl ; return 0x401;}
		else { cout << "passed test 434(h) : test_plus_op_negetive_nmbrs" << endl ; }
	} catch(char const* thromsg) {
		cout << "unekspected thro occured failed thromsg is: "<< thromsg << endl;
		cout << "failed test 434(h) : test_plus_op_negetive_nmbrs" << endl ;
		return 0x434;
	}
	///////////////////////////////
	///////////////////////////////
	cout << "------test 435(h) : test_plus_op_negetive_nmbrs ------------------------------------------------------------------" << endl ;
	pl4 = cplong(5, 0); pl5 = cplong(-1, 0); sumlong_ekspkt = cplong(4,0) ;
	try {
		cout << "pl4 is " << pl4 << " and pl5 is : " << pl5 << endl ;
		cout << "tryingcatch cplong sumlong = pl4 + pl5 ;" << endl;
		sumlong = pl4 + pl5 ;
		cout << "sumlong is " << sumlong << " and sumlong_ekspkt is " << sumlong_ekspkt << endl ;
		if(sumlong != sumlong_ekspkt) { cout << "failed test_plus_overphlo_no 441(h) : " << endl ; return 0x401;}
		else { cout << "passed test 435(h) : test_plus_op_negetive_nmbrs" << endl ; }
	} catch(char const* thromsg) {
		cout << "unekspected thro occured failed thromsg is: "<< thromsg << endl;
		cout << "failed test 435(h) : test_plus_op_negetive_nmbrs" << endl ;
		return 0x435;
	}
	///////////////////////////////
	return 0;
}
int ctest_plusop::test_plus_overphlo_no()
{
//	cout << "----test_plus_overphlo_no test_plus_overphlo_no test_plus_overphlo_no-----" << endl ;
	cplong pl4; cplong pl5; cplong sumlong; cplong sumlong_ekspkt;
	///////////////////////////////
	cout << "------test 441(h) : test_plus_overphlo_no ------------------------------------------------------------------" << endl ;
	pl4 = cplong(diph_long_meks-8, 0); pl5 = cplong(8, 0); sumlong_ekspkt = cplong(diph_long_meks,0) ;
	try {
		cout << "pl4 is " << pl4 << " and pl5 is : " << pl5 << endl ;
		cout << "tryingcatch cplong sumlong = pl4 + pl5 ;" << endl;
		sumlong = pl4 + pl5 ;
		cout << "sumlong is " << sumlong << " and sumlong_ekspkt is " << sumlong_ekspkt << endl ;
		if(sumlong != sumlong_ekspkt) { cout << "failed test_plus_overphlo_no 441(h) : " << endl ; return 0x401;}
		else { cout << "passed test 441(h) : test_plus_overphlo_no" << endl ; }
	} catch(char const* thromsg) {
		cout << "unekspected thro occured failed thromsg is: "<< thromsg << endl;
		cout << "failed test 441(h) : test_plus_overphlo_no" << endl ;
		return 0x441;
	}
	///////////////////////////////
	///////////////////////////////
	cout << "------test 442(h) : test_plus_overphlo_no ------------------------------------------------------------------" << endl ;
	pl4 = cplong(diph_long_meks, 0); pl5 = cplong(0, 0); sumlong_ekspkt = cplong(diph_long_meks,0) ;
	try {
		cout << "pl4 is " << pl4 << " and pl5 is : " << pl5 << endl ;
		cout << "tryingcatch cplong sumlong = pl4 + pl5 ;" << endl;
		sumlong = pl4 + pl5 ;
		cout << "sumlong is " << sumlong << " and sumlong_ekspkt is " << sumlong_ekspkt << endl ;
		if(sumlong != sumlong_ekspkt) { cout << "failed test_plus_overphlo_no 442(h) : " << endl ; return 0x401;}
		else { cout << "passed test 442(h) : test_plus_overphlo_no" << endl ; }
	} catch(char const* thromsg) {
		cout << "unekspected thro occured failed thromsg is: "<< thromsg << endl;
		cout << "failed test 442(h) : test_plus_overphlo_no" << endl ;
		return 0x442;
	}
	///////////////////////////////
	return 0;
}
int ctest_plusop::test_plus_underphlo_no()
{
//	cout << "----test_plus_underphlo test_plus_underphlo test_plus_underphlo-----" << endl ;
	cplong pl4; cplong pl5; cplong sumlong; cplong sumlong_ekspkt;
	///////////////////////////////
	cout << "------test 451(h) : test_plus_underphlo_no ------------------------------------------------------------------" << endl ;
	pl4 = cplong(diph_long_min, 0); pl5 = cplong(1, 0); sumlong_ekspkt = cplong(diph_long_min+1,0) ;
	try {
		cout << "pl4 is " << pl4 << " and pl5 is : " << pl5 << endl ;
		cout << "tryingcatch cplong sumlong = pl4 + pl5 ;" << endl;
		sumlong = pl4 + pl5 ;
		cout << "tryingsuccess cplong sumlong = pl4 + pl5 ; so nao sumlong is " << sumlong ;
		if(sumlong != sumlong_ekspkt) { cout << "failed test_plus_underphlo_no 451(h) : " << endl ; return 0x451;}
		else { cout << "passed test 451(h) : test_plus_underphlo_no" << endl ; }
	} catch(char const* thromsg) {
		cout << "unekspected thro occured failed thromsg is: "<< thromsg << endl;
		cout << "!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!failed test 451(h) : test_plus_underphlo_no" << endl ;
		return 0x451;
	}
	///////////////////////////////
	///////////////////////////////
	cout << "------test 452(h) : test_plus_underphlo_no ------------------------------------------------------------------" << endl ;
	pl4 = cplong(diph_long_min, 0); pl5 = cplong(0, 0); sumlong_ekspkt = cplong(diph_long_min,0) ;
	try {
		cout << "pl4 is " << pl4 << " and pl5 is : " << pl5 << endl ;
		cout << "tryingcatch cplong sumlong = pl4 + pl5 ;" << endl;
		sumlong = pl4 + pl5 ;
		cout << "tryingsuccess cplong sumlong = pl4 + pl5 ; so nao sumlong is " << sumlong ;
		if(sumlong != sumlong_ekspkt) { cout << "failed test_plus_underphlo_no 452(h) : " << endl ; return 0x451;}
		else { cout << "passed test 452(h) : test_plus_underphlo_no" << endl ; }
	} catch(char const* thromsg) {
		cout << "unekspected thro occured failed thromsg is: "<< thromsg << endl;
		cout << "!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!failed test 452(h) : test_plus_underphlo_no" << endl ;
		return 0x452;
	}
	///////////////////////////////
	///////////////////////////////
	cout << "------test 453(h) : test_plus_underphlo_no ------------------------------------------------------------------" << endl ;
	pl4 = cplong(diph_long_min, 0); pl5 = cplong(0, 0); sumlong_ekspkt = cplong(diph_long_min,0) ;
	pl4 = cplong(diph_long_min+0x10, 0); pl5 = cplong(-1, 0); sumlong_ekspkt = cplong(-0x7FFFFFFFFFFFFFF0,0) ;
	try {
		cout << "pl4 is " << pl4 << " and pl5 is : " << pl5 << endl ;
		cout << "tryingcatch cplong sumlong = pl4 + pl5 ;" << endl;
		sumlong = pl4 + pl5 ;
		cout << "tryingsuccess cplong sumlong = pl4 + pl5 ; so nao sumlong is " << sumlong ;
		if(sumlong != sumlong_ekspkt) { cout << "failed test_plus_underphlo_no 452(h) : " << endl ; return 0x451;}
		else { cout << "passed test 453(h) : test_plus_underphlo_no" << endl ; }
	} catch(char const* thromsg) {
		cout << "unekspected thro occured failed thromsg is: "<< thromsg << endl;
		cout << "!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!failed test 453(h) : test_plus_underphlo_no" << endl ;
		return 0x453;
	}
	///////////////////////////////

	return 0;
}
int ctest_plusop::test_plus_overphlo_yes()
{
//	cout << "----test_plus_overphlo_yes test_plus_overphlo_yes test_plus_overphlo_yes-----" << endl ;
	cplong pl4; cplong pl5; cplong sumlong; cplong sumlong_ekspkt;
	///////////////////////////////
	cout << "------test 461(h) : test_plus_overphlo_yes ------------------------------------------------------------------" << endl ;
	pl4 = cplong(diph_long_meks, 0); pl5 = cplong(1, 0); sumlong_ekspkt = cplong(0,0) ;
	try {
		cout << "pl4 is " << pl4 << " and pl5 is : " << pl5 << endl ;
		cout << "tryingcatch cplong sumlong = pl4 + pl5 ;" << endl;
		sumlong = pl4 + pl5 ;
		cout << "tryingsuccess cplong sumlong = pl4 + pl5 ; so nao sumlong is " << sumlong ;
		cout << "!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!! thro did not occur so failed test 461(h) : test_plus_overphlo_yes" << endl ;
		return 0x461;
	} catch(char const* thromsg) {
		cout << "thro occured success thromsg is: "<< thromsg << endl;
		cout << "=========================================================passed test 461(h) : test_plus_overphlo_yes" << endl ;
	}
	///////////////////////////////
	return 0;
}
int ctest_plusop::test_plus_underphlo_yes()
{
//	cout << "----test_plus_underphlo test_plus_underphlo test_plus_underphlo-----" << endl ;
	cplong pl4; cplong pl5; cplong sumlong; cplong sumlong_ekspkt;
	///////////////////////////////
	cout << "------test 471(h) : test_plus_underphlo_yes ------------------------------------------------------------------" << endl ;
	pl4 = cplong(diph_long_min + 0x10, 0); pl5 = cplong(-0x11, 0); sumlong_ekspkt = cplong(0,0) ;
	try {
		cout << "pl4 is " << pl4 << " and pl5 is : " << pl5 << endl ;
		cout << "tryingcatch cplong sumlong = pl4 + pl5 ;" << endl;
		sumlong = pl4 + pl5 ;
		cout << "tryingsuccess cplong sumlong = pl4 + pl5 ; so nao sumlong is " << sumlong ;
		cout << "thro did not occur so failed test 471(h) : test_plus_underphlo_yes" << endl ;
		return 0x471;
	} catch(char const* thromsg) {
		cout << "thro occured success thromsg is: "<< thromsg << endl;
		cout << "=========================================================passed test 471(h) : test_plus_underphlo_yes" << endl ;
	}
	///////////////////////////////

	///////////////////////////////
	cout << "------test 472(h) : test_plus_underphlo_yes ------------------------------------------------------------------" << endl ;
	pl4 = cplong(diph_long_min+0x10, 0); pl5 = cplong(-0x11, 0); sumlong_ekspkt = cplong(0,0) ;
	try {
		cout << "pl4 is " << pl4 << " and pl5 is : " << pl5 << endl ;
		cout << "tryingcatch cplong sumlong = pl4 + pl5 ;" << endl;
		sumlong = pl4 + pl5 ;
		cout << "tryingsuccess cplong sumlong = pl4 + pl5 ; so nao sumlong is " << sumlong ;
		cout << "thro did not occur so failed test 472(h) : test_plus_underphlo_yes" << endl ;
		return 0x472;
	} catch(char const* thromsg) {
		cout << "thro occured success thromsg is: "<< thromsg << endl;
		cout << "=========================================================passed test 472(h) : test_plus_underphlo_yes" << endl ;
	}
	///////////////////////////////

	return 0;
}

int ctest_plusop::tn_rl()
{
	cplong a; cplong b; cplong res; cplong ekspr;
	///////////////////////////////
	cout << "------test 0x1 : ctest_divop::test_divop_thron ------------------------------------------------------------------" << endl ;
	try {
		a = cplong(0xAAAAAAAAAAAAAAA,-0xF); b = cplong(0xA,-0x10); ekspr = cplong(0xAAAAAAAAAAAAAAA,-0xF);
		cout << "trycatch res = a + b . vhen a is: " << a << " and b is " << b << endl;
		res = a + b ;
		cout << "res is " << res << " and ekspr is: " << ekspr << endl ;
		if(res == ekspr) { cout << "passed test 0x1 : test_divop_thron" << endl ; }
		else { cout << "failed test_divop_thron 0x1 : " << endl ; return 0x1;}
	} catch(char const* thromsg) {
		cout << "unekspected thro occured failed thromsg is: "<< thromsg << endl;
		cout << "failed test 0x1 : test_divop_thron" << endl ;
		return 0x1;
	}
	///////////////////////////////

	return 0;
}
// } /* namespace std */
