void display(std::vector<char> v, int n);
void mul_q1(std::vector<char> v, int n);
void mul_q2(std::vector<char> v, int n);
void mul_q3(std::vector<char> v, int n);
void mul_q4(std::vector<char> v, int n);
void mul_q5(std::vector<char> v, int n);
void mul_q6(std::vector<char> v, int n);
void mul_q7(std::vector<char> v, int n);
void mul_q8(std::vector<char> v, int n);
void mul_q9(std::vector<char> v, int n);
void mul_q10(std::vector<char> v, int n);

void mul_q0(std::vector<char> v, int n) {
	display(v, n);
	if (v[n - 1] == '1') {
		n = n + 1;
		mul_q1(v, n);
	}
}

void mul_q1(std::vector<char> v, int n) {
	display(v, n);
	if (v[n - 1] == '0') {
		v.at(n - 1) = ' ';
		n = n + 1;
		mul_q2(v, n);
	}
	else if (v[n - 1] == '1') {
		n = n + 1;
		mul_q10(v, n);
	}
}

void mul_q2(std::vector<char> v, int n) {
	display(v, n);
	if (v[n - 1] == '0') {
		n = n + 1;
		mul_q2(v, n);
	}
	else if (v[n - 1] == '1') {
		n = n + 1;
		mul_q3(v, n);
	}
}

void mul_q3(std::vector<char> v, int n) {
	display(v, n);
	if (v[n - 1] == '0') {
		v.at(n - 1) = ' ';
		n = n + 1;
		mul_q4(v, n);
	}
	else if (v[n - 1] == '1') {
		n = n - 1;
		mul_q8(v, n);
	}
}

void mul_q4(std::vector<char> v, int n) {
	display(v, n);
	if (v[n - 1] == '0') {
		n = n + 1;
		mul_q4(v, n);
	}
	else if (v[n - 1] == '1') {
		v.push_back(' ');
		n = n + 1;
		mul_q5(v, n);
	}
}

void mul_q5(std::vector<char> v, int n) {
	display(v, n);
	if (v[n - 1] == ' ') {
		v.at(n - 1) = '0';
		n = n - 1;
		mul_q6(v, n);
	}
	else if (v[n - 1] == '0') {
		n = n + 1;
		mul_q5(v, n);
	}
}

void mul_q6(std::vector<char> v, int n) {
	display(v, n);
	if (v[n - 1] == '0') {
		n = n - 1;
		mul_q6(v, n);
	}
	else if (v[n - 1] == '1') {
		n = n - 1;
		mul_q7(v, n);
	}
}

void mul_q7(std::vector<char> v, int n) {
	display(v, n);
	if (v[n - 1] == ' ') {
		v.at(n - 1) = '0';
		n = n + 1;
		mul_q3(v, n);
	}
	else if (v[n - 1] == '0') {
		n = n - 1;
		mul_q7(v, n);
	}
}

void mul_q8(std::vector<char> v, int n) {
	display(v, n);
	if (v[n - 1] == '0') {
		n = n - 1;
		mul_q8(v, n);
	}
	else if (v[n - 1] == '1') {
		n = n - 1;
		mul_q9(v, n);
	}
}

void mul_q9(std::vector<char> v, int n) {
	display(v, n);
	if (v[n - 1] == ' ') {
		v.at(n - 1) = '0';
		n = n + 1;
		mul_q1(v, n);
	}
	else if (v[n - 1] == '0') {
		n = n - 1;
		mul_q9(v, n);
	}
}

void mul_q10(std::vector<char> v, int n) {
	display(v, n);
	if (v[n - 1] == '0') {
		n = n + 1;
		mul_q10(v, n);
	}
	else if (v[n - 1] == '1')
		std::cout << "We're good to go!";
}