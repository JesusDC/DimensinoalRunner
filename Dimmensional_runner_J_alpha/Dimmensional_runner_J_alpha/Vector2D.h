class Vector2D
{
public:
	//float GetX();
	//float GetY();
	//Variables
	float x;
	float y;
	// Funciones
	Vector2D(float xv = 0.0f, float yv = 0.0f);
	~Vector2D();
	//float GetX();
	//float GetY();
	float modulo(); // Obtener modulo del vector
	float argumento(); // Extraer argumento del vector
	Vector2D Unitario(); // Extraer el vector unitario
	Vector2D operator + (Vector2D &op); // Suma de vectores
	Vector2D operator - (Vector2D &op); // Resta de vectores
	float operator * (Vector2D &op); // Producto escalar
	Vector2D operator * (float); // Producto por un escalar
};
