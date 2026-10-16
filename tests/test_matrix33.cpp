#include "astro/matrix33.hpp"
#include "astro/vector3.hpp"
#include <iostream>

int main() {
	astro::Matrix33 I;  //Identity Matrix
	astro::Vector3 v(1.0,  2.0, 3.0);

	astro::Vector3 result = I * v;
	
	std::cout << "Result: " << result.x << "," << result.y << "," <<result.z << std::endl;

	return 0;
}	 
