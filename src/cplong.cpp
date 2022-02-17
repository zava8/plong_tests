#include <iostream>
#include <sstream>
#include <cstring>
#include <cmath>
//#include <limits>
#include "cplong.h"

using namespace std;
int cplong::minimum_pl = -0xF;

const long cplong::min_long = diph_long_min;
const long cplong::meks_long = diph_long_meks;
const long cplong::nmbr_dec_dizits_long_meks = _nmbr_dec_dizits_long_meks_;
const long cplong::nmbr_heks_dizits_long_meks = _nmbr_heks_dizits_long_meks_;
const int cplong::pl_dec_phur_divizn = _nmbr_heks_dizits_long_meks_;

cplong::cplong(const long aval, const int apl) {
	if(0 == aval) { this->value = 0; this->pl = 0; } else {
		if(aval<cplong::min_long) { throw "aval<min_long"; }
		else if(aval>cplong::meks_long) { throw "aval>meks_long"; }
		else {
			this->value = aval; this->pl = apl; this->trim_ziroz();
		}
	}
}
//cplong::cplong(long aval) { this->value = aval; this->pl = 0; if(0 != aval) {this->trim_ziroz();} }
//cplong::cplong(const long& aval) { this->value = aval; this->pl = 0; if(0 != aval) { this->trim_ziroz();} }
//cplong::cplong(int aval) { this->value = aval; this->pl = 0; if(0 != aval) { this->trim_ziroz();} }
cplong::cplong(const string& str_plong){
//	cout << "----in  conversion constructor cplong::cplong(const string)---- " << endl;
	string s = str_plong; int slength = s.length(); int slength_meks = 0 ;
	unsigned long tempval=0; int c; unsigned long cutoff; int base = 10;
	int return_nao_val = 0;// c_plong_ekseption plong_ekseption1;
	int neg = 0, pointsinstring = 0, curr_indeks=0, any=0, cutlim ; //temppl=0;
	if(
			(s=="0") || (s=="+0") || (s=="-0") ||
			(s=="hX0") || (s=="+hX0") || (s=="-hX0") ||
			(s==".0") || (s=="+.0") || (s=="-.0") ||
			(s=="hX.0") || (s=="+hX.0") || (s=="-hX.0")
	) { value = 0; pl = 0; return_nao_val = 1; goto _label_return_nao_ ; }
//	else if(slength<1) { throw "emptrystring_not_plong" ; }
	else if(
			(s=="") || (s=="-") || (s=="+") ||
			(s==".") || (s=="-.") || (s=="+.") ||
			(s=="hX") || (s=="-hX") || (s=="+hX") ||
			(s=="hX.") || (s=="-hX.") || (s=="+hX.")
	) { return_nao_val = 2; throw "thro_not_plong_str" ; goto _label_return_nao_ ;}
	else {
		if (s.find('.') != std::string::npos) {
			s.erase(s.find_last_not_of('0')+1, s.size()-1);
			slength_meks += 1 ;
		}
		slength = s.length();
		c = s.at(curr_indeks);
		if(c == '-') { neg = 1; curr_indeks += 1 ; slength_meks += 1 ;}
		else if (c == '+') { curr_indeks += 1 ; slength_meks += 1 ;}
		c = s.at(curr_indeks);
		if(c == 'h') {
			curr_indeks += 1 ; slength_meks += 1 ; c = s.at(curr_indeks);
			if(c == 'X') {
				base = 0x10;
				curr_indeks += 1 ;
				slength_meks += 1 ;
			}
			else { return_nao_val = 2; throw "kns_str_thro_h_but_no_x" ; goto _label_return_nao_ ;}
		}
		if(0x10 == base) { slength_meks += cplong::nmbr_heks_dizits_long_meks ; }
		else { slength_meks += cplong::nmbr_dec_dizits_long_meks ; }
		s.erase(curr_indeks,s.find_first_not_of('0',curr_indeks)-curr_indeks); // viml
		if(s.length()>slength_meks) { return_nao_val = 2; throw "kns_str_thro_dizits_ovrplho" ; goto _label_return_nao_ ;}
		cutoff = neg ? -(unsigned long)diph_long_min : diph_long_meks;
		cutlim = cutoff % (unsigned long)base;
		cutoff /= (unsigned long)base;
		pl = 0 ;
		slength = s.length();
		for (int i = curr_indeks; i < slength; ++i) {
			c = s[i];
			if(c == '.') {
				if(pointsinstring == 0) { pl = -(slength-1-i) ; pointsinstring = 1 ; continue ; }
				else { return_nao_val = 2; throw "not_plong_str_2dot"; goto _label_return_nao_; }
			}

			if (c >= '0' && c <= '?') { c -= '0'; }
			else {
				return_nao_val = 2;
				throw "not_plong_dizit_str";
				goto _label_return_nao_;
			}
			if ( c >= base )
				{ return_nao_val = 2; throw "not_plong_basedizit_str"; goto _label_return_nao_; }
			if (any < 0 || tempval > cutoff || (tempval == cutoff && c > cutlim)) { any = -1; }
			else {
				any = 1;
				if(0x10 == base) { tempval = tempval << 4;} else { tempval *= 10 ;}
				tempval += c;
			}
		}
		if (any < 0) {
			tempval = neg ? cplong::min_long : cplong::meks_long;
//			errno = ERANGE;
			cout << "in cplong::cplong(const string& str_plong) str_knstrktr_range_overphlo eksepsn" << endl ;
			cout << "throing range overplo eksepsn" << endl ;
			return_nao_val = 2; throw "str_knstrktr_range_overphlo"; goto _label_return_nao_;
		}
		else if (neg) tempval = -tempval;
		if((0x10 == base)||(0==pl)) {
			cplong temp(tempval,pl);
			value = temp.value; pl = temp.pl;
			this->trim_ziroz();
		}
		else { // cout << "base is : " << base << " and pl is : -" << -pl << endl ;
			cplong nr(tempval,0);
			long longdr = pow(10, -pl) ;
			cplong dr(longdr,0); cout << "nr is : " << nr << " and dr is : " << dr << endl;
			cplong temp = nr/dr ;
			value = temp.value; pl = temp.pl; this->trim_ziroz();
		}
	}
	_label_return_nao_: ;
//	cout << "----out  conversion constructor cplong::cplong(const string)---- " << endl;
}

