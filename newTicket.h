class extTicketInfo: public ticketInfo {
   public:
      extTicketInfo();
      void setCity(string iCity);
      void displayInventory(int numDay);
   private:
      string city;
};

#include "concertTicketNewImp.cpp"
