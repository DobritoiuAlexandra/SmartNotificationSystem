// main.cpp
#include "SmartDeviceFactory.h"
#include "NotificationManager.h"
#include <iostream>

int main() {
    // Create a SmartDeviceFactory instance
    SmartDeviceFactory factory;

    // Create PhoneFactory and TabletFactory using the SmartDeviceFactory
    auto phoneFactory = factory.createPhoneFactory();
    auto tabletFactory = factory.createTabletFactory();

    // Create Phone and Tablet devices
    auto phone = phoneFactory->createDevice();
    auto tablet = tabletFactory->createDevice();

    // Get the singleton instance of NotificationManager
    auto& manager = NotificationManager::getInstance();

    // Register devices with the NotificationManager
    manager.registerDevice(std::move(phone));
    manager.registerDevice(std::move(tablet));

    // Send a notification to all registered devices
    manager.notifyAll("New update available!");

    return 0;
}
