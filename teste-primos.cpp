#include <iostream>
using namespace std;

int main()
{
    int aux, num=0, div=0;

	std::cin >> num;

    for(aux=1 ; aux<=num ; aux++)
        if(num%aux==0) 
            div++;

    if(div==2)
        cout<< num << " eh primo" <<endl;
    else
        cout<< num << " nao eh primo"<<endl;
    return 0;
}
