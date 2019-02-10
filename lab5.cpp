#include <iostream>
using namespace std;
void qs(int arr[],int l,int h)
{
	
	//if there is only one element
	if(l<h)
	{int pivot=h,temp;
	for(int i=h-i;i>=l;i--)
	
	    {if (arr[i]>arr[pivot])
	       {temp=arr[i];
	       for(int j=i;j<pivot;j++)
	       
	       {arr[j]=arr[j+1];
		   }
		   arr[pivot]=temp;
		   pivot--;
		   }
	    }
	qs(arr,l,pivot-1);
	qs(arr,pivot+1,1);
	
	}
}

void display(int arr[],int n)
{ 
for(int i=0;i<n;i++)
    { cout<<arr[i]<<" ";
    }
    
    cout<<endl;
}

int main(){
	int n;
	cout<<"enter number of elements in the array"<<endl;
	cin>>n;
	
	int arr[n];
	cout<<"enter elements of array"<<endl;
	for(int i=0;i<n;i++)
	
	{
		cin>>arr[i];
	}
	qs(arr,0,n-1);
	display(arr,n);
	
	return 0;
}