long cplong::get_value(){return value;}
long cplong::get_pl(){return pl;}

string cplong::to_string() { ostringstream ss; ss << this; return ss.str(); }
std::ostream& operator<<(std::ostream& os, const cplong& aplong)
{
//	os << "hX" << hex << uppercase;
	os << hex << uppercase;
	if(0>aplong.value) { os << "-" << -aplong.value ; }
	else { os << aplong.value ; }
	if(0>aplong.pl) {	os << "." << "-" << -aplong.pl ; }
	else {	os << "." << aplong.pl << " (heks_plong)" ; }
//	if(0>aplong.pl) {	os << "p" << "-" << -aplong.pl ; }
//	else {	os << "p" << aplong.pl ; }
	return os;
}
cplong::~cplong() { }
int cplong::bitsize(long value)
{
//	cout << "in cplong::bitsize(long value) value is " << value << endl ;
	int count = 0;
//	cout << "in cplong::bitsize(long value) count is " << count << endl ;
	if (value < 0) { value = -value; }
	while (value > 0) {
		count++;
		value = value >> 1;
//		cout << "in vhile loop aphtr value = value >> 1; value is " << value << endl ;
//		cout << "in vhile loop count is " << count << endl ;
	}
//	cout << "in cplong::bitsize returning. count is " << count << endl ;
	return count;
}
// https://stackoverflow.com/questions/1857928/right-shifting-negative-numbers-in-c
// https://stackoverflow.com/questions/4009885/arithmetic-bit-shift-on-a-signed-integer
void cplong::handle_overphlo(){
  	bool isneg = (value < 0); // handling negatve nmbr bit siphting
  	cout << "in cplong::handle_overphlo value is " << value << " and isneg is " << isneg << endl ;
	value >>= 4;
  	cout << "in cplong::handle_overphlo value is " << value << endl ;
    if(isneg && (value > 0)) {value = -value;} // handling negatve nmbr bit siphting
  	cout << "in cplong::handle_overphlo value is " << value << endl ;
	++pl;
	cout << "in cplong::handle_overphlo this is " << *this << endl ;
	cout << "in cplong::handle_overphlo trimming ziroz" << endl ;
	this->trim_ziroz();
	cout << "in cplong::handle_overphlo this is " << *this << endl ;
}
void cplong::handle_underphlo(){
  	bool isneg = (value < 0); // handling negatve nmbr bit siphting
  	cout << "in cplong::handle_underphlo value is " << value << " and isneg is " << isneg << endl ;
	value >>= 4;
  	cout << "in cplong::handle_underphlo value is " << value << endl ;
    if(isneg && (value > 0)) {value = -value;} // handling negatve nmbr bit siphting
  	cout << "in cplong::handle_underphlo value is " << value << endl ;
	++pl;
	cout << "in cplong::handle_underphlo this is " << *this << endl ;
	cout << "in cplong::handle_underphlo trimming ziroz" << endl ;
	this->trim_ziroz();
	cout << "in cplong::handle_underphlo this is " << *this << endl ;
}
int cplong::inc_pl(int to_pl){
  if( pl < to_pl ){
    if(value != 0){
      	long pozitiv_value; long pozitiv_remainder; long or_bits_mask = 1;
      	bool isneg = (value < 0); // handling negatve nmbr bit siphting
      	if(isneg) { pozitiv_value = -value; } else { pozitiv_value = value; }
    	int gap_pl = to_pl - pl;
    	or_bits_mask = ( or_bits_mask << (4*gap_pl) ) -1;
      	pozitiv_remainder = pozitiv_value | or_bits_mask;
      	pozitiv_value = pozitiv_value >> (4*gap_pl) ; // bitshift of +ve is defined
        if(isneg) { value = -pozitiv_value; } else { value = pozitiv_value; }
        pl = to_pl ;
        return pozitiv_remainder;
    } else { pl = to_pl ; return -1; }
  } else { return -1; }
}
int cplong::dec_pl(int to_pl){
	int long_size = (int)(sizeof(long)) ;
	bool isneg_value = false; long value_pozitiv = value;
	if(value < 0) { isneg_value = true; value_pozitiv = -value; }
//	if( (to_pl >= cplong::minimum_pl) && (pl > to_pl) ){
	if(pl > to_pl){
		if(value_pozitiv != 0){
			int bitsize = cplong::bitsize(value_pozitiv) ;
			int gap_pl = pl - to_pl ;
			if( (bitsize + 4*gap_pl) < long_size*8 ){
				value_pozitiv = value_pozitiv << (4*gap_pl) ;
				pl = to_pl ;
				if(isneg_value) {value = -value_pozitiv ; } else { value = value_pozitiv ; }
				return pl;
			} else {
				int gap_pl_zust1less = (long_size*8 - 1 -bitsize)/4 ;
				int recurse_to_pl = pl - gap_pl_zust1less  ;
				value_pozitiv = value_pozitiv << (4*gap_pl_zust1less) ;
				pl = recurse_to_pl ;
				if(isneg_value) {value = -value_pozitiv ; } else {value = value_pozitiv ; }
				return pl;
			}
		} else { return to_pl; }
	} else { return to_pl; }
}
int cplong::trim_ziroz(){
	register int zeroztrimd = 0 ;
	while( (0 != value) && (!(value & 0xF)) ){
		bool isneg = (value < 0); // handling negatve nmbr bit siphting
		value = value >> 4;
        if(isneg && (value > 0)) {value = -value;} // handling negatve nmbr bit siphting
		pl += 1; ++zeroztrimd;
	}
	return zeroztrimd;
}


