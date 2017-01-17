//
// Created by riki on 11/01/17.
//

#include "DriverDescriptor.h"

DriverDescriptor::DriverDescriptor(Driver* driver1, int descriptorCommunicateClient1) {
    driver = driver1;
    descriptorCommunicateClient = descriptorCommunicateClient1;
    prevDrivingTime = -1;
}
DriverDescriptor::DriverDescriptor() {

}
DriverDescriptor::~DriverDescriptor() {

}
void DriverDescriptor::setDescriptor(int sd) {
    descriptorCommunicateClient = sd;
}
int DriverDescriptor::getDescriptor() {
    return descriptorCommunicateClient;
}
Driver* DriverDescriptor::getDriver() {
    return driver;
}
void DriverDescriptor::setTime(int time) {
    prevDrivingTime = time;
}
int DriverDescriptor::getPrevTime() {
    return prevDrivingTime;
}