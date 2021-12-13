//Ramone Fields
#include <iostream>
#include <vector>
using namespace std;
 

void reverseWords(string t){                  // Word reversal function
    vector<string> Tmp;                     // All words will be stored in a temporary vector.
    string STR = "";
    for (int i = 0; i < t.length(); i++){

         
       
        
        if (t[i] == ' '){                      // Check to see if we come across any empty space.

        Tmp.push_back(STR);               // push word(str) to vector and make str NULL
            STR = "";                          
        }
 
       
        
        else                                   // Else add character to str to form current word
            STR += t[i];                     
    }
   
    
    Tmp.push_back(STR);                      // Last but not least, add it to the vector.
 
  
    int i;
    for (i = Tmp.size() - 1; i > 0; i--)      // Now print in vector from last to first.
        cout << Tmp[i] << " ";
    
    cout << Tmp[0] << endl;                   // Last but not least, print it.
}
 

int main(){
    string t = "Browns are going to the superbowl";    // Testing code

    reverseWords(t);                               // calling function on variable t

    return 0;
}