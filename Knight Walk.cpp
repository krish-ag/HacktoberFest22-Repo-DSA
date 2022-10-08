class Solution {
public:
	int minStepToReachTarget(vector<int>&KnightPos, vector<int>&TargetPos, int N){
	    // Code here;
	    int dx[]={-2,-1,1,2,-2,-1,1,2};
	    int dy[]={-1,-2,-2,-1,1,2,2,1};
	    
	    int steps=0;
	    queue<pair<int,int>>q;
	    int p=KnightPos[0];
	    int f=KnightPos[1];
	    
	    q.push({p,f});
	    bool visited[N+1][N+1]={false};
	    
	    visited[p][f]=true;
	    while(!q.empty()){
	        int fl=q.size();
	        for(int x=0;x<fl;x++){
	            
	            int i=q.front().first;
	            int j=q.front().second;
	            
	            q.pop();
	            if(i==TargetPos[0] and j==TargetPos[1]){
	                return steps;
	            }
	            
	            for(int f=0;f<8;f++){
	                int l=i+dx[f];
	                int r=j+dy[f];
	                
	                if(l>=1 and l<=N and r>=1 and r<=N and !visited[l][r]){
	                    
	                    visited[l][r]=true;
	                    q.push({l,r});
	                }
	            }
	        }
	        steps++;
	    }
	    return steps;
	}
};
