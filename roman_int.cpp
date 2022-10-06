#include <iostream>
#include <map>
using namespace std;

int roman_int(string roman){
    int number=0,i=0;
	map<char,int> romanNo;
	romanNo['I'] =   1;
   romanNo['V'] =   5;
	romanNo['X'] =  10;
	romanNo['L'] =  50;
	romanNo['C'] = 100;
	romanNo['D'] = 500;
	romanNo['M'] =1000;
	
	
	if(roman.length()<=1)
	{
		return romanNo[roman.at(0)];
	}
	else{
		while(i<roman.size())
		{
			if(romanNo[roman[i]]<romanNo[roman[i+1]]){
			number+=romanNo[roman[i+1]]-romanNo[roman[i]];
			i+=2;
			}
			else
			{
				number+=romanNo[roman[i]];
				i++;
			}
		}
		return number;
	}
}

int main(){
	string roman;
	int number;
	cout<<"Input: ";
	getline(cin,roman);
	number=roman_int(roman);
	cout<<"Output: "<<number;
	return 0;
}
