class Solution {
public:
    int maxNumberOfBalloons(string text) {

        int b = 0;
        int a = 0;
        int l = 0;
        int o = 0;
        int n = 0;
        int maxi = INT_MAX;
        

        for(int i = 0 ; i< text.size(); i++){

            if(text[i] == 'b'){
                b++;
            }
            else if(text[i] == 'a'){
                a++;
            }
            else if(text[i] == 'l'){
                l++;
            }else if(text[i] == 'o'){
                o++;
            }else if(text[i] == 'n'){
                n++;
            }
           
            

        }
            maxi = min(maxi , a);
            maxi = min(maxi , b);
            maxi = min(maxi , o/2);
            maxi = min(maxi , n);
            maxi = min(maxi , l/2);

            return maxi;

        
    }
};