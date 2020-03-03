#pragma once

#include "cPaddle.h"


class cGameManger
    {
    private:
        int width, height;
        int score1, score2;
        char up1, down1, up2, down2;
        bool quit;
        cBall* ball;
        cPaddle* player1;
        cPaddle* player2;
        eDir direction;
    public:

        cGameManger(int w, int h);
        ~cGameManger();

        void ScoreUp(cPaddle* player);

        void Draw();
        void Input();
        void Logic();
        void Run();
        //void addFile();
        int checkScore();
    };



