#include "tddFuncs.h"
#include <iostream>
#include "strFuncs.h"
#include <iostream>
#include <string>
using namespace std;

int main(){

string s1 = "Diba";
string s2 = "abid";
string s3 = "Rats and Mice";
string s4 = "In cat's dream";
string s5 = "Waitress";
string s6 = "A stew, Sir?";
string s7 = "deTartraTED";
char s8[]="WasItACarOrACatlSaw";


ASSERT_TRUE(isAnagram(s1,s2));
ASSERT_TRUE(isAnagram(s3,s4));
ASSERT_TRUE(isAnagram(s5,s6));
ASSERT_TRUE(isPalindrome(s7));
ASSERT_TRUE(isPalindrome(s8));
    
}
