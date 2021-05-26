class Solution{
public:	
	// Function to check if array has 2 elements
	// whose sum is equal to the given value
	bool hasArrayTwoCandidates(int arr[], int n, int x) {
	   bool flag=false;
	   unordered_set<int>s;
	   for(int i=0;i<n;i++)
	   {
	     int p=x-arr[i];
	     if(s.find(p)!=s.end())
	     {
	       flag=true;  
	     }
	     s.insert(arr[i]);
	   }
	   return flag;// code here
	}
};
