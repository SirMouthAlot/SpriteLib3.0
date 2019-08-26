#ifndef __VECTOR_H__
#define __VECTOR_H__
#include <math.h>

#ifdef VECTOR_EXPORT
	#define DLLEXPORT __declspec(dllexport)
#else
	#define DLLEXPORT __declspec(dllimport)
#endif

class DLLEXPORT vec2
{
public:
	//Empty constructor
	vec2();
	//Creates vec2 with x and y
	vec2(float _x, float _y);

	//Defaults to zero
	float x, y = 0.f;
	//Used for indexing using [] operator
	float* hold[2] = { &x, &y };

	float GetMagnitude();

	//Operator overload for indexing using []
	float operator[](int i);
	vec2 operator-();
	vec2 operator+(vec2 v1);
	vec2 operator-(vec2 v1);

	vec2 operator*(float f);
};

class DLLEXPORT vec3
{
public:
	//Empty constructor
	vec3();
	//Creates vec3 with x, y, and z
	vec3(float _x, float _y, float _z);
	
	//Defaults to zero
	float x, y, z = 0.f;
	//Used for indexing using [] operator
	float* hold[3] = { &x, &y, &z };

	float GetMagnitude();

	//Operator overload for indexing using []
	float operator[](int i);
	//Negation operator for creating a negative version of the vector
	vec3 operator-();
	vec3 operator+(vec3 v2);
	vec3 operator-(vec3 v2);

	vec3 operator*(float f);
	vec3 operator/(float f);
};

class DLLEXPORT vec4
{
public:
	//empty constructor
	vec4();
	//Creates vec4 with x,y,z and w
	vec4(float _x, float _y, float _z, float _w);

	//Defaults to zero
	float x, y, z, w = 0.f;
	//Used for indexing using [] operator
	float* hold[4] = { &x, &y, &z, &w };

	float GetMagnitude();

	//Operator overload for indexing using []
	float operator[](int i);
};

#endif // !__VECTOR_H__
