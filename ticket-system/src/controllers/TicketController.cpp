#include "TicketController.h"
#include "Ticket.h"
#include "DatabaseManager.h"

TicketController::TicketController() {
    // Инициализация, если необходимо
}

void TicketController::createTicket(const QString& title, const QString& description, const QString& priority) {
    Ticket newTicket;
    newTicket.setTitle(title);
    newTicket.setDescription(description);
    newTicket.setPriority(priority);
    newTicket.setStatus("New");
    
    // Логика для сохранения тикета в базе данных
    DatabaseManager::getInstance().saveTicket(newTicket);
}

void TicketController::assignTicket(int ticketId, const QString& userId) {
    // Логика для назначения тикета пользователю
    Ticket ticket = DatabaseManager::getInstance().getTicketById(ticketId);
    ticket.setAssignedUser(userId);
    
    // Обновление тикета в базе данных
    DatabaseManager::getInstance().updateTicket(ticket);
}

void TicketController::updateTicketStatus(int ticketId, const QString& newStatus) {
    // Логика для обновления статуса тикета
    Ticket ticket = DatabaseManager::getInstance().getTicketById(ticketId);
    ticket.setStatus(newStatus);
    
    // Обновление тикета в базе данных
    DatabaseManager::getInstance().updateTicket(ticket);
}

void TicketController::addCommentToTicket(int ticketId, const QString& comment) {
    // Логика для добавления комментария к тикету
    Ticket ticket = DatabaseManager::getInstance().getTicketById(ticketId);
    ticket.addComment(comment);
    
    // Обновление тикета в базе данных
    DatabaseManager::getInstance().updateTicket(ticket);
}