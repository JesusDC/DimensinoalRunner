#pragma once
#include "Vector2D.h"
class Pared
{
	unsigned char rojo;
	unsigned char verde;
	unsigned char azul;
	Vector2D limite1;
	Vector2D limite2;
public:
	// Funcinoes
	Pared();
	~Pared();
	void Dibuja();
	void SetColor(unsigned char r, unsigned char v, unsigned char a);
	void SetPos(float x1, float y1, float x2, float y2);
	Vector2D GetPos1();
	Vector2D GetPos2();
	float distancia(Vector2D punto, Vector2D *direccion);
};

