
class AlarmFactory {
public:
    virtual Alarm* createAlarm() = 0;
    virtual Settings* createSettings() = 0;
};

// Абстрактный класс для будильника
class Alarm {
public:
    virtual void start() = 0;
    virtual void stop() = 0;
};

// Абстрактный класс для настроек будильника
class Settings {
public:
    virtual void setTime(int hours, int minutes) = 0;
    virtual void setVolume(int volume) = 0;
};
