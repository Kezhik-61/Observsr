#ifndef WEATHERDATE_H
#define WEATHERDATE_H

#include <QList>
#include "subject.h"

class WeatherDate : public Subject
{
private:
    QList <Observer*> *observers;
    float temperature;
    float humidity;
    float pressure;
public:
    WeatherDate();

    void registerObserver(Observer *o);
    void removeObserver(Observer *o);
    void notifyObserver();

    void measurementsChanged();
    void setMeasurements(float temperature, float humidity, float pressure);
};

#endif // WEATHERDATE_H
