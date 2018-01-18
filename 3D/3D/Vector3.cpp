#include "Vector3.h"

double Vector3::getX()
{
	 return X;
}

void Vector3::setX(double value)
{
	X = value;
}

double Vector3::getY()
{
	return Y;
}

void Vector3::setY(double value)
{
	Y = value;
}

double Vector3::getZ()
{
	return Z;
}

void Vector3::setZ(double value)
{
	Z = value;
}

Vector3::Vector3()
{
	X = 0.0f;
	Y = 0.0f;
	Z = 0.0f;
}

Vector3::Vector3(double x1, double y1, double z1)
{
	// To allow other values for X, Y and Z to be declared
	X = x1;
	Y = y1;
	Z = z1;
}

double Vector3::Length()
{
	// A method to return the length of the vector
	return sqrt(X * X + Y * Y + Z * Z);
}

double Vector3::LengthSquared()
{
	// A method to return the length squared of the vector
	return (X * X + Y * Y + Z * Z);
}

void Vector3::Normalise()
{
	// A method to reduce the length of the vector to 1.0 
	// keeping the direction the same
	if (Length() > 0.0)
	{  // Check for divide by zero
		double magnit = Length();
		X /= magnit;
		Y /= magnit;
		Z /= magnit;
	}
}

Vector3 Vector3::operator+(const Vector3 right) const
{
	return Vector3(X + right.X, Y + right.Y, Z + right.Z);
}

Vector3 Vector3::operator-(const Vector3 right) const
{
	return Vector3(X - right.X, Y - right.Y, Z - right.Z);
}

Vector3 Vector3::operator*(const Vector3 scalar) const
{
	return Vector3(X * scalar.X, Y * scalar.Y, Z * scalar.Z);
}

double Vector3::operator*(Vector3 V1)
{
	// An overloaded operator * to return the scalar product of 2 vectors
	return (V1.X * X + V1.Y * Y + V1.Z * Z);
}

Vector3 Vector3::operator^(const Vector3 right) const
{
	return Vector3();
}

std::string Vector3::toString()
{
	char tmpbuf[256];
	sprintf_s(tmpbuf, "[%g, %g, %g]", X, Y, Z);
	return tmpbuf;
}
