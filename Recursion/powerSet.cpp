void solve(vector<int>v,vector<vector<int>>&ans,vector<int>output,int i)
{    
    //base case    
    if(i==v.size()){        
        ans.push_back(output);        
        return;    
    }        
    
    // include         
    output.push_back(v[i]);        
    solve(v,ans,output,i+1);        
    output.pop_back();            
    
    //exclude    
    solve(v,ans,output,i+1);         
    
} 

vector<vector<int>> pwset(vector<int>v) {    
    vector<vector<int>>ans;    
    int i=0;    
    vector<int>output;    
    solve(v,ans,output,i);    
    
    return ans; 
    
}