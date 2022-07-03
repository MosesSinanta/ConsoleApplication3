void display(std::vector<char> v, int n);
void facmul_q1(std::vector<char> v, int n);
void facmul_q2(std::vector<char> v, int n);
void facmul_q3(std::vector<char> v, int n);
void facmul_q4(std::vector<char> v, int n);
void facmul_q5(std::vector<char> v, int n);
void facmul_q6(std::vector<char> v, int n);
void facmul_q7(std::vector<char> v, int n);
void facmul_q8(std::vector<char> v, int n);
void facmul_q9(std::vector<char> v, int n);
void facmul_q10(std::vector<char> v, int n);
void fac_q10(std::vector<char> v, int n);

void facmul_q1(std::vector<char> v, int n) {
	display(v, n);
	if (v[n - 1] == '0') {
		v.at(n - 1) = ' ';
		n = n + 1;
		facmul_q2(v, n);
	}
	else if (v[n - 1] == '1') {
		n = n + 1;
		fac_q10(v, n);
	}
}

void facmul_q2(std::vector<char> v, int n) {
	display(v, n);
	if (v[n - 1] == '0') {
		n = n + 1;
		facmul_q2(v, n);
	}
	else if (v[n - 1] == '1') {
		n = n + 1;
		facmul_q3(v, n);
	}
}

void facmul_q3(std::vector<char> v, int n) {
	display(v, n);
	if (v[n - 1] == '0') {
		v.at(n - 1) = ' ';
		n = n + 1;
		facmul_q4(v, n);
	}
	else if (v[n - 1] == '1') {
		n = n - 1;
		facmul_q8(v, n);
	}
}

void facmul_q4(std::vector<char> v, int n) {
	display(v, n);
	if (v[n - 1] == '0') {
		n = n + 1;
		facmul_q4(v, n);
	}
	else if (v[n - 1] == '1') {
		v.push_back(' ');
		n = n + 1;
		facmul_q5(v, n);
	}
}

void facmul_q5(std::vector<char> v, int n) {
	display(v, n);
	if (v[n - 1] == ' ') {
		v.at(n - 1) = '0';
		n = n - 1;
		facmul_q6(v, n);
	}
	else if (v[n - 1] == '0') {
		n = n + 1;
		facmul_q5(v, n);
	}
}

void facmul_q6(std::vector<char> v, int n) {
	display(v, n);
	if (v[n - 1] == '0') {
		n = n - 1;
		facmul_q6(v, n);
	}
	else if (v[n - 1] == '1') {
		n = n - 1;
		facmul_q7(v, n);
	}
}

void facmul_q7(std::vector<char> v, int n) {
	display(v, n);
	if (v[n - 1] == ' ') {
		v.at(n - 1) = '0';
		n = n + 1;
		facmul_q3(v, n);
	}
	else if (v[n - 1] == '0') {
		n = n - 1;
		facmul_q7(v, n);
	}
}

void facmul_q8(std::vector<char> v, int n) {
	display(v, n);
	if (v[n - 1] == '0') {
		n = n - 1;
		facmul_q8(v, n);
	}
	else if (v[n - 1] == '1') {
		n = n - 1;
		facmul_q9(v, n);
	}
}

void facmul_q9(std::vector<char> v, int n) {
	display(v, n);
	if (v[n - 1] == ' ') {
		v.at(n - 1) = '0';
		n = n + 1;
		facmul_q1(v, n);
	}
	else if (v[n - 1] == '0') {
		n = n - 1;
		facmul_q9(v, n);
	}
}

void facmul_q10(std::vector<char> v, int n) {
	display(v, n);
	if (v[n - 1] == '0') {
		n = n + 1;
		facmul_q10(v, n);
	}
	else if (v[n - 1] == '1') {
		n = n - 1;
		fac_q10(v, n);
	}
}