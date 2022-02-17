#include <iostream>
#include "cplong.h"


#include "ctestknstrktr.h"
#include "ctestincpl.h"
#include "ctestdecpl.h"
#include "ctestcomparison.h"
#include "ctestplusop.h"
#include "ctestplspls.h"
#include "ctestminusop.h"
#include "ctestminusminus.h"
#include "ctestunary.h"
#include "ctestmultiplyop.h"
#include "ctestdivop.h"
#include "ctestknstrktrstr.h"
#include "ctestgrupvn.h"
#include "ctestbodmas.h"

using namespace std;

int main() {
	cplong::minimum_pl = -0xA; // programmer needs to set this in main oph sophtveyr product as per rekuirement/hvare/os
	int phel_return = -1;

///////////////////////////
	phel_return = ctest_knstrktr::tn_argd_ml(); if(0 != phel_return) { return phel_return; }
	phel_return = ctest_knstrktr::ty_argd_ml(); if(0 != phel_return) { return phel_return; }

//	phel_return = ctest_bodmas::tn(); if(0 != phel_return) { return phel_return; }
//	phel_return = ctest_comparison::test_cmp_thron(); if(0 != phel_return) { return phel_return; }
//	phel_return = ctest_comparison::test_cmp_thron_ik(); if(0 != phel_return) { return phel_return; }
//	phel_return = ctest_comparison::test_cmp_thron_ne(); if(0 != phel_return) { return phel_return; }
//	phel_return = ctest_comparison::test_cmp_throy(); if(0 != phel_return) { return phel_return; }
//	phel_return = ctest_comparison::test_cmp_throy_ik(); if(0 != phel_return) { return phel_return; }
//	phel_return = ctest_comparison::test_cmp_throy_ne(); if(0 != phel_return) { return phel_return; }
///////////////////////////
//	phel_return = ctest_plusop::tn_rl(); if(0 != phel_return) { return phel_return; }
///////////////////////////
//	phel_return = ctest_divop::test_divop_throy();  if(0 != phel_return) { return phel_return; }
	phel_return = ctest_divop::test_divop_thron(); if(0 != phel_return) { return phel_return; }
//	phel_return = ctest_divop::test_divop_thron_self(); if(0 != phel_return) { return phel_return; }

//	phel_return = ctest_knstrktr_str::test_kns_str_thro_yes() ;  if(0 != phel_return) { return phel_return; }
//	phel_return = ctest_knstrktr_str::test_kns_str_underphlo_yes() ;  if(0 != phel_return) { return phel_return; }
//	phel_return = ctest_knstrktr_str::test_kns_str_overphlo_yes() ;  if(0 != phel_return) { return phel_return; }
//	phel_return = ctest_knstrktr_str::test_kns_str_overphlo_no() ;  if(0 != phel_return) { return phel_return; }
//	phel_return = ctest_knstrktr_str::test_kns_str_vnpoint_no_thro() ;  if(0 != phel_return) { return phel_return; }
//	phel_return = ctest_knstrktr_str::test_kns_str_vn_no_thro() ;  if(0 != phel_return) { return phel_return; }
//	phel_return = ctest_knstrktr_str::test_kns_str_ziro_value() ;  if(0 != phel_return) { return phel_return; } // passed 5prvri2022
//	phel_return = ctest_knstrktr_str::test_kns_str_trim() ;  if(0 != phel_return) { return phel_return; }
//	phel_return = ctest_knstrktr_str::test_kns_str_decimal() ;  if(0 != phel_return) { return phel_return; }
//	phel_return = ctest_knstrktr_str::test_kns_str(); if(0 != phel_return) { return phel_return; }

//	phel_return = ctest_dec_pl::test_dec_pl_long_min(); if(0 != phel_return) { return phel_return; }
//	phel_return = ctest_comparison::test_copmarison_op(); if(0 != phel_return) { return phel_return; }
//	phel_return = test_trim_ziroz() ;  if(0 != phel_return) { return phel_return; }
//	phel_return = ctest_plusop::test_plus_op() ;  if(0 != phel_return) { return phel_return; }
//	phel_return = ctest_plusop::test_plus_underphlo_yes(); if(0 != phel_return) { return phel_return; }
//	phel_return = ctest_plusop::test_plus_overphlo_yes() ;  if(0 != phel_return) { return phel_return; }
//	phel_return = ctest_plusop::test_plus_underphlo_no() ;  if(0 != phel_return) { return phel_return; }
//	phel_return = ctest_plusop::test_plus_overphlo_no() ;  if(0 != phel_return) { return phel_return; }



//	int is_reached = test_minimum_pl_setover();
//	cout << "in main int test_minimum_pl_reached = test_minimum_pl_setover(); nao is_reached is " << is_reached << endl;
	return 0;
}
