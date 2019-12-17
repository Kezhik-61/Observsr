#include "weatherdate.h"

WeatherDate::WeatherDate()
{
    observers = new QList<Observer*>();
}

void WeatherDate::registerObserver(Observer *o) {
    observers->append(o);
}

void WeatherDate::removeObserver(Observer *o) {
    int i = observers->indexOf(o);
    if (i >= 0){
        observers->removeAt(i);
    }
}
void WeatherDate::notifyObserver() {
    for (int i = 0; i < observers->size(); i++){
        Observer *observer = observers->at(i);
        observer->update(temperature,humidity,pressure);
    }
}
void WeatherDate::measurementsChanged() {
    notifyObserver();
}

void WeatherDate::setMeasurements(float temperature, float humidity, float pressure) {
    this->temperature = temperature;
    this->humidity = humidity;
    this->pressure = pressure;
    measurementsChanged();
}
