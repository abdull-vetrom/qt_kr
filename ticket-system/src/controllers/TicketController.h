#ifndef TICKETCONTROLLER_H
#define TICKETCONTROLLER_H

#include <vector>
#include "Ticket.h"

class TicketController {
public:
    TicketController();
    void createTicket(const std::string& title, const std::string& description);
    void assignTicket(int ticketId, const std::string& userId);
    void updateTicketStatus(int ticketId, const std::string& status);
    void addComment(int ticketId, const std::string& comment);
    std::vector<Ticket> getAllTickets() const;

private:
    std::vector<Ticket> tickets;
};

#endif // TICKETCONTROLLER_H