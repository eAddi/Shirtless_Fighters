#ifndef FOURPLAYERS_H_INCLUDED
#define FOURPLAYERS_H_INCLUDED

#include "Menu_Select_Joueurs.h"

struct FourPlayers{
    Image i_Background;
    Text pseudo[4];
    Color textColor;
    Vec2 textPos1;
    Vec2 textPos2;
    Vec2 textPos3;
    Vec2 textPos4;

    void Init()
    {
        i_Background = CreateImage("data/backgrounds_menu/4players.png");

        textColor = CreateColor(255,0,0);

        pseudo[0] = CreateText("pseudo", textColor, 32);
        pseudo[1] = CreateText("pseudo", textColor, 32);
        pseudo[2] = CreateText("pseudo", textColor, 32);
        pseudo[3] = CreateText("pseudo", textColor, 32);
        TextSetAlterable(pseudo[0], true);
        TextSetAlterable(pseudo[1], true);
        TextSetAlterable(pseudo[2], true);
        TextSetAlterable(pseudo[3], true);
        TextSetLimitEditable(pseudo[0],10);
        TextSetLimitEditable(pseudo[1],10);
        TextSetLimitEditable(pseudo[2],10);
        TextSetLimitEditable(pseudo[3],10);
        textPos1 = CreateVec2(300, 293);
        textPos2 = CreateVec2(880, 293);
        textPos3 = CreateVec2(300, 126);
        textPos4 = CreateVec2(880, 126);
        TextSetPosition(pseudo[0], textPos1);
        TextSetPosition(pseudo[1], textPos2);
        TextSetPosition(pseudo[2], textPos3);
        TextSetPosition(pseudo[3], textPos4);

    }

    int Draw()
    {
        RefreshScreen();

        while (!KeyGet(SDLK_ESCAPE) && !StickGetClick(0, 7))
        {
            if (KeyGetOneShot(SDLK_RETURN))
            {return 0;}
            DrawImage(i_Background);
            DrawText(pseudo[0]);
            DrawText(pseudo[1]);
            DrawText(pseudo[2]);
            DrawText(pseudo[3]);
            RefreshScreen();
        }

    }
};

#endif // 4PLAYERS_H_INCLUDED