bool cplong::operator >(const cplong& b) {
	cplong blong = b ; cplong along(value,pl) ; long apozitiv_remainder=0; long bpozitiv_remainder=0;
	if( (blong.value < 0) && (0 < along.value) ) { return true; }
	else if( (along.value < 0) && (0 < blong.value) ) { return false; }
	int pl_dec_to = along.pl;
	if(blong.pl > along.pl) { pl_dec_to = blong.dec_pl(along.pl); }
	else if(pl > blong.pl) { pl_dec_to = along.dec_pl(blong.pl); }
	if(pl_dec_to > along.pl) { apozitiv_remainder = along.inc_pl(pl_dec_to); }
	else if(pl_dec_to > blong.pl) { bpozitiv_remainder = blong.inc_pl(pl_dec_to); }
	if(along.value-bpozitiv_remainder > blong.value-apozitiv_remainder) { return true; }
	return false;
}
bool cplong::operator >=(const cplong& b) {
	cplong blong = b ; cplong along(value,pl) ; long apozitiv_remainder=0; long bpozitiv_remainder=0;
	if( (blong.value < 0) && (0 < along.value) ) { return true; }
	else if( (along.value < 0) && (0 < blong.value) ) { return false; }
	int pl_dec_to = along.pl;
	if(blong.pl > along.pl) { pl_dec_to = blong.dec_pl(along.pl); }
	else if(pl > blong.pl) { pl_dec_to = along.dec_pl(blong.pl); }
	if(pl_dec_to > along.pl) { apozitiv_remainder = along.inc_pl(pl_dec_to); }
	else if(pl_dec_to > blong.pl) { bpozitiv_remainder = blong.inc_pl(pl_dec_to); }	// error case handling
	if(along.value-bpozitiv_remainder >= blong.value-apozitiv_remainder) { return true; }
	return false;
}
//////////// < and <= operators bilo
bool cplong::operator <(const cplong& b) {
	cplong blong = b ; cplong along(value,pl) ; long apozitiv_remainder=0; long bpozitiv_remainder=0;
	if( (blong.value < 0) && (0 < along.value) ) { return false; }
	else if( (along.value < 0) && (0 < blong.value) ) { return true; }
	int pl_dec_to = along.pl;
	if(blong.pl > along.pl) { pl_dec_to = blong.dec_pl(along.pl); }
	else if(pl > blong.pl) { pl_dec_to = along.dec_pl(blong.pl); }
	if(pl_dec_to > along.pl) { apozitiv_remainder = along.inc_pl(pl_dec_to); }
	else if(pl_dec_to > blong.pl) { bpozitiv_remainder = blong.inc_pl(pl_dec_to); }
	if(along.value-bpozitiv_remainder < blong.value-apozitiv_remainder) { return true; }
	return false;
}
bool cplong::operator <=(const cplong& b) {
	cplong blong = b ; cplong along(value,pl) ; long apozitiv_remainder=0; long bpozitiv_remainder=0;
	if( (blong.value < 0) && (0 < along.value) ) { return true; }
	else if( (along.value < 0) && (0 < blong.value) ) { return false; }
	int pl_dec_to = along.pl;
	if(blong.pl > along.pl) { pl_dec_to = blong.dec_pl(along.pl); }
	else if(pl > blong.pl) { pl_dec_to = along.dec_pl(blong.pl); }
	if(pl_dec_to > along.pl) { apozitiv_remainder = along.inc_pl(pl_dec_to); }
	else if(pl_dec_to > blong.pl) { bpozitiv_remainder = blong.inc_pl(pl_dec_to); }
	if(along.value-bpozitiv_remainder <= blong.value-apozitiv_remainder) { return true; }
	return false;
}
///////////////////
bool cplong::operator ==(const cplong& b) {
	cplong blong = b ; cplong along(value,pl) ;
	if((along.pl != blong.pl) || (along.value != blong.value)) { return false; } else { return true; }
}
bool cplong::operator !=(const cplong& b) {
	cplong blong = b ; cplong along(value,pl) ;
	if((along.pl != blong.pl) || (along.value != blong.value)) { return true; } else { return false; }
}
///comparison operators above
////////////////////////////
///// operator+ ///// operator+ bilo
cplong cplong::operator+(const cplong& b) {
	cplong along(value,pl) ; cplong blong = b ;
	along.trim_ziroz(); blong.trim_ziroz();
	int pl_dec_to = along.pl;
	if(blong.pl > along.pl) { pl_dec_to = blong.dec_pl(along.pl); }
	else if(along.pl > blong.pl) { pl_dec_to = along.dec_pl(blong.pl); }
	// handle pl_dec_to ekseption
	if(pl_dec_to > along.pl) {
		cout << "a + b : operator+ alert :pl of blong: " << blong << " cannot be reduced to pl oph along: " << along << endl;
		along.inc_pl(pl_dec_to);
		cout << "a + b : operator+ alert : along pl got inc. nao along is: " << along << endl;
//		throw "operator+:blong:pl:dec_pl";
	}
	else if(pl_dec_to > blong.pl) {
		cout << "a + b : operator+ alert :pl of along: " << along << " cannot be reduced to pl oph blong: " << blong << endl;
		blong.inc_pl(pl_dec_to);
		cout << "a + b : operator+ alert : blong pl got inc. nao blong is: " << blong << endl;
//		throw "operator+:along:pl:dec_pl";
	}
	// handle pl_dec_to ekseption
	// handle overphlo/underphlo ekseption
//	https://stackoverflow.com/questions/199333/how-do-i-detect-unsigned-integer-multiply-overflow
//	int a = <something>;
//	int x = <something>;
//	if ((x > 0) && (a > INT_MAX - x)) /* `a + x` would overphlo */;
//	if ((x < 0) && (a < INT_MIN - x)) /* `a + x` would underphlo */;
	if ((blong.value > 0) && (along.value > diph_long_meks - blong.value)) {
		cout << "a + b : operator+ failed : overphlo. add trying to overphlo diph_long_meks: " << hex << diph_long_meks << endl;
		throw "thro:operator+:overphlo";
//		return 0;
	}
	else if ((blong.value < 0) && (along.value < diph_long_min - blong.value)) {
		cerr << "a + b : operator+ failed : underphlo. add trying to underphlo diph_long_min: -" << hex << -diph_long_min << endl;
		throw "thro:operator+:underphlo";
//		return 0;
	}
	else { along.value = along.value + blong.value; }
	return along;
}
cplong& cplong::operator+=(const cplong& b) { *this = *this + b ; return *this; }
cplong operator+(long a, const cplong& b) { cplong along(a,0) ; return along+b; }
///++ operators bilo
cplong cplong::operator++ (){
	cplong along(value,pl); cplong blong(1,0);
	try {
		along = along + blong;
	}  catch(char const* thro_msg) {
		cerr << "operator++ failed : thro_msg is: " << thro_msg << endl;
		throw "thro:operator++";
	}
	along.trim_ziroz();
	this->value = along.value;
	this->pl = along.pl;
	return along;
}
cplong cplong::operator++( int ){
	cplong temp_pl(value,pl); cplong along(value,pl); cplong blong(1,0);
	try {
		along = along + blong;
	}  catch(char const* thro_msg) {
		cerr << "operator++ failed : thro_msg is: " << thro_msg << endl;
		throw "thro:operator++int";
	}
	along.trim_ziroz();
	this->value = along.value;
	this->pl = along.pl;
	return temp_pl;
}
//cplong& cplong::operator+=(const cplong& b) {
//	cplong blong = b;
//	if(b.pl > pl) { blong.dec_pl(pl); } else if(pl > b.pl) { this->dec_pl(b.pl); }
//	this->value += blong.value;
//	return *this;
//}
//cplong operator+(long a, const cplong& b)
//{
//	cplong along(a,0) ; cplong blong = b ;
//	int result_pl = 0 ; int bpl = blong.get_pl() ;
//	if(0 > bpl) { along.dec_pl(bpl); result_pl = bpl; } else if(bpl > 0) { blong.dec_pl(0); }
//	return cplong(along.get_value() + blong.get_value(), result_pl);
//}
////////////////////////////
///// operator+ ///// operator+ bilo
cplong cplong::operator-(const cplong& b) {
	cplong along(value,pl) ; cplong blong = b ;
	along.trim_ziroz(); blong.trim_ziroz();
	int pl_dec_to = along.pl;
	if(blong.pl > along.pl) { pl_dec_to = blong.dec_pl(along.pl); }
	else if(along.pl > blong.pl) { pl_dec_to = along.dec_pl(blong.pl); }
	// handle pl_dec_to ekseption
	if(pl_dec_to > along.pl) {
		cerr << "a - b : operator- failed :pl of blong: " << blong << " cannot be reduced to pl oph along: " << along << endl;
		throw "operator+:blong:pl:dec_pl";
	}
	else if(pl_dec_to > blong.pl) {
		cerr << "a - b : operator- failed :pl of along: " << along << " cannot be reduced to pl oph blong: " << blong << endl;
		throw "operator+:along:pl:dec_pl";
	}
	// handle pl_dec_to ekseption
	// handle overphlo/underphlo ekseption
//	https://stackoverflow.com/questions/199333/how-do-i-detect-unsigned-integer-multiply-overflow
//	int a = <something>;
//	int x = <something>;
//	if ((x < 0) && (a > INT_MAX + x)) /* `a - x` would overflow */;
//	if ((x > 0) && (a < INT_MIN + x)) /* `a - x` would underflow */;
	if ((blong.value < 0) && (along.value > diph_long_meks + blong.value)) {
		cerr << "a - b : operator- failed : overphlo " << endl;
		throw "thro:operator-:overphlo";
//		return 0;
	}
	else if ((blong.value > 0) && (along.value < diph_long_min + blong.value)) {
		cerr << "a - b : operator- failed : underphlo " << endl;
		throw "thro:operator-:underphlo";
//		return 0;
	}
	else { along.value = along.value - blong.value; }
	return along;
}
cplong& cplong::operator-=(const cplong& b) { *this = *this - b ; return *this; }
cplong operator-(long a, const cplong& b) { cplong along(a,0) ; return along-b; }
///++ operators bilo
cplong cplong::operator-- (){
	cplong along(value,pl); cplong blong(1,0);
	try {
		along = along - blong;
	}  catch(char const* thro_msg) {
		cerr << "operator-- failed : thro_msg is: " << thro_msg << endl;
		throw "thro:operator--int";
	}
	along.trim_ziroz();
	this->value = along.value;
	this->pl = along.pl;
	return along;
}
cplong cplong::operator--( int ){
	cplong temp_pl(value,pl); cplong along(value,pl); cplong blong(1,0);
	try {
		along = along - blong;
	}  catch(char const* thro_msg) {
		cerr << "operator-- failed : thro_msg is: " << thro_msg << endl;
		throw "thro:operator--int";
	}
	along.trim_ziroz();
	this->value = along.value;
	this->pl = along.pl;
	return temp_pl;
}
///// operator- ///// operator- up
///// operator* ///// operator* bilo
cplong cplong::operator*(const cplong& b) {
	cplong along(value,pl) ; cplong blong = b ;
	blong.trim_ziroz();
	along.trim_ziroz();
	if(blong.pl > pl) { blong.dec_pl(pl); } else if(pl > blong.pl) { along.dec_pl(blong.pl); }
	cout << "in cplong::operator*(const cplong& b): along is " << along << " and blong is : " << blong << endl ;
	along.value = along.value * blong.value;
	cout << "in cplong::operator*(const cplong& b): along is " << along << " and blong is : " << blong << endl ;
	return along;
}
cplong& cplong::operator*=(const cplong& b) { *this = *this * b ; return *this; }
cplong operator*(long a, const cplong& b) {
	cplong along(a,0) ;
	cout << "in operator*(long a, const cplong& b): along is " << along << " and b is : " << b << endl ;
	return along*b;
}
//cplong& cplong::operator*=(const cplong& b) {
//	cplong blong = b;
//	if(b.pl > pl) { blong.dec_pl(pl); } else if(pl > b.pl) { this->dec_pl(b.pl); }
//	this->value *= blong.value;
//	return *this;
//}
//cplong operator*(long a, const cplong& b)
//{
//	cplong along(a,0) ; cplong blong = b ;
//	int result_pl = 0 ; int bpl = blong.get_pl() ;
//	if(0 > bpl) { along.dec_pl(bpl); result_pl = bpl; } else if(bpl > 0) { blong.dec_pl(0); }
//	return cplong(along.get_value() * blong.get_value(),result_pl);
//}
///// operator* ///// operator* up
///// operator% ///// operator% bilo
cplong cplong::operator%(const cplong& b) {
	cplong blong = b ; cplong along(value,pl) ;
	if(blong.pl > pl) { blong.dec_pl(pl); } else if(pl > blong.pl) { along.dec_pl(blong.pl); }
	along.value = along.value % blong.value;
	return along;
}
cplong& cplong::operator%=(const cplong& b) { *this = *this % b ; return *this; }
cplong operator%(long a, const cplong& b) { cplong along(a,0) ; return along%b; }
//cplong& cplong::operator%=(const cplong& b) {
//	cplong blong = b;
//	if(b.pl > pl) { blong.dec_pl(pl); } else if(pl > b.pl) { this->dec_pl(b.pl); }
//	this->value %= blong.value;
//	return *this;
//}
//cplong operator%(long a, const cplong& b)
//{
//	cplong along(a,0) ; cplong blong = b ;
//	int return_pl = 0 ; int bpl = blong.get_pl() ;
//	if(0 > bpl) { along.dec_pl(bpl); return_pl = bpl; } else if(bpl > 0) { blong.dec_pl(0); }
//	return cplong(along.get_value() % blong.get_value(),return_pl);
//}
///// operator% ///// operator% up
///// operator/ ///// operator/ bilo
//	cout << hex << uppercase << "in cplong::operator/: along is : " << along << " . and blong is : " << blong << endl ;
//	cout << "r1 = " << along.value << " % " << blong.value << " = " << r1 << endl ;
//		cout << "in cplong::operator/: a2 is : " << a2 << endl ;
//		cout << "in cplong::operator/: a2 aptr dec is : " << a2 << endl ;
//		cout << "in cplong::operator/: a2 aptr value div is  : " << a2 << " . and along is  : " << along << endl ;
///////////
//cplong cplong::operator/(const cplong& b) {
//	cplong along(value,pl) ; cplong blong = b ;
//	if(b.pl > pl) { blong.dec_pl(pl); } else if(pl > b.pl) { along.dec_pl(b.pl); }
//	long r = along.value % blong.value;
//	along.value = along.value / blong.value;
//	if(0 != r) {
//		cplong rlong(r,0) ;
//		rlong.dec_pl(minimum_pl);
//		rlong.value = rlong.value / blong.value;
//		if(0 != along.value) { along += rlong; } else { along = rlong; }
//	}
//	return along;
//}
///////////

