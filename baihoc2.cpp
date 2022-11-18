/* BUOI 2 : BAI TAP 
Nhap x tu b�n ph�m , t�nh F(x) = can(x)
V� du :
+) Nhap x = 2
+) In ra : F(2) = can(2) = 1.414  */

/*#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main ()
{
    double x;	
	
//	cout << "Day la chuong trinh nhap x tu ban phim, tinh F(x) = can(x):\n;"
//	
//	
//    cout << " Gia tri cua x la: ";
//	cin >> x;
	
//	cout << "F(" << x << ") = can(" << x << ") = " << fixed << setprecision(3) << sqrt(2); // ra ph�p t�nh r� r�ng F(x)=can 2
//	cout << fixed << setprecision(3) << sqrt(x);   //ra kq lu�n 1.414
	
	
	
	system ("pause");
	return 0;
}*/





/* v� du2 : Nhap x tu ban phim, t�nh F(x) = x^2
+)Nhap x= 3 (cin >>)
+) in ra : F(3) = 3^2 = 9 
H�M MU :  pow(x, 2)   */

//#include <iostream>
//#include <cmath>
//using namespace std;
//int main()
//{
//	
//	double x;
//	cin >> x;
//
//	double kq = pow(x, 1.0/3.0);
//	cout << "F(" << x << ") = " << x << "^1/3 = " << kq;
//	// x l� c�i thay doi c�n ^2 l� co dinh nen phai nam trong""
//	
//	
//	system ("pause");
//	return 0;
//
//}
//






/* 
vd3. Nhap x tu ban phim, tinh F(x) = x^(1/3) 
 giong voi x^2 nhung v�
 trong nguyen tac chia th� nguyen/nguyen = nguyen n�n th�m 1.0 /3.0 th� moi ra dc kq
 
 
+) nhap x = 3
+)in ra : F(3) = 3^(1/3) = 1.4422
*/






/* vd4. nhap x tu ban phim, tinh F(x) = can bac 5 cua x mu 6
x=3
F(3) = can bac 5 cua 3^6 = 3.737

*/
//#include <iostream>
//#include <cmath>
//#include <iomanip>
//using namespace std;
//
//int main()
//{
//	double x;
//	
//	cin >> x;
//	double kq = pow(x, 6.0 / 5.0);
//	//cout << pow(x, 6.0 / 5);
//	cout << "F(" << x << ") = can bac 5 cua " << x << "^6 = " << fixed << setprecision(3) << kq;
//	
//	system ("pause");
//	return 0;
//}







/* vd5 . tinh F(x) = |x| 
*/
//#include <iostream>
//#include <cmath>
//using namespace std;
//int main ()
//{
//	double x;           // tri tuyet doi so nguyen l� abs
//                        // so thuc l�	fabs
//	
//	cin >> x;
//
//	
//	cout << fabs(x);
//	
//	
//	system ("pause");
//	return 0;
//}






/*  
vd6.1 nhap x tu ban phim, tinh sin(x) voi x la radian
 6.2  nhap x tu ban phim, tinh sin(x) voi x la do
*/
//6.1
//#include <iostream>
//#include <cmath>
//using namespace std;
//int main ()
//{
//	double x;
//	cin >> x;
//	
//	cout << sin(x);
//	
//	
//	
//	system ("pause");
//	return 0;
//}


//6.2 
//#include <iostream>
//#include <cmath>
//#include <iostream>
//#define PI 3.14
//using namespace std;
//int main ()
//{
//	double deg;   // deg l� do trong t.anh
//	cin >> deg;
//	
//	double radian = deg * Pi/ 180.0;
//		cout << sin(radian);
//	
//	system ("pause");	return 0;
//}




/* 
VD7.  nhap x , t�nh F(x) = loga10(x)


 

#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
	// log10(x)
	// log(x) --> log e cua x
	
	
	system ("pause");
	return 0;
}*/



/* 
vd8. nhap x, a, t�nh F(x) = loga(x), voi a,x l� bat k�
*/

// C�CH 1 : dung truc tiep gtri e

//#include <iostream>
//#include <cmath>
//using namespace std;
//int main ()
//{
//	double x;
//	cin >> x;
//	
//	cout << pow(2.7818, x);
//	
//	
//	
//	
//	system ("pause");
//	return 0;
//}

 //C�CH 2 : khai bao gtri e roi dung e
 
 
//#include <iostream>
//#include <cmath>
//#define e 2.71828            //define : khai b�o, cho ph�p dat t�n 1 hang so nguyen or thuc
//using namespace std;
//int main ()
//{
//	double x;
//	
//	cin >> x;
//	cout << pow(e, x);
//	
//	
//	
//	system ("pause");
//	return 0;
//}


//C�CH 3 : h�m e^x cthe dung exp(x)


//#include <iostream>
//#include <cmath>
//using namespace std;
//int main ()
//{
//	double x;	
//	
//	cout << "\nnhap x = ";
//	
//	cin >> x;
//
//	cout << "gia tri cua e^x la : ";
//
//	cout << exp(x);
//
//	
//	
//	system ("pause");
//	return 0;
//}



/* 
tiep vd8 : nhap x, a, t�nh F(x) = loga(x), voi a,x l� bat k�



#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
	double a, x;
	
	cin >> a >> x;
	double kq = log(x) / log(5);
	cout << " ket qua = " << kq;	
	
	
	system ("pause");
	return 0;
}*/



/* PH�P CHIA DU (%) , 3 % 2 = 1 , chi d�ng cho so nguy�n 


 
L�M B�I TAP : nhap nam sinh v� tinh tuoi cua nguoi do
1. nhap nam sinh ( cin >> )
2. in ra tuoi ( coout << )


#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	
	int namsinh, tuoi;
	cout << "Day la chuong trinh tinh so tuoi hien tai cua ban : ";
	
	cout << "\nnam sinh cua ban la: ";
	
	cin >> namsinh;     // sai c�i dau c�ch ( backspace)...buc!!
	
	
	tuoi = 2022 - namsinh;
	
	cout << "tuoi cua ban la : " << tuoi;
	
	
	
	system ("pause");
	return 0;
}*/

// c�ch 2 t�nh tuoi

// #include <iostream>
// using namespace std;
// int main()
// 
// {
// 	cout << "Day la chuong trinh nhap vao nam sinh va tinh tuoi cua ban\n" ;
// 	int namsinh, tuoi;
// 	
// 	cout << "\nNam sinh la: ";
// 	cin >> namsinh;
// 	
// 	tuoi = 2022 - namsinh;
// 	cout << "Tuoi cua nguoi do la: " << tuoi;
//	 	 
//	  	
// 	system("pause");
// 	return 0;
// }




/* bt2. nhap a, b . t�nh tong hieu tich thuong
vidu: a=4, b=5

4 + 5 = 9
4 - 5 = -1
4 * 5 = 20
4 / 5 = 0.8



*/
#include <iostream>
using namespace std;
int main()
{
	double a, b;
	cout << "Day la chuong trinh tinh toan 2 gia tri a va b" << endl;
	cout << "a = "; cin >> a;
	
	cout << "b = "; cin >> b;
	
	cout << a << " + " << b << " = " << a + b << endl;
	cout << a << " - " << b << " = " << a - b << endl;
	cout << a << " * " << b << " = " << a * b << "\n";
    cout << a << " / " << b << " = " << a / b << "\n";



	system ("pause");
	return 0;
}












