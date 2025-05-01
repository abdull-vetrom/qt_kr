#include "MainWindow.h"
#include "ui_MainWindow.h"
#include "TicketController.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    ticketController(new TicketController(this))
{
    ui->setupUi(this);
    initializeUI();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::initializeUI()
{
    // Initialize UI components and connect signals and slots
    connect(ui->createTicketButton, &QPushButton::clicked, this, &MainWindow::onCreateTicket);
    connect(ui->refreshButton, &QPushButton::clicked, this, &MainWindow::onRefreshTickets);
}

void MainWindow::onCreateTicket()
{
    // Logic to create a new ticket
    QString title = ui->ticketTitleInput->text();
    QString description = ui->ticketDescriptionInput->toPlainText();
    ticketController->createTicket(title, description);
    onRefreshTickets();
}

void MainWindow::onRefreshTickets()
{
    // Logic to refresh the ticket list
    auto tickets = ticketController->getAllTickets();
    ui->ticketListWidget->clear();
    for (const auto &ticket : tickets) {
        ui->ticketListWidget->addItem(ticket.getTitle());
    }
}