#include "Ticket.h"

Ticket::Ticket(const std::string& title, const std::string& description, const std::string& status, const std::string& priority)
    : m_title(title), m_description(description), m_status(status), m_priority(priority) {}

std::string Ticket::getTitle() const {
    return m_title;
}

std::string Ticket::getDescription() const {
    return m_description;
}

std::string Ticket::getStatus() const {
    return m_status;
}

std::string Ticket::getPriority() const {
    return m_priority;
}

void Ticket::setTitle(const std::string& title) {
    m_title = title;
}

void Ticket::setDescription(const std::string& description) {
    m_description = description;
}

void Ticket::setStatus(const std::string& status) {
    m_status = status;
}

void Ticket::setPriority(const std::string& priority) {
    m_priority = priority;
}