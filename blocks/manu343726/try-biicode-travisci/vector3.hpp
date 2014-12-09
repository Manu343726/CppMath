
#ifndef VECTOR2_HPP
#define VECTOR2_HPP

#include <tuple>

class vector3
{
public:
	// Constructors 

	vector3() : vector3{0.0f, 0.0f, 0.0f}
	{}

	vector3(float xx, float yy, float zz) :
		x{xx},
		y{yy},
		z{zz}
	{}

	vector3(const vector3& begin, const vector3& end) :
		vector3{ end.x - begin.x,
		         end.y - begin.y,
		         end.z - begin.z}
	{}

	//Algebraic operators

	vector3& operator+=(const vector3& v)
	{
		x += v.x;
		y += v.y;
		z += v.z;
	}

	friend vector3 operator+( vector3 lhs, const vector3& rhs)
	{
		return lhs += rhs;
	}

	// Comparison operators

	friend bool operator==(const vector3& lhs, const vector3& rhs)
	{
		return std::tie(lhs.x, lhs.y, lhs.z) == std::tie(rhs.x, rhs.y, rhs.z);
	}

	friend bool operator!=(const vector3& lhs, const vector3& rhs)
	{
		return !(lhs == rhs);
	}

	float x, y, z;
};

#endif /* VECTOR2_HPP */