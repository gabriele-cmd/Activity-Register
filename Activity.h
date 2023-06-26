<<<<<<< HEAD
#ifndef REGISTRO_ATTIVITÀ_ACTIVITY_H
#define REGISTRO_ATTIVITÀ_ACTIVITY_H

#include <QTime>
#include <QString>

class Activity {
public:
    //Constructor
    Activity(QString desc, Qtime st, Qtime et);
    //Destructor
    ~Activity() = default;

    //Getters (const to disallow modifications)
    QString getDescription() const;
    QTime getStartTime() const;
    QTime getEndTime() const;

    //Setters
    void setDescription(QString desc);
    void setStartTime(QTime start);
    void setEndTime(QTime end);

    //Overloading operators
    bool operator==(const Activity& right) const;
    bool operator!=(const Activity& right) const;

private:
    QString description;
    QTime startTime;
    QTime endTime;
};

=======
#ifndef REGISTRO_ATTIVITÀ_ACTIVITY_H
#define REGISTRO_ATTIVITÀ_ACTIVITY_H

#include <QTime>
#include <QString>

class Activity {
public:
    //Constructor
    Activity(QString desc, Qtime st, Qtime et);
    //Destructor
    ~Activity() = default;

    //Getters (const to disallow modifications)
    QString getDescription() const;
    QTime getStartTime() const;
    QTime getEndTime() const;

    //Setters
    void setDescription(QString desc);
    void setStartTime(QTime start);
    void setEndTime(QTime end);

    //Overloading operators
    bool operator==(const Activity& right) const;
    bool operator!=(const Activity& right) const;

private:
    QString description;
    QTime startTime;
    QTime endTime;
};

>>>>>>> 5e6d8999186e3323e23682787b75f83db0404946
#endif //REGISTRO_ATTIVITÀ_ACTIVITY_H