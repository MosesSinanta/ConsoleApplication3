#include "Multiplication.h"
void fac_q1(std::vector<char> vct, int num);
void fac_q2(std::vector<char> vct, int num);
void fac_q3(std::vector<char> vct, int num);
void fac_q4(std::vector<char> vct, int num);
void fac_q5(std::vector<char> vct, int num);
void fac_q6(std::vector<char> vct, int num);
void fac_q7(std::vector<char> vct, int num);
void fac_q8(std::vector<char> vct, int num);
void fac_q9(std::vector<char> vct, int num);
void fac_q10(std::vector<char> vct, int num);
void fac_q11(std::vector<char> vct, int num);
void fac_q12(std::vector<char> vct, int num);
void fac_q13(std::vector<char> vct, int num);
void fac_q14(std::vector<char> vct, int num);
void fac_q15(std::vector<char> vct, int num);
void fac_q16(std::vector<char> vct, int num);
void fac_q17(std::vector<char> vct, int num);
void fac_q18(std::vector<char> vct, int num);
void fac_q19(std::vector<char> vct, int num);
void fac_q20(std::vector<char> vct, int num);
void fac_q21(std::vector<char> vct, int num);
void fac_q22(std::vector<char> vct, int num);
void fac_q23(std::vector<char> vct, int num);
void fac_q24(std::vector<char> vct, int num);
void fac_q25(std::vector<char> vct, int num);

void fac_q0(std::vector<char> vct, int num) {
	display(vct, num);
	if (vct[num - 1] == '1') {
		num = num + 1;
		fac_q1(vct, num);
	}
}

void fac_q1(std::vector<char> vct, int num) {
	display(vct, num);
	if (vct[num - 1] == '0') {
		vct.at(num - 1) = ' ';
		num = num + 1;
		fac_q2(vct, num);
	}
	else if (vct[num - 1] == '1') {
		num = num + 1;
		fac_q6(vct, num);
	}
}

void fac_q2(std::vector<char> vct, int num) {
	display(vct, num);
	if (vct[num - 1] == '0') {
		num = num + 1;
		fac_q2(vct, num);
	}
	else if (vct[num - 1] == '1') {
		vct.push_back(' ');
		num = num + 1;
		fac_q3(vct, num);
	}
}

void fac_q3(std::vector<char> vct, int num) {
	display(vct, num);
	if (vct[num - 1] == ' ') {
		vct.at(num - 1) = '0';
		num = num - 1;
		fac_q4(vct, num);
	}
	else if (vct[num - 1] == '0') {
		num = num - 1;
		fac_q4(vct, num);
	}
}

void fac_q4(std::vector<char> vct, int num) {
	display(vct, num);
	if (vct[num - 1] == '0') {
		num = num - 1;
		fac_q4(vct, num);
	}
	else if (vct[num - 1] == '1') {
		num = num - 1;
		fac_q5(vct, num);
	}
}

void fac_q5(std::vector<char> vct, int num) {
	display(vct, num);
	if (vct[num - 1] == ' ') {
		vct.at(num - 1) = '0';
		num = num + 1;
		fac_q1(vct, num);
	}
	else if (vct[num - 1] == '0') {
		num = num - 1;
		fac_q5(vct, num);
	}
}

void fac_q6(std::vector<char> vct, int num) {
	display(vct, num);
	if (vct[num - 1] == ' ') {
		num = num - 1;
		fac_q7(vct, num);
	}
	else if (vct[num - 1] == '0') {
		num = num + 1;
		fac_q6(vct, num);
	}
}

void fac_q7(std::vector<char> vct, int num) {
	display(vct, num);
	if (vct[num - 1] == '0') {
		vct.at(num - 1) = '1';
		num = num - 1;
		fac_q8(vct, num);
	}
}

void fac_q8(std::vector<char> vct, int num) {
	display(vct, num);
	if (vct[num - 1] == '0') {
		num = num - 1;
		fac_q8(vct, num);
	}
	else if (vct[num - 1] == '1') {
		num = num - 1;
		fac_q9(vct, num);
	}
}

void fac_q9(std::vector<char> vct, int num) {
	display(vct, num);
	if (vct[num - 1] == '0') {
		num = num - 1;
		fac_q9(vct, num);
	}
	else if (vct[num - 1] == '1') {
		num = num + 1;
		mul_q1(vct, num);
	}
}