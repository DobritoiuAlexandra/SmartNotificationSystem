// DeviceFactory.h
#pragma once
#include "Device.h"
#include <memory>

// Abstract Factory class
class DeviceFactory {
public:
    // Pure virtual method for creating a device
    virtual std::unique_ptr<Device> createDevice() = 0;

    virtual ~DeviceFactory() = default; // Virtual destructor
};
