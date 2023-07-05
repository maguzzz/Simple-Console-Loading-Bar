#include <iostream>
#include <Windows.h>

void progressBar(std::string info, int progress) {
	std::cout << info << ": ";
	std::cout << "[";
	for (int i = 0; i <= 100; i++) {
		if (i % 2 == 0) {
			if (i <= progress) {
				std::cout << "#";
			}
			else {

				std::cout << " ";
			}
		}
	}
	std::cout << "]" << "  %" << progress << std::endl;;
}

int main()
{
	for (int i = 0; i <= 100; i++) {
		system("CLS");
		progressBar("Loading", i);
		Sleep(100);
	}

	std::cout << "\n\n[Download Complete]\n\n\n";
}
