#include <QCoreApplication>
#include "weatherdate.h"
#include "currentconditionsdisplay.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    WeatherDate *weatherDate = new WeatherDate();
    CurrentConditionsDisplay *currentDisplay = new CurrentConditionsDisplay(weatherDate);

    weatherDate->setMeasurements(15, 48, 750);
    weatherDate->setMeasurements(14, 48, 741);
    weatherDate->setMeasurements(13, 49, 742);

    return a.exec();
}
