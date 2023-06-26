<<<<<<< HEAD
#include "Activity.h"
#include <QTime>
#include <QString>

//Constructor implementation
Activity::Activity(int desc, int st, int et) : description(desc), startTime(st), endTime(et) {} //initializion list

//Getters implementation
QString Activity::getDescription() const {
    return description;
}
QTime Activity::getStartTime() const {
    return startTime;
}
QTime Activity::getEndTime() const {
    return endTime;
}

//Setters implementation
QString Activity::setDescription(int desc) {
    description = desc;
}
QTime Activity::setStartTime(int start) {
    startTime = start;
}
QTime Activity::setEndTime(int end) {
    endTime = end;
}

//Overloading Operators implementation
bool Activity::operator==(const Activity &right) const {
    if(description == right.getDescription() && startTime == right.getStartTime() && endTime == right.getEndTime())
        return true;
    return false;
}
bool Activity::operator!=(const Activity &right) const {
    return !(right == *this);//literally the opposite of ==
=======
#include "Activity.h"
#include <QTime>
#include <QString>

//Constructor implementation
Activity::Activity(int desc, int st, int et) : description(desc), startTime(st), endTime(et) {} //initializion list

//Getters implementation
QString Activity::getDescription() const {
    return description;
}
QTime Activity::getStartTime() const {
    return startTime;
}
QTime Activity::getEndTime() const {
    return endTime;
}

//Setters implementation
QString Activity::setDescription(int desc) {
    description = desc;
}
QTime Activity::setStartTime(int start) {
    startTime = start;
}
QTime Activity::setEndTime(int end) {
    endTime = end;
}

//Overloading Operators implementation
bool Activity::operator==(const Activity &right) const {
    if(description == right.getDescription() && startTime == right.getStartTime() && endTime == right.getEndTime())
        return true;
    return false;
}
bool Activity::operator!=(const Activity &right) const {
    return !(right == *this);//literally the opposite of ==
>>>>>>> 5e6d8999186e3323e23682787b75f83db0404946
}