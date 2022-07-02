void display(std::vector<char> vct, int num) {
	//Declare variables
	int i;

	//Output
	for (i = 0; i < vct.size(); i++)
		std::cout << vct[i];
	std::cout << std::endl;
	for (i = 0; i < num - 1; i++)
		std::cout << " ";
	std::cout << "^" << std::endl;
	Sleep(100);
	//system("CLS");
}

void div_q1(std::vector<char> vct, int num);
void div_q2(std::vector<char> vct, int num);
void div_q3(std::vector<char> vct, int num);
void div_q4(std::vector<char> vct, int num);
void div_q5(std::vector<char> vct, int num);
void div_q6(std::vector<char> vct, int num);
void div_q7(std::vector<char> vct, int num);
void div_q8(std::vector<char> vct, int num);
void div_q9(std::vector<char> vct, int num);
void div_q10(std::vector<char> vct, int num);
void div_q11(std::vector<char> vct, int num);
void div_q12(std::vector<char> vct, int num);
void div_q13(std::vector<char> vct, int num);
void div_q14(std::vector<char> vct, int num);
void div_q15(std::vector<char> vct, int num);

void div_q0(std::vector<char> vct, int num) {
	display(vct, num);
	if (vct[num - 1] == '1') {
		num = num + 1;
		div_q1(vct, num);
	}
}

void div_q1(std::vector<char> vct, int num) {
	display(vct, num);
	if (vct[num - 1] == '0') {
		num = num + 1;
		div_q1(vct, num);
	}
	else if (vct[num - 1] == '1') {
		num = num + 1;
		div_q2(vct, num);
	}
}

void div_q2(std::vector<char> vct, int num) {
	display(vct, num);
	if (vct[num - 1] == '0') {
		num = num + 1;
		div_q2(vct, num);
	}
	else if (vct[num - 1] == '1') {
		num = num - 1;
		div_q3(vct, num);
	}
}

void div_q3(std::vector<char> vct, int num) {
	display(vct, num);
	if (vct[num - 1] == '0') {
		vct.at(num - 1) = ' ';
		num = num - 1;
		div_q4(vct, num);
	}
}

void div_q4(std::vector<char> vct, int num) {
	display(vct, num);
	if (vct[num - 1] == '0') {
		num = num - 1;
		div_q4(vct, num);
	}
	else if (vct[num - 1] == '1') {
		num = num - 1;
		div_q5(vct, num);
	}
}

void div_q5(std::vector<char> vct, int num) {
	display(vct, num);
	if (vct[num - 1] == '0') {
		num = num - 1;
		div_q5(vct, num);
	}
	else if (vct[num - 1] == '1') {
		num = num + 1;
		div_q6(vct, num);
	}
}

void div_q6(std::vector<char> vct, int num) {
	display(vct, num);
	if (vct[num - 1] == '0') {
		vct.at(num - 1) = ' ';
		num = num + 1;
		div_q7(vct, num);
	}
	else if (vct[num - 1] == '1') {
		num = num + 1;
		div_q15(vct, num);
	}
}

void div_q7(std::vector<char> vct, int num) {
	display(vct, num);
	if (vct[num - 1] == '0') {
		num = num + 1;
		div_q7(vct, num);
	}
	else if (vct[num - 1] == '1') {
		num = num + 1;
		div_q8(vct, num);
	}
}

void div_q8(std::vector<char> vct, int num) {
	display(vct, num);
	if (vct[num - 1] == ' ') {
		vct.at(num - 1) = '0';
		num = num - 1;
		div_q9(vct, num);
	}
	else if (vct[num - 1] == '0') {
		num = num + 1;
		div_q8(vct, num);
	}
}

void div_q9(std::vector<char> vct, int num) {
	display(vct, num);
	if (vct[num - 1] == '0') {
		vct.at(num - 1) = ' ';
		num = num - 1;
		div_q10(vct, num);
	}
	else if (vct[num - 1] == '1') {
		num = num + 1;
		div_q12(vct, num);
	}
}

void div_q10(std::vector<char> vct, int num) {
	display(vct, num);
	if (vct[num - 1] == '0') {
		num = num - 1;
		div_q10(vct, num);
	}
	else if (vct[num - 1] == '1') {
		num = num - 1;
		div_q11(vct, num);
	}
}

void div_q11(std::vector<char> vct, int num) {
	display(vct, num);
	if (vct[num - 1] == ' ') {
		vct.at(num - 1) = '0';
		num = num + 1;
		div_q6(vct, num);

	}
	else if (vct[num - 1] == '0') {
		num = num - 1;
		div_q11(vct, num);
	}
}

void div_q12(std::vector<char> vct, int num) {
	display(vct, num);
	if (vct[num - 1] == '0') {
		num = num + 1;
		div_q12(vct, num);
	}
	else if (vct[num - 1] == '1') {
		vct.push_back(' ');
		num = num + 1;
		div_q13(vct, num);
	}
}

void div_q13(std::vector<char> vct, int num) {
	display(vct, num);
	if (vct[num - 1] == ' ') {
		vct.at(num - 1) = '0';
		num = num - 1;
		div_q14(vct, num);
	}
	else if (vct[num - 1] == '0') {
		num = num + 1;
		div_q13(vct, num);
	}
}

void div_q14(std::vector<char> vct, int num) {
	display(vct, num);
	if (vct[num - 1] == '0') {
		num = num - 1;
		div_q14(vct, num);
	}
	else if (vct[num - 1] == '1') {
		num = num - 1;
		div_q9(vct, num);
	}
}

void div_q15(std::vector<char> vct, int num) {
	display(vct, num);
	if (vct[num - 1] == ' ') {
		vct.at(num - 1) = '0';
		num = num + 1;
		display(vct, num);
		std::cout << "We're good to go!";
	}
	else if (vct[num - 1] == '0') {
		num = num + 1;
		div_q15(vct, num);
	}
}