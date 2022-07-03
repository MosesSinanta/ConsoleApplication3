void display(std::vector<char> vct, int num);
void add_q1(std::vector<char> vct, int num);
void add_q2(std::vector<char> vct, int num);
void add_q3(std::vector<char> vct, int num);
void add_q4(std::vector<char> vct, int num);
void add_q5(std::vector<char> vct, int num);
void add_q6(std::vector<char> vct, int num);
void add_q7(std::vector<char> vct, int num);
void add_q8(std::vector<char> vct, int num);
void add_q9(std::vector<char> vct, int num);
void add_q10(std::vector<char> vct, int num);
void add_q11(std::vector<char> vct, int num);
void add_q12(std::vector<char> vct, int num);

void add_q0(std::vector<char> vct, int num) {
	display(vct, num);
	if (vct[num - 1] == '1') {
		num = num + 1;
		add_q1(vct, num);
	}
}

void add_q1(std::vector<char> vct, int num) {
	display(vct, num);
	if (vct[num - 1] == '0') {
		vct.at(num - 1) = ' ';
		num = num + 1;
		add_q2(vct, num);
	}
	else if (vct[num - 1] == '1') {
		num = num + 1;
		add_q8(vct, num);
	}
}

void add_q2(std::vector<char> vct, int num) {
	display(vct, num);
	if (vct[num - 1] == '0') {
		num = num + 1;
		add_q2(vct, num);
	}
	else if (vct[num - 1] == '1') {
		num = num + 1;
		add_q3(vct, num);
	}
}

void add_q3(std::vector<char> vct, int num) {
	display(vct, num);
	if (vct[num - 1] == '0') {
		num = num + 1;
		add_q3(vct, num);
	}
	else if (vct[num - 1] == '1') {
		vct.push_back(' ');
		num = num + 1;
		add_q4(vct, num);
	}
}

void add_q4(std::vector<char> vct, int num) {
	display(vct, num);
	if (vct[num - 1] == ' ') {
		vct.at(num - 1) = '0';
		num = num - 1;
		add_q5(vct, num);
	}
	else if (vct[num - 1] == '0') {
		num = num + 1;
		add_q4(vct, num);
	}
}

void add_q5(std::vector<char> vct, int num) {
	display(vct, num);
	if (vct[num - 1] == '0') {
		num = num - 1;
		add_q5(vct, num);
	}
	else if (vct[num - 1] == '1') {
		num = num - 1;
		add_q6(vct, num);
	}
}

void add_q6(std::vector<char> vct, int num) {
	display(vct, num);
	if (vct[num - 1] == '0') {
		num = num - 1;
		add_q6(vct, num);
	}
	else if (vct[num - 1] == '1') {
		num = num - 1;
		add_q7(vct, num);
	}
}

void add_q7(std::vector<char> vct, int num) {
	display(vct, num);
	if (vct[num - 1] == ' ') {
		vct.at(num - 1) = '0';
		num = num + 1;
		add_q1(vct, num);
	}
	else if (vct[num - 1] == '0') {
		num = num - 1;
		add_q7(vct, num);
	}
}

void add_q8(std::vector<char> vct, int num) {
	display(vct, num);
	if (vct[num - 1] == '0') {
		vct.at(num - 1) = ' ';
		num = num + 1;
		add_q9(vct, num);
	}
	else if (vct[num - 1] == '1')
		std::cout << "We're good to go!";
}

void add_q9(std::vector<char> vct, int num) {
	display(vct, num);
	if (vct[num - 1] == '0') {
		num = num + 1;
		add_q9(vct, num);
	}
	else if (vct[num - 1] == '1') {
		vct.push_back(' ');
		num = num + 1;
		add_q10(vct, num);
	}
}

void add_q10(std::vector<char> vct, int num) {
	display(vct, num);
	if (vct[num - 1] == ' ') {
		vct.at(num - 1) = '0';
		num = num - 1;
		add_q11(vct, num);
	}
	else if (vct[num - 1] == '0') {
		num = num + 1;
		add_q10(vct, num);
	}
}

void add_q11(std::vector<char> vct, int num) {
	display(vct, num);
	if (vct[num - 1] == '0') {
		num = num - 1;
		add_q11(vct, num);
	}
	else if (vct[num - 1] == '1') {
		num = num - 1;
		add_q12(vct, num);
	}
}

void add_q12(std::vector<char> vct, int num) {
	display(vct, num);
	if (vct[num - 1] == ' ') {
		vct.at(num - 1) = '0';
		num = num + 1;
		add_q8(vct, num);
	}
	else if (vct[num - 1] == '0') {
		num = num - 1;
		add_q12(vct, num);
	}
}