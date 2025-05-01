#ifndef TICKET_H
#define TICKET_H

#include <string>

class Ticket {
public:
    Ticket(const std::string& title, const std::string& description, const std::string& status, const std::string& priority);

    // Геттеры
    std::string getTitle() const;
    std::string getDescription() const;
    std::string getStatus() const;
    std::string getPriority() const;

    // Сеттеры
    void setTitle(const std::string& title);
    void setDescription(const std::string& description);
    void setStatus(const std::string& status);
    void setPriority(const std::string& priority);

private:
    std::string m_title;         // Название тикета
    std::string m_description;   // Описание тикета
    std::string m_status;        // Статус тикета
    std::string m_priority;      // Приоритет тикета
};

#endif // TICKET_H