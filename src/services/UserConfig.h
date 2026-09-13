#ifndef OSSM_SOFTWARE_USERCONFIG_H
#define OSSM_SOFTWARE_USERCONFIG_H

#include "Arduino.h"

namespace UserConfig {
    enum HomingType {None, Default, SingleSided, DoubleTap};

    float getSpeedCurve();
    void setSpeedCurve(float value);

    float getSensorLimit();
    void setSensorLimit(float value = 6.0f);

    std::string getDeviceName();
    void setDeviceName(String value);

    bool getDirection();
    void setDirection(bool value);
    void reverseDirection();

    HomingType getHomingType();
    void setHomingType(HomingType value = SingleSided);

    float getRailLength();
    void setRailLength(float value = 450.0);

    float getMaxAcceleration();
    void setMaxAcceleration(float value = 1000.0);

    bool getReHome();
    void setReHome(bool value);

    float getMotorRPM();
    void setMotorRPM(float value = 500.0f);

    float getMotorStepsPR();
    void setMotorStepsPR(float value = 2000.0);
    
    float getPulleyTeeth();
    void setPulleyTeeth(float value = 30.0);
    
    float getBeltPitch();
    void setBeltPitch(float value = 4.7);
    
    float getStepsPerMM(float value = 1);
    void setStepsPerMM();

    float getMaxSpeedMMS();
    void setMaxSpeedMMS();

    float getMaxRailLength();
    float getMinRailLength();

    float getHomingSpeed();
    void setHomingSpeed(float value = 10.0);
}
#endif  // OSSM_SOFTWARE_USERCONFIG_H
