#ifndef work_h
#define work_h
#include <iostream>
#include <string>
#include <vector>
#include <stdio.h>
using namespace std;
class Worker
{
public:
    Worker ();
    Worker (string name);
    virtual double monthlySalary () = 0;
    ~Worker ();
    string getName () const;
    void setName (string name);
private:
    string workerName;

};

class HourlyWorker : public Worker
{
public:
    HourlyWorker ();
    HourlyWorker (string name, int rate);
    HourlyWorker (HourlyWorker &a);
    void setRate (double rate);
    double getRate () const;
    virtual double monthlySalary ();
    ~HourlyWorker ();
private:
    double hourlyRate;
};

class MonthlyWorker : public Worker
{
public:
    MonthlyWorker ();
    MonthlyWorker (string name, int rate);
    MonthlyWorker (MonthlyWorker &a);
    void setRate (double rate);
    double getRate () const;
    virtual double monthlySalary ();
    ~MonthlyWorker ();
private:
    double monthlyRate;
};

#endif
