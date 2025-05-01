#include "MainWindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent),
      ticketController(new TicketController()) // Инициализация поля
{
    // Здесь можно добавить логику для инициализации интерфейса
}

MainWindow::~MainWindow() {
    delete ticketController; // Освобождение памяти
}