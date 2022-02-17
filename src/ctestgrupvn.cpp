/*
 * ctestgrupvn.cpp
 *
 *  Created on: 01-Feb-2022
 *      Author: viml
 */

#include "ctestgrupvn.h"
#include <iostream>
#include "cplong.h"

// namespace std {
int ctest_grupvn::test_trimziroz() {
	cout << "----===========ctest_grupvn::test_trimziroz-===========----" << endl ;

	///////////////////////////////

	cout << "------test 1F : test_trim_ziroz  ----------------------" << endl ;
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
