#include <stdio.h>
#include <iostream>
#include <vector>
#include <string>
#include "work.h"
using namespace std;

Worker::Worker()
{
}

Worker::Worker(string name)
{
    workerName = name;
}

string Worker::getName() const
{
    return workerName;
}

void Worker::setName(string name)
{
    workerName = name;
}

Worker::~Worker()
{
    workerName.clear();
}









HourlyWorker::HourlyWorker (string name, int rate) : Worker(name)
{
    hourlyRate = rate;
}

HourlyWorker::HourlyWorker (HourlyWorker &a)
{
    hourlyRate = a.getRate();
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
}

double HourlyWorker::monthlySalary ()
{
    return 20.8 * 8 * hourlyRate;
}





MonthlyWorker::MonthlyWorker (string name, int rate) : Worker(name)
{
    monthlyRate = rate;
}

MonthlyWorker::MonthlyWorker (MonthlyWorker &a)
{
    monthlyRate = a.getRate();
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
}

double MonthlyWorker::monthlySalary ()
{
    return monthlyRate;
}
