#pragma once

#include "astro/vector3.hpp"
#include <cmath>

namespace astro {

class Quaternion {
public:

double w, x, y, z;

	// Default constructor - identity rotation
	Quaternion() : w(1.0), x(0.0), y(0.0), z(0.0) {
	}

	//Constructor with 4 values
	Quaternion(double w_, double x_, double y_, double z_)
		: w(w_), x(x_), y(y_), z(z_) {
	}

//Make the quaternion have length 1
	void normalize() {
		double n = std::sqrt(w*w + x*x + y*y + z*z);
		if (n > 0.0) {
			w /= n;
			x /= n;
			y /= n;
			z /= n;
		}
	}

//Multiply two quaternions (combine rotations)
	Quaternion operator*(const Quaternion& q) const {
		return Quaternion(
			w*q.w - x*q.x - y*q.y - z*q.z,
			w*q.x + x*q.w + y*q.z - z*q.y,
			w*q.y - x*q.z + y*q.w + z*q.x,
			w*q.z + x*q.y - y*q.x + z*q.w
			);
		}
};
} //namespace astro
