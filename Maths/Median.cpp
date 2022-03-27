int find_median(vector<int> v)
		{
		    int mid = v.size()/2;
		    sort(v.begin(),v.end());
		    if(v.size() % 2 == 1)
		        return v[v.size()/2];
		    else
		       return floor(v[mid]+v[mid-1])/2;
		}
