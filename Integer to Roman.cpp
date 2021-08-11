class Solution {
public:
    string intToRoman(int num) {
        
        string str="";
        while(num>0)
        {
            cout<<num<<" ";
            if(num/1000>0)
            {
                str+='M';
                num=num-1000;
            }
            else if(num%1000>=900)
            {
                str+="CM";
                num-=900;
            }
            else if(num/500>0)
            {
                str+='D';
                num-=500;
            }
            else if(num%500>=400)
            {
                str+="CD";
                    num-=400;
            }
            else if(num/100>0)
            {
                str+='C';
                num-=100;
            }
            else if(num%100>=90)
            {
                str+="XC";
                num-=90;
            }
            else if(num/50>0)
            {
                str+='L';
                num-=50;
            }
            else if(num%50>=40)
            {
                str+="XL";
                num-=40;
            }
            else if(num/10>0)
            {
                str+='X';
                num-=10;
            }
            else if(num%10>=9)
            {
                str+="IX";
                num-=9;
            }
            else if(num/5>0)
            {
                cout<<("da");
                str+='V';
                num-=5;
            }
            else if(num%5>=4)
            {
                str+="IV";
                num-=4;
            }
            else
            {
                str+='I';
                num-=1;
            }
                
        }
        return str;
    }
};
