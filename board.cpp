#include "board.h"

// Constructor to initialize the starting positions
Bitboards::Bitboards() {
    whitePawns = 0x000000000000FF00ULL;
    whiteKnights = 0x0000000000000042ULL;
    whiteBishops = 0x0000000000000024ULL;
    whiteRooks = 0x0000000000000081ULL;
    whiteQueens = 0x0000000000000008ULL;
    whiteKing = 0x0000000000000010ULL;

    blackPawns = 0x00FF000000000000ULL;
    blackKnights = 0x4200000000000000ULL;
    blackBishops = 0x2400000000000000ULL;
    blackRooks = 0x8100000000000000ULL;
    blackQueens = 0x0800000000000000ULL;
    blackKing = 0x1000000000000000ULL;
}

uint64_t Bitboards::getAllPieces() const {
    return whitePawns | whiteKnights | whiteBishops | whiteRooks |
           whiteQueens | whiteKing | blackPawns | blackKnights |
           blackBishops | blackRooks | blackQueens | blackKing;
}

uint64_t Bitboards::getEmptySquares() const {
    return ~getAllPieces();
}

// Print a bitboard for visualization
void printBitboard(uint64_t bitboard) {
    for (int rank = 7; rank >= 0; --rank) {
        for (int file = 0; file < 8; ++file) {
            int square = rank * 8 + file;
            std::cout << ((bitboard & (1ULL << square)) ? "1 " : ". ");
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;
}
