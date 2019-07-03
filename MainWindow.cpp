#include "MainWindow.h"
#include "MockChessInterface.h"

MainWindow::MainWindow(QWidget* parent)
	: QMainWindow(parent) {
	cb = std::make_unique<Chessboard>(std::make_unique<MockChessInterface>());
	auto widget = new QWidget();
	widget->setLayout(cb->getLayout());
	setCentralWidget(widget);
}
