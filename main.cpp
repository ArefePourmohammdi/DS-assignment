#include <iostream>
#include "Patient.cpp"
#include "List.cpp"
using namespace std;

Patient* createPatient();
int main()
{
    int x;
    string aName , aPhone, aCareCard, anEmail, anAddress;
    Patient patient;
    cout << "Choose one of the following options:" << endl;
    cout << "1. Add a new patient." << endl;
    cout << "2. Remove a patient ." << endl;
    cout << "3. Search a patient ." << endl;
    cout << "4. Change information of a patient ." << endl;
    cin  >> x;
    switch(x)
    {
    case 1:
        createPatient();
        break;
    case 2:
        createPatient();
        break;
    case 3:
        createPatient();
        break;
    case 4:
        createPatient();
        break;
    }
    return 0;
}
Patient* createPatient()
{
    string aName , aPhone, aCareCard, anEmail, anAddress;

    cout << "Enter requested information , if you don't want to inter a field inter -1 ." << endl;
    cout << "Name: "    ; cin >> aName; /** use getline here **/
    cout << "Phone: "   ; cin >> aPhone;
    cout << "CareCard: "; cin >> aCareCard;
    cout << "Email: "   ; cin >> anEmail;
    cout << "Address: " ; cin >> anAddress;
    if(aName      == "-1")
        aName     == "To be entered";
    if(aPhone     == "-1")
        aPhone    == "To be entered";
    if(aCareCard  == "-1")
        aCareCard == "To be entered";
    if(anEmail    == "-1")
        aCareCard == "To be entered";
    if(anAddress  == "-1")
        anAddress == "To be entered";
    Patient patient( aCareCard ,  aPhone ,  anEmail ,  aName , anAddress);
}
