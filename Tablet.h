// Tablet.h
#pragma once
#include "Device.h"
#include <iostream>

// Concrete Device class: Tablet
class Tablet : public Device {
public:
    void sendNotification(const std::string& message) override {
        std::cout << "Tablet Notification: " << message << std::endl;
    }

    std::string getName() const override {
        return "Tablet";
    }
};

// TabletFactory.h
#pragma once
#include "DeviceFactory.h"
#include "Tablet.h"

// Concrete Factory class for creating Tablet instances
class TabletFactory : public DeviceFactory {
public:
    std::unique_ptr<Device> createDevice() override {
        return std::make_unique<Tablet>();
    }
};
