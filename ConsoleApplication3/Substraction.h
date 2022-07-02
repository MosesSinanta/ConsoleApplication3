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

void q1(std::vector<char> vct, int num);
void q2(std::vector<char> vct, int num);
void q3(std::vector<char> vct, int num);
void q4(std::vector<char> vct, int num);
void q5(std::vector<char> vct, int num);
void q6(std::vector<char> vct, int num);
void q7(std::vector<char> vct, int num);
void q8(std::vector<char> vct, int num);
void q9(std::vector<char> vct, int num);
void q10(std::vector<char> vct, int num);
void q11(std::vector<char> vct, int num);
void q12(std::vector<char> vct, int num);
void q13(std::vector<char> vct, int num);

void q0(std::vector<char> vct, int num) {
	display(vct, num);
	if (vct[num - 1] == '1') {
		num = num + 1;
		q1(vct, num);
	}
}

void q1(std::vector<char> vct, int num) {
	display(vct, num);
	if (vct[num - 1] == '0') {
		vct.at(num - 1) = ' ';
		num = num + 1;
		q2(vct, num);
	}
	else if (vct[num - 1] == '1') {
		num = num + 1;
		q8(vct, num);
	}
}

void q2(std::vector<char> vct, int num) {
	display(vct, num);
	if (vct[num - 1] == '0') {
		num = num + 1;
		q2(vct, num);
	}
	else if (vct[num - 1] == '1') {
		num = num + 1;
		q3(vct, num);
	}
}

void q3(std::vector<char> vct, int num) {
	display(vct, num);
	if (vct[num - 1] == '0') {
		num = num + 1;
		q3(vct, num);
	}
	else if (vct[num - 1] == '1') {
		vct.push_back(' ');
		num = num + 1;
		q4(vct, num);
	}
}

void q4(std::vector<char> vct, int num) {
	display(vct, num);
	if (vct[num - 1] == ' ') {
		vct.at(num - 1) = '0';
		num = num - 1;
		q5(vct, num);
	}
	else if (vct[num - 1] == '0') {
		num = num + 1;
		q4(vct, num);
	}
}

void q5(std::vector<char> vct, int num) {
	display(vct, num);
	if (vct[num - 1] == '0') {
		num = num - 1;
		q5(vct, num);
	}
	else if (vct[num - 1] == '1') {
		num = num - 1;
		q6(vct, num);
	}
}

void q6(std::vector<char> vct, int num) {
	display(vct, num);
	if (vct[num - 1] == '0') {
		num = num - 1;
		q6(vct, num);
	}
	else if (vct[num - 1] == '1') {
		num = num - 1;
		q7(vct, num);
	}
}

void q7(std::vector<char> vct, int num) {
	display(vct, num);
	if (vct[num - 1] == ' ') {
		vct.at(num - 1) = '0';
		num = num + 1;
		q1(vct, num);
	}
	else if (vct[num - 1] == '0') {
		num = num - 1;
		q7(vct, num);
	}
}

void q8(std::vector<char> vct, int num) {
	display(vct, num);
	if (vct[num - 1] == '0') {
		vct.at(num - 1) = ' ';
		num = num + 1;
		q9(vct, num);
	}
	else if (vct[num - 1] == '1') {
		std::cout << "We're good to go!";
	}
}

void q9(std::vector<char> vct, int num) {
	display(vct, num);
	if (vct[num - 1] == '0') {
		num = num + 1;
		q9(vct, num);
	}
	else if (vct[num - 1] == '1') {
		vct.push_back(' ');
		num = num + 1;
		q10(vct, num);
	}
}

void q10(std::vector<char> vct, int num) {
	display(vct, num);
	if (vct[num - 1] == ' ') {
		num = num - 1;
		q11(vct, num);
	}
	else if (vct[num - 1] == '0') {
		num = num + 1;
		q10(vct, num);
	}
}

void q11(std::vector<char> vct, int num) {
	display(vct, num);
	if (vct[num - 1] == '0') {
		vct.at(num - 1) = ' ';
		num = num - 1;
		q12(vct, num);
	}
}

void q12(std::vector<char> vct, int num) {
	display(vct, num);
	if (vct[num - 1] == '0') {
		num = num - 1;
		q12(vct, num);
	}
	else if (vct[num - 1] == '1') {
		num = num - 1;
		q13(vct, num);
	}
}

void q13(std::vector<char> vct, int num) {
	display(vct, num);
	if (vct[num - 1] == ' ') {
		vct.at(num - 1) = '0';
		num = num + 1;
		q8(vct, num);
	}
	else if (vct[num - 1] == '0') {
		num = num - 1;
		q13(vct, num);
	}
}