#include <iostream>
using namespace std;

const int VOLTAGE = 1;
const int CURRENT = 2;
const int RESISTANCE = 3;

void askValues(const string &magnitude1, const string &magnitude2, float &magnitude1Num, float &magnitude2Num);
double calcVoltage();
double calcCurrent();
double calcResistance();

int main()
{

  int choice;

  cout << "What do you want to calc?" << endl;
  cout << "1 - Voltage" << endl;
  cout << "2 - Current" << endl;
  cout << "3 - Resistance" << endl;
  cin >> choice;

  while (choice < 1 || choice > 3)
  {
    cout << "Invalid option" << endl;
    cout << "Type a valid option: ";
    cin >> choice;
  }

  switch (choice)
  {
  case VOLTAGE:
    calcVoltage();
    break;
  case CURRENT:
    calcCurrent();
    break;
  case RESISTANCE:
    calcResistance();
    break;
  }

  return 0;
}

void askValues(const string &magnitude1, const string &magnitude2, float &magnitude1Num, float &magnitude2Num)
{
  cout << "Type the values: " << endl;
  cout << magnitude1 << ": ";
  cin >> magnitude1Num;
  cout << magnitude2 << ": ";
  cin >> magnitude2Num;
}

double calcVoltage()
{
  float current, resistance;

  askValues("Current", "Resistance", current, resistance);

  cout << "Voltage: " << current * resistance;
}

double calcCurrent()
{
  float voltage, resistance;

  askValues("Voltage", "Resistance", voltage, resistance);

  cout << "Current: " << voltage / resistance;
}

double calcResistance()
{
  float voltage, current;

  askValues("Voltage", "Current", voltage, current);

  cout << "Resistance: " << voltage / current;
}