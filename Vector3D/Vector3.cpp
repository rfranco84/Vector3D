#include "Vector3.h"

	// Zero vector is a static constant.
    const Vector3 Vector3::zero = Vector3::Vector3();

	// Default constructor initializes a Vector3 object to 0.
	Vector3::Vector3() {
		Vector3(0, 0, 0);
	}

	// Constructor takes in x, y, z cartesian coordinates to represent a Vector3 object
	Vector3::Vector3(double x, double y, double z) {
		this->x = x;
		this->y = y;
		this->z = z;
		updateMagnitude();
	}


	// Getter and Setter functions. 'zero' only has access to the Getter functions so as to prevent modification of the zero-vector.
	double Vector3::getX() const{
		return x;
	}

	double Vector3::getY() const{
		return y;
	}

	double Vector3::getZ() const{
		return z;
	}

	double Vector3::getMagnitude() const{
		return magnitude;
	}

	double Vector3::getSqrdMagnitude() const{
		return sqrMagnitude;
	}

	void Vector3::setX(double x) {
		this->x = x;
		updateMagnitude();
	}

	void Vector3::setY(double y) {
		this->y = y;
		updateMagnitude();
	}

	void Vector3::setZ(double z) {
		this->z = z;
		updateMagnitude();
	}

	// Returns the dot product of two vectors.
	double Vector3::dotProduct(Vector3 u, Vector3 v) {
		return u.getX() * v.getX() + u.getY() * v.getY() + u.getZ() * v.getZ();
	}

	// Returns the cross product of two vectors.
	Vector3 Vector3::crossProduct(Vector3 u, Vector3 v) {
		return Vector3(u.getY()* v.getZ()-v.getY()*u.getZ(), -1*(u.getX()*v.getZ()-v.getX()*u.getZ()), u.getX()*v.getY()-v.getX()*u.getY());
	}

	// Returns the angle between two Vectors in radians
	double Vector3::angle(Vector3 u, Vector3 v) {
		return acos((Vector3::dotProduct(u, v)) / (u.getMagnitude() * v.getMagnitude()));
	}

	//  Returns the distance between two points in 3D space
	double Vector3::distance(Vector3 u, Vector3 v) {
		return sqrt(pow(u.getX() - v.getX(), 2) + pow(u.getY() - v.getY(), 2) + pow(u.getZ() - v.getZ(), 2));
	}

	// Returns the Vector multiplied by the scalar number
	Vector3 Vector3::scalarProduct(Vector3 u, double k) {
		return Vector3(k * u.getX(), k * u.getY(), k * u.getZ());
	}
	
	// Compare object to another Vector3 object u. Returns true if they are the equal in values.
	bool Vector3::Equals(Vector3 u){
		if (x == u.getX() && y == u.getY() && z == getZ())
		{
			return true;
		}
		return false;
	}

	// Makes the vector a normal vector (magnitude 1 with the same direction).
	void Vector3::normalize(Vector3 u) {
		u.setX(u.getX() / magnitude);
		u.setY(u.getY() / magnitude);
		u.setZ(u.getZ() / magnitude);
		magnitude = 1;
		sqrMagnitude = 1;
	}

	// Updates magnitude property upon vector manipulation. Only called within the Vector3 class. 
	void Vector3::updateMagnitude() {
		this->sqrMagnitude = x * x + y * y + z * z;
		this->magnitude = sqrt(this->sqrMagnitude);
	}

	// Returns a nicely formatted 3D vector in string form "[x, y, z]"
	string Vector3::ToString() const{
		
		return "["+ to_string(x) + ", " + to_string(y) +", "+to_string(z)+"]";
	}


	void Vector3::Set(Vector3 u) {
		this->x = u.getX();
		this->y = u.getY();
		this->z = u.getZ();
		updateMagnitude();
	}

	// Overloads the '+' operator to enable vector addition.
	Vector3 Vector3::operator + (Vector3 const &v) {
		return Vector3(x + v.x, y+v.y, z+v.z);
	}

	// Overloads the '-' operator to enable vector subtraction.
	Vector3 Vector3::operator - (Vector3 const& v) {
		return Vector3(x - v.x, y - v.y, z - v.z);
	}