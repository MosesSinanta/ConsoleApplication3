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

void mul_q1(std::vector<char> vct, int num);
void mul_q2(std::vector<char> vct, int num);
void mul_q3(std::vector<char> vct, int num);
void mul_q4(std::vector<char> vct, int num);
void mul_q5(std::vector<char> vct, int num);
void mul_q6(std::vector<char> vct, int num);
void mul_q7(std::vector<char> vct, int num);
void mul_q8(std::vector<char> vct, int num);
void mul_q9(std::vector<char> vct, int num);
void mul_q10(std::vector<char> vct, int num);

void mul_q0(std::vector<char> vct, int num) {
	display(vct, num);
	if (vct[num - 1] == '1') {
		num = num + 1;
		mul_q1(vct, num);
	}
}

void mul_q1(std::vector<char> vct, int num) {
	display(vct, num);
	if (vct[num - 1] == '0') {
		vct.at(num - 1) = ' ';
		num = num + 1;
		mul_q2(vct, num);
	}
	else if (vct[num - 1] == '1') {
		num = num + 1;
		mul_q10(vct, num);
	}
}

void mul_q2(std::vector<char> vct, int num) {
	display(vct, num);
	if (vct[num - 1] == '0') {
		num = num + 1;
		mul_q2(vct, num);
	}
	else if (vct[num - 1] == '1') {
		num = num + 1;
		mul_q3(vct, num);
	}
}

void mul_q3(std::vector<char> vct, int num) {
	display(vct, num);
	if (vct[num - 1] == '0') {
		vct.at(num - 1) = ' ';
		num = num + 1;
		mul_q4(vct, num);
	}
	else if (vct[num - 1] == '1') {
		num = num - 1;
		mul_q8(vct, num);
	}
}

void mul_q4(std::vector<char> vct, int num) {
	display(vct, num);
	if (vct[num - 1] == '0') {
		num = num + 1;
		mul_q4(vct, num);
	}
	else if (vct[num - 1] == '1') {
		vct.push_back(' ');
		num = num + 1;
		mul_q5(vct, num);
	}
}

void mul_q5(std::vector<char> vct, int num) {
	display(vct, num);
	if (vct[num - 1] == ' ') {
		vct.at(num - 1) = '0';
		num = num - 1;
		mul_q6(vct, num);
	}
	else if (vct[num - 1] == '0') {
		num = num + 1;
		mul_q5(vct, num);
	}
}

void mul_q6(std::vector<char> vct, int num) {
	display(vct, num);
	if (vct[num - 1] == '0') {
		num = num - 1;
		mul_q6(vct, num);
	}
	else if (vct[num - 1] == '1') {
		num = num - 1;
		mul_q7(vct, num);
	}
}

void mul_q7(std::vector<char> vct, int num) {
	display(vct, num);
	if (vct[num - 1] == ' ') {
		vct.at(num - 1) = '0';
		num = num + 1;
		mul_q3(vct, num);
	}
	else if (vct[num - 1] == '0') {
		num = num - 1;
		mul_q7(vct, num);
	}
}

void mul_q8(std::vector<char> vct, int num) {
	display(vct, num);
	if (vct[num - 1] == '0') {
		num = num - 1;
		mul_q8(vct, num);
	}
	else if (vct[num - 1] == '1') {
		num = num - 1;
		mul_q9(vct, num);
	}
}

void mul_q9(std::vector<char> vct, int num) {
	display(vct, num);
	if (vct[num - 1] == ' ') {
		vct.at(num - 1) = '0';
		num = num + 1;
		mul_q1(vct, num);
	}
	else if (vct[num - 1] == '0') {
		num = num - 1;
		mul_q9(vct, num);
	}
}

void mul_q10(std::vector<char> vct, int num) {
	display(vct, num);
	if (vct[num - 1] == '0') {
		num = num + 1;
		mul_q10(vct, num);
	}
	else if (vct[num - 1] == '1')
		std::cout << "We're good to go!";
}