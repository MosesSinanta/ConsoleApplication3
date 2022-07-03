void display(std::vector<char> v, int n) {
	//Declare variables
	int i;

	//Output
	for (i = 0; i < v.size(); i++)
		std::cout << v[i];
	std::cout << std::endl;
	for (i = 0; i < n - 1; i++)
		std::cout << " ";
	std::cout << "^" << std::endl;
	Sleep(100);
}