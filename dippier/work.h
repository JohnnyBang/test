#ifndef work_h
#define work_h
#include <iostream>
#include <string>
#include <vector>
#include <stdio.h>
using namespace std;
class Workers
{
public:
    Workers ();
    virtual void monthlySalary () = 0;
    ~Workers ();
};

class HourlyWorker : Workers
{
public:
    HourlyWorker ();
    HourlyWorker (string name);
    HourlyWorker (HourlyWorker &a);
    string getName () const;
    void setName (string name);
    double getAmmount () const;
    void setRate (double rate);
    double getRate () const;
    virtual void monthlySalary ();
    void printFiveFirst () const;
    void printThreeLast () const;
    ~HourlyWorker ();
private:
    string workerName;
    double hourlyRate, ammountMoney = 0;
    vector <HourlyWorker> workers;
};

class MonthlyWorker : Workers
{
public:
    MonthlyWorker ();
    MonthlyWorker (string name);
    MonthlyWorker (MonthlyWorker &a);
    string getName () const;
    void setName (string name);
    double getAmmount () const;
    void setRate (double rate);
    double getRate () const;
    virtual void monthlySalary ();
    void printFiveFirst () const;
    void printThreeLast () const;
    ~MonthlyWorker ();
private:
    string workerName;
    double monthlyRate, ammountMoney;
    vector <MonthlyWorker> workers;
};

#endif
