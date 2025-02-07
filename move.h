#ifndef MOVE_H
#define MOVE_H

#include <cstdint>

uint64_t generatePawnMoves(uint64_t pawns, uint64_t emptySquares, bool isWhite);
uint64_t generateBishopMoves(uint64_t bishop, uint64_t allPieces);

#endif // MOVE_H
