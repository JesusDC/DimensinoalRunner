#include "Pared.h"
#include "Personaje.h"
#include "Perk.h"
#include "Caja.h"

class Mundo
{
private:
public:
	~Mundo();
	void Tecla(unsigned char key);
	void Inicializa();
	void RotarOjo();
	void Mueve();
	void Dibuja();
	void teclaEspecial(unsigned char key);

	float x_ojo;
	float y_ojo;
	float z_ojo;

	Caja caja;
};

