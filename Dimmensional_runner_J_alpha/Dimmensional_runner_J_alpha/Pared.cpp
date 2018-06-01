#include "Pared.h"
#include "glut.h"

Pared::Pared()
{
	//SetColor(255, 255, 255);
}

void Pared::SetColor(unsigned char r, unsigned char v, unsigned char a)
{
	rojo = r;
	verde = v;
	azul = a;
}

void Pared::SetPos(float x1, float y1, float x2, float y2)
{
	limite1.x = x1;
	limite1.y = y1;
	limite2.x = x2;
	limite2.y = y2;
}
Vector2D Pared::GetPos1()
{
	return limite1;
}
Vector2D Pared::GetPos2()
{
	return limite2;
}

void Pared::Dibuja()
{
	glDisable(GL_LIGHTING);
	glColor3ub(rojo, verde, azul);

	glBegin(GL_POLYGON);
	glVertex3f(limite1.x, limite1.y, 10);
	glVertex3f(limite2.x, limite2.y, 10);
	glVertex3f(limite2.x, limite2.y, -10);
	glVertex3f(limite1.x, limite1.y, -10);
	glEnd();
	glEnable(GL_LIGHTING);
}

float Pared::distancia(Vector2D punto, Vector2D *direccion)
{
	Vector2D u = (punto - limite1);
	Vector2D v = (limite2 - limite1).Unitario();
	float longitud = (limite1 - limite2).modulo();
	Vector2D dir;
	float valor = u * v;
	float distancia = 0;
	if (valor < 0)
		dir = u;
	else if (valor>longitud)
		dir = (punto - limite2);
	else
		dir = u - v * valor;
	distancia = dir.modulo();
	if (direccion != 0) //si nos dan un vector…
		*direccion = dir.Unitario();
	return distancia;
}

Pared::~Pared()
{
}
