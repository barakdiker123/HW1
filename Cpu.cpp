

#define MAX_STR_LENGTH 10
#include <string>
#include <iostream>
#include "Cpu.h"
Cpu::Cpu(){}
Cpu::Cpu(double clockRate,std::string manufactorName,int yearManufactor):clockRate(clockRate)
,manufactorName(manufactorName),yearManufactor(yearManufactor)
{}
void Cpu::setClockRate(double in){
    this->clockRate = in;
}
const double Cpu::getclockRate() const{
    return this->clockRate;
}
void Cpu::setManufactorName(std::string in){
    if(in.length() <= MAX_STR_LENGTH){
        this->manufactorName=in;
    }
}
const std::string Cpu::getManufactorName() const{
    return this->manufactorName;
}
void Cpu::setYearManufactor(int in){
    this->yearManufactor = in;
}
const int Cpu::getYearManufactor(){
    return this->yearManufactor;
}

void Cpu::print() const{
    std::cout << "manufactorName" <<":"<< this->manufactorName << std::endl;
    std::cout << "clockRate" <<":"<< this->clockRate << std::endl;
    std::cout << "yearManufactor" <<":"<< this-> yearManufactor<< std::endl;
}

