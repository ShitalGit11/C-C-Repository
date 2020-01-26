
#include <iostream>
#include <string>
using namespace std;



string defangIPaddr(string address) {
   string addr = address.c_str();
   rsize_t strmax = sizeof addr;
   const char *delim = ".";
   char *next_token;
   char *token = strtok_s((char *)addr.c_str(), delim, &next_token);
   string s1 = "[.]";
   string s2 = "";
   while (token != NULL)
   {
      if (s2 == "")
         s2 = token;
      else
         s2 = s2 + s1 + token;
         token = strtok_s(NULL, delim, &next_token);
         
   }
   return s2;
}
int main()
{

   string dfg = defangIPaddr("127.0.0.1");
   cout<<dfg;
   return 0;
   
}
