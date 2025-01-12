#include <iostream>
using namespace std;
int main() {
int n1, n2,GCF,LCM;
//GCF is Grtaest Common Factor
//LCM is Least Common Multiple
cout << "Enter two numbers:"<<endl;
cout << "Enter 1st number:"<<endl;
cin >> n1 ;
cout << "Enter 2nd numbers:"<<endl;
cin>> n2;
// swapping variables n1 and n2 if n2 is greater than n1.
  if (n2 > n1) {   
    int temp = n2;
    n2 = n1;
    n1 = temp;
  }
  for (int i = 1; i <=  n2; ++i) {
    if (n1 % i == 0 && n2 % i ==0) {
      GCF = i;
    }
	}
    LCM=(n1*n2)/GCF;
cout<<"Greatest Common Factor of  "<<n1<<"  and  "<<n2<<"  is ="<< GCF<<endl;
cout<<"Least Common Multiple of  "<<n1<<"  and  "<<n2<<"  is ="<< LCM<<endl;

  return 0;
}
