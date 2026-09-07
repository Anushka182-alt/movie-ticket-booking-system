#include <iostream>
#include <sstream>
#include <vector>
#include <memory>
#include "Movie.h"
#include "Cinema.h"
#include "Show.h"
#include "Customer.h"
#include "BookingService.h"
#include "UpiPayment.h"
#include "CardPayment.h"
#include "CashPayment.h"
using namespace std;

vector<string> parseSeats(const string& input) {
    vector<string> result;
    string x; stringstream ss(input);
    while (ss >> x) result.push_back(x);
    return result;
}

int main() {
    Movie m1(1, "Inception", "Sci-Fi", 148);
    Movie m2(2, "Interstellar", "Sci-Fi", 169);
    Cinema cinema("GEHU Cinemas");

    vector<Show> shows;
    shows.emplace_back(1, m1, &cinema.getScreen(0), "10:00 AM");
    shows.emplace_back(2, m1, &cinema.getScreen(0), "06:00 PM");
    shows.emplace_back(3, m2, &cinema.getScreen(1), "02:00 PM");

    BookingService service;
    Customer customer(1, "Anushka", "9999999999");

    int choice;
    while (true) {
        cout << "\n========== MOVIE TICKET BOOKING ==========\n";
        cout << "1. View Movies\n2. View Shows\n3. View Seat Layout\n";
        cout << "4. Book Ticket\n5. Cancel Booking\n6. View Bookings\n0. Exit\n";
        cout << "Enter choice: ";
        if (!(cin >> choice)) break;

        if (choice == 0) break;

        if (choice == 1) {
            m1.display(); m2.display();
        } else if (choice == 2) {
            for (const auto& s : shows) s.display();
        } else if (choice == 3) {
            int showId; cout << "Enter show ID: "; cin >> showId;
            bool found = false;
            for (auto& s : shows) if (s.getId() == showId) {
                s.getScreen()->displaySeats(); found = true;
            }
            if (!found) cout << "Invalid show ID.\n";
        } else if (choice == 4) {
            int showId; string input;
            cout << "Enter show ID: "; cin >> showId;
            Show* selectedShow = nullptr;
            for (auto& s : shows) if (s.getId() == showId) selectedShow = &s;
            if (!selectedShow) { cout << "Invalid show ID.\n"; continue; }

            selectedShow->getScreen()->displaySeats();
            cout << "Enter seat numbers separated by spaces (e.g. A1 A2): ";
            cin.ignore();
            getline(cin, input);
            vector<string> seats = parseSeats(input);

            cout << "Payment: 1.UPI  2.Card  3.Cash : ";
            int p; cin >> p;
            unique_ptr<Payment> payment;
            if (p == 1) payment = make_unique<UpiPayment>();
            else if (p == 2) payment = make_unique<CardPayment>();
            else if (p == 3) payment = make_unique<CashPayment>();
            else { cout << "Invalid payment method.\n"; continue; }

            service.createBooking(customer, *selectedShow, seats, *payment);
        } else if (choice == 5) {
            int id; cout << "Enter booking ID: "; cin >> id;
            service.cancelBooking(id);
        } else if (choice == 6) {
            service.displayBookings();
        } else {
            cout << "Invalid menu selection.\n";
        }
    }
    cout << "Thank you for using Movie Ticket Booking System!\n";
    return 0;
}
