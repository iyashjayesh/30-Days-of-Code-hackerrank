#include <bits/stdc++.h>
 using namespace std;  
 int main() {  
   /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int n, number;   
   cin >> n;  
   string name1, name2;  
   map<string, int> list;  
   for(int i=0;i<n;i++){  
     cin>>name1;  
     cin>>number;  
     cin.ignore(); //needed to ignore the space after the number, and bring to newline  
     list[name1]=number;  
   }  
   while(getline(cin,name2)){  
     if(list.find(name2) !=list.end()){  
       cout<< name2 << "=" <<list[name2]<<endl;  
     }  
     else   
       cout<<"Not found"<<endl;  
   }  
   return 0;  
 }  