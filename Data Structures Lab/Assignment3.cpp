#include<iostream>
using namespace std;
int main()
{
 string set[6]={"1","3","a","s","t","i"};
 string pass[4];
 int count = 1;
 for (int i = 0; i < 6; i++)
 {
    for (int j = 0; j < 6; j++)
    {
        for (int k = 0; k < 6; k++)
        {
            for (int l = 0; l < 6; l++)
            {
                if (i!=j && i!=k && i!=l && j!=k && j!=l && k!=l && l!=i )
                {
                    pass[0]=set[i];
                    pass[1]=set[j];
                    pass[2]=set[k];
                    pass[3]=set[l];
                    cout<<count<<"\t"<<pass[0]<<pass[1]<<pass[2]<<pass[3]<<endl;
                    count++;
                }
                
            }
            
        }
        
    }
    
 }
  return 0;
}