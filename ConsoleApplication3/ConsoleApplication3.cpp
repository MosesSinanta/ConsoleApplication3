#include <iostream>
#include <string>
#include <vector>
#ifdef _WIN32
	#include <Windows.h>
#else
	#include <unistd.h>
#endif
#include "Addition.h"
#include "Substraction.h"
#include "Division.h"
#include "Multiplication.h"
#include "Factorial.h"
#include "Display.h"

typedef void (*arr) (std::vector<char> vct, int num);

void foo() {

}

int main() {
	//Declare variables
	int i;
	int num{};
	std::string str{};
	arr functions[] = {
		add_q0,
		sub_q0,
		mul_q0,
		div_q0,
		fac_q0
	};

	//Input
	std::cout << "--- SIMPLE TURING MACHINE ---" << std::endl;
	std::cout << "===  Kelas B kelompok IV  ===" << std::endl;
	std::cout << std::endl;
	std::cout << "Pilih operasi: " << std::endl;
	std::cout << "[1] Penjumlahan" << std::endl;
	std::cout << "[2] Pengurangan" << std::endl;
	std::cout << "[3] Perkalian" << std::endl;
	std::cout << "[4] Pembagian" << std::endl;
	std::cout << "[5] Faktorial" << std::endl;
	std::cout << std::endl;
	std::cin >> num;
	std::cout << std::endl;
	//system("CLS");
	switch (num) {
	case 1:
		std::cout << "[Penjumlahan]" << std::endl;
		std::cout << "Contoh input : 1(0^a)1(0^b)1" << std::endl;
		std::cout << "Contoh output: 1(0^a)1(0^b)1(0^(a+b))" << std::endl;
		break;
	case 2:
		std::cout << "[Pengurangan]" << std::endl;
		std::cout << "Contoh input : 1(0^a)1(0^b)1" << std::endl;
		std::cout << "Contoh output: 1(0^a)1(0^b)1(0^(a-b))" << std::endl;
		break;
	case 3:
		std::cout << "[Perkalian]" << std::endl;
		std::cout << "Contoh input : 1(0^a)1(0^b)1" << std::endl;
		std::cout << "Contoh output: 1(0^a)1(0^b)1(0^(a*b))" << std::endl;
		break;
	case 4:
		std::cout << "[Pembagian]" << std::endl;
		std::cout << "Contoh input : 1(0^a)1(0^b)1" << std::endl;
		std::cout << "Contoh output: 1(0^a)1(0^b)1(0^(a/b))" << std::endl;
		break;
	case 5:
		std::cout << "[Faktorial]" << std::endl;
		std::cout << "Contoh input : 1(0^a)1" << std::endl;
		std::cout << "Contoh output: 1(0^a)1...1(0^a!)" << std::endl;
		break;
	}
	std::cout << "Masukkan input: ";
	std::cin >> str;

	//Declare variables
	std::vector<char> vct;
	for (i = 0; i < str.length(); i++)
		vct.push_back(str[i]);

	//Output
	functions[num - 1](vct, 1);
	std::cin >> str;

	//Return values
	return 0;
}