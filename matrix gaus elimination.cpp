//Gaussian Elimination
/*
This codes written by Infinity crew.

Leader  : Tong Jia Jie               [BI17110166]

Members : Ahmad Amsari Bin Muhammad  [BI17110100]
          Brian Kent Dominic         [BI17110165]
          Rosinah Maringal           [BI17110075]
          Nur Ashika Bt Muhd Ja'afar [BI17110152]      
          Siti Aisyah Mohd Yassin    [BI17110146]
          Brandon Ujin               [BI17110072]
          //the leader don't really care to code.. so me acting as a sub leader :(
          
*/
#include <iostream>
#include<iomanip>
#include <limits>

using namespace std;

int main()
{
	
	cout<<"Dear User Please Take Notes!"<<endl<<endl;
	cout<<"1.Only put the number of equations u have."<<endl<<"2.Equation must start from 2 and more."<<endl;
	cout<<"3.Use tab instead of enter[to avoid confuse],when u want to insert number for particular equation."<<endl;
	cout<<"4.Use enter when u already done insert a particular equation."<<endl;
	cout<<"5.'nan' mean the equation has no solution."<<endl<<"6.'inf' mean the equation has infinite solution"<<endl; 
	cout<<"The answer will be shown in The values of the variables."<<endl;
	cout<<"Thanks for using our codes :)"<<endl;
	cout<<endl<<endl<<endl<<endl<<endl;
	cout<<"© INFINITY CREW © 2017"<<endl<<endl;
	cout << "                                                                             Press Enter to Continue";
    cin.ignore(std::numeric_limits<streamsize>::max(),'\n');
	
	int n,i,j,k;
	cout.precision(4);
	cout.setf(ios::fixed);
	cout<<"\nEnter the number of equation\n";
	cin>>n;
	float a[n][n+1],x[n];
	cout<<"\nEnter the elements of the augmented-matrix row-wise:\n";
	for(i=0;i<n;i++)
	{
		for(j=0;j<=n;j++)
		{
			cin>>a[i][j];
		}
	}
	for(i=0;i<n;i++)
	{
		for(k=i+1;k<n;k++)
		{
			if(a[i][i]<a[k][i])
			{
				for(j=0;j<=n;j++)
				{
					double temp=a[i][j];
					a[i][j]=a[k][j];
					a[k][j]=temp;
				}
			}
		}
	}
	cout<<"The matrix after pivotisation is:\n";
	for(i=0;i<n;i++)
	{
		for(j=0;j<=n;j++)
		{
			cout<<a[i][j]<<setw(16);
		}
		cout<<"\n";
	}
	
	for(i=0;i<n-1;i++)
	{
		for(k=i+1;k<n;k++)
		{
			double t=a[k][i]/a[i][i];
			for(j=0; j<=n;j++)
			{
				a[k][j]=a[k][j]-t*a[i][j];
			}
		}
	}
	
	cout<<"\n\nThe matrix after gauss-elimination is as follows:\n";
	for(i=0;i<n;i++)
	{
		for (j=0;j<=n;j++)
		{
			cout<<a[i][j]<<setw(16);
		}
		cout<<"\n";
	}
	for(i=n-1;i>=0;i--)
	{
		x[i]=a[i][n];
		for(j=0;j<n;j++)
			if(j!=i)
			
			        x[i]=x[i]-a[i][j]*x[j];
		x[i]=x[i]/a[i][i];
	}
	cout<<"\nThe values of the variables are as follows: \n";
	for(i=0;i<n;i++)
	{
		cout<<x[i]<<endl;
	}
	system("pause");
	return 0; 
}
