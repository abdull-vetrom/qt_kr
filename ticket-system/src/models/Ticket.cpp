#include "Ticket.h"

Ticket::Ticket(const QString &title, const QString &description, const QString &status, int priority)
    : m_title(title), m_description(description), m_status(status), m_priority(priority) {}

QString Ticket::getTitle() const {
    return m_title;
}

void Ticket::setTitle(const QString &title) {
    m_title = title;
}

QString Ticket::getDescription() const {
    return m_description;
}

void Ticket::setDescription(const QString &description) {
    m_description = description;
}

QString Ticket::getStatus() const {
    return m_status;
}

void Ticket::setStatus(const QString &status) {
    m_status = status;
}

int Ticket::getPriority() const {
    return m_priority;
}

void Ticket::setPriority(int priority) {
    m_priority = priority;
}