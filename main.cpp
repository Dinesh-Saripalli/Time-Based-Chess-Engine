#include <iostream>
#include "board.h"
#include "move.h"

int main() {
    Bitboards boards;

    std::cout << "Initial white pawns:" << std::endl;
    printBitboard(boards.whitePawns);

    uint64_t emptySquares = boards.getEmptySquares();
    uint64_t whitePawnMoves = generatePawnMoves(boards.whitePawns, emptySquares, true);

    std::cout << "White pawn moves:" << std::endl;
    printBitboard(whitePawnMoves);

    return 0;
}
