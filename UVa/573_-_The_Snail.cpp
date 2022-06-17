// Edhi okasaari Moyya anamma
// Velli aadukomma
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;
typedef vector<char> vc;
#define M 1000000007
#define print(x) cout << (x)
#define prints(x) cout << (x) << " "
#define ALL(x) x.begin(), x.end()
#define println(x) cout << (x) << "\n"

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    cout << boolalpha;

    int t = 1;
    // cin >> t;
    while (true)
    {
        bool success;
        double fatigueDrop, day = 1, initHeight = 0, distanceClimbed, heightAfterClimbing, heightAfterSliding, H, U, D, F;
        cin >> H >> U >> D >> F;
        if (H == 0 && U == 0 && D == 0 && F == 0)
            break;
        fatigueDrop = (U * F) / 100;
        distanceClimbed = U;
        heightAfterClimbing = U;
        heightAfterSliding = heightAfterClimbing - D;
        // while (true)
        // {
        //     day++;
        //     initHeight = heightAfterSliding;
        //     distanceClimbed -= fatigueDrop;
        //     if (distanceClimbed < 0)
        //         distanceClimbed = 0;

        //     heightAfterClimbing = initHeight + distanceClimbed;
        //     if (heightAfterClimbing > H)
        //     {
        //         success = true;
        //         break;
        //     }

        //     heightAfterSliding = heightAfterClimbing - D;
        //     if (heightAfterSliding < 0)
        //     {
        //         success = false;
        //         break;
        //     }
        // }
        while(1) {
			initHeight += U;
			if(U > 0) U -= fatigueDrop;
			if(initHeight > H){success = true; break;}
			initHeight -= D;
			if(initHeight < 0) { success = false; break; }
			day++;
		}
        
        if (success)
            cout << "success on day " << day;
        else
            cout << "failure on day " << day;
        println("");
    }
    return 0;
}
