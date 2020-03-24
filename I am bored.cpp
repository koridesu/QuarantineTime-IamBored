#include<iostream>
#include<vector>
#define FIRST 10
#define SECOND 10

using namespace std;
vector<char> addVector(vector<char>);
int main()
{
	vector<char> list;
	for(int i=0; i<5; i++){
		list.push_back('I');
		list.push_back('m');
		list.push_back('\0');
		list.push_back('b');
		list.push_back('o');
		list.push_back('r');
		list.push_back('e');
		list.push_back('d');
		list.push_back(' ');
	}
	
	
		
	vector<char>::iterator it;
	vector<char>::iterator it2;
	vector<char> copy=list;
	
	
	it2 = list.begin();

	for(int i = 0; i<FIRST; i++){
		
		
	/*
			*****
			****
			***
			**
			*
	*/
	for(it = list.begin();it != list.end();it++)
	{	it2=it;
	
		while(it2 != list.end())
		{
	
			cout<<*it2;
			it2++;
		}
		cout<<"\n";
	}
	
	
		/*	
				*
				**
				***
				****
				*****	
		*/
			for(int end=1; end<list.size();end++)
		{
			for(int i=0;i<end;i++)
			{
				cout<<list[i];
			}	
			cout<<endl;
		}
		
		/*
				    *
				   **
				  ***       
				 ****
				*****
		*/
		int start=0;
		for(int i=0; i<list.size();i++)
		{ if(start == list.size()-1) break;
			for(int j=start; j<list.size(); j++)
			{
				cout<<list[j];
			}
			cout<<endl;
			start++;
		}
	
	
		/*
				     *
				    **
				   ***
				  ****       
				 *****
		*/
		for(std::pair<int, int> p(0, list.size()-1); p.first<list.size(); p.first++)
	{ 
		if(p.second < 0) break;
		if(p.first == p.second)
		{
			
			for(int j=p.second; j<list.size(); j++ )
			{  cout<<list[j];
			}
			p.second--;
			p.first=-1;
			cout<<"\n";
		}
		else
		cout<<" ";	
		
	}
	}	

	
	/*
			*****			*****
		   	 ****			****	
			** **			*** *
			*** *			** **
			*****			* ***
	*/
	for(int i=0; i<SECOND;i++)							
	{														
			list=copy;

	char temp = copy[0];
		for(int i=0;i<copy.size();i++)
		{	
			temp=copy[i];
			copy[i]=' ';
			for(it2 = copy.begin();it2!=copy.end();it2++)
			{cout<<*it2;		}
			copy[i]=temp;
			cout<<"\n";
		}
		for(int i=copy.size()-1;i>=0;i--)
		{
			temp=copy[i];
			copy[i]=' ';
			for(it2 = copy.begin();it2!=copy.end();it2++)
			{cout<<*it2;		}
			copy[i]=temp;
			cout<<"\n";
		}
	}
	


}

