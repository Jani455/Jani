#include "std_lib_facilities.h"

int main()
{
	string first_name, friend_name;
	
	cout<< "Enter the name or the person you want to write to: \n";
	cin >> first_name;
	
	cout << "Dear "<< first_name<< ","<< "\n";
	
	cout << "How are you.\n" << "I miss you.\n"
		<<"I heard you are doing pretty well!\n"
		<<"Please enter friend's name: ";
	cin >> friend_name;

	cout<< "Have you seen "<< friend_name<<" lately?\n";

	char friend_sex = 0;

	cout << "Please enter friend's sex(f or m): \n";
	cin >> friend_sex;
	
	if(friend_sex=='m')
		{cout << "If you see "<< friend_name
			<< " please ask him to call me!\n";}
	
	if(friend_sex=='f')
		{	cout<< "If you see "<< friend_name
				<< " please ask her to call me!\n";}
	
		if(friend_sex!='m' and friend_sex !='f')
			simple_error("Invalid sex!");

	int age;
	cout << "Please enter your age: \n";
	cin >> age;

	if(age <= 0 or age >= 110)
		simple_error("you're kidding!");

	cout << "I just heard you had a birthday and you are "<< age <<" years old.\n" ;
	
	if(age < 12)
		cout << "Next year you will be "<< age+1 << "\n" ;

	if(age == 17)
		cout << "Next year you will be able to vote.\n" ;
	if(age > 70)
		cout << "I hope you are enjoying retirement.\n" ;

	cout << "Yours sincerely,\n\n\n" << "Jancsi\n";
	return 0;

}