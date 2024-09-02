// Phone.h
#pragma once
#include "Device.h"
#include <iostream>

// Concrete Device class: Phone
class Phone : public Device {
public:
    void sendNotification(const std::string& message) override {
        std::cout << "Phone Notification: " << message << std::endl;
    }

    std::string getName() const override {
        return "Phone";
    }
};

// PhoneFactory.h
#pragma once
#include "DeviceFactory.h"
#include "Phone.h"

// Concrete Factory class for creating Phone instances
class PhoneFactory : public DeviceFactory {
public:
    std::unique_ptr<Device> createDevice() override {
        return std::make_unique<Phone>();
    }
};
