// Matrixausgabe.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <iostream>


const int height = 20;
const int wide = 40;

int xpossnakehead = height / 2;
int ypossnakehead = wide / 2;

char matrix[height][wide];

char border = '#';

void draw();
void spawnfruit();
void initgame();

int main()
{
	initgame();
	spawnfruit();
	draw();
	
}
void initgame()
{
	memset(&matrix, 0x20, sizeof(matrix)); // 39 = Ascii " " 
	matrix[xpossnakehead][ypossnakehead] = 0x4F;
}
void draw()
{
	for (size_t j = 0; j <= height; j++)
	{
		for (size_t i = 0; i <= wide; i++)
		{
			if ((j == 0) or (i == 0) or (j == height) or (i == wide))
			{
				std::cout << border;
			}
			else
			{
				std::cout << matrix[j][i];
			}
		}
		std::cout << std::endl;
	}
}
void spawnfruit()
{
	srand((uint16_t)time);
	int x = rand() % height;
	int y = rand() % wide;

	matrix[x][y] = 0x46;

}