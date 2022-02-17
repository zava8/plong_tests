/*
 * ctestknstrktr.h
 *
 *  Created on: 03-Feb-2022
 *      Author: viml
 */

#ifndef CTESTKNSTRKTR_H_
#define CTESTKNSTRKTR_H_

// namespace std {

class ctest_knstrktr {
	public:
	static int tn_argd_ml();
	static int tn_argd_mr();
	static int tn_argd_val0();
	static int tn_argd_val1();

	static int ty_argd_ml();
	static int ty_argd_mr();
	static int ty_argd_val0();
	static int ty_argd_val1();

	static int test_kns();
	static int test_kns_near_ziro_value();
//	static int test_kns_near_ziro_pl();
//	static int test_kns_negetive_val();
//	static int test_kns_negetive_pl();
//	static int test_kns_overphlo_no();
//	static int test_kns_underphlo_no();
//	static int test_kns_overphlo_yes();
	static int test_kns_underphlo_yes();
};

// } /* namespace std */

#endif /* CTESTKNSTRKTR_H_ */
