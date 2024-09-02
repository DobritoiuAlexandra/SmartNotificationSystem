// SmartDeviceAbstractFactory.h
#pragma once
#include "DeviceFactory.h"
#include <memory>

// Abstract Factory class for creating Device factories
class SmartDeviceAbstractFactory {
public:
    // Method for creating PhoneFactory
    virtual std::unique_ptr<DeviceFactory> createPhoneFactory() = 0;

    // Method for creating TabletFactory
    virtual std::unique_ptr<DeviceFactory> createTabletFactory() = 0;

    virtual ~SmartDeviceAbstractFactory() = default; // Virtual destructor
};
