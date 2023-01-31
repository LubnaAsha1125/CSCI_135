/*
Author: Lubna Asha
Course: CSCI-136
Instructor: Tong Yi
Assignment: Lab 11 C

- improved version of LAB 11 B
show who is following who
*/
#include <iostream>
#include <string>
using namespace std;

class Profile {
private:
    string username;
    string displayname;
public:
    // Profile constructor for a user (initializing 
    // private variables username=usrn, displayname=dspn)
    Profile(string usrn, string dspn);
    // Default Profile constructor (username="", displayname="")
    Profile();
    // Return username
    string getUsername();
    // Return name in the format: "displayname (@username)"
    string getFullName();
    // Change display name
    void setDisplayName(string dspn);
};

class Network {
private:
  static const int MAX_USERS = 20; // max number of user profiles
  int numUsers;                    // number of registered users
  Profile profiles[MAX_USERS];     // user profiles array:
                                   // mapping integer ID -> Profile

  // Returns user ID (index in the 'profiles' array) by their username
  // (or -1 if username is not found)
  int findID (string usrn);
  bool following[MAX_USERS][MAX_USERS];
public:
  // Constructor, makes an empty network (numUsers = 0)
  Network();
  // Attempts to sign up a new user with specified username and displayname
  // return true if the operation was successful, otherwise return false
  bool addUser(string usrn, string dspn);
  bool follow(string usrn1, string usrn2);
  void printDot();
};

Profile::Profile()
{
  username = "";
  displayname = "";
}
Profile::Profile(string usrn, string dspn)
{
  username = usrn;
  displayname = dspn;
}
string Profile::getUsername()
{
  return username;
}

Network::Network()
{
  numUsers = 0;
  for (int row = 0; row < MAX_USERS; row++) 
  {
    for (int col = 0; col < MAX_USERS; col++)
      following[row][col] = false;
  }
}

bool Network::follow(string usrn1, string usrn2) {
    int ID1 = findID(usrn1), ID2 = findID(usrn2);

    if (ID1 == -1 || ID2 == -1)
        return false;

    following[ID1][ID2] = true;
    return true;
}

void Network::printDot() {
  cout << "digraph { " << endl;
  for (int i = 0; i < numUsers; i++)
  {
    cout << "  \"@"  << profiles[i].getUsername() << "\"" << endl;
  }
  cout << endl;
  for (int i = 0; i < numUsers; i++)
  {
    for (int j = 0; j < numUsers; j++)
    {
      if (following[i][j] == true)
        cout << "  \"@" << profiles[i].getUsername() <<  "\"" << " -> " << "\"@" << profiles[j].getUsername() << "\"" << endl;
    }
  }
  cout << "}" << endl;
}

bool Network::addUser(string usrn, string dspn)
{
  if (usrn.empty())
    return false;
  if (numUsers == MAX_USERS)
    return false;
  if (findID(usrn) != -1)
    return false;
  for (int i=0; i <usrn.length(); i++)
    {
      if (!isalnum(usrn[i]) || (usrn.empty()) || (numUsers == MAX_USERS) || (findID(usrn) != -1))
      {
        return false;
      }
    }

  profiles[numUsers] = Profile(usrn, dspn);
  numUsers++;
  return true;
}

int Network::findID(string usrn)
{
  for (int i=0; i<numUsers; i++)
    {
      string usedname = profiles[i].getUsername();
      if (usrn == usedname)
        return i;
    }

  return -1;
}

int main() {
    Network nw;
    // add three users
    nw.addUser("mario", "Mario");
    nw.addUser("luigi", "Luigi");
    nw.addUser("yoshi", "Yoshi");

    // make them follow each other
    nw.follow("mario", "luigi");
    nw.follow("mario", "yoshi");
    nw.follow("luigi", "mario");
    nw.follow("luigi", "yoshi");
    nw.follow("yoshi", "mario");
    nw.follow("yoshi", "luigi");

    // add a user who does not follow others
    nw.addUser("wario", "Wario");
    
    // add clone users who follow @mario
    for(int i = 2; i < 6; i++) {
        string usrn = "mario" + to_string(i);
        string dspn = "Mario " + to_string(i);
        nw.addUser(usrn, dspn);
        nw.follow(usrn, "mario");
    }
    // additionally, make @mario2 follow @luigi
    nw.follow("mario2", "luigi");

    nw.printDot();
}
