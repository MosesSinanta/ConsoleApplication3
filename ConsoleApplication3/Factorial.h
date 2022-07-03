#include "FactorialMultiplication.h"
void display(std::vector<char> v, int n);
void fac_q1(std::vector<char> v, int n);
void fac_q2(std::vector<char> v, int n);
void fac_q3(std::vector<char> v, int n);
void fac_q4(std::vector<char> v, int n);
void fac_q5(std::vector<char> v, int n);
void fac_q6(std::vector<char> v, int n);
void fac_q7(std::vector<char> v, int n);
void fac_q8(std::vector<char> v, int n);
void fac_q9(std::vector<char> v, int n);
void fac_q10(std::vector<char> v, int n);
void fac_qc1(std::vector<char> v, int n);
void fac_qc2(std::vector<char> v, int n);
void fac_qc3(std::vector<char> v, int n);
void fac_qc4(std::vector<char> v, int n);
void fac_q11(std::vector<char> v, int n);
void fac_q12(std::vector<char> v, int n);
void fac_q13(std::vector<char> v, int n);
void fac_q14(std::vector<char> v, int n);
void fac_q15(std::vector<char> v, int n);
void fac_q16(std::vector<char> v, int n);
void fac_q17(std::vector<char> v, int n);
void fac_q18(std::vector<char> v, int n);
void fac_q19(std::vector<char> v, int n);
void fac_q20(std::vector<char> v, int n);
void fac_q21(std::vector<char> v, int n);
void fac_q22(std::vector<char> v, int n);
void fac_q23(std::vector<char> v, int n);
void fac_q24(std::vector<char> v, int n);
void fac_q25(std::vector<char> v, int n);

void fac_q0(std::vector<char> v, int n) {
	display(v, n);
	if (v[n - 1] == '1') {
		n = n + 1;
		fac_q1(v, n);
	}
}

void fac_q1(std::vector<char> v, int n) {
	display(v, n);
	if (v[n - 1] == '0') {
		v.at(n - 1) = ' ';
		n = n + 1;
		fac_q2(v, n);
	}
	else if (v[n - 1] == '1') {
		n = n + 1;
		fac_q6(v, n);
	}
}

void fac_q2(std::vector<char> v, int n) {
	display(v, n);
	if (v[n - 1] == '0') {
		n = n + 1;
		fac_q2(v, n);
	}
	else if (v[n - 1] == '1') {
		v.push_back(' ');
		n = n + 1;
		fac_q3(v, n);
	}
}

void fac_q3(std::vector<char> v, int n) {
	display(v, n);
	if (v[n - 1] == ' ') {
		v.at(n - 1) = '0';
		n = n - 1;
		fac_q4(v, n);
	}
	else if (v[n - 1] == '0') {
		v.push_back(' ');
		n = n + 1;
		fac_q3(v, n);
	}
}

void fac_q4(std::vector<char> v, int n) {
	display(v, n);
	if (v[n - 1] == '0') {
		n = n - 1;
		fac_q4(v, n);
	}
	else if (v[n - 1] == '1') {
		n = n - 1;
		fac_q5(v, n);
	}
}

void fac_q5(std::vector<char> v, int n) {
	display(v, n);
	if (v[n - 1] == ' ') {
		v.at(n - 1) = '0';
		n = n + 1;
		fac_q1(v, n);
	}
	else if (v[n - 1] == '0') {
		n = n - 1;
		fac_q5(v, n);
	}
}

void fac_q6(std::vector<char> v, int n) {
	display(v, n);
	if (v[n - 1] == ' ') {
		n = n - 1;
		fac_q7(v, n);
	}
	else if (v[n - 1] == '0') {
		n = n + 1;
		fac_q6(v, n);
	}
}

void fac_q7(std::vector<char> v, int n) {
	display(v, n);
	if (v[n - 1] == '0') {
		v.at(n - 1) = '1';
		n = n - 1;
		fac_q8(v, n);
	}
}

void fac_q8(std::vector<char> v, int n) {
	display(v, n);
	if (v[n - 1] == '0') {
		n = n - 1;
		fac_q8(v, n);
	}
	else if (v[n - 1] == '1') {
		n = n - 1;
		fac_q9(v, n);
	}
}

void fac_q9(std::vector<char> v, int n) {
	display(v, n);
	if (v[n - 1] == '0') {
		n = n - 1;
		fac_q9(v, n);
	}
	else if (v[n - 1] == '1') {
		n = n + 1;
		facmul_q1(v, n);
	}
}

