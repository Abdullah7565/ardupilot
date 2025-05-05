#include "MyFeature.h"
#include <stdio.h>  //für printf
#include <AP_HAL/AP_HAL.h> //für   hal.console
#include <GCS_MAVLink/GCS.h> //für printf gcs().send_text
#extern const AP_HAL::HAL& hal;


void MyFeature::init() {
    printf("Hallo CiS Von (C/Cpp)\n");
    hal.console->printf("Hallo CiS Von HAL\n");
    gcs().send_text(MAV_SEVERITY_INFO,"Hallo CiS von GCS\n");

}
  
