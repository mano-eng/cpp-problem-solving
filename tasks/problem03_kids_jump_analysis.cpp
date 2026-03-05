#include <iostream> 
using namespace std; 
 
int main() 
{ 
    int nK; 
    cin >> nK; 
 
    char gender; 
    int age, duration, jumps, height; 
 
    double sum = 0; 
    int ct = 0; 
 
    int prevAge, prevMax = -1; 
    int countSame = 0; 
 
    for (int i = 0; i < nK; i++) 
    { 
        cin >> gender >> age >> duration >> jumps; 
 
        int maxH = 0; 
 
        for (int j = 0; j < jumps; j++) 
        { 
            cin >> height; 
 
            if (height > maxH) 
                maxH = height; 
        } 
 
        // average duration for boys 
        if (gender == 'B') 
        { 
            sum += duration; 
            ct++; 
        } 
 
        // successive kids 
        if (i > 0) 
        { 
            if (age == prevAge && maxH == prevMax) 
                countSame++; 
        } 
 
        prevAge = age; 
        prevMax = maxH; 
    } 
 
    // average 
    if (ct > 0) 
        cout << "Average = " << sum / ct << endl; 
    else 
        cout << "Average = 0" << endl; 
 
    // successive count 
    cout << "Count = " << countSame << endl; 
 
    return 0; 
}
