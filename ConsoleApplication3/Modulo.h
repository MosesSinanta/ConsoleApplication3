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
void q14(std::vector<char> vct, int num);
void q15(std::vector<char> vct, int num);
void q16(std::vector<char> vct, int num);
void q17(std::vector<char> vct, int num);
void q18(std::vector<char> vct, int num);
void q19(std::vector<char> vct, int num);
void q20(std::vector<char> vct, int num);
void q21(std::vector<char> vct, int num);
void q22(std::vector<char> vct, int num);
void q23(std::vector<char> vct, int num);
void q24(std::vector<char> vct, int num);
void q25(std::vector<char> vct, int num);

void q0(std::vector<char> vct, int num) {
	display(vct, num);
	if (vct[num - 1] == '1') {
		num = num + 1;
		q1(vct, num);
	}
}

void q1(std::vector<char> vct, int num) {
	
}