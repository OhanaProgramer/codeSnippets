// Branches




#include <iostream>

using namespace std;




int main()

{

 /*

 // BOOLEAN DATA TYPE

 // Boolean refers to a quantity that has only

 // 2 possible values, true and false




 // program to determine if a number is small or large




 // declare variables

 bool isLarge = false;

 bool isNegative = false;

 int num = 0;




 // prompt user to enter a number

 cout << "Enter an integer: ";

 cin >> num;




 if ((num < -100) || (num > 100)) {

 isLarge = true;

 }

 else {

 isLarge = false;

 }




 // alternative way to set a bool variable

 isNegative = (num < 0);




 cout << "(isLarge: " << isLarge;

 cout << " isNegative: " << isNegative << ")" << endl;




 cout << "You entered a ";

 if (isLarge && isNegative) {

 cout << "large negative number" << endl;

 }

 else if (isLarge && !isNegative) {

 cout << "large positive number" << endl;

 }

 else {

 cout << "small number" << endl;

 }

 */

 // STRING DATA TYPE

 // A string is a sequence of characters, each character 

 // element having a position number in memory




 // given the string "hello", what is the position of the 

 // character 'h'? 0




 // to access a particular position within a string, we use

 // the .at(i) where i is the position or index




 // string name = "hello"; how do we access the second 

 // character of the the variable name? name.at(1)

 // replace the third character in the string name with an 'a'

 // name.at(2) = 'a';

 // C-style string position access uses the square brackets []

 // name[2] = 'a';




 string name = "mickey";

 cout << "STRING DATA TYPE AND FUNCTIONS" << endl;

 cout << name.length() << endl; // prints 6

 cout << name.empty() << endl; // .empty() function returns true/false




 name.clear(); // .clear() function clears out the string and 

               // does not return a value




 cout << "string length after clear " << name.length() << endl; // prints 0

 cout << "empty function after clear " << name.empty() << endl; // prints non-zero




 name.resize(10); // .resize() function resized the string

 cout << "length of string after resize is " << name.length() << endl;




 //name = "mickey mouse";




 // cout << "name is " << name << endl;




 // INITIALIZING STRINGS

 string myString = "Hello";

 string studentName = "Kay, Jo";

 string teacherName("Kay, Amy");




 cout << myString << endl; // original string

 cout << myString.length() << endl; // original string length




 // STRING MODIFICATIONS

 // push_back(c) append character c to the end of the string,

 // increasing the length of the string by 1




 myString.push_back('!'); // myString is now Hello!

 cout << "myString after push_back is " << myString << endl; // string after the push_back

 cout << "myString length after push_back is " << myString.length() << endl;




 myString = "Hello";




 cout << "original string: " << myString << endl; // original string

 cout << "length of original string: " << myString.length() << endl;

 // append(str) append a copy of the string str, increasing the

 // string's length

 myString.append(" there!");

 cout << "string after append" << myString << endl;

 cout << "length of string after append: " << myString.length() << endl;

 // insert(pos, str) insert a copy of a string str at the specified

 // position (pos), increasing the string's length

 myString = "Hello";

 myString.insert(3, "....");

 cout << "myString after insert: " << myString << endl;




 // replace(pos, n, str) replaces elements [pos] ... [pos + n] by a

 // copy of string str. pos is the position where the replacement

 // starts, n is the number of characters to replace, and str

 // is the string it will replace the characters with

 myString = "Hello";

 myString.replace(1, 2, "EEELLL"); // HEEELLLlo

 cout << "myString after replace function " << myString << endl;




 // STRING CONCATENATION

 // s1 + s2 retruns a string consisting of s1 with s2 appended

 myString = "Mickey";

 string myString2 = " Club House";

 string newString;

 newString = myString + " Mouse" + myString2;

 cout << newString << endl;




 // STRING SEARCH FUNCTIONS

 // find(x) returns the positioin of the first occurence of item x

 // in the string, else it returns -1

 string myString3 = "Boo Hoo!";

 cout << "! found at position " << myString3.find('!') << endl;

 cout << "Boo found at position " << myString3.find("Boo") << endl;




 cout << "oo found at position " << myString3.find("oo") << endl; // returns position 1




 // find(x, pos) same as the find function but starts search at position pos

 cout << "oo found at position " << myString3.find("oo", 2) << endl; // returns postion 5




 // substr(pos, n) returns the substring starting at position pos having

 // n char

 cout << "Substring is " << myString3.substr(4, 3) << endl;




 // STRING COMPARISON

 // ASCII code for 'A' is 65 and for 'a' is 97




 // string comparison examples

 // "this" == "This" evaluates to false

 // "abs" < "absolute" evaluates to true

 // "absolute" <= "absolute" evaluates to true

 // "absolute" <= "Absolute" evaluates to false




 // CHARACTER OPERATIONS

 // isalpha(c) returns true if character c is alphabetic (a-z or A-Z)

 string myString4 = "Hey9!";

 cout << isalpha(myString4.at(0)) << endl;// evaluates to true and will

 // print a 1 or non-zero value

 cout << isalpha(myString4.at(3)) << endl;




 // isdigit(c) returns true if character c is a numeric digit (0-9)




 // isspace(c) returns true if character c is a space




 // toupper(c) returns the uppercase version of an alphabetic character




 // tolower(c) retuns the lowercase version of an alphabetic character

 cout << tolower(myString4.at(0)) << endl;




 return 0;

}