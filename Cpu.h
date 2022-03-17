//Cpu.h
#include <string>

class Cpu{
private:
    double clockRate;
    std::string manufactorName;
    int yearManufactor;
public:
    Cpu();
    Cpu(double ,std::string,int);
    void setClockRate(double );
    const double getclockRate() const;
    void setManufactorName(std::string );
    const std::string getManufactorName() const;
    void setYearManufactor(int );
    const int getYearManufactor();
    void print() const;
};