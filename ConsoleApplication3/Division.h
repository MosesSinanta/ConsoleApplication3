void display(std::vector<char> v, int n);
void div_q1(std::vector<char> v, int n);
void div_q2(std::vector<char> v, int n);
void div_q3(std::vector<char> v, int n);
void div_q4(std::vector<char> v, int n);
void div_q5(std::vector<char> v, int n);
void div_q6(std::vector<char> v, int n);
void div_q7(std::vector<char> v, int n);
void div_q8(std::vector<char> v, int n);
void div_q9(std::vector<char> v, int n);
void div_q10(std::vector<char> v, int n);
void div_q11(std::vector<char> v, int n);
void div_q12(std::vector<char> v, int n);
void div_q13(std::vector<char> v, int n);
void div_q14(std::vector<char> v, int n);
void div_q15(std::vector<char> v, int n);

void div_q0(std::vector<char> v, int n) {
	display(v, n);
	if (v[n - 1] == '1') {
		n = n + 1;
		div_q1(v, n);
	}
}

void div_q1(std::vector<char> v, int n) {
	display(v, n);
	if (v[n - 1] == '0') {
		n = n + 1;
		div_q1(v, n);
	}
	else if (v[n - 1] == '1') {
		n = n + 1;
		div_q2(v, n);
	}
}

void div_q2(std::vector<char> v, int n) {
	display(v, n);
	if (v[n - 1] == '0') {
		n = n + 1;
		div_q2(v, n);
	}
	else if (v[n - 1] == '1') {
		n = n - 1;
		div_q3(v, n);
	}
}

void div_q3(std::vector<char> v, int n) {
	display(v, n);
	if (v[n - 1] == '0') {
		v.at(n - 1) = ' ';
		n = n - 1;
		div_q4(v, n);
	}
}

void div_q4(std::vector<char> v, int n) {
	display(v, n);
	if (v[n - 1] == '0') {
		n = n - 1;
		div_q4(v, n);
	}
	else if (v[n - 1] == '1') {
		n = n - 1;
		div_q5(v, n);
	}
}

void div_q5(std::vector<char> v, int n) {
	display(v, n);
	if (v[n - 1] == '0') {
		n = n - 1;
		div_q5(v, n);
	}
	else if (v[n - 1] == '1') {
		n = n + 1;
		div_q6(v, n);
	}
}

void div_q6(std::vector<char> v, int n) {
	display(v, n);
	if (v[n - 1] == '0') {
		v.at(n - 1) = ' ';
		n = n + 1;
		div_q7(v, n);
	}
	else if (v[n - 1] == '1') {
		n = n + 1;
		div_q15(v, n);
	}
}

void div_q7(std::vector<char> v, int n) {
	display(v, n);
	if (v[n - 1] == '0') {
		n = n + 1;
		div_q7(v, n);
	}
	else if (v[n - 1] == '1') {
		n = n + 1;
		div_q8(v, n);
	}
}

void div_q8(std::vector<char> v, int n) {
	display(v, n);
	if (v[n - 1] == ' ') {
		v.at(n - 1) = '0';
		n = n - 1;
		div_q9(v, n);
	}
	else if (v[n - 1] == '0') {
		n = n + 1;
		div_q8(v, n);
	}
}

void div_q9(std::vector<char> v, int n) {
	display(v, n);
	if (v[n - 1] == '0') {
		v.at(n - 1) = ' ';
		n = n - 1;
		div_q10(v, n);
	}
	else if (v[n - 1] == '1') {
		n = n + 1;
		div_q12(v, n);
	}
}

void div_q10(std::vector<char> v, int n) {
	display(v, n);
	if (v[n - 1] == '0') {
		n = n - 1;
		div_q10(v, n);
	}
	else if (v[n - 1] == '1') {
		n = n - 1;
		div_q11(v, n);
	}
}

void div_q11(std::vector<char> v, int n) {
	display(v, n);
	if (v[n - 1] == ' ') {
		v.at(n - 1) = '0';
		n = n + 1;
		div_q6(v, n);

	}
	else if (v[n - 1] == '0') {
		n = n - 1;
		div_q11(v, n);
	}
}

void div_q12(std::vector<char> v, int n) {
	display(v, n);
	if (v[n - 1] == '0') {
		n = n + 1;
		div_q12(v, n);
	}
	else if (v[n - 1] == '1') {
		v.push_back(' ');
		n = n + 1;
		div_q13(v, n);
	}
}

void div_q13(std::vector<char> v, int n) {
	display(v, n);
	if (v[n - 1] == ' ') {
		v.at(n - 1) = '0';
		n = n - 1;
		div_q14(v, n);
	}
	else if (v[n - 1] == '0') {
		n = n + 1;
		div_q13(v, n);
	}
}

void div_q14(std::vector<char> v, int n) {
	display(v, n);
	if (v[n - 1] == '0') {
		n = n - 1;
		div_q14(v, n);
	}
	else if (v[n - 1] == '1') {
		n = n - 1;
		div_q9(v, n);
	}
}

void div_q15(std::vector<char> v, int n) {
	display(v, n);
	if (v[n - 1] == ' ') {
		v.at(n - 1) = '0';
		n = n + 1;
		display(v, n);
		std::cout << "We're good to go!";
	}
	else if (v[n - 1] == '0') {
		n = n + 1;
		div_q15(v, n);
	}
}