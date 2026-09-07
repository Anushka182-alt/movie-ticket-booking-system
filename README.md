# movie-ticket-booking-system
console based movie ticket booking system using cpp


# Movie Ticket Booking System

A console-based C++ application developed for the System Design (TCS-504) course.

---

## 🎯 Project Objectives

- Apply Object-Oriented Design Principles
- Demonstrate SOLID Architecture
- Implement a Modular C++ System
- Simulate a Real-World Movie Ticket Booking Workflow

---

## 📋 Features

- Movie Catalog Management
- Show Scheduling
- Visual Seat Layout
- Tier-Based Pricing
- Ticket Booking & Cancellation
- Multiple Payment Methods (UPI, Card, Cash)
- Ticket Generation

---

## 🛠️ Tech Stack

- Language: C++
- Compiler: g++
- Libraries: iostream, string, vector

---

## 🎯 SOLID Architecture Alignment

| Principle | Implementation in Project |
|------------|--------------------------|
| **S — Single Responsibility Principle** | `PriceCalculator` calculates ticket prices, `TicketPrinter` handles ticket generation, and `BookingService` manages booking workflow and state. Each class has a single well-defined responsibility. |
| **O — Open/Closed Principle** | The payment system is designed to be extensible. New payment methods can be introduced by creating a new class derived from `Payment` without modifying existing booking or payment logic. |
| **L — Liskov Substitution Principle** | Derived payment classes such as `UpiPayment`, `CardPayment`, and `CashPayment` can be substituted wherever a `Payment` reference or pointer is expected without affecting system correctness. |
| **I — Interface Segregation Principle** | The `Payment` abstraction exposes only the `pay()` operation and does not force derived classes to implement unnecessary methods. |
| **D — Dependency Inversion Principle** | High-level modules such as `BookingService` interact with the abstract `Payment` class rather than concrete payment implementations. |

---

## 🎯 OOP Concepts Used

- Encapsulation
- Abstraction
- Inheritance
- Runtime Polymorphism
- Composition
- Aggregation
- Association

---

## 📐 UML Diagrams

- ClassDiagram.png
- SequenceDiagram.png

---

## 👩‍💻 Author

**Anushka Rana**

B.Tech CSE  
Graphic Era Hill University  
System Design (TCS-504)
