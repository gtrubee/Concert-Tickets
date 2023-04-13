#include <iostream>
#include "concertTicket.h"
#include "concertTicketNew.h"
#include <string>
using namespace std;

int const MAX_CONCERT_DAYS = 12;

int getDay();
char getTicket();
int getNumberOfTickets();
void displayReport(extTicketInfo extDays[]);
string getCity();

int main()
{
   char menuSelection;
   char ticketType;
   int numDay;
   int numTickets;
   extTicketInfo extDays[MAX_CONCERT_DAYS + 1];
   string city;
   
   while(menuSelection != 'Q') { 
      cout << "Please input a character: " << endl;
      cout << "D - Display inventory" << endl;
      cout << "S - Buy tickets" << endl;
      cout << "R - Display report" << endl;
      cout << "C - Select city" << endl;
      cout << "Q - Quit program" << endl;
      cin >> menuSelection;
     
      switch (menuSelection) {
      case 'D':
         numDay = getDay();
         extDays[numDay].displayInventory(numDay);
         break;
      case 'S':
         numDay = getDay();
         ticketType = getTicket();
         numTickets = getNumberOfTickets();
         if (extDays[numDay].checkTickets(ticketType, numTickets) == true){		// Check if there are enough tickets for that ticket section
            extDays[numDay].updateTickets(ticketType, numTickets);
            cout << "Thank you for your purchase! You purchased: " << numTickets << " tickets in section " << ticketType << endl;  
         }
         else {
            cout << "Sorry, that amount of tickets is not available." << endl;
         }
         break;
      case 'R':
         displayReport(extDays);
         break;
      case 'C':
         numDay = getDay();
         city = getCity();
         extDays[numDay].setCity(city);
         break;
      case 'Q':
         menuSelection = 'Q';
         break;
      default:
         cout << "Invalid input: Please input a character: " << endl;
         cout << "D - Display inventory" << endl;
         cout << "Q - Quit Program" << endl;
      } 
   }
} 

// Prompt user for number of days, and only accept a value 1-MAX_CONCERT_DAYS
int getDay() {
  int numDay;
  do {
      cout << "Please input the concert day (1- " << MAX_CONCERT_DAYS << "): " << endl;
      cin >> numDay;
      if(numDay < 1 || numDay > MAX_CONCERT_DAYS) {
         cout << "Input was not in the " << MAX_CONCERT_DAYS << "  day period. ";
         numDay = -1;
      }
   }
   while(numDay == -1);
   return numDay;
}

// Prompt user for type of ticket and only accept A, M, or B
char getTicket() {
   char ticketType;
   do {
      cout << "Please input the ticket you want: ";
      cout << "A - Artist's Circle    | ";
      cout << "M - Main Floor    | ";
      cout << "B - Balcony" << endl;
      cin >> ticketType;
      switch(ticketType)
      {
      case 'A':
         break;
      case 'M':
         break;
      case 'B':
         break;
      default:
         cout << "Invalid input. ";
         ticketType = 'L';
         break;
      }
   }
   while(ticketType == 'L');
   return ticketType;
}

// Prompt user for number of tickets
int getNumberOfTickets() {
   int numTickets;
   cout << "Enter the amount of tickets you would like to purchase: " << endl;
   cin >> numTickets;
   return numTickets;
}

void displayReport(extTicketInfo extDays[]) {
   for(int i = 1; i < MAX_CONCERT_DAYS + 1; i++) {
      extDays[i].displayInventory(i);
   }
}

string getCity()
{
   string city;
   cout << "Enter city name: ";
   cin >> city;
   cout << endl;
   return city;
}
