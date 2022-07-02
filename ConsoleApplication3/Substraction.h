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

void sub_q1(std::vector<char> vct, int num);
void sub_q2(std::vector<char> vct, int num);
void sub_q3(std::vector<char> vct, int num);
void sub_q4(std::vector<char> vct, int num);
void sub_q5(std::vector<char> vct, int num);
void sub_q6(std::vector<char> vct, int num);
void sub_q7(std::vector<char> vct, int num);
void sub_q8(std::vector<char> vct, int num);
void sub_q9(std::vector<char> vct, int num);
void sub_q10(std::vector<char> vct, int num);
void sub_q11(std::vector<char> vct, int num);
void sub_q12(std::vector<char> vct, int num);
void sub_q13(std::vector<char> vct, int num);

void sub_q0(std::vector<char> vct, int num) {
	display(vct, num);
	if (vct[num - 1] == '1') {
		num = num + 1;
		sub_q1(vct, num);
	}
}

void sub_q1(std::vector<char> vct, int num) {
	display(vct, num);
	if (vct[num - 1] == '0') {
		vct.at(num - 1) = ' ';
		num = num + 1;
		sub_q2(vct, num);
	}
	else if (vct[num - 1] == '1') {
		num = num + 1;
		sub_q8(vct, num);
	}
}

void sub_q2(std::vector<char> vct, int num) {
	display(vct, num);
	if (vct[num - 1] == '0') {
		num = num + 1;
		sub_q2(vct, num);
	}
	else if (vct[num - 1] == '1') {
		num = num + 1;
		sub_q3(vct, num);
	}
}

void sub_q3(std::vector<char> vct, int num) {
	display(vct, num);
	if (vct[num - 1] == '0') {
		num = num + 1;
		sub_q3(vct, num);
	}
	else if (vct[num - 1] == '1') {
		vct.push_back(' ');
		num = num + 1;
		sub_q4(vct, num);
	}
}

void sub_q4(std::vector<char> vct, int num) {
	display(vct, num);
	if (vct[num - 1] == ' ') {
		vct.at(num - 1) = '0';
		num = num - 1;
		sub_q5(vct, num);
	}
	else if (vct[num - 1] == '0') {
		num = num + 1;
		sub_q4(vct, num);
	}
}

void sub_q5(std::vector<char> vct, int num) {
	display(vct, num);
	if (vct[num - 1] == '0') {
		num = num - 1;
		sub_q5(vct, num);
	}
	else if (vct[num - 1] == '1') {
		num = num - 1;
		sub_q6(vct, num);
	}
}

void sub_q6(std::vector<char> vct, int num) {
	display(vct, num);
	if (vct[num - 1] == '0') {
		num = num - 1;
		sub_q6(vct, num);
	}
	else if (vct[num - 1] == '1') {
		num = num - 1;
		sub_q7(vct, num);
	}
}

void sub_q7(std::vector<char> vct, int num) {
	display(vct, num);
	if (vct[num - 1] == ' ') {
		vct.at(num - 1) = '0';
		num = num + 1;
		sub_q1(vct, num);
	}
	else if (vct[num - 1] == '0') {
		num = num - 1;
		sub_q7(vct, num);
	}
}

void sub_q8(std::vector<char> vct, int num) {
	display(vct, num);
	if (vct[num - 1] == '0') {
		vct.at(num - 1) = ' ';
		num = num + 1;
		sub_q9(vct, num);
	}
	else if (vct[num - 1] == '1')
		std::cout << "We're good to go!";
}

void sub_q9(std::vector<char> vct, int num) {
	display(vct, num);
	if (vct[num - 1] == '0') {
		num = num + 1;
		sub_q9(vct, num);
	}
	else if (vct[num - 1] == '1') {
		vct.push_back(' ');
		num = num + 1;
		sub_q10(vct, num);
	}
}

void sub_q10(std::vector<char> vct, int num) {
	display(vct, num);
	if (vct[num - 1] == ' ') {
		num = num - 1;
		sub_q11(vct, num);
	}
	else if (vct[num - 1] == '0') {
		num = num + 1;
		sub_q10(vct, num);
	}
}

void sub_q11(std::vector<char> vct, int num) {
	display(vct, num);
	if (vct[num - 1] == '0') {
		vct.at(num - 1) = ' ';
		num = num - 1;
		sub_q12(vct, num);
	}
}

void sub_q12(std::vector<char> vct, int num) {
	display(vct, num);
	if (vct[num - 1] == '0') {
		num = num - 1;
		sub_q12(vct, num);
	}
	else if (vct[num - 1] == '1') {
		num = num - 1;
		sub_q13(vct, num);
	}
}

void sub_q13(std::vector<char> vct, int num) {
	display(vct, num);
	if (vct[num - 1] == ' ') {
		vct.at(num - 1) = '0';
		num = num + 1;
		sub_q8(vct, num);
	}
	else if (vct[num - 1] == '0') {
		num = num - 1;
		sub_q13(vct, num);
	}
}