#include <stdio.h>
#include <iostream>
#include <vector>
#include <string>
#include "work.h"
using namespace std;

HourlyWorker::HourlyWorker (string name)
{
    workerName = name;
}

HourlyWorker::HourlyWorker (HourlyWorker &a)
{
    workerName = a.getName();
    hourlyRate = a.getRate();
    ammountMoney = a.getAmmount();
}

string HourlyWorker::getName() const
{
    return workerName;
}

void HourlyWorker::setName(string name)
{
    workerName = name;
}

double HourlyWorker::getAmmount() const
{
    return ammountMoney;
}

void HourlyWorker::setRate(double rate)
{
    hourlyRate = rate;
}

double HourlyWorker::getRate() const
{
    return hourlyRate;
}

HourlyWorker::~HourlyWorker()
{
    workerName.clear();
}

void HourlyWorker::monthlySalary ()
{
    ammountMoney += 20.8 * 8 * hourlyRate;
}

void HourlyWorker::printFiveFirst() const
{
    for(int i = 0; i < 4; i++)
    {
        printf("%s", workers.getName());
    }
}

void HourlyWorker::printThreeLast() const
{
    for(int i = workers.size() - 3; i < workers.size(); i++)
    {
        printf("%s", workers.getName());
    }
}






MonthlyWorker::MonthlyWorker (string name)
{
    workerName = name;
}

MonthlyWorker::MonthlyWorker (MonthlyWorker &a)
{
    workerName = a.getName();
    monthlyRate = a.getRate();
    ammountMoney = a.getAmmount();
}

string MonthlyWorker::getName() const
{
    return workerName;
}

void MonthlyWorker::setName(string name)
{
    workerName = name;
}

double MonthlyWorker::getAmmount() const
{
    return ammountMoney;
}

void MonthlyWorker::setRate(double rate)
{
    monthlyRate = rate;
}

double MonthlyWorker::getRate() const
{
    return monthlyRate;
}

MonthlyWorker::~MonthlyWorker()
{
    workerName.clear();
}

void MonthlyWorker::monthlySalary ()
{
    ammountMoney += monthlyRate;
}

void MonthlyWorker::printFiveFirst() const
{
    for(int i = 0; i < 4; i++)
    {
        printf("%s", workers.getName());
    }
}

void MonthlyWorker::printThreeLast() const
{
    for(int i = workers.size() - 3; i < workers.size(); i++)
    {
        printf("%s", workers.getName());
    }
}
