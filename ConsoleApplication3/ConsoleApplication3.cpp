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
#include "PowerTwo.h"
#include "LogBiner.h"
#include "Display.h"

typedef void (*arr) (std::vector<char> vct, int num);

void foo() {

}

int main() {
	//Declare variables
	int i, j;
	int num{};
	std::string str{};
	arr functions[] = {
		add_q0,
		sub_q0,
		mul_q0,
		div_q0,
		fac_q0,
		pow_q0,
		log_q0
	};

	//Loop
	i = 0;
	while (i < 1) {
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
		std::cout << "[6] Pangkat 2" << std::endl;
		std::cout << "[7] Logaritma Biner" << std::endl;
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
		case 6:
			std::cout << "[Pangkat 2]" << std::endl;
			std::cout << "Contoh input : 1(0^a)1" << std::endl;
			std::cout << "Contoh output: 1(0^a)1(0^(2^a))" << std::endl;
			break;
		case 7:
			std::cout << "[Logaritma Biner]" << std::endl;
			std::cout << "Contoh input : 1(0^a)1" << std::endl;
			std::cout << "Contoh output: 1(0^a)1(0^(log(2) a))" << std::endl;
			break;
		default:
			i = i + 1;
			break;
		}
		std::cout << "Masukkan input: ";
		std::cin >> str;

		//Declare variables
		std::vector<char> vct;
		for (j = 0; j < str.length(); j++)
			vct.push_back(str[j]);

		//Output
		functions[num - 1](vct, 1);
		std::cout << std::endl;
		std::cout << std::endl;
	}

	//Return values
	return 0;
}