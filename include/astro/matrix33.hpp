#pragma once
#include "astro/vector3.hpp"

namespace astro {

class Matrix33 {
public:
	double m[3][3];
	
	//Default constructor - Identity matrix 
	Matrix33() {
		m[0][0] = 1.0; m[0][1] = 0.0; m[0][2] = 0.0;
		m[1][0] = 0.0; m[1][1] = 1.0; m[1][2] = 0.0;
		m[2][0] = 0.0; m[2][1] = 0.0; m[2][2] = 1.0;
}

//Constructor with 9 values
Matrix33(double m00, double m01, double m02,
	double m10, double m11, double m12,
	double m20, double m21, double m22) {
      m[0][0] = m00; m[0][1] = m01; m[0][2] = m02;
      m[1][0] = m10; m[1][1] = m11; m[1][2] = m12;
      m[2][0] = m20; m[2][1] = m21; m[2][2] = m22;
}

//Matrix * Vector
Vector3 operator*(const Vector3& v) const {
	return Vector3(
		m[0][0]*v.x + m[0][1]*v.y + m[0][2]*v.z,
		m[1][0]*v.x + m[1][1]*v.y + m[1][2]*v.z,
		m[2][0]*v.x + m[2][1]*v.y + m[2][2]*v.z
   );
}

//Transpose
Matrix33 transpose() const {
	return Matrix33(
		m[0][0], m[1][0], m[2][0],
		m[0][1], m[1][1], m[2][1],
		m[0][2], m[1][2], m[2][2]
	);
}

//Matrix * Matrix
Matrix33 operator*(const Matrix33& other) const {
	Matrix33 result;
	for (int i = 0; i < 3; ++i)  {
		for (int j = 0; j < 3; ++j) {
			result.m[i][j] = m[i][0]*other.m[0][j]
					+m[i][1]*other.m[1][j]
					+m[i][2]*other.m[2][j];
	 }
	}
	return result;
	}
};
} //namespace astro
