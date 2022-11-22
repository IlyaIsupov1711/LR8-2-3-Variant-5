#include <iostream>
#include <windows.h>
#include <string>
#include <math.h>

class Vector
{
private:
	double x1, y1, z1;
	double x2, y2, z2;
public:
	Vector()
	{
		this->x1 = 0;
		this->y1 = 0;
		this->z1 = 0;
	}

	Vector(double x1, double y1, double z1, double x2, double y2, double z2)
	{
		this->x1 = x1;
		this->y1 = y1;
		this->z1 = z1;
		this->x2 = x2;
		this->y2 = y2;
		this->z2 = z2;
	}

	double Addition_x()
	{
		return x1 + x2;
	}
	double Addition_y()
	{
		return y1 + y2;
	}
	double Addition_z()
	{
		return z1 + z2;
	}

	double Substraction_x()
	{
		return abs(x2 - x1);
	}
	double Substraction_y()
	{
		return abs(y1 - y2);
	}
	double Substraction_z()
	{
		return abs(z1 - z2);
	}

	double scalar_product()
	{
		return (x1 * x2) + (y1 * y2) + (z1 * z2);
	};

	double length_of_vector()
	{
		return sqrt(pow(x1, 2) + pow(y1, 2) + pow(z1, 2));
	}

	double cosine_of_angle()
	{
		return cos(((x1 + y1 + z1) * (x2 + y2 + z2)) / (abs(x1 + y1 + z1) / abs(x2 + y2 + z2)));
	}

	void toString(double x, double y, double z)
	{
		std::cout << "X: " << x << '\n' << "Y: " << y << '\n' << "Z: " << z << std::endl;
	}
};

int main()
{
	setlocale(LC_ALL, "RUS");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	Vector first(1, 2, 3, 4, 5, 6);
	double Vec2_x, Vec2_y, Vec2_z;
	Vec2_x = first.Addition_x();
	Vec2_y = first.Addition_y();
	Vec2_z = first.Addition_z();
	printf("Сложение векторов:\n");
	first.toString(Vec2_x, Vec2_y, Vec2_z);
	Vec2_x = 0;
	Vec2_y = 0;
	Vec2_z = 0;
	Vec2_x = first.Substraction_x();
	Vec2_y = first.Substraction_y();
	Vec2_z = first.Substraction_z();
	printf("Вычитание векторов:\n");
	first.toString(Vec2_x, Vec2_y, Vec2_z);
	double sc_product;
	sc_product = first.scalar_product();
	printf("Скалярное произведение:\n");
	std::cout << sc_product << std::endl;
	double leng_vec;
	leng_vec = first.length_of_vector();
	printf("Длинна вектора:\n");
	std::cout << leng_vec << std::endl;
	double cosine;
	cosine = first.cosine_of_angle();
	printf("Косинус между углами вектора:\n");
	std::cout << cosine << std::endl;
}