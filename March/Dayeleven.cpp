class Solution {
public:
    string customSortString(string order, string s) 
    {
        string s1 = "" ;
        string s2 = "" ;
        map < char , int > mp ;
        for ( int i = 0 ; i < order.length() ; i++ )
            mp[ order[i] ]++ ;
        for ( int i = 0 ; i < s.length() ; i++ )
        {
            if ( mp[ s[i] ] != 0 )
                mp[ s[i] ]++ ;
            else
                s2 += s[i] ;
        }
        for ( int i = 0 ; i < order.length() ; i++ )
        {
            while ( mp[order[i] ] > 1 )
            {
                s1 += order[i] ;
                mp[order[i] ]-- ;
            }
        }
        return s1 + s2 ;
    }
};
