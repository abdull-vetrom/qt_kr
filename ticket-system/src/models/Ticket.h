#ifndef TICKET_H
#define TICKET_H

#include <QString>

class Ticket {
public:
    Ticket(const QString &title, const QString &description, const QString &status, int priority);

    QString getTitle() const;
    void setDescription(const QString &description);
    QString getStatus() const;
    void setStatus(const QString &status);
    int getPriority() const;
    void setPriority(int priority);

private:
    QString title;
    QString description;
    QString status;
    int priority;
};

#endif // TICKET_H