#include "Vector3.h"

double Vector3::getX()
{
	 return x;
}

void Vector3::setX(double value)
{
	x = value;
}

double Vector3::getY()
{
	return y;
}

void Vector3::setY(double value)
{
	y = value;
}

double Vector3::getZ()
{
	return z;
}

void Vector3::setZ(double value)
{
	z = value;
}

Vector3::Vector3()
{
	x = 0.0f;
	y = 0.0f;
	z = 0.0f;
}

Vector3::Vector3(double x1, double y1, double z1)
{
	// To allow other values for X, Y and Z to be declared
	x = x1;
	y = y1;
	z = z1;
}

double Vector3::Length()
{
	// A method to return the length of the vector
	return sqrt(x * x + y * y + z * z);
}

double Vector3::LengthSquared()
{
	// A method to return the length squared of the vector
	return (x * x + y * y + z * z);
}

void Vector3::Normalise()
{
	// A method to reduce the length of the vector to 1.0 
	// keeping the direction the same
	if (Length() > 0.0)
	{  // Check for divide by zero
		double magnit = Length();
		x /= magnit;
		y /= magnit;
		z /= magnit;
	}
}

Vector3 Vector3::operator+(const Vector3 right) const
{
	return Vector3(x + right.x, y + right.y, z + right.z);
}

Vector3 Vector3::operator-(const Vector3 right) const
{
	return Vector3(x - right.x, y - right.y, z - right.z);
}

Vector3 Vector3::operator*(const Vector3 scalar) const
{
	return Vector3(x * scalar.x, y * scalar.y, z * scalar.z);
}

Vector3 Vector3::operator^(const Vector3 right) const
{
	return Vector3();
}

std::string Vector3::toString()
{
	char tmpbuf[256];
	sprintf_s(tmpbuf, "[%g, %g, %g]", x, y, z);
	return tmpbuf;
}
