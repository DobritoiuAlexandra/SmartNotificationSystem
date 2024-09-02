Smart Device Management System
This project implements a smart device management system using Factory and Singleton design patterns. The system supports device creation and centralized notification management.

Features
Device Management: Create and manage different types of devices, including Phone and Tablet.
Factory Pattern: Use factories to create device instances and manage their creation.
Singleton Pattern: Centralize notification management with a singleton NotificationManager.
Notification Handling: Send notifications to all registered devices.
Components
Device Interface: Abstract class defining the operations for devices.
Concrete Devices: Implementations for Phone and Tablet that receive and display notifications.
Factories:
DeviceFactory: Abstract factory for creating devices.
PhoneFactory and TabletFactory: Concrete factories for creating Phone and Tablet instances.
SmartDeviceFactory: Factory for creating device factories.
NotificationManager: Singleton class for managing and sending notifications to registered devices.
