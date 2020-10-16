#pragma once
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

	Vector3(double x, double y, double z);
	double getX();
	double getY();
	double getZ();
	double getMagnitude();
	double getSqrdMagnitude();

	void setX(double x);
	void setY(double y);
	void setZ(double z);

	static double dotProduct(Vector3 u, Vector3 v);
	static Vector3 crossProduct(Vector3 u, Vector3 v);
	static double angle(Vector3 u, Vector3 v);
	static double distance(Vector3 u, Vector3 v);
	static Vector3 zeroVector();
	static Vector3 scalarProduct(Vector3 u, double k);

	bool Equals(Vector3 u);
	void normalize(Vector3 u);

	string ToString();

	Vector3 operator + (Vector3 const &v);

	Vector3 operator - (Vector3 const& v);

};

