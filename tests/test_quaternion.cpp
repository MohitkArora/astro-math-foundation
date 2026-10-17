#include "astro/quaternion.hpp"
#include <iostream>

int main() {
	astro::Quaternion q; // identity quaternion

	std::cout << "w = " << q.w << std::endl;
	std::cout << "x = " << q.x << std::endl;
	std::cout << "y = " << q.y << std::endl;
	std::cout << "z = " << q.z << std::endl;


	return 0;
}
