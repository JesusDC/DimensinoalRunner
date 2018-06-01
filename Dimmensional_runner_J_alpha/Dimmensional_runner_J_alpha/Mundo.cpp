#include "Mundo.h"
#include "glut.h"
#include <math.h>
#include "Interaccion.h"

void Mundo::RotarOjo()
{
	float dist = sqrt(x_ojo*x_ojo + z_ojo * z_ojo);
	float ang = atan2(z_ojo, x_ojo);
	ang += 0.05f;
	x_ojo = dist * cos(ang);
	z_ojo = dist * sin(ang);
}
void Mundo::Dibuja()
{
	gluLookAt(x_ojo, y_ojo, z_ojo,  // posicion del ojo
		0.0, y_ojo, 0.0,      // hacia que punto mira  (0,0,0) 
		0.0, 1.0, 0.0);      // definimos hacia arriba (eje Y)    
	
	//dibujo del suelo
	glDisable(GL_LIGHTING);
	glBegin(GL_POLYGON);
	glColor3ub(255, 0, 0);
	caja.Dibuja();
	glVertex3f(-5.0f, 0, -5.0f);
	glVertex3f(-5.0f, 0, 5.0f);
	glColor3ub(255, 255, 0);
	glVertex3f(5.0f, 0, 5.0f);
	glVertex3f(5.0f, 0, -5.0f);
	glEnd();
	glEnable(GL_LIGHTING);
}

void Mundo::Mueve()
{

}

void Mundo::Inicializa()
{
	x_ojo = 0;
	y_ojo = 7.5;
	z_ojo = 30;
	
}
void Mundo::teclaEspecial(unsigned char key)
{

}
void Mundo::Tecla(unsigned char key)
{
	
}
Mundo::~Mundo()
{

}

