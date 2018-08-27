#include <iostream>
#include <list>
#include <string>

using namespace std;

// Function Delcarations
void populate_list(list<int> &myList);
void fives_list(list<int> &myList);
void remove_ends(list<int> &myList);
void display_list(list<int> &myList, string message);

// Begin Main
int main()
{   // define empty list
    list<int> myList;

    // Invoke functions with desired message in the call for display
    populate_list(myList);
    display_list(myList, "The original list is: ");

    fives_list(myList);
    display_list(myList, "The list with additional numbers is: ");

    myList.reverse();
    display_list(myList, "The list in reverse: ");

    remove_ends(myList);
    display_list(myList,"The list with the ends removed: ");

    return 0; 
}
// End main

// Begin populate_list function
void populate_list(list<int> &myList)
{
    //add values to list
    for(int x = 0; x < 100; x += 10)
    {
        myList.push_back(x);
    }
}
// End populate_list function

// Begin fives_list function  Inserting values into the list using iterator
void fives_list(list<int> &myList)
{
    int num = 5;

    list<int>::iterator it;
    
    //setting iterator the the begining of the list
    it = myList.begin();

    for(int i = 1; i < 10; i++)
    {
        it++; //Next postion of the list
        myList.insert(it, num); //Add to next position
        num += 10;
    }
}
// End fives_list function

// Begin remove_ends function
void remove_ends(list<int> &myList)
{
    //Remove first element in list container
    myList.pop_front();

    //Remove last element in list conatiner
    myList.pop_back();
}
// End remove_ends function

// Begin display_list function
void display_list(list<int> &myList, string message)
{
    // Display whatever string entered in the function call 
    cout << "\n" << message << endl;

    //Display the current state of the list
    for (auto  it = myList.begin(); it != myList.end(); it++)
    {
        cout << *it << " ";
    }

    cout << endl;

    //Display the current list's nodes
    cout << "The number of list nodes is: " << myList.size() << endl;
}
// End display_list function
