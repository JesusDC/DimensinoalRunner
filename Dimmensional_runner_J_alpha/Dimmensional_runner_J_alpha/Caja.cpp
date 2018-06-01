#include "Caja.h"
#include "glut.h"

Caja::Caja()
{
	
	Pared1.SetPos(-10, 15, 10, 15);
	Pared1.SetColor(0, 200, 0);

	

	Pared2.SetPos(-10, 0, 10, 0);
	Pared2.SetColor(0, 250, 0);



	Pared3.SetPos(-10, 0, -10, 15);
	Pared3.SetColor(0, 100, 0);

	
	Pared4.SetPos(10, 0, 10, 15);
	Pared4.SetColor(0, 100, 0);
}

void Caja::Dibuja()
{
	Pared1.Dibuja();
	Pared2.Dibuja();
	Pared3.Dibuja();
	Pared4.Dibuja();
}

Caja::~Caja()
{
}