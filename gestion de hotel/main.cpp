#include <iostream>
#include "client.h"
#include "chamber.h"

using namespace std;

int main()
{
    Client c1, c2;
    Chambre room1(23, 654);
    cout << "Saisie de le premier Client : " << endl;
    c1.setClient();

    cout << "Saisie de la deuxième Client : " << endl;
    c2.setClient();

    cout << "\nAffichage des informations des clients : " << endl;
    c1.displayClient();
    c2.displayClient();

    Reservation res1(c1, room1, "01/04/2024", "05/04/2024");


    cout << " Initial Reservation " << endl;
    res1.afficherReservation();
    res1.displayDuration();


    cout << "\nVerifying Reservation Status:" << endl;
    res1.verfiereservation();

    // Attempt to remove the room
    cout << "\nRemoving Room from Reservation:" << endl;
    res1.supprimerChambre();
    res1.afficherReservation();


    cout << "\nAdding New Room to Reservation:" << endl;
    Chambre room2(202, 654321);  // New room
    res1.ajoutduchamber(&room2);
    res1.afficherReservation();


    cout << "\nDisplaying Duration of Reservation:" << endl;
    res1.displayDuration();

    return 0;
}
}
