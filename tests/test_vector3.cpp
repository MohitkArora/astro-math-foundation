#include "astro/vector3.hpp"
#include <iostream>

int main() {
	astro::Vector3 a(1.0, 2.0, 3.0);
	astro::Vector3 b(4.0, 5.0, 6.0);

	astro::Vector3 c = a + b;
		astro::Vector3 d = a-b;
		astro::Vector3 e = a * 2.0;


    std::cout << "a + b = (" << c.x << ", " << c.y << ", " << c.z << ")\n";
    std::cout << "a - b = (" << d.x << ", " << d.y << ", " << d.z << ")\n";
    std::cout << "a * 2 = (" << e.x << ", " << e.y << ", " << e.z << ")\n";
    std::cout << "Length of a = " << a.norm() << "\n";
    std::cout << "Dot product = " << a.dot(b) << "\n";

    astro::Vector3 cross = a.cross(b);
    std::cout << "Cross product = (" << cross.x << ", " << cross.y << ", " << cross.z << ")\n";

return 0;

}


