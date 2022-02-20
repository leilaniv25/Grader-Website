#include "CalenderAdd.h"
#include <ctime>

bool Task::ifPassed(startTime,endTime)
{
    if(difftime(startTime,endTime) == 0)
        return true;
    else
        return false;
}

void Task::setName(string s)
{
    name = s;
}
void Task::setDescription(string s)
{
    description = s;
}
void setStartTime(time_t t)
{
    startTime = t;
}
void setEndTime(time_t t)
{
    endTime = t;
}
void setTracked(bool b)
{
    tracked = b;
}
void setCompleted(bool b)
{
    completed = b;
}
void setCategory(Category* c)
{
    inCat = c;
}
void setClass(Class* c)
{
    inClass = c;
}
void setTotalPoints(double d)
{
    totalPoints = d;
}
void setEarnedPoints(double d)
{
    earnedPoints = d;
}

string getName()
{
    return name;
}
string getDescription()
{
    return description;
}
double getStartTime()
{
    return startTime;
}
double getEndTime()
{
    return endTime;
}
bool getTracked()
{
    return tracked;
}
bool getCompleted()
{
    return completed;
}
Category* getCategory()
{
    return inCat;
}
Class* getClass()
{
    return inClass;
}
double getTotalPoints()
{
    return totalPoints;
}
double getEarnedPoints()
{
    return earnedPoints;
}
