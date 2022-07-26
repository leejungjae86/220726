#include "Process.h"
#include "Player.h"
#include "Map.h"



void Process(int KeyCode)
{
	if (KeyCode == 'w' || KeyCode == 'W')
	{
		if (Predict(MyPlayer->X, MyPlayer->Y - 1))
		{
			MyPlayer->Y--;
		}
	}
	else if (KeyCode == 's' || KeyCode == 'S')
	{
		if (Predict(MyPlayer->X, MyPlayer->Y + 1))
		{
			MyPlayer->Y++;
		}
	}
	else if (KeyCode == 'a' || KeyCode == 'A')
	{
		if (Predict(MyPlayer->X - 1, MyPlayer->Y))
		{
			MyPlayer->X--;
		}
	}
	else if (KeyCode == 'd' || KeyCode == 'D')
	{
		if (Predict(MyPlayer->X + 1, MyPlayer->Y))
		{
			MyPlayer->X++;
		}
	}
}

bool Process(int BX, int BY)
{
	return false;
}

bool Predict(int AX, int AY)
{
	return(Map[AY][AX] != '*');
}
