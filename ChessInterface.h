#pragma once
#include <string>
#include <vector>

enum class PieceType {
	WhiteKing,
	WhiteQueen,
	WhiteRook,
	WhiteBishop,
	WhiteKnight,
	WhitePawn,
	BlackKing,
	BlackQueen,
	BlackRook,
	BlackBishop,
	BlackKnight,
	BlackPawn
};

enum class GameStatus {
	IN_PROGRESS,
	WHITE_WON,
	BLACK_WON,
	DRAW
};

using BoardState = std::vector<std::pair<PieceType, std::string>>;

struct Move {
	std::string originPosition;
	std::string destinationPosition;
};

class ChessInterface {
public:
	virtual GameStatus getGameStatus() = 0;
	virtual BoardState getBoardState() = 0;
	virtual bool undoMove() = 0;
	virtual bool move(const Move& move) = 0;
	void reset() {
		while (undoMove()) {};
	}
};