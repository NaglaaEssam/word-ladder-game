// Title:   Assignment III- Task 2 - Problem 9
//purpose:Taking a word and return another word has a specific meaning .
#include <iostream>

using namespace std;
int i=0; // a global variable that can change in all code.
void convert(string s1,string s2) //function takes two words and return the second in the function.
{

    if(s1.size()==s2.size()){
            s1[i]=s2[i];    //passes the content of second word into first word.
            cout<<s1[i];    //return the second word.
            i++;
            if(i<s1.size()){
            convert(s1,s2);

        }
        }
        else
            cout<<"Not Valid "<<endl;


}

int main()
{
    string start,End;
    cout<<"The Start Word is "<<endl;
    cin>>start;
    cout<<"The End Word is "<<endl;
    cin>>End;
    cout<<"The ladder word is :  ";
    convert(start,End);
    return 0;
}
