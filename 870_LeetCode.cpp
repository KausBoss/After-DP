class Solution {
public:
    vector<int> advantageCount(vector<int>& A, vector<int>& B) {
        int n=A.size();
        sort(A.begin(), A.end());
        vector<pair<int,int>> b;

        for(int i=0; i<B.size(); i++){
        	b.push_back({B[i],i});
        }
        sort(b.begin(), b.end());
        vector<int> ans(n,-1);

        int j=0;
        vector<int> x;
        for(int i=0;i<n; i++){
        	if(A[i]>b[j].first){
        		ans[b[j++].second]=A[i];
        	}
        	else{
        		x.push_back(A[i]);
        	}
        }
        if(x.size()==0){return ans;}
        j=0;
        for(int i=0; i<n; i++){
        	if(ans[i]==-1){
        		ans[i]=x[j++];
        	}
        	if(j==x.size()){break;}
        }
        return ans;
    }
};