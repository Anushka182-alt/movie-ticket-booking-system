# movie-ticket-booking-system
console based movie ticket booking system using cpp


movie-ticket-booking-system
console based movie ticket booking system using cpp

Movie Ticket Booking System
A console-based C++ application developed for the System Design (TCS-504) course. The project demonstrates Object-Oriented Analysis & Design (OOAD), SOLID principles, inheritance, abstraction, polymorphism, aggregation, and composition.

🎯 Project Objectives
Apply Object-Oriented Design Principles
Demonstrate SOLID Architecture
Implement a Modular C++ System
Simulate a Real-World Movie Ticket Booking Workflow
📋 Features
Movie Catalog Management
Show Scheduling
Visual Seat Layout
Tier-Based Pricing
Ticket Booking & Cancellation
Multiple Payment Methods (UPI, Card, Cash)
Ticket Generation
Seat Availability Validation
Seat Pricing
Seat Type	Price
SILVER	₹150
GOLD	₹250
PLATINUM	₹400
🛠️ Tech Stack
Language: C++
Compiler: g++
Libraries: iostream, string, vector
No External Dependencies
📂 Project Structure
MovieTicketBooking/

├── Movie.cpp
├── Seat.cpp
├── ShowSeat.cpp
├── Screen.cpp
├── Cinema.cpp
├── Customer.cpp
├── Show.cpp
├── Booking.cpp
├── Payment.cpp
├── UpiPayment.cpp
├── CardPayment.cpp
├── CashPayment.cpp
├── PriceCalculator.cpp
├── TicketPrinter.cpp
├── BookingService.cpp
├── main.cpp
├── README.md
├── ClassDiagram.png
└── SequenceDiagram.png
🚀 Compilation
g++ main.cpp -o movie
./movie
🎯 SOLID Principles Used
🎯 SOLID Architecture Alignment
🎯 SOLID Architecture Alignment
Principle	Definition	Implementation in Project
S — Single Responsibility Principle (SRP)	A class should have only one reason to change and should perform a single responsibility.	PriceCalculator calculates ticket prices, TicketPrinter generates tickets, BookingService manages booking operations, and Customer stores customer information.
O — Open/Closed Principle (OCP)	Software entities should be open for extension but closed for modification.	New payment methods can be added by creating a class derived from Payment without changing existing booking or payment code.
L — Liskov Substitution Principle (LSP)	Objects of derived classes should be replaceable with objects of their base class without affecting correctness.	UpiPayment, CardPayment, and CashPayment can be used anywhere a Payment object is expected.
I — Interface Segregation Principle (ISP)	Clients should not be forced to depend on methods they do not use.	The abstract Payment class contains only the pay() method, ensuring derived classes implement only required functionality.
D — Dependency Inversion Principle (DIP)	High-level modules should depend on abstractions rather than concrete implementations.	BookingService interacts with the abstract Payment interface instead of directly depending on UpiPayment, CardPayment, or CashPayment.

🎯 OOP Concepts Used
Encapsulation
Abstraction
Inheritance
Runtime Polymorphism
Composition
Aggregation
Association
Static Members

🛡️ Error Handling

Invalid Seat Validation
Double Booking Protection
Invalid Menu Selection
Booking Cancellation
Atomic Booking Handling
📐 UML Diagrams
ClassDiagram.png
SequenceDiagram.png

👩‍💻 Author

Anushka Rana
B.Tech CSE
Graphic Era Hill University
System Design (TCS-504)
