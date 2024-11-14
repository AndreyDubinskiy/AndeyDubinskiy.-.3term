#include <iostream>
#include <cmath>
using std::cout, std::endl;

struct Vector2f 
{
    float x, y;
};

Vector2f operator+(const Vector2f& v1, const Vector2f& v2) {
    Vector2f result = {v1.x + v2.x, v1.y + v2.y};
    return result;
}

Vector2f operator-(const Vector2f& v1, const Vector2f& v2) {
    Vector2f result = {v1.x - v2.x, v1.y - v2.y};
    return result;
}

Vector2f operator*(const Vector2f& v1, float a) {
    Vector2f result = {v1.x * a, v1.y * a};
    return result;
}

Vector2f operator/(const Vector2f& v1, float a) {
    Vector2f result = {v1.x / a, v1.y / a};
    return result;
}

float operator*(const Vector2f& v1, const Vector2f& v2) {
    return v1.x * v2.x + v1.y * v2.y;
}

Vector2f operator+(const Vector2f& v1) {
    return v1;
}
Vector2f operator-(const Vector2f& v1) {
    return {-v1.x, -v1.y};
}

bool operator==(const Vector2f& v1, const Vector2f& v2) {
    return (v1.x == v2.x && v1.y == v2.y);
}

bool operator!=(const Vector2f& v1, const Vector2f& v2) {
    return !(v1 == v2);
}

// операторы +=, -=
Vector2f& operator+=(Vector2f& v1, const Vector2f& v2) {
    v1.x += v2.x;
    v1.y += v2.y;
    return v1;
}

Vector2f& operator-=(Vector2f& v1, const Vector2f& v2) {
    v1.x -= v2.x;
    v1.y -= v2.y;
    return v1;
}

Vector2f& operator*=(Vector2f& v1, float a) {
    v1.x *= a;
    v1.y *= a;
    return v1;
}

Vector2f& operator/=(Vector2f& v1, float a) {
    if (a != 0) {
        v1.x /= a;
        v1.y /= a;
    }
    return v1;
}
std::ostream& operator<<(std::ostream& out, const Vector2f& v) {
     out << "(" << v.x << ", " << v.y <<")";
     return out;
}

std::istream& operator>>(std::istream& in, Vector2f& v) {
    in >> v.x >> v.y;
    return in;
}
int main() 
{
	Vector2f a = {1.0, 2.0};
	Vector2f b = {4.0, -1.0};
	cout << "a = " << a << endl << "b = " << b << endl;
	cout << "a + b = " << a + b << endl;
	cout << "-a = " << -a << endl;
	cout << "Scalar product of a and b = " << a * b << endl;
	a /= 5;
	cout << "a after a /= 5;" << a << endl;
	a += b;
	cout << "a after a+= b;" << a << endl;
}