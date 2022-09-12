class Solution {
public:
    int trap(vector<int>& height) {
        //greatest to right - arr1 
        //greatest to left - arr2
        //heught of water = min(arr1[i],arr2[i])-arr[i]
        int n=height.size();
        vector<int>gtl(n,-1);
        vector<int>gtr(n,-1);
        int maxx=height[0];
        for(int i=1;i<n;i++)
        {
            
            if(maxx>height[i])
            {
                gtl[i]=maxx;
            }
        
            if(height[i]>maxx)
                maxx=height[i];
        }
        int minn=height[n-1];
        for(int i=n-2;i>=0;i--)
        {
            if(minn>height[i])
                gtr[i]=minn;
            if(height[i]>minn)
            {
                minn=height[i];
            }
        }
        
        vector<int>ans(n,-1);
        for(int i=0;i<n;i++)
        {
            int temp=min(gtl[i],gtr[i]);
            if(temp==-1){
                ans[i]=-1;
            }
            else if(temp!=-1)
            {
                ans[i]=temp-height[i];
            }
        }
        int sum=0;
        for(int i=0;i<n;i++)
        {
            if(ans[i]!=-1)
            {
                sum+=ans[i];
            }
        }
        for(auto i:gtl)
        {
            cout<<i<<" ";
        }
        cout<<endl;
        for(auto i:gtr){
            cout<<i<<" ";
        }
        cout<<endl;
        return sum;
    }
};