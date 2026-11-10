class Solution {
    public String rearrangeString(String s, char x, char y) {
        String res="",c="";
        int i;
        for(i=0;i<s.length();i++)
        {
            if(s.charAt(i)==x)
            {
                c+=s.charAt(i);
            }
            else
            {
                res+=s.charAt(i);
            }
        }
        for(i=0;i<c.length();i++)
        {
            res+=c.charAt(i);
        }
        return res;
    }

}