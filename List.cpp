#include "List.h"
#include <iostream>
List::List()
{
    head = nullptr;
}

	// Destructor
	// Description: Destruct a List object, releasing heap-allocated memory.
List::~List()
{
    Patient* current = head;
    while( current != 0 ) {
        Patient* next = current->getNext();
        delete current;
        current = next;
    }
head = 0;
}

	// Description: Returns the total element count currently stored in List.
int  List::getElementCount() const
{
    return elementCount;
}

	// Description: Insert an element.
	// Precondition: newElement must not already be in data collection.
	// Postcondition: newElement inserted and elementCount has been incremented.
bool List::insert(const Patient& newElement)
{
    if(!head)
    {
        head->Next = newElement;
        return false;
    }
    if(!List::search(newElement))
    {
        Patient* next_of_parent = SaveParent->Next;
        SaveParent -> Next = newElement;
        return true; /** ASK IT **/
    }
    return false;
}

	// Description: Remove an element.
	// Postcondition: toBeRemoved is removed and elementCount has been decremented.
bool List::remove( const Patient& toBeRemoved )
{
    Patient* pleaseDontDeleteMe = List::search(toBeRemoved);
    if(!List::search(toBeRemoved))
    {
        SaveParent->Next = pleaseDontDeleteMe->Next;
        delete pleaseDontDeleteMe;
        return true; // Deleting prossess was done correctly ;
    }
    return false;//it means we did not find the node in list
}

	// Description: Remove all elements.
void List::removeAll()
{
    List::~List();/** ASK IT **/
}

	// Description: Search for target element.
	//              Returns a pointer to the element if found,
	//              otherwise, returns NULL.
Patient* List::search(const Patient& target)
{
    Patient* curr = head;
    while(curr)
    {
        if(curr->CareCard < target.CareCard)
            break;
        if(curr->Adderess = target.Adderess &&
           curr->Name     = target.Name     &&
           curr->Phone    = target.Phone    &&
           curr->Email    = target.Email    &&
           curr->CareCard = target.CareCard  )
            return curr;
        SaveParent = curr;
        curr = curr->Next;
    }
    return nullptr;
}

	// Description: Prints all elements stored in List by descending order of search key.
void List::printList()
{
    Patient* curr = head;
    while(curr)
    {
        cout << *curr;
        curr = curr->Next;
    }
}
