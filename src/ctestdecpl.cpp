/*
 * ctestdecpl.cpp
 *
 *  Created on: 02-Feb-2022
 *      Author: viml
 */

#include "ctestdecpl.h"
#include <iostream>
#include "cplong.h"


// namespace std {
int ctest_dec_pl::test_dec_pl_long_min() {
	cout << "----===========ctest_dec_pl::test_dec_pl_long_min===========----" << endl ;

	///////////////////////////////

	cout << "------test 1001h: test_dec_pl_long_min  ----------------------" << endl ;
	try {
	cplong dv6(-8,0xF);
	cout << "dv6 biphore dv6.dec_pl(0) is: " << dv6 << endl ;
	int decresedpl = dv6.dec_pl(0);
	cplong dv6_ekspkt(-0x800000000000000,1) ; // 0x8000 0000 0000 000
	cout << "dv6 aphtr dv6.dec_pl(0) is: " << dv6 << endl ; // -8000 0000 0000 000.1
	cout << "int decresedpl = dv6.dec_pl(0); so nao decresedpl is " << decresedpl << endl ;
	cout << "in ctest_dec_pl::test_dec_pl_long_min , dv6_ekspkt is " << dv6_ekspkt << endl  ;
	if(dv6 != dv6_ekspkt) { cout << "failed test 1001h : test_dec_pl_long_min >" << endl ; return 0x1001;}
	else { cout << "========passed test 1001h : test_dec_pl_long_min >" << endl ; }
	} catch(char const* thromsg) {
		cout << "in ctest_dec_pl::test_dec_pl_long_min:1001h thromsg is: " << thromsg << endl ;
		return 0x1001;
	}
	///////////////////////////////

	return 0;
}
int ctest_dec_pl::test_dec_pl() {
	cout << "----===========ctest_dec_pl::test_dec_pl===========----" << endl ;

	///////////////////////////////

	cout << "------test 1001h: test_trim_ziroz  ----------------------" << endl ;
	try {
	cplong dv6(0x580000000,-8);	int zirotrims = dv6.trim_ziroz(); cplong dv6_ekspkt(0x58,-1) ;
	cout << "dv6 is " << dv6 << endl ;
	cout << "int zirotrims = dv6.trim_ziroz() ; so nao zirotrims is " << zirotrims ;
	cout << ". in test_trim_ziroz : dv6 is : " << dv6 << endl ;
	cout << ". dv6_ekspkt is " << dv6_ekspkt << endl  ;
	if(dv6 != dv6_ekspkt) { cout << "failed test h1F : test_trim_ziroz >" << endl ; return 0x1F;}
	else { cout << "========passed test h1F : test_trim_ziroz >" << endl ; }
	} catch(char const* thromsg) {
		cout << "in ctest_grupvn::test_trimziroz thromsg is: " << thromsg << endl ;
		return 0x1F;
	}
	///////////////////////////////

	return 0;
}
// } /* namespace std */
//----test_dec_pl test_dec_pl test_dec_pl-----
//in test_dec_pl : diph_long_meks is : 7fff ffff ffff ffff
//in test_dec_pl : dv6 is : 7FFF FFFF FFFF FFF.0 (heks_plong)
//in cplong::dec_pl pl is -0 , to_pl is : -5 , gap_pl is : -5
//recurse_call A and recurse_to_pl is : -1
//recurse_call gap_pl1 is 2
//recurse_call gap_pl2 is 1
//value = value << (4*gap_pl2) vhere gap_pl2 is 5
//decreased_pl is : -1
//in test_dec_pl : dv6 is : 7FFF FFFF FFFF FFF0.-1
//------------------------------------
//in test_dec_pl : diph_long_min is : 8000 0000 0000 0000
//in test_dec_pl : diph_long_min is : -8000 0000 0000 0000
//in test_dec_pl : diph_long_min+1 is : 8000 0000 0000 0001
//in test_dec_pl : diph_long_min+1 is : -7FFF FFFF FFFF FFFF
//in test_dec_pl : dv7 is : -7FFFFFFFFFFFFFF.0 (heks_plong)
//in cplong::dec_pl pl is -0 , to_pl is : -5 , gap_pl is : -5
//recurse_call A and recurse_to_pl is : -1
//recurse_call gap_pl1 is 2
//recurse_call gap_pl2 is 1
//value = value << (4*gap_pl2) vhere gap_pl2 is 5
//decreased_pl is : -1
//in test_dec_pl : dv7 is : -7FFFFFFFFFFFFFF0.-1
//void test_dec_pl() {
//	cout << "----test_dec_pl test_dec_pl test_dec_pl-----" << endl ;
//	cout << "------------------------------------" << endl ;
//	cout << "in test_dec_pl : diph_long_meks is : " << hex << diph_long_meks << endl ;
//	cplong dv6(diph_long_meks/0x10,0); cout << "in test_dec_pl : dv6 is : " << dv6 << endl ;
//	int decreased_pl = dv6.dec_pl(-5);
//	cout << "decreased_pl is : -" << -decreased_pl << endl ;
//	cout << "in test_dec_pl : dv6 is : " << dv6 << endl ;
//	cout << "------------------------------------" << endl ;
//	cout << "in test_dec_pl : diph_long_min is : " << hex << diph_long_min << endl ;
//	cout << "in test_dec_pl : diph_long_min is : -" << hex << -(diph_long_min) << endl ;
//	cout << "in test_dec_pl : diph_long_min+1 is : " << hex << diph_long_min+1 << endl ;
//	cout << "in test_dec_pl : diph_long_min+1 is : -" << hex << -(diph_long_min+1) << endl ;
//	cplong dv7((diph_long_min+1)/0x10,0); cout << "in test_dec_pl : dv7 is : " << dv7 << endl ;
//	decreased_pl = dv7.dec_pl(-5);
//	cout << "decreased_pl is : -" << -decreased_pl << endl ;
//	cout << "in test_dec_pl : dv7 is : " << dv7 << endl ;
//	cout << "------------------------------------" << endl ;
//	cplong dv8(5,0); cout << "in test_dec_pl : dv8 is : " << dv8 << endl ;
//	decreased_pl = dv8.dec_pl(-5);
//	cout << "decreased_pl is : -" << -decreased_pl << endl ;
//	cout << "in test_dec_pl : dv8 is : " << dv8 << endl ;
//	cout << "------------------------------------" << endl ;
//	cplong dv9(5,-8); cout << "in test_dec_pl : dv9 is : " << dv9 << endl ;
//	decreased_pl = dv9.dec_pl(-0);
//	cout << "decreased_pl is : -" << -decreased_pl << endl ;
//	cout << "in test_dec_pl : dv9 is : " << dv9 << endl ;
//	cout << "------------------------------------" << endl ;
//	cplong dvL(0x500000000,0); cout << "in test_dec_pl : dvL is : " << dvL << endl ;
//	decreased_pl = dvL.dec_pl(-0x9);
//	if ( decreased_pl < 0 ) { cout << "in cplong::dec_pl decreased_pl is -" << -decreased_pl << endl ; }
//	else { cout << "in cplong::dec_pl decreased_pl is " << decreased_pl << endl ; }
//	cout << "in test_dec_pl : dvL is : " << dvL << endl ;
//	cout << "------------------------------------" << endl ;
//	cplong dvJ(0x5555555555555555,-1); cout << "in test_dec_pl : dvJ is : " << dvJ << endl ;
//	decreased_pl = dvJ.dec_pl(-5);
//	if ( decreased_pl < 0 ) { cout << "in cplong::dec_pl decreased_pl is -" << -decreased_pl << endl ; }
//	else { cout << "in cplong::dec_pl decreased_pl is " << decreased_pl << endl ; }
//	cout << "in test_dec_pl : dvJ is : " << dvJ << endl ;
//}

