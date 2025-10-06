#include <iostream>
#include <cstring> 
#include <cctype>

int	main(int argc, char **argv) {
	if (argc == 1) {
		std::cout<<"* LOUD AND UNBEARABLE FEEDBACK NOISE *";
		return (0);
	}
	for (int i = 1; i < argc; i++) {
		for (size_t k = 0; k < strlen(argv[i]); k++) {
			std::cout<< (char)std::toupper(argv[i][k]);
		}
	}
	std::cout<<std::endl;
}