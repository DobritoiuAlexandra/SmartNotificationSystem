// NotificationManager.h
#pragma once
#include "Device.h"
#include <vector>
#include <memory>
#include <mutex>

// Singleton class for managing notifications
class NotificationManager {
public:
    // Method to get the singleton instance
    static NotificationManager& getInstance() {
        static NotificationManager instance;
        return instance;
    }

    // Method to register a device
    void registerDevice(std::shared_ptr<Device> device) {
        devices.push_back(device);
    }

    // Method to notify all registered devices
    void notifyAll(const std::string& message) {
        for (auto& device : devices) {
            device->sendNotification(message);
        }
    }

private:
    std::vector<std::shared_ptr<Device>> devices;

    // Private constructor to prevent instantiation
    NotificationManager() = default;

    // Delete copy constructor and assignment operator
    NotificationManager(const NotificationManager&) = delete;
    NotificationManager& operator=(const NotificationManager&) = delete;
};
