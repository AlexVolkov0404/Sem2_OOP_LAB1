class SoundAlarmFactory : public AlarmFactory {
public:
    Alarm* createAlarm() {
        return new SoundAlarm();
    }

    Settings* createSettings() {
        return new SoundSettings();
    }
};


class VibrationAlarmFactory : public AlarmFactory {
public:
    Alarm* createAlarm() {
        return new VibrationAlarm();
    }

    Settings* createSettings() {
        return new VibrationSettings();
    }
};


class SoundAlarm : public Alarm {
public:
    void start() {
       
    }

    void stop() {
      
    }
};

// Конкретный класс настроек звукового будильника
class SoundSettings : public Settings {
public:
    void setTime(int hours, int minutes) {
       
    }

    void setVolume(int volume) {
        
    }
};
