void display(std::vector<char> vct, int num);
void facmul_q1(std::vector<char> vct, int num);
void facmul_q2(std::vector<char> vct, int num);
void facmul_q3(std::vector<char> vct, int num);
void facmul_q4(std::vector<char> vct, int num);
void facmul_q5(std::vector<char> vct, int num);
void facmul_q6(std::vector<char> vct, int num);
void facmul_q7(std::vector<char> vct, int num);
void facmul_q8(std::vector<char> vct, int num);
void facmul_q9(std::vector<char> vct, int num);
void facmul_q10(std::vector<char> vct, int num);
void fac_q10(std::vector<char> vct, int num);

void facmul_q1(std::vector<char> vct, int num) {
	display(vct, num);
	if (vct[num - 1] == '0') {
		vct.at(num - 1) = ' ';
		num = num + 1;
		facmul_q2(vct, num);
	}
	else if (vct[num - 1] == '1') {
		num = num + 1;
		fac_q10(vct, num);
	}
}

void facmul_q2(std::vector<char> vct, int num) {
	display(vct, num);
	if (vct[num - 1] == '0') {
		num = num + 1;
		facmul_q2(vct, num);
	}
	else if (vct[num - 1] == '1') {
		num = num + 1;
		facmul_q3(vct, num);
	}
}

void facmul_q3(std::vector<char> vct, int num) {
	display(vct, num);
	if (vct[num - 1] == '0') {
		vct.at(num - 1) = ' ';
		num = num + 1;
		facmul_q4(vct, num);
	}
	else if (vct[num - 1] == '1') {
		num = num - 1;
		facmul_q8(vct, num);
	}
}

void facmul_q4(std::vector<char> vct, int num) {
	display(vct, num);
	if (vct[num - 1] == '0') {
		num = num + 1;
		facmul_q4(vct, num);
	}
	else if (vct[num - 1] == '1') {
		vct.push_back(' ');
		num = num + 1;
		facmul_q5(vct, num);
	}
}

void facmul_q5(std::vector<char> vct, int num) {
	display(vct, num);
	if (vct[num - 1] == ' ') {
		vct.at(num - 1) = '0';
		num = num - 1;
		facmul_q6(vct, num);
	}
	else if (vct[num - 1] == '0') {
		num = num + 1;
		facmul_q5(vct, num);
	}
}

void facmul_q6(std::vector<char> vct, int num) {
	display(vct, num);
	if (vct[num - 1] == '0') {
		num = num - 1;
		facmul_q6(vct, num);
	}
	else if (vct[num - 1] == '1') {
		num = num - 1;
		facmul_q7(vct, num);
	}
}

void facmul_q7(std::vector<char> vct, int num) {
	display(vct, num);
	if (vct[num - 1] == ' ') {
		vct.at(num - 1) = '0';
		num = num + 1;
		facmul_q3(vct, num);
	}
	else if (vct[num - 1] == '0') {
		num = num - 1;
		facmul_q7(vct, num);
	}
}

void facmul_q8(std::vector<char> vct, int num) {
	display(vct, num);
	if (vct[num - 1] == '0') {
		num = num - 1;
		facmul_q8(vct, num);
	}
	else if (vct[num - 1] == '1') {
		num = num - 1;
		facmul_q9(vct, num);
	}
}

void facmul_q9(std::vector<char> vct, int num) {
	display(vct, num);
	if (vct[num - 1] == ' ') {
		vct.at(num - 1) = '0';
		num = num + 1;
		facmul_q1(vct, num);
	}
	else if (vct[num - 1] == '0') {
		num = num - 1;
		facmul_q9(vct, num);
	}
}

void facmul_q10(std::vector<char> vct, int num) {
	display(vct, num);
	if (vct[num - 1] == '0') {
		num = num + 1;
		facmul_q10(vct, num);
	}
	else if (vct[num - 1] == '1') {
		num = num - 1;
		fac_q10(vct, num);
	}
}