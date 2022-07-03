void display(std::vector<char> v, int n);
void add_q1(std::vector<char> v, int n);
void add_q2(std::vector<char> v, int n);
void add_q3(std::vector<char> v, int n);
void add_q4(std::vector<char> v, int n);
void add_q5(std::vector<char> v, int n);
void add_q6(std::vector<char> v, int n);
void add_q7(std::vector<char> v, int n);
void add_q8(std::vector<char> v, int n);
void add_q9(std::vector<char> v, int n);
void add_q10(std::vector<char> v, int n);
void add_q11(std::vector<char> v, int n);
void add_q12(std::vector<char> v, int n);

void add_q0(std::vector<char> v, int n) {
	display(v, n);
	if (v[n - 1] == '1') {
		n = n + 1;
		add_q1(v, n);
	}
}

void add_q1(std::vector<char> v, int n) {
	display(v, n);
	if (v[n - 1] == '0') {
		v.at(n - 1) = ' ';
		n = n + 1;
		add_q2(v, n);
	}
	else if (v[n - 1] == '1') {
		n = n + 1;
		add_q8(v, n);
	}
}

void add_q2(std::vector<char> v, int n) {
	display(v, n);
	if (v[n - 1] == '0') {
		n = n + 1;
		add_q2(v, n);
	}
	else if (v[n - 1] == '1') {
		n = n + 1;
		add_q3(v, n);
	}
}

void add_q3(std::vector<char> v, int n) {
	display(v, n);
	if (v[n - 1] == '0') {
		n = n + 1;
		add_q3(v, n);
	}
	else if (v[n - 1] == '1') {
		v.push_back(' ');
		n = n + 1;
		add_q4(v, n);
	}
}

void add_q4(std::vector<char> v, int n) {
	display(v, n);
	if (v[n - 1] == ' ') {
		v.at(n - 1) = '0';
		n = n - 1;
		add_q5(v, n);
	}
	else if (v[n - 1] == '0') {
		n = n + 1;
		add_q4(v, n);
	}
}

void add_q5(std::vector<char> v, int n) {
	display(v, n);
	if (v[n - 1] == '0') {
		n = n - 1;
		add_q5(v, n);
	}
	else if (v[n - 1] == '1') {
		n = n - 1;
		add_q6(v, n);
	}
}

void add_q6(std::vector<char> v, int n) {
	display(v, n);
	if (v[n - 1] == '0') {
		n = n - 1;
		add_q6(v, n);
	}
	else if (v[n - 1] == '1') {
		n = n - 1;
		add_q7(v, n);
	}
}

void add_q7(std::vector<char> v, int n) {
	display(v, n);
	if (v[n - 1] == ' ') {
		v.at(n - 1) = '0';
		n = n + 1;
		add_q1(v, n);
	}
	else if (v[n - 1] == '0') {
		n = n - 1;
		add_q7(v, n);
	}
}

void add_q8(std::vector<char> v, int n) {
	display(v, n);
	if (v[n - 1] == '0') {
		v.at(n - 1) = ' ';
		n = n + 1;
		add_q9(v, n);
	}
	else if (v[n - 1] == '1')
		std::cout << "We're good to go!";
}

void add_q9(std::vector<char> v, int n) {
	display(v, n);
	if (v[n - 1] == '0') {
		n = n + 1;
		add_q9(v, n);
	}
	else if (v[n - 1] == '1') {
		v.push_back(' ');
		n = n + 1;
		add_q10(v, n);
	}
}

void add_q10(std::vector<char> v, int n) {
	display(v, n);
	if (v[n - 1] == ' ') {
		v.at(n - 1) = '0';
		n = n - 1;
		add_q11(v, n);
	}
	else if (v[n - 1] == '0') {
		n = n + 1;
		add_q10(v, n);
	}
}

void add_q11(std::vector<char> v, int n) {
	display(v, n);
	if (v[n - 1] == '0') {
		n = n - 1;
		add_q11(v, n);
	}
	else if (v[n - 1] == '1') {
		n = n - 1;
		add_q12(v, n);
	}
}

void add_q12(std::vector<char> v, int n) {
	display(v, n);
	if (v[n - 1] == ' ') {
		v.at(n - 1) = '0';
		n = n + 1;
		add_q8(v, n);
	}
	else if (v[n - 1] == '0') {
		n = n - 1;
		add_q12(v, n);
	}
}