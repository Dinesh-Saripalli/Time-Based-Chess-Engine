#ifndef BOARD_H
#define BOARD_H

#include <cstdint>
#include <iostream>

class Bitboards {
public:
    uint64_t whitePawns, whiteKnights, whiteBishops, whiteRooks, whiteQueens, whiteKing;
    uint64_t blackPawns, blackKnights, blackBishops, blackRooks, blackQueens, blackKing;

    Bitboards();
    uint64_t getAllPieces() const;
    uint64_t getEmptySquares() const;
};

void printBitboard(uint64_t bitboard);

#endif // BOARD_H