cplong cplong::div_pl(const cplong& b, int dropplby){ // cplong::pl_dec_phur_divizn
	cplong along(value,pl) ; cplong blong = b ; cplong resultplong;
	int pl_decd_actual; int alongsavedpl;
	if(along.pl>0) { along.dec_pl(0); } if(blong.pl>0) { blong.dec_pl(0); }
	alongsavedpl = along.pl ; along.dec_pl(along.pl-dropplby); pl_decd_actual = alongsavedpl - along.pl ;
	if(0<pl_decd_actual){
		long kuotient = along.value / blong.value ; long remainder = along.value % blong.value ;
		int pending_dropplby = dropplby-pl_decd_actual;
		int kuotientpl = -(cplong::pl_dec_phur_divizn - pending_dropplby);
		cplong kuotientp(kuotient, kuotientpl);
		if((remainder>0) && (pending_dropplby>0)){
			cplong remainderp(remainder, 0);
			resultplong = kuotientp + remainderp.div_pl(b, pending_dropplby);
		} else { resultplong = kuotientp; }
	}
	else {}
	return resultplong;
}

cplong cplong::operator/(const cplong& b) {
	cplong along(value,pl) ; cplong blong = b ; int gap_pl = 0;
	if(0 == blong.value){ throw "divizn_by_zero_plong"; }
	if(0 == along.value) { return cplong(0,0); }
	blong.trim_ziroz();
	int pl_dec_to = blong.pl ;
	if(blong.pl > along.pl) {
		gap_pl = blong.pl - along.pl;
		blong.pl = along.pl ;
	}
	else if(along.pl > blong.pl) {
		pl_dec_to = along.dec_pl(blong.pl);
		if(pl_dec_to > blong.pl) {
			cout << "in cplong::operator/: pl_dec_to is " << pl_dec_to << endl;
			cout << "a / b : operator/ failed :pl of along: " << along << " cannot be reduced to pl oph blong: " << blong << endl;
			throw "operator/:along:pl:dec_pl";
		}
	}
	cplong results1 = along.div_pl(blong, cplong::pl_dec_phur_divizn);
	results1.pl -= gap_pl;
	return results1;
}
cplong& cplong::operator/=(const cplong& b) { *this = *this / b ; return *this; }
cplong operator/(long a, const cplong& b) { cplong along(a,0) ; return along/b; }
//cplong operator/(long a, const cplong& b)
//{
//	cplong along(a,0) ; cplong blong = b ; int bpl = blong.get_pl() ;
//	if(0 > bpl) { along.dec_pl(bpl); } else if(bpl > 0) { blong.dec_pl(0); }
//	long r = along.get_value() % blong.get_value();
//	cplong a1(along.get_value() / blong.get_value(), 0);
//	if(0 != r) {
//		cplong rlong(r,0) ;
//		int dec_pl = rlong.dec_pl(cplong::minimum_pl);
//		cplong a2(rlong.get_value() / blong.get_value(), dec_pl);
//		if(0 != a1.get_value()) { a1 += a2; } else { a1 = a2 ; }
//	}
//	return a1;
//}
///// operator% ///// operator% up

