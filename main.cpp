#include <iostream>
#include "Map.h"
#include "Player.h"
#include "Process.h"
#include "Draw.h"
#include "Input.h"


using namespace std;

int Input();
void Process(int KeyCode);
void Draw();

int main()
{
    MyPlayer = new struct Player();
    if (MyPlayer)
    {
        MyPlayer->X = 1;
        MyPlayer->Y = 1;
    }


    while (true)
    {
        int KeyCode = Input();
        Process(KeyCode);
        Draw();
    }

    delete MyPlayer;
    MyPlayer = nullptr;


	return 0;
}
