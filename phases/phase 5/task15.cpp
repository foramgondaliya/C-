#include <iostream>
using namespace std;

int countPhrases()
{
	int paperheight,paperwidht,ans,phraseWidth=350,phraseHeight=90,distance = 8;
	
	paperwidht = 793;
	paperheight = 1122;

    ans=((paperwidht+distance)/(phraseWidth+distance))*((paperheight+distance)/(phraseHeight+distance));

    return ans;
}

int main() {
    int total = countPhrases();
    cout << "Total number of phrases are = "<<total;
    return 0;
}

