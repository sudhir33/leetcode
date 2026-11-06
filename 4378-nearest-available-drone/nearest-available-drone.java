class Solution {
    public int nearestDrone(int[][] drones, int[] target) {
        int res=101,i,c=101;
        for(i=0;i<drones.length;i++)
        {
            int v1=Math.abs(drones[i][0]-target[0]);
            int v2=Math.abs(drones[i][1]-target[1]);
            int v=v1+v2;
            if(v<=drones[i][2] && c>v)
            {
                c=v;
                res=i;
            }
        }
        if(res==101)return -1;
        return res;
    }
}