#include "reservation.h"
#include <string>
#include <iostream>
using namespace std;





// Getter for Start Date
string Reservation :: getStartDate() const { return startDate; }

// Getter for End Date
string Reservation :: getEndDate() const { return endDate; }




void Reservation :: verfiereservation(){
    if (reservation==true ) {
       cout << "reserve ";
    } else {
        cout << "not reserved ";
    }}


    void Reservation :: ajoutduchamber(Chambre* newRoom){
          if (reservation== false )
        room = newRoom;
      cout << "room is added  ";
      reservation = true;
      else
          cout << " room is already reserved  ";
}
void Reservation :: afficherReservation(){
  if (reservation== true   ){
    room.displayChambre() ;}
  client.displayClient() ;
  cout << "startDate"<<startDate<<endl;
  cout << "endDate"<<endDate<<endl;
  cout << "the room is reserved "<<endl;

}
int Reservation :: calculateDuration() const {

    int startDay, startMonth, startYear;
    int endDay, endMonth, endYear;
    sscanf(startDate.c_str(), "%d/%d/%d", &startDay, &startMonth, &startYear);
    sscanf(endDate.c_str(), "%d/%d/%d", &endDay, &endMonth, &endYear);

   return ((startYear - endYear) * 365 + (startMonth - endMonth) * 30 + (startDay - endDay));
   }
 void Reservation :: displayDuration()  {
    int duration = calculateDuration();
    cout << "Duration: " << duration << " day(s)" << endl;
}
void Reservation :: supprimerChambre() {
    if (reservation && room != nullptr) {
        room = nullptr;  // Remove room
        reservation = false;
        cout << "Room has been removed from the reservation." << endl;
    } else {
        cout << "Error: No room is currently reserved to delete." << endl;
    }
}
