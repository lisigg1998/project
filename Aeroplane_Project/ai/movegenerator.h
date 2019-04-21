/*
 * File: movegenerator.h
 * ---------------
 * This file is the move generator for the AI.
 *
 */

#include "define.h"
#ifndef MOVEGENERATOR_H
#define MOVEGENERATOR_H

/*
 * Class: moveGenerator
 * ---------------------
 * This class is the move generator for an AI. It provides multiple methods
 * to generate all possible moves for certain roll points. It can also
 * store the possible move information.
 */

class moveGenerator
{

/*
 * Public field starts from here.
 */

public:

/*
 * Method: constructor and destructor
 * -------------------------------------
 * Constructor and destructor of the class instance.
 */
    moveGenerator(int offmode);
    virtual ~moveGenerator();

/*
 * Method: roll
 * Usage: int rollPoint = roll();
 * -------------------------------
 * This method simulates the dice rolling. It returns an integer between 1 to 6 randomly
 * each time being called.
 */

    int roll();


/*
 * Method: createPossibleMove
 * Usage: int moveCount = createPossibleMove(chessboard[16], rollPoint[3], side)
 * ------------------------------------------------------------------------------------
 * This function can generate all possible moves of a player and return the number of moves.
 * It has 3 parameters. chessboard[] is an array which contains the current chessboard.
 * rollPoint is the roll point of current player. side is the color of the player.
 * The method will write all possible moves into moveList.
 */

    int createPossibleMove(const CHESS chessboard[], int rollPoint, int side);


//  This is the data structure which stores all possible moves.

    CHESSMOVE moveList[5];

//  This variable indicates the condition of taking off.
//  When dice roll is larger or equal to offMode, a plane
//  can take off.


    int offMode = 6;


/*
 * Protected field starts from here.
 */

protected:
/*
 * Method: addMove
 * Usage: addMove(rollPoint, chessID)
 * ----------------------------------
 * Add a valid chess move to the move list.
 */
    void addMove(int rollPoint, int chessID);

//  This variable stores the number of move generated at this stage.
    int moveCount;




};

#endif // MOVEGENERATOR_H
