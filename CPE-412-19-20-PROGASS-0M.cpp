#include <iostream>
#include <cstring>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	char str[100];
	int j, count=0, cnt;
	cout<<"String: ";
	cin>>str;
	for(j=0; j<strlen(str); j++)
	{
		if(str[j]=='a')
		{
			if(str[j+1]=='b' && str[j+2]=='b' && str[j+3]=='b')
			{
				cnt++;
			}
			else
			{
				cout<<"\nInvalid";
				count++;
				break;
			}
		}
		if(str[j]!='a' && str[j]!='b')
		{
			cout<<"\nInvalid";
			    count++;
				break;
		}
	}
	if(cnt>0 && count==0)
	{
		cout<<"\nValid";
	}
	return 0;
}
/* 953234 */
