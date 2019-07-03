#pragma once
#include "ChessInterface.h"
#include <iostream>

class MockChessInterface : public ChessInterface {
public:
	GameStatus getGameStatus() override {
		std::cout << "Game status returned!" << std::endl;
		GameStatus gs = GameStatus::IN_PROGRESS;
		return gs;
	}

	BoardState getBoardState() override {
		std::cout << "Board state returned!" << std::endl;
		BoardState bs;
		bs.push_back({ PieceType::BlackBishop, "A1" });
		bs.push_back({ PieceType::WhiteKing, "C7" });
		return bs;
	}

	bool undoMove() override {
		std::cout << "Move undone!" << std::endl;
		return true;
	}

	bool move(const Move& move) override {
		std::cout << "Move sended! : " << move.originPosition << " " << move.destinationPosition << std::endl;
		return true;
	}
};