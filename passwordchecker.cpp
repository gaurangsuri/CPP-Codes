#include<iostream>
std::cout;
std::cin;
std::endl;
void passwordCheck(string& input) {
   int n = input.length();
   bool hasLower = false;
   bool hasUpper = false;
   bool hasDigit = false
   bool specialChar = false;
   bool hasEight = false;
   string normalChars = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890 ";
   if(n>=8){
   		hasEight = true;
	   }
   for (int i = 0; i < n; i++) {
    if (islower(input[i]))
        hasLower = true;
    if (isupper(input[i]))
        hasUpper = true;
    if (isdigit(input[i]))
        hasDigit = true;
    size_t special = input.find_first_not_of(normalChars);
    if (special != string::npos)
        specialChar = true;
   }
   if(hasEight&&hasLower&&hasUpper&&hasDigit&&specialChar){
    cout<<"Password Stregnth is strong. "<<endl;
   }
   else{
    cout<<"Password strength is weak .. please change ur password."<<endl;
   }
}
int main(){
    string x;
    cin>>x;
    passwordCheck(x);
}
