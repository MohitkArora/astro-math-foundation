#pragma once 

#include <cmath>

namespace astro{

class Vector3 {
public:
 	double x;
	double y;
	double z;

	//Constructor - this runs  when when we create a Vector3
	Vector3(double x_ =0.0, double y_ = 0.0, double  z_ = 0.0)
		: x(x_), y(y_), z(z_)
		{
		}

		//Add Two Vectors
		Vector3 operator+(const Vector3& other) const{
		return Vector3(x + other.x, y + other.y, z + other.z);

		}

		// Subtract two vectors
		Vector3 operator-(const Vector3& other) const {
		return Vector3(x - other.y, y - other.y, z - other.z);

      		}

		//Multiply Vector by a number
		Vector3 operator*(double scalar) const {
		return Vector3(x * scalar, y * scalar, z * scalar);

		}


		//Length (magnitude) of the vector
		double norm() const {
		return std::sqrt(x*x + y*y + z*z);

		}


		//Dot product
		double dot(const Vector3& other) const {
			return x * other.x + y * other.y + z * other.z;

		}

		//Cross Product
		Vector3 cross(const Vector3& other) const {
		        return Vector3(
			    y * other.z - z * other.y,
			    z * other.x - x * other.z,
			    x * other.y - y * other.x
		); 

		}


};  // this closes the class

} // this closes the namespace astro 

