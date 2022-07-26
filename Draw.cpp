#include "Map.h"
#include <iostream>
#include "Player.h"
#include "Input.h"
#include "G.h"

using namespace std;

void Draw()
{
	system("cls");



	for (int Y = 0; Y < 10; ++Y)
	{
		for (int X = 0; X < 10; ++X)
		{
			if (X == MyPlayer->X && Y == MyPlayer->Y)
			{
				cout << "P";
			}
			if (X == 8 && Y == 8)
			{
				cout << "G";
			}
			if (X == 5 && Y == 5)
			{
				cout << "M";
			}
			else
			{
				cout << Map[Y][X] << ' ';
			}

		}

		cout << endl;

	}
}