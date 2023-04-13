extTicketInfo::extTicketInfo() 
{
   city = "Columbus";
}

void extTicketInfo::setCity(string iCity)
{
   city = iCity;
}

void extTicketInfo::displayInventory(int numDay)
{
   ticketInfo::displayInventory(numDay);
   cout << "City:   " << city << endl;
}
