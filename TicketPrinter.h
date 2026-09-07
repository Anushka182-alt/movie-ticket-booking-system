#ifndef TICKETPRINTER_H
#define TICKETPRINTER_H
#include "Customer.h"
#include "Show.h"
#include <vector>
class TicketPrinter {
public:
    static void print(const Customer&, const Show&, const std::vector<std::string>&, int, const std::string&);
};
#endif
