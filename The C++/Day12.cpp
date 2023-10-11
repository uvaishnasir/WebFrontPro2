#include <iostream>
#include <vector>

using namespace std;

class Person
{
protected:
    string firstName;
    string lastName;
    int id;

public:
    Person(string firstName, string lastName, int identification)
    {
        this->firstName = firstName;
        this->lastName = lastName;
        this->id = identification;
    }
    void printPerson()
    {
        cout << "Name: " << lastName << ", " << firstName << "\nID: " << id << "\n";
    }
};
class Student : public Person
{
private:
    vector<int> testScores;

public:
    // Write your constructor
    Student(string firstName, string lastName, int id, vector<int> scores) : Person(firstName, lastName, id)
    {
        this->testScores = scores;
    }

    char calculate()
    {
        int sumScores = 0;
        for (int i = 0; i < testScores.size(); i++)
            sumScores += testScores[i];
        int avgScore = sumScores / testScores.size();
        if (avgScore <= 100 && avgScore >= 90)
            return 'O';
        if (avgScore < 90 && avgScore >= 80)
            return 'E';
        else if (avgScore < 80 && avgScore >= 70)
            return 'A';
        else if (avgScore < 70 && avgScore >= 55)
            return 'P';
        else if (avgScore < 55 && avgScore >= 40)
            return 'D';
        else
            return 'T';
    }
};

int main()
{
    string firstName;
    string lastName;
    int id;
    int numScores;
    cin >> firstName >> lastName >> id >> numScores;
    vector<int> scores;
    for (int i = 0; i < numScores; i++)
    {
        int tmpScore;
        cin >> tmpScore;
        scores.push_back(tmpScore);
    }
    Student *s = new Student(firstName, lastName, id, scores);
    s->printPerson();
    cout << "Grade: " << s->calculate() << "\n";
    return 0;
}