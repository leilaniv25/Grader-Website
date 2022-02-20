#include <vector>
#include <string>
#include "classes.h"

Category::Category(std::string name_)
{
    name = name_;
}

void Category::setName(std::string name_)
{
    name = name_;
}

std::string Category::getName()
{
    return name;
}

void Category::inputGrade (double score, double outOff)
{
    grades.push_back(score);
    possiblePoints.push_back(outOff);
}

double Category::gradedPercent()
{
    double gradesTotal = 0;
    double pointsTotal = 0;
    double percentage = 0;
    for (int i = 0; i < grades.size(); i ++)
    {
        gradesTotal += grades[i];
        pointsTotal += possiblePoints[i];
    }
    percentage = gradesTotal/pointsTotal;
    return percentage;
}

void Class::addCategory(Category * cat)
{
    categories.push_back(cat);
}

void Class::addWeight (double weight_)
{
    weight.push_back(weight_);
}

double Class::classPercent ()
{
    double percent = 0;
    for (int i = 0; i < categories.size(); i++)
    {
        percent += categories[i]->gradedPercent() * weight[i];
    }
    return percent;
}

    