#include "MyFeature.h"
#include <AP_HAL/AP_HAL.h>

void MyFeature::init() {
    hal.console->printf("MyFeature initialized\n");
}

void MyFeature::update() {
    hal.console->printf("MyFeature running\n");
}
