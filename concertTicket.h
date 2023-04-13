class ticketInfo {
   public:
      void displayInventory(int numDay);
      bool checkTickets(char ticket, int numTickets);
      void updateTickets(char ticket, int numTickets);
      
   private:
      int ticketA = 25;		// Artist's Circle tickets
      int ticketM = 400;	// Main Floor tickets
      int ticketB = 200;	// Balcony tickets
      
};

#include "concertTicketImp.cpp"
