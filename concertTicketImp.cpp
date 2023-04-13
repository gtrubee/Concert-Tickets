#include <iostream>
using namespace std;

// Display a report for the number of tickets on requested day
void ticketInfo::displayInventory(int numDay) {
   cout << "Day: " << numDay << "   | ";
   cout << "Artist's Circle seats: " << ticketA << "   | ";
   cout << "Main Floor seats: " << ticketM << "   | ";
   cout << "Balcony seats: " << ticketB << endl;
}

// Check if there are enough tickets
bool ticketInfo::checkTickets(char ticket, int numTickets) {
   switch (ticket)
   {
   case 'A':
      return ticketA > numTickets;
      break;
   case 'M':
      return ticketM > numTickets;
      break;
   case 'B':
      return ticketB > numTickets;
      break;
   }
}

// Update the number of tickets left
void ticketInfo::updateTickets(char ticket, int numTickets) {
   switch (ticket)
   {
   case 'A':
      ticketA -= numTickets;
      break;
   case 'M':
      ticketM -= numTickets;
      break;
   case 'B':
      ticketB -=  numTickets;
      break;
   }
}
