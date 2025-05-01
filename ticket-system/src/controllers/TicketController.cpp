#include "TicketController.h"
#include "../models/Ticket.h"

TicketController::TicketController() {
    // Конструктор по умолчанию
}

void TicketController::createTicket(const QString& title, const QString& description, const QString& priority) {
    Ticket newTicket(title.toStdString(), description.toStdString(), "New", priority.toStdString());
    // Здесь можно добавить логику для сохранения тикета в базе данных или другой обработчик
}