#pragma once

/*
* Vector3 class
* Ricardo Franco
* 10/14/2020
*
* Vector3 uses basic math functions from math.h. 
* string is used to write the ToString() function.
*/
#include <string>
#include <math.h>
using namespace std;

class Vector3
{
private: 
	double x;
	double y;
	double z;
	double magnitude;
	double sqrMagnitude;
	void updateMagnitude();

public:
	
	// Constructors
	Vector3(double x, double y, double z);
	Vector3();

	// Getters
	double getX() const;
	double getY() const;
	double getZ() const;
	double getMagnitude() const;
	double getSqrdMagnitude() const;

	// Setters
	void setX(double x);
	void setY(double y);
	void setZ(double z);

	// Static constant members
	static const Vector3 zero;

	// Static functions
	static double dotProduct(Vector3 u, Vector3 v);
	static Vector3 crossProduct(Vector3 u, Vector3 v);
	static double angle(Vector3 u, Vector3 v);
	static double distance(Vector3 u, Vector3 v);
	static Vector3 zeroVector();
	static Vector3 scalarProduct(Vector3 u, double k);

	// Public Non-Static functions
	bool Equals(Vector3 u);
	void normalize(Vector3 u);
	string ToString() const;
	void Set(Vector3 u);

	// Overloaded operators
	Vector3 operator + (Vector3 const &v);
	Vector3 operator - (Vector3 const& v);

};



