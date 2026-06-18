#include<bits/stdc++.h>
using namespace std;
//print name n times
void print_name(int i,int n)
{
	if(i>n)
		return ;
	cout<<("NAME")<<endl;
	print_name(i+1,n);
}
//print n numbers
void print_num(int i,int n)
{
	if(i>n)
		return;
	cout<<i<<endl;
	print_num(i+1,n);
}
//print n->1
void print_num_rev(int n,int i)
{
	if(i<0)
		return;
	cout<<i<<endl;
	print_num_rev(n,i-1);
}
//print 1->n without (i+1,n)- BACKTRACK
void print_num_backtrack(int i,int n)
{
	if(i<1)
		return;
	print_num_backtrack(i-1,n);
	cout<<i<<endl;
}
//print n->1 without (i+1,n)- BACKTRACK
void print_num_backtrack_rev(int i,int n)
{
	if(i<0)
		return;
	print_num_backtrack_rev(i-1,n);
	cout<<n-i<<endl;
}
int main()
{
	print_name(1,4);
	cout<<"*********"<<endl;
	print_num(5,10);
	cout<<"*********"<<endl;
	print_num_rev(10,10);
	cout<<"*********"<<endl;
	print_num_backtrack(9,9);
	cout<<"*********"<<endl;
	print_num_backtrack_rev(9,9);
	return 0;
}