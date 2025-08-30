#include<iostream>
#include<string>
using std::string;
using std::cin;
using std::cout;

/**********************************************************************************
 *This Program demostrate the use of Luhn Algorithm to validate Credit card numbers
 *
 **********************************************************************************/

int getDigits(int num);
int getEvenDoubleDigits(const string cardNum);
int getSumOdd(const string cardNum);

int main() {

	string userIn;
	int result=0;
	
	 cout << "Enter your credit card number (Ex 132*6*5*7**89***): ";
         std::getline(cin, userIn);
        //cin.clear();
         result = getEvenDoubleDigits(userIn) + getSumOdd(userIn);

        if(result % 10 == 0) {
                cout << "\nYour credit card is valid\n";

        }else {
                cout << "\nNot valid sorry\n";
        }

	//cout << "The result is " << result << '\n'; // see the overall result 
	return 0;
}


int getDigits(int num) {

	return num % 10 +  (num/10);// to extract digits (Ex. 18 extracted is 1 and 8)

}

int getEvenDoubleDigits(const string cardNum){
	int sum = 0;


	for(int	i = cardNum.size()-2; i >=0 ; i-=2){
		sum += getDigits((cardNum[i]-48)*2); // ASCII char or use '0' = 48
		
	}	
	return sum;
}

int getSumOdd(const string cardNum){
	int sum =0;

	 for(int i = cardNum.size()-1; i >=0 ; i-=2){
              sum += getDigits((cardNum[i]-'0')); // ASCII char or use '0' = 48

        }

	return sum;


}
