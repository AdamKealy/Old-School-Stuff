#pragma once
#include <math.h>
#include <string>

class Vector3
{
public:

	double getX();
	double getY();
	double getZ();
	void  setX(double value);
	void  setY(double value);
	void  setZ(double value);

	Vector3();

		// Constructor 2
	Vector3(double x1, double y1, double z1);

	double Length();
	double LengthSquared();

	void Normalise();


	Vector3 operator +(const Vector3 right) const;
	Vector3 operator -(const Vector3 right) const;
	Vector3 operator *(const Vector3 scalar) const;
	double operator *(Vector3 V1);
	Vector3 operator ^(const Vector3 right) const;

	std::string toString();

private:
	// The class has three variables x, y and z 
	double X;
	double Y;
	double Z;
};