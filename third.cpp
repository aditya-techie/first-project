#include<iostream>
using namespace std;
int main()
{

    /*int n ;
cin>>n;          //cin is used to take input
//cout<< "value of n is " << n <<endl;

if (n>0)                         // n is positive
{
cout<< "n is positive"<<endl; 
}
else 
{
cout<< "n is negative"<<endl;
}
*/

/*int a,b;
cout<< " enter value of a " << endl;
cin>> a ;
cout<< " enter value of b " << endl;
cin>> b ;

if (a>b)
{
    cout<< " a is greater " <<endl;
}
if (b>a) 
{
    cout<< "b is greater " <<endl;
}          */

/*int a;
cout<< "enter value of a " <<endl;
cin>> a; 
if(a>0)
{
    cout<< "a is positive" <<endl;
}
else 
{
    if(a<0)
    {cout<< "a is negative" <<endl;
    }
else {cout<< "a is zero"<<endl;
}
}           */
/*int a;
cout<< " enter value of a " <<endl;
cin>> a;

if (a>0)
{
    cout<< " a is positive " <<endl;
}
else if(a<0)
{
    cout<< " a is negative " <<endl;
}
else{cout<< "a is zero"<<endl;
}         

int a;
cin>> a ; 
if (a==9){
    cout<< "nine" <<endl;      //if input is 9 then it prints nine,positive both
}
if (a>0){
    cout<< "positive";
}
else{
    cout<< " negative";
}    

int a=2;
int b=a+1;
if ((a=3)==b){
    cout<< a;
}
else{
    cout<< a+1;
}  */

/*int a = 24;
if(a>20){
    cout<< "love";
}
else if(a==24){
    cout<<"lovely";
}
else{
    cout<<"babbar";
}       */
/*
char ch;
cout<< " enter something " ; 
cin>> ch;
if(ch>='A' && ch<='Z'){
cout<< " its uppercase " <<endl;
}
else if(ch>='a' && ch<='z'){
    cout<< " its a lowercase " <<endl;
}
else if(ch>='0' && ch<='9'){
    cout<< " its a number " << endl;
}
else {cout<< " other ";}         */

/*
int n;
cin>> n ; 
int i = 1;

while(i<=n)
{   cout<< i << "  ";     
i = i+1;
}         */

/*int n;
cin>> n;

int i=1;
int sum = 0;

while(i<=n){
    sum = sum + i;
    i = i +1;

// cout<< "sum of numbers " <<sum<<endl;   HERE I THINK THAT WHY I AM NOT PLACING OUTPUT COMMAND INSIDE WHILE LOOP SO I DID , THIS PRINTS THE SUM EVERY TIME WHILE INCREASING THE VALUE OF (i) AND TILL THE LOOP ENDS BUT WE HAVE TO GIVE FINAL ANSWER IN OUTPUT SO WE WILL PLACE THE OUTPUT OUT OF THE WHILE LOOP 
}
cout<< "sum of numbers "<<sum;
*/

/*int n;
cin>> n;

int i = 2;
int sum=0;
while(i<=n){
    sum = sum+i;
    i = i+2;
}
cout<< "sum of all even numbers "<<sum;
*/

/*float f;
cout<< "enter temperature in fahrenheit "<<endl;
cin>> f ;
 
float C;
C = (f-32)*5/9;
cout<< f << " fahrenheit = " << C << " degree celcius";
*/

/*int n;
cin>> n ;
int i = 2;
while(i<n){
if((n%i)==0)
{cout<< "not prime"<<endl;}
else{cout<<"prime"<<endl;}
i=i+1;}
*/

/* int n ;
cin>> n ;

int row = 1;
while(row<=n){
    int col=1;
    while(col<=n){
    cout<< "*";
    col=col+1;
}cout<< endl;
row=row+1;
}  */        

int n;
cin>> n;

int row=1;
while(row<=n){
    int col=1;
    while(col<=n){
        cout<< row << " " ;
    col=col+1;
}cout<<endl;
row=row+1;
}         

}