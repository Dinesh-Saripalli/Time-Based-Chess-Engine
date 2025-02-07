#include "move.h"
#include "board.h"

uint64_t generatePawnMoves(uint64_t pawns, uint64_t emptySquares, bool isWhite) {
    if (isWhite) {
        // Move forward one rank
        uint64_t singlePush = (pawns << 8) & emptySquares;

        // Move forward two ranks (only from rank 2)
        uint64_t doublePush = ((singlePush & 0x000000000000FF00ULL) << 8) & emptySquares;

        return singlePush | doublePush;
    } else {
        // Move forward one rank
        uint64_t singlePush = (pawns >> 8) & emptySquares;

        // Move forward two ranks (only from rank 7)
        uint64_t doublePush = ((singlePush & 0x00FF000000000000ULL) >> 8) & emptySquares;

        return singlePush | doublePush;
    }
}

uint64_t generateBishopMoves(uint64_t bishops, uint64_t emptySquares, bool isWhite) {
    if (isWhite) {
        // Move forward one rank
        uint64_t singlePush = (bishops << 8) & emptySquares;

        // Move forward two ranks (only from rank 2)
        uint64_t doublePush = ((singlePush & 0x000000000000FF00ULL) << 8) & emptySquares;

        return singlePush | doublePush;
    } else {
        // Move forward one rank
        uint64_t singlePush = (bishops >> 8) & emptySquares;

        // Move forward two ranks (only from rank 7)
        uint64_t doublePush = ((singlePush & 0x00FF000000000000ULL) >> 8) & emptySquares;

        return singlePush | doublePush;
    }
}
