#include <iostream>
#include <cstring>
#include<algorithm>>


using namespace std;

int main()
{
    string arr ;
 getline(cin,arr);

    for (int x=0; x<arr.size(); x++)
    {
      if (arr[x] >= 'a' && arr[x] <= 'z')
      {
          arr[x]=arr[x]-32;
      }
    }

     cout<< arr<<endl;



      arr.erase(remove(arr.begin(), arr.end(), ' '), arr.end());

    cout<<arr<<endl;

    return 0;
}
