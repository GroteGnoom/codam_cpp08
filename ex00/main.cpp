
#include "easyfind.hpp"
#include <iostream>
#include <array>

int main() {
	std::array<int, 3> a = {1, 2, 3};
	std::cout << easyfind(a, 2) << std::endl;
	std::cout << *easyfind(a, 3) << std::endl;
	std::cout << easyfind(a, 10) << std::endl;
}
