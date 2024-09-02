// Device.h
#pragma once
#include <string>

// Abstract class for devices
class Device {
public:
    // Pure virtual method for sending notifications
    virtual void sendNotification(const std::string& message) = 0;

    // Pure virtual method for getting the device name
    virtual std::string getName() const = 0;

    virtual ~Device() = default; // Virtual destructor
};
