#include "std_lib_facilities.h"

int main()	
{
	constexpr double cm_to_m=100 ;
	constexpr double in_to_m=2.54/100 ;
	constexpr double ft_to_m=12*2.54/100 ;
	int n = std::numeric_limits<int>::max();	
	int t = std::numeric_limits<int>::min();
	double x;
	double sum;
	int g=0;
	string y;
	vector<double> values;
	while( cin>> x >> y)
		{
			if(y!="ft" and y!="cm" and y!="in" and y!="m")
				simple_error("Invalid unit");
			if(y=="ft")
				x=x*ft_to_m;
			if(y=="cm")
				x=x/cm_to_m;
			if(y=="in")
				x=x*in_to_m;
			
			if(x<n and x>t)
				{
					n=x;
					t=x;
				}
			if(x<n)
				{
				n=x;
				cout << x << " m, the smallest so far " << endl ;
				}
			
			if(x>t)
				{
				t=x;
				cout << x <<" m, the largest so far" << endl;
				}
			sum=sum+x;
			++g;
			values.push_back(x);
		}
		
		cout <<"Numbers entered: " <<g << endl
			 << "Sum of values entered: "<< sum <<" m"<<endl;
		sort(values);
		for(int i=0; i<values.size();++i)
			cout<<values[i]<<" m"<< endl;


	return 0;
}	