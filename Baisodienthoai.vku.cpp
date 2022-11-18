#include <iostream>
#include <cmath>
#include <String>
using namespace std;

int main()
{
	string n;
	cout << "Nhap so dien thoai: ";
	cin >> n;
	if(n[0]!='0' || n.length() >10)
		cout << "LOI!"; 
    else if(n[0] == '0')
	{
    	for(int i=0; i<= n.length(); i++){
    		if(i<=3 || i>=7) cout << n[i];
    		else cout << "x";
		}
	}
	
	
	
}
