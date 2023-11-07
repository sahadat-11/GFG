class Solution
{
    public:
    pair<long,long> indexes(vector<long long> v, long long x)
    {
        // code here
        // first occurence
        int low = 0, high = v.size() - 1;
        int ans1 = -1;
	    while(low <= high) {
		int mid = low + (high - low) / 2;
		if(v[mid] == x) {
			ans1 = mid;
			high = mid - 1;
		}
		else if(v[mid] < x) low = mid + 1;
		else high = mid - 1;
	 }
	 // last occurence
	 low = 0, high = v.size() - 1;
	 int ans2 = -1;
	while(low <= high) {
		int mid = low + (high - low) / 2;
		if(v[mid] == x) {
			ans2 = mid;
		    low = mid + 1;
		}
		else if(v[mid] < x) low = mid + 1;
		else high = mid - 1;
	}
	return {ans1, ans2};
	 
    }
};

class Solution
{
    public:
    pair<long,long> indexes(vector<long long> v, long long x)
    {
        // code here
        int first = lower_bound(v.begin(), v.end(), x) - v.begin();
        int last = upper_bound(v.begin(), v.end(), x) - v.begin() - 1;
        if(last - first < 0) {
            first = -1, last = -1;
        }
        return {first, last};
    }
};