#include <vector>
#include <string>
#include <ctime>

//class for untracked and tracked tasks
class Task
{ 
public:
//constructor
    Task();
    //don't forget to add to calendar structure
    bool ifPassed(); // did the due date or event start time pass
    //set functions
    void setName(string s); //set the name of the class
    void setDescription(string s); //set the description of tasks
    void setStartTime(time_t);
    void setEndTime(time_t);
    void setTracked(bool b);
    void setCompleted(bool b);
    void setCategory(Category* c);
    void setClass(Class* c);
    void setTotalPoints(double d);
    void setEarnedPoints(double d);
    //get functions
    string getName();
    string getDescription();
    double getStartTime();
    double getEndTime();
    bool getTracked();
    bool getCompleted();
    Category* getCategory();
    Class* getClass();
    double getTotalPoints();
    double getEarnedPoints();
private:
    string name;
    string description;
    time_t startTime;
    time_t endTime;
    bool tracked;
    bool completed;
    Category* inCat;
    Class* inClass;
    double totalPoints;
    double earnedPoints;
};
