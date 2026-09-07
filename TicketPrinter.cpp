#include "TicketPrinter.h"
#include <iostream>
using namespace std;
void TicketPrinter::print(const Customer& c, const Show& show,
                          const vector<string>& seats, int total, const string& payment) {
    cout << "\n========== MOVIE TICKET ==========\n";
    cout << "Customer : " << c.getName() << '\n';
    cout << "Movie    : " << show.getMovie().getTitle() << '\n';
    cout << "Show     : " << show.getTime() << '\n';
    cout << "Screen   : " << show.getScreen()->getName() << '\n';
    cout << "Seats    : ";
    for (const auto& s : seats) cout << s << ' ';
    cout << "\nAmount   : Rs." << total << "\nPayment  : " << payment;
    cout << "\n==================================\n";
}
