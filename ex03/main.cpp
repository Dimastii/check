#include <iostream>
#include "Form.hpp"
#include "Intern.hpp"

int main() {
	{
		try {
			Intern i;
			Form* f = i.makeForm("some", "home");
			delete f;
		} catch (std::exception& e) {
			std::cout << e.what() << std::endl;
		}
	}
	std::cout << "=====================================\n";
	{
		try {
			Intern i;
			Form* f = i.makeForm("robotomy request", "home");
			delete f;
		} catch (std::exception& e) {
			std::cout << e.what() << std::endl;
		}
	}
	std::cout << "=====================================\n";
	{
		try {
			Intern i;
			Form* f = i.makeForm("shrubbery creation", "home");
			delete f;
		} catch (std::exception& e) {
			std::cout << e.what() << std::endl;
		}
	}
	std::cout << "=====================================\n";
	{
		try {
			Intern i;
			Form* f = i.makeForm("presidential pardon", "home");
			delete f;
		} catch (std::exception& e) {
			std::cout << e.what() << std::endl;
		}
	}
	return 0;
}
