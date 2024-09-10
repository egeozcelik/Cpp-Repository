#include "main.h"

#if defined(VALIDATE_CPP)

// Fig. 24.4: Validate.cpp
// Validating user input with regular expressions.
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include <string>
using std::string;

#include "boost/regex.hpp"

bool validate( const string&, const string& ); // validate prototype
string inputData( const string&, const string& ); // inputData prototype

int main()
{
   // enter the last name
   string lastName = inputData( "last name", "[A-Z][a-zA-Z]*" );

   // enter the first name
   string firstName = inputData( "first name", "[A-Z][a-zA-Z]*" );

   // enter the address
   string address = inputData( "address",
      "[0-9]+\\s+([a-zA-Z]+|[a-zA-Z]+\\s[a-zA-Z]+)" );

   // enter the city
   string city =
      inputData( "city", "([a-zA-Z]+|[a-zA-Z]+\\s[a-zA-Z]+)" );

   // enter the state
   string state = inputData( "state",
      "([a-zA-Z]+|[a-zA-Z]+\\s[a-zA-Z]+)" );

   // enter the zip code
   string zipCode = inputData( "zip code", "\\d{5}" );

   // enter the phone number
   string phoneNumber = inputData( "phone number",
      "[1-9]\\d{2}-[1-9]\\d{2}-\\d{4}" );

   // display the validated data
   cout << "\nValidated Data\n\n"
      << "Last name: " << lastName << endl
      << "First name: " << firstName << endl
      << "Address: " << address << endl
      << "City: " << city << endl
      << "State: " << state << endl
      << "Zip code: " << zipCode << endl
      << "Phone number: " << phoneNumber << endl;

   return 0;
} // end of function main

// validate the data format using a regular expression
bool validate( const string &data, const string &expression )
{
   // create a regex to validate the data
   boost::regex validationExpression = boost::regex( expression );
   return boost::regex_match( data, validationExpression );
} // end of function validate

// collect input from the user
string inputData( const string &fieldName, const string &expression )
{
   string data; // store the data collected

   // request the data from the user
   cout << "Enter " << fieldName << ": ";
   getline( cin, data );

   // validate the data
   while ( !( validate( data, expression ) ) )
   {
      cout << "Invalid " << fieldName << ".\n";
      cout << "Enter " << fieldName << ": ";
      getline( cin, data );
   } // end while

   return data;
} // end of function inputData

#endif // defined(VALIDATE_CPP)

