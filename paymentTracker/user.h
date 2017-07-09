#ifndef USER_H
#define USER_H
#include <vector>
#include <string>
using namespace std;
using std::vector;

class User {
 public:
User(string name1);
~User();
double get_amount_owed();
double get_amount_owes();
double get_amount_spent();
string get_name();
void set_amount_spent(double mon);
void set_amount_owed(double mon);
void set_amount_owes(double mon);



 private:
std::string name;
double amount_spent;
double amount_owed;
double amount_owes;

};


#endif