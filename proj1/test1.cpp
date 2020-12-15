#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
using namespace std;
unordered_map<int,int> hm;

    void enorder1(vector<int>& v,int k,int par){
        
        for(int child=par*2,parent=par;child<=k&&parent>=1; ){
            int min_child_pos=child;
            int min_child_val=v[child];
            if(child+1<=k&& hm[v[child+1]] <hm[ min_child_val]){
                min_child_pos=child+1;
                min_child_val=v[min_child_pos];
            }
            if( hm[min_child_val] <hm[v[parent]]){
                
                v[min_child_pos]=v[parent];
                v[parent]=min_child_val;
                parent=min_child_pos;
                child=parent*2;
            }else{
                break;
            }
        }
    }
    void init_min_heap(vector<int>& v,int k){
        int child=k;
        int parent=child/2;
        for(int i=parent;i>=1;i--){
            enorder1(v,k,i);
        }
    }
    void del_heap(vector<int>& v,int k){
        v[1]=v[k];
        enorder1(v,k-1,1);
    }
    void insert_heap(vector<int>& v,int k,int data){
        v[k]=data;
        for(int child=k,parent=k/2;child<=k&&parent>=1;){
            int temp=v[child];
            if( hm[v[child]] < hm[v[parent]]){
                v[child]=v[parent];
                v[parent]=temp;
                child=parent;
                parent=child/2;
            }else{
                break;
            }
        }
    }
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        vector<int> v;
        v.push_back(-10000);//哨兵0 index 1-k为heap
        for(decltype(nums.size())i=0;i<nums.size();i++  ){
            if(hm.find(nums[i])!=hm.end()){
                hm[nums[i]]++;
            }else{
                hm[nums[i]]=1;
                v.push_back(nums[i]);
            }
        }
        vector<int> ret;
        if(k==1){
            int max=-100000;
            for(int i=1;i<=v.size()-1;i++){
                if(hm[v[i]]>max){
                    max=v[i];
                }
            }
            ret.push_back(max);
           
        }else{
            init_min_heap(v,k);
            for(int i=k+1;i<=v.size()-1;i++){
                if(hm[v[i]]<hm[v[1]]){

                }else{
                    del_heap(v,k);
                insert_heap(v,k,v[i]);
                }
                
            }
            for(int i=1;i<=k;i++){
                ret.push_back(v[i]);
            }
        }
        return ret;

    }
int main(){
	vector<int> test{3,0,1,0};
	topKFrequent(test,1);
	return 0;
}