cplong cplong::operator- (){
//	if(0==value) return *this;
//	else
		return cplong(-value,pl);
}
//related links // related links
// 1. detect overphlo
// https://stackoverflow.com/questions/199333/how-do-i-detect-unsigned-integer-multiply-overflow

/* commented functions duplicated belo do not delete ******
 int cplong::dec_pl(int to_pl){
	bool isneg_value = false; long value_pozitiv = value;
//	in cplong::dec_pl diph_long_meks is +7FFF FFFF FFFF FFFF
//	in cplong::dec_pl diph_long_min is vithout minus is 8000 0000 0000 0001
//	in cplong::dec_pl diph_long_min is -7FFF FFFF FFFF FFFF
//	cout << "in cplong::dec_pl diph_long_meks is +" << diph_long_meks <<  endl ;
//	cout << "in cplong::dec_pl diph_long_min is vithout minus is " << diph_long_min <<  endl ;
//	cout << "in cplong::dec_pl diph_long_min is -" << -diph_long_min <<  endl ;
	if(value < 0) {
		cout << "in cplong::dec_pl value is -" << -value <<  endl ;
		isneg_value = true; value_pozitiv = -value;
		cout << "in cplong::dec_pl isneg_value is " << isneg_value <<  endl ;
		cout << "in cplong::dec_pl value_pozitiv is " << value_pozitiv <<  endl ;
	}
	else {
		cout << "in cplong::dec_pl value is " << value <<  endl ;
		cout << "in cplong::dec_pl isneg_value is " << isneg_value <<  endl ;
		cout << "in cplong::dec_pl value_pozitiv is " << value_pozitiv <<  endl ;
	}
	if(to_pl < 0) { cout << "in cplong::dec_pl to_pl is -" << -to_pl <<  endl ; }
	else { cout << "in cplong::dec_pl to_pl is " << to_pl <<  endl ; }
	if(pl < 0) { cout << "in cplong::dec_pl pl is -" << -pl <<  endl ; }
	else { cout << "in cplong::dec_pl pl is " << pl <<  endl ; }
	if(cplong::minimum_pl < 0) { cout << "in cplong::dec_pl cplong::minimum_pl is -" << -cplong::minimum_pl <<  endl ; }
	else { cout << "in cplong::dec_pl cplong::minimum_pl is " << cplong::minimum_pl <<  endl ; }
	if( (to_pl >= cplong::minimum_pl) && (pl > to_pl) ){
		if(value_pozitiv != 0){
//			if(value_pozitiv < 0) { cout << "in cplong::dec_pl value_pozitiv is " << value_pozitiv <<  endl ; }
//			else { cout << "in cplong::dec_pl value_pozitiv is " << value_pozitiv <<  endl ; }
			int bitsize = cplong::bitsize(value_pozitiv) ;
			cout << "in cplong::dec_pl:bitsize = cplong::bitsize(value_pozitiv): value_pozitiv is: " << value_pozitiv <<  endl ;
			cout << "in cplong::dec_pl:bitsize = cplong::bitsize(value_pozitiv): bitsize is: " << bitsize <<  endl ;
			int gap_pl = pl - to_pl ;
			int long_size = (int)(sizeof(long)) ;
			cout << "in cplong::dec_pl int gap_pl = pl - to_pl. so gap_pl is: " << gap_pl <<  endl ;
			cout << "in cplong::dec_pl long_size is: " << long_size <<  " bytes." << endl ;
			if( (bitsize + 4*gap_pl) < long_size*8 ){
//				bool isneg = (value < 0); // handling negatve nmbr bit siphting
				value_pozitiv = value_pozitiv << (4*gap_pl) ;
				if(isneg_value) {value = -value_pozitiv ; } else { value = value_pozitiv ; }
				pl = to_pl ;
				if(pl < 0) { cout << "in cplong::dec_pl pl = to_pl ; no recursion returning pl is: -" << -pl <<  endl ; }
				else { cout << "in cplong::dec_pl pl = to_pl ; no recursion returning pl is: " << pl <<  endl ; }
				return pl;
			} else {
//				(bitsize + 4*gap_pl_zust1less) = long_size*8 - 4 )
//				( 4*gap_pl_zust1less) = long_size*8 - 4 -bitsize)
//				( gap_pl_zust1less) = (long_size*8 - 4 -bitsize)/4
//				(bitsize + 4*gap_pl_zust1less) = long_size*8 - 4 )
				int gap_pl_zust1less = (long_size*8 - 4 -bitsize)/4 ;
				cout << "in cplong::dec_pl else : gap_pl_zust1less = (long_size*8 - 1 -bitsize)/4 ; gap_pl_zust1less is: " << gap_pl_zust1less <<  endl ;
				int recurse_to_pl = pl - gap_pl_zust1less  ;
				if(recurse_to_pl < 0)
					{ cout << "in cplong::dec_pl recurse_to_pl = pl - gap_pl_zust1less  ; recurse_to_pl is: -" << -recurse_to_pl <<  endl ; }
				else
					{ cout << "in cplong::dec_pl recurse_to_pl = pl - gap_pl_zust1less  ; recurse_to_pl is: " << recurse_to_pl <<  endl ; }
//				int gap_pl2 = pl - recurse_to_pl;
//				bool isneg = (value < 0); // handling negatve nmbr bit siphting
				value_pozitiv = value_pozitiv << (4*gap_pl_zust1less) ;
//				if(isneg && (value > 0)) {value = -value;} // handling negatve nmbr bit siphting
				pl = recurse_to_pl ;
				cout << "in cplong::dec_pl returning nao vhen value_pozitiv is: " << value_pozitiv <<  endl ;
				if(pl < 0)
					{ cout << "in cplong::dec_pl returning nao vhen pl is: -" << -pl <<  endl ; }
				else
					{ cout << "in cplong::dec_pl returning nao vhen pl is: " << pl <<  endl ; }
				if(isneg_value) {value = -value_pozitiv ; } else {value = value_pozitiv ; }
				return pl;
			}
		} else {
			if(value < 0)
				{ cout << "in cplong::dec_pl returning nao vhen value is: -" << -value <<  endl ; }
			else
				{ cout << "in cplong::dec_pl returning nao vhen value is: " << value <<  endl ; }
			if(pl < 0)
				{ cout << "in cplong::dec_pl returning nao vhen pl is: -" << -pl <<  endl ; }
			else
				{ cout << "in cplong::dec_pl returning nao vhen pl is: " << pl <<  endl ; }
			if(to_pl < 0)
				{ cout << "in cplong::dec_pl returning to_pl is: -" << -to_pl <<  endl ; }
			else
				{ cout << "in cplong::dec_pl returning to_pl is: " << to_pl <<  endl ; }
//			if(isneg_value) {value = -value_pozitiv} else {value = value_pozitiv}
			return to_pl;
		}
	} else {
		if(value < 0)
			{ cout << "in cplong::dec_pl returning nao vhen value is: -" << -value <<  endl ; }
		else
			{ cout << "in cplong::dec_pl returning nao vhen value is: " << value <<  endl ; }
		if(pl < 0)
			{ cout << "in cplong::dec_pl returning nao vhen pl is: -" << -pl <<  endl ; }
		else
			{ cout << "in cplong::dec_pl returning nao vhen pl is: " << pl <<  endl ; }
		if(to_pl < 0)
			{ cout << "in cplong::dec_pl returning to_pl is: -" << -to_pl <<  endl ; }
		else
			{ cout << "in cplong::dec_pl returning to_pl is: " << to_pl <<  endl ; }
		return to_pl;
	}
}

cplong cplong::operator+(const cplong& b) {
	cplong along(value,pl) ; cplong blong = b ;
	cout << "in cplong::operator+ : along is " << along << " and blong is : " << blong << endl ;
	along.trim_ziroz(); blong.trim_ziroz();
	cout << "in cplong::operator+ aphtr trim_ziroz : along is " << along << " and blong is : " << blong << endl ;
	int pl_dec_to = along.pl;
	if(blong.pl > along.pl) { pl_dec_to = blong.dec_pl(along.pl); }
	else if(along.pl > blong.pl) { pl_dec_to = along.dec_pl(blong.pl); }
	cout << "in cplong::operator+ aphtr dec_pl : along is " << along << " and blong is : " << blong << endl ;
	if(pl_dec_to < 0) { cout << "in cplong::operator+ aphtr dec_pl : pl_dec_to is -" << -pl_dec_to << endl ; }
	else { cout << "in cplong::operator+ aphtr dec_pl : pl_dec_to is " << pl_dec_to << endl ; }
	// handle pl_dec_to ekseption
	if(pl_dec_to > along.pl) {
		cerr << "a + b : operator+ failed :pl of blong: " << blong << " cannot be reduced to pl oph along: " << along << endl;
		throw "operator+:blong:pl:dec_pl";
	}
	else if(pl_dec_to > blong.pl) {
		cerr << "a + b : operator+ failed :pl of along: " << along << " cannot be reduced to pl oph blong: " << blong << endl;
		throw "operator+:along:pl:dec_pl";
	}
	// handle pl_dec_to ekseption
	// handle overphlo/underphlo ekseption
//	https://stackoverflow.com/questions/199333/how-do-i-detect-unsigned-integer-multiply-overflow
//	int a = <something>;
//	int x = <something>;
//	if ((x > 0) && (a > INT_MAX - x)) // `a + x` would overphlo ;
//	if ((x < 0) && (a < INT_MIN - x)) // `a + x` would underphlo *;
	cout << "in cplong::operator+ bihore: along.value = along.value + blong.value; along is " << along << " and blong is : " << blong << endl ;
	if ((blong.value > 0) && (along.value > diph_long_meks - blong.value)) {
		cerr << "a + b : operator+ failed : overphlo " << endl;
		throw "thro:operator+:overphlo";
//		return 0;
	}
	else if ((blong.value < 0) && (along.value < diph_long_min - blong.value)) {
		cerr << "a + b : operator+ failed : underphlo " << endl;
		throw "thro:operator+:underphlo";
//		return 0;
	}
	else { along.value = along.value + blong.value; }
	cout << "in cplong::operator+ aphtr: along.value = along.value + blong.value; along is " << along << " and blong is : " << blong << endl ;
	return along;
}

bool cplong::operator !=(const cplong& b) {
	cplong blong = b ;
	cplong along(value,pl) ;
	cout << "in cplong::operator != along is: " << along << " and blong is: " << along << endl ;
	if( (blong.value < 0) && (0 < along.value) ) { return true; }
	else if( (along.value < 0) && (0 < blong.value) ) { return true; }
	// error case handling
	int pl_dec_to = along.pl;
	if(blong.pl > along.pl) { pl_dec_to = blong.dec_pl(along.pl); }
	else if(pl > blong.pl) { pl_dec_to = along.dec_pl(blong.pl); }
	if(pl_dec_to<0) {	cout << "in cplong::operator != pl_dec_to is: -" << -pl_dec_to << endl ; }
	else {	cout << "in cplong::operator != pl_dec_to is: " << pl_dec_to << endl ; }
	if(pl_dec_to > along.pl) { throw "less than failed due to blong.dec_pl failed"; }
	else if(pl_dec_to > blong.pl) { throw "less than failed due to along.dec_pl failed"; }
	// error case handling
	if(along.value != blong.value) { return true; }
	return false;
}

bool cplong::operator ==(const cplong& b) {
	cplong blong = b ; cplong along(value,pl) ;
	if( (blong.value < 0) && (0 < along.value) ) { return false; }
	else if( (along.value < 0) && (0 < blong.value) ) { return false; }
	if((along.pl != blong.pl) || (along.value != blong.value)) {
		cout << "in cplong::operator != along is: " << along << " and blong is: " << blong << endl;
		return false;
	} else { return true; }
	// error case handling
	if(blong.pl > along.pl) { blong.dec_pl(along.pl); }
	else if(along.pl > blong.pl) { along.dec_pl(blong.pl); }
	if((along.pl != blong.pl) || (along.value != blong.value)) {
		cout << "in cplong::operator != along is: " << along << " and blong is: " << blong << endl;
		return false;
	} else { return true; }
}
bool cplong::operator !=(const cplong& b) {
	cplong blong = b ; cplong along(value,pl) ;
	if( (blong.value < 0) && (0 < along.value) ) { return true; }
	else if( (along.value < 0) && (0 < blong.value) ) { return true; }
	if((along.pl != blong.pl) || (along.value != blong.value)) {
		cout << "in cplong::operator != along is: " << along << " and blong is: " << blong << endl;
		return true;
	} else { return false; }
	// error case handling
	if(blong.pl > along.pl) { blong.dec_pl(along.pl); }
	else if(along.pl > blong.pl) { along.dec_pl(blong.pl); }
	if((along.pl != blong.pl) || (along.value != blong.value)) {
		cout << "in cplong::operator != along is: " << along << " and blong is: " << blong << endl;
		return true;
	} else { return false; }
}
cplong cplong::div_pl(const cplong& b, int dropplby){ // cplong::pl_dec_phur_divizn
	cplong along(value,pl) ; cplong blong = b ; int pl_decd_by; int alongsavedpl; // int pl_dec_to;
	cplong resultplong;
	cout << "-------------in cplong::div_pl: along is : " << along << " . and blong is : " << blong << endl ;
	cout << "-------------in cplong::div_pl: dropplby is : " << dropplby << endl ;

	alongsavedpl = along.pl ;
//	pl_dec_to = along.dec_pl(along.pl - dropplby);
	pl_decd_by = alongsavedpl - along.pl ;
	cout << "along after decpl is : " << along << endl ;
	cout << "pl_decd_by is: "<< pl_decd_by << endl ;
	if(0<pl_decd_by){
		long kuotient = along.value / blong.value ;
		long remainder = along.value % blong.value ;
		cout << "remainder is : " << remainder << endl ;
		int nekst_dropplby = dropplby-pl_decd_by;
		int kuotientpl = -(cplong::pl_dec_phur_divizn - nekst_dropplby);
		cplong kuotientp(kuotient, kuotientpl);
		cout << "nekst_dropplby is : "<< nekst_dropplby << endl ;
		cout << "kuotientp is : " << kuotientp << endl ;
		if((remainder>0) && (nekst_dropplby>0)){
			cplong remainderp(remainder, 0);
			cout << "remainderp is : " << remainderp << endl ;
			resultplong = kuotientp + remainderp.div_pl(b, nekst_dropplby);
			cout << "resultplong is : " << resultplong << endl ;
		} else {
			resultplong = kuotientp;
		}
	}
	else {}
	return resultplong;
}

cplong cplong::operator/(const cplong& b) {
	cplong along(value,pl) ; cplong blong = b ; int gap_pl = 0;
	if(0 == blong.value){ throw "divizn_by_zero_plong"; }
	if(0 == along.value) { return cplong(0,0); }
	blong.trim_ziroz();
	cout << "in cplong::operator/: along is : " << along << " . and blong trimmed is : " << blong << endl ;
	int pl_dec_to = blong.pl ;
	if(blong.pl > along.pl) {
		int gap = (blong.pl - along.pl);
		gap_pl = -gap ;
		blong.pl = along.pl ;
		cout << "in cplong::operator/: gap_pl is -" << -gap_pl << endl;
		cout << "in cplong::operator/: blong is " << blong << endl;
	}
	else if(along.pl > blong.pl) {
		pl_dec_to = along.dec_pl(blong.pl);
		if(pl_dec_to > blong.pl) {
			cout << "in cplong::operator/: pl_dec_to is " << pl_dec_to << endl;
			cout << "a / b : operator/ failed :pl of along: " << along << " cannot be reduced to pl oph blong: " << blong << endl;
			throw "operator/:along:pl:dec_pl";
		}
	}
	cout << "in cplong::operator/: along is : " << along << " . and blong trimmed is : " << blong << endl ;
	cplong results1 = along.div_pl(blong, cplong::pl_dec_phur_divizn);
	cout << "in cplong::operator/: results1 is : " << results1 << endl ;
	results1.pl += gap_pl;
	cout << "aphtr results1.pl += gap_pl; results1 is : " << results1 << endl ;
	return results1;
}

 */

