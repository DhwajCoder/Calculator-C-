#include<iostream>
#include<string>
using namespace std;
string input, num1, oper1, actual_num_1;


void user_input(){
    cin>>input;
}
void format_input(){
    for(int i=0; i<input.length(); i++){
        if(isdigit(input.at(i))){
            // cout<<"yes";
            num1+=input.at(i);
        }
        else{
            oper1=input.at(i);
            actual_num_1=num1;
        }
    }
    cout<<num1<<endl;
    cout<<oper<<endl;
}
  
int main()
{
    user_input();
    format_input();
    return 0;
}
