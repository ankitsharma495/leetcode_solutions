class Solution {
    public List<Integer> sequentialDigits(int low, int high) {
        double dig=Math.log10(low);
       int digit = ((int)dig)+1 ;
       int base=0;
       int div=1;
       for(int i=1; i<=digit; i++){
        base=(base*10)+i;
        div=div*10;
       }
       div/=10;
       List<Integer> res=new ArrayList<>();
       int copy=base;
       
       while(copy<=high){
        if(copy>=low){
            res.add(copy);
        }
        if(copy%10==9){
            copy=(base*10)+(digit+1);
            digit++;
            div=(div*10);
            base=copy;
        }else{
            copy=copy%div;
            //System.out.println(copy);
            copy=(copy*10)+((copy%10)+1);
            //System.out.println(copy);
        }
       }

       return res;
    }
}