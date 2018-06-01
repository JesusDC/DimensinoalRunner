#include "Vector2D.h"
#include "Math.h"

Vector2D::Vector2D(float xv, float yv)
{
	x = xv;
	y = yv;
}

Vector2D::~Vector2D()
{
}

float Vector2D::modulo()
{
	float resultado;
	resultado = sqrt(x * x + y * y);
	return resultado;
}

float Vector2D::argumento()
{
	float resultado;
	resultado = atan2(y, x);
	return resultado;
}

Vector2D Vector2D::Unitario()
{
	Vector2D resultado(x, y);
	float mod;
	mod = modulo();
	if (mod > 0.00001)
	{
		resultado.x /= mod;
		resultado.y /= mod;
	}
	return resultado;
}

Vector2D Vector2D::operator + (Vector2D &op)
{
	Vector2D resultado;
	resultado.x = x + op.x;
	resultado.y = y + op.y;
	return resultado;
}

Vector2D Vector2D::operator - (Vector2D &op)
{
	Vector2D resultado;
	resultado.x = x - op.x;
	resultado.y = y - op.y;
	return resultado;
}

float Vector2D::operator * (Vector2D &op)
{
	float resultado;
	resultado = (x * (op.x)) + (y * (op.y));
	return resultado;
}

Vector2D Vector2D::operator * (float a)
{
	Vector2D resultado;
	resultado.x = x * a;
	resultado.y = y * a;
	return resultado;
}
