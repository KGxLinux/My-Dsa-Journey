class Solution {
  public:
    bool isRotated(string& s1, string& s2) {
        // code here


        
        

    if(s1.length() != s2.length()) {

        return false;

    }
    
    string clock = s1;
      
        for(int i = 0 ; i < 2 ; i++) {
            
            
            char temp = clock[s1.length()-1];
            
            int j = clock.length()-1;
            while(j > 0) {
                
                clock[j] = clock[j-1];
                j--;
            }

            clock[0] = temp;
        }
        
        if(clock == s2) {
            
            return  true;
        }
        
        
        
         for(int i = 0 ; i < 2 ; i++) {
            
            
            char temp = s1[0];
            
            int j = 0;
            while(j <= s1.length()-2){
                
                s1[j] = s1[j+1];
                j++;
            }

            s1[s1.length()-1] = temp;
        }
        
        if(s1 == s2) {
            
            return true;
        }
        else{
            
            return false;
        }
        
    }
       
       

};
