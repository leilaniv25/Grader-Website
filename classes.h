#include <vector>
#include <string>

class Category
{
public:
    void setName(std::string name_);
    std::string getName();
    void inputGrade (double score, double outOff);

    Category(std::string name_);
    double gradedPercent();

private:
    std::string name; //hw, test, final, project, essay, midterm
    std::vector <double> grades;
    std::vector <double> possiblePoints;

};

class Class
{
public:
    void addCategory(Category * cat);
    void addWeight (double weight_);

private:
    std::vector <Category *> categories;
    std::vector <double> weight;
    double classPercent ();

};
    