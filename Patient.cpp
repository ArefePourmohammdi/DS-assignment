#include <iostream>
#include "Patient.h"
#include <string.h>
	// Default Constructor
	// Description: Create a patient with a care card number of "0000000000".
	// Postcondition: All data members set to "To be entered",
	//                except the care card number which is set to "0000000000".
Patient::Patient()
{
   Name     = "To be entered";
   Address = "To be entered";
   Phone    = "To be entered";
   Email    = "To be entered";
   CareCard = "0000000000";
   Next     = nullptr;
}

	// Parameterized Constructor
	// Description: Create a patient with the given care card number.
	// Postcondition: If aCareCard does not have 10 digits, then care card is set to "0000000000".
	//                All other data members set to "To be entered".
Patient::Patient(string aCareCard)
{
   Name     = "To be entered";
   Address = "To be entered";
   Phone    = "To be entered";
   Email    = "To be entered";
   Next     = nullptr;
   if(aCareCard.length() != 10)
        CareCard = "0000000000";
   else
        CareCard = aCareCard;
}
Patient::Patient(string aCareCard , string aPhone , string anEmail , string aName , string anAdderess)
{
   Name     = aName;
   Address = anAdderess;
   Phone    = aPhone;
   Email    = anEmail;
   Next     = nullptr;
   if(aCareCard.length() != 10)
        CareCard = "0000000000";
   else
        CareCard = aCareCard;
}


	// Add more parameterized constructors here!

	// Getters and setters
	// Description: Returns patient's name.
string Patient::getName() const
{
    return Name;
}

	// Description: Returns patient's address.
string Patient::getAddress() const
{
    return Address;
}

	// Description: Returns patient's phone.
string Patient::getPhone() const
{
    return Phone;
}

	// Description: Returns patient's email.
string Patient::getEmail() const
{
    return Email;
}

	// Description: Returns patient's care card.
string Patient::getCareCard() const
{
    return CareCard;
}

Patient* Patient::getNext() const
{
    return Next;
}
	// Description: Sets the patient's name.
void Patient::setName(const string aName)
{
    Name = aName;
}

	// Description: Sets the patient's address.
void Patient::setAddress(const string anAddress)
{
    Address = anAddress;
}

	// Description: Sets the patient's phone.
void Patient::setPhone(const string aPhone)
{
    Phone = aPhone;
}

	// Description: Sets the patient's email.
void Patient::setEmail(const string anEmail)
{
    Email = anEmail;
}

	// Overloaded Operators
	// Description: Comparison operator. Compares "this" Patient object with "rhs" Patient object.
	//              Returns true if both Patient objects have the same care card number.
bool Patient::operator == (const Patient & rhs)
{
    if (this->CareCard == rhs.CareCard)
        return true;
    else
        return false;
}

	// Description: Greater than operator. Compares "this" Patient object with "rhs" Patient object.
	//              Returns true if the care card number of "this" Patient object is > the care card
	//              number of "rhs" Patient object.
bool Patient::operator > (const Patient & rhs)
{
   if (this->CareCard > rhs.CareCard)
        return true;
    else
        return false;
}

	// Description: Less than operator. Compares "this" Patient object with "rhs" Patient object.
	//              Returns true if the care card number of "this" Patient object is < the care card
	//              number of "rhs" Patient object.
bool Patient::operator < (const Patient & rhs)
{
    if (this->CareCard < rhs.CareCard)
        return true;
    else
        return false;
}

	// For testing purposes!
	// Description: Prints the content of "this".
ostream& operator<<(ostream & os, const Patient & p)
{
    os << p.Address << " " << p.CareCard << " " << p.Email << " " << p.Name << " " << p.Phone << "\n";
    return os;
}
