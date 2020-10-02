#include "std_lib_facilities.h"

int main()	
{
	constexpr double cm_to_m=100 ;
	constexpr double in_to_m=2.54/100 ;
	constexpr double ft_to_m=12*2.54/100 ;
	double min = std::numeric_limits<double>::max();	
	double max = std::numeric_limits<double>::lowest();
	double sum;
	int db=0;
	double x;
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
			
			if(x<min and x>max)
				{
					min=x;
					max=x;
				}
			if(x<min)
				{
				min=x;
				cout << x << " m, the smallest so far " << endl ;
				}
			
			if(x>max)
				{
				max=x;
				cout << x <<" m, the largest so far" << endl;
				}
			sum=sum+x;
			++db;
			values.push_back(x);
		}
		
		cout <<"Numbers entered: " <<db << endl
			 << "Sum of values entered: "<< sum <<" m"<<endl;
		sort(values);
		for(int i=0; i<values.size();++i)
			cout<<values[i]<<" m"<< endl;


	return 0;
}	