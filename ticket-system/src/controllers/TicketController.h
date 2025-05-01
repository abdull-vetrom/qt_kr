#ifndef TICKETCONTROLLER_H
#define TICKETCONTROLLER_H

#include <QString>
#include "../models/Ticket.h"

class TicketController {
public:
    TicketController();

    void createTicket(const QString& title, const QString& description, const QString& priority); // Объявление метода
};

#endif // TICKETCONTROLLER_H