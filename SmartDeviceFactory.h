// SmartDeviceFactory.h
#pragma once
#include "SmartDeviceAbstractFactory.h"
#include "Phone.h"
#include "Tablet.h"

// Concrete Factory class for creating Device factories
class SmartDeviceFactory : public SmartDeviceAbstractFactory {
public:
    std::unique_ptr<DeviceFactory> createPhoneFactory() override {
        return std::make_unique<PhoneFactory>();
    }

    std::unique_ptr<DeviceFactory> createTabletFactory() override {
        return std::make_unique<TabletFactory>();
    }
};