void fac_q10(std::vector<char> v, int n) {
	display(v, n);
	if (v[n - 1] == '0') {
		v.at(n - 1) = ' ';
		n = n + 1;
		fac_q11(v, n);
	}
	else if (v[n - 1] == '1') {
		v.at(n - 1) = ' ';
		n = n - 1;
		fac_q24(v, n);
	}
}

void fac_q11(std::vector<char> v, int n) {
	display(v, n);
	if (v[n - 1] == '0') {
		n = n + 1;
		fac_q11(v, n);
	}
	else if (v[n - 1] == '1') {
		n = n + 1;
		fac_q12(v, n);
	}
}

void fac_q12(std::vector<char> v, int n) {
	display(v, n);
	if (v[n - 1] == ' ') {
		v.push_back(' ');
		v.at(n - 1) = '1';
		n = n + 1;
		fac_q13(v, n);
	}
	else if (v[n - 1] == '0') {
		n = n + 1;
		fac_q12(v, n);
	}
}

void fac_q13(std::vector<char> v, int n) {
	display(v, n);
	if (v[n - 1] == ' ') {
		v.at(n - 1) = '0';
		n = n - 1;
		fac_q14(v, n);
	}
}

void fac_q14(std::vector<char> v, int n) {
	display(v, n);
	if (v[n - 1] == '0') {
		n = n - 1;
		fac_q14(v, n);
	}
	else if (v[n - 1] == '1') {
		n = n - 1;
		fac_q15(v, n);
	}
}

void fac_q15(std::vector<char> v, int n) {
	display(v, n);
	if (v[n - 1] == '0') {
		n = n - 1;
		fac_q15(v, n);
	}
	else if (v[n - 1] == '1') {
		n = n - 1;
		fac_q16(v, n);
	}
}

void fac_q16(std::vector<char> v, int n) {
	display(v, n);
	if (v[n - 1] == ' ') {
		v.at(n - 1) = '0';
		n = n + 1;
		fac_q17(v, n);
	}
	else if (v[n - 1] == '0') {
		n = n - 1;
		fac_q16(v, n);
	}
}

void fac_q17(std::vector<char> v, int n) {
	display(v, n);
	if (v[n - 1] == '0') {
		v.at(n - 1) = ' ';
		n = n + 1;
		fac_q18(v, n);
	}
	else if (v[n - 1] == '1') {
		n = n + 1;
		fac_q21(v, n);
	}
}

void fac_q18(std::vector<char> v, int n) {
	display(v, n);
	if (v[n - 1] == '0') {
		n = n + 1;
		fac_q18(v, n);
	}
	else if (v[n - 1] == '1') {
		n = n + 1;
		fac_q19(v, n);
	}
}

void fac_q19(std::vector<char> v, int n) {
	display(v, n);
	if (v[n - 1] == '0') {
		n = n + 1;
		fac_q19(v, n);
	}
	else if (v[n - 1] == '1') {
		n = n + 1;
		fac_q20(v, n);
	}
}

void fac_q20(std::vector<char> v, int n) {
	display(v, n);
	if (v[n - 1] == ' ') {
		v.at(n - 1) = '0';
		n = n - 1;
		fac_q14(v, n);
	}
	else if (v[n - 1] == '0') {
		n = n + 1;
		fac_q20(v, n);
	}
}

void fac_q21(std::vector<char> v, int n) {
	display(v, n);
	if (v[n - 1] == '0') {
		n = n + 1;
		fac_q21(v, n);
	}
	else if (v[n - 1] == '1') {
		v.push_back(' ');
		n = n + 1;
		fac_q22(v, n);
	}
}

void fac_q22(std::vector<char> v, int n) {
	display(v, n);
	if (v[n - 1] == ' ') {
		n = n - 1;
		fac_q23(v, n);
	}
	else if (v[n - 1] == '0') {
		n = n + 1;
		fac_q22(v, n);
	}
}

void fac_q23(std::vector<char> v, int n) {
	display(v, n);
	if (v[n - 1] == '0') {
		v.at(n - 1) = '1';
		n = n - 1;
		fac_q8(v, n);
	}
}

void fac_q24(std::vector<char> v, int n) {
	display(v, n);
	if (v[n - 1] == '1') {
		v.at(n - 1) = ' ';
		n = n - 1;
		fac_q25(v, n);
	}
}

void fac_q25(std::vector<char> v, int n) {
	display(v, n);
	if (v[n - 1] == '0') {
		n = n - 1;
		fac_q25(v, n);
	}
	else if (v[n - 1] == '1') {
		display(v, n);
		std::cout << "We're good to go!";
	}
}