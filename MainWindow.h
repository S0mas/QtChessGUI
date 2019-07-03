#pragma once

#include <QtWidgets/QMainWindow>
#include "ChessBoard.h"

class MainWindow : public QMainWindow {
	std::unique_ptr<Chessboard> cb;
	Q_OBJECT
public:
	MainWindow(QWidget *parent = Q_NULLPTR);
};
