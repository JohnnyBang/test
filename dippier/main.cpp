#include <iostream>
#include "work.h"
#include <typeinfo>
#include <algorithm>
#include <fstream>



bool compare(Worker *a, Worker *b){
    if(a->monthlySalary() == b->monthlySalary()) return (a->getName() < b->getName());
    return (a->monthlySalary() > b->monthlySalary());
}

vector <Worker*> read(string fileName)
{
    ifstream file;
    file.open(fileName);
    int cnt;
    file >> cnt;
    vector <Worker*> ppl;
    for(int i = 0; i < cnt; i++)
    {
        bool type;
        file >> type;
        string name;
        file >> name;
        int rate;
        file >> rate;
        if(type)
        {
            ppl.push_back(new MonthlyWorker(name, rate));
        }
        else
        {
            ppl.push_back(new HourlyWorker(name, rate));
        }
    }
    return ppl;
}

void write(string fileName, vector <Worker*> &ppl)
{
    ofstream file;
    file.open(fileName);
    for(int i = 0; i < ppl.size(); i++)
    {
        file << ppl[i]->getName() << " ";
        file << ppl[i]->monthlySalary() << endl;
    }
}


int main() {
    vector <Worker*> ppl = read("input.txt");
    sort(ppl.begin(), ppl.end(), compare);
    write("output.txt", ppl);
    return 0;
}
