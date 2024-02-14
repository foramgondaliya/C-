#include <iostream>
using namespace std;

void Cubes(const int input[], int output[], int size) 
{
    for (int i = 0; i < size; ++i) 
	{
        output[i] = input[i] * input[i] * input[i];
    }
}

double Average(const int array[], int size) 
{
    double sum = 0;
    for (int i = 0; i < size; ++i) 
	{
        sum += array[i];
    }
    return sum / size;
}

string determineKind(double average) 
{
    if (average >= 22 && average <= 35) 
	{
        return "TIGHT";
    } else if (average > 35 && average <= 50) 
	{
        return "BALANCED";
    } else if (average > 50) 
	{
        return "TOXIC";
    } else 
	{
        return "LOOSE";
    }
}

int main() {
    const int size = 1;
    int input[size];
    
    cout << "Enter " << size << " values for the array:" << endl;
    for (int i = 0; i < size; ++i) 
	{
        cout << "Value " << i + 1 << ": ";
        cin >> input[i];
    }

    int output[size];

    Cubes(input, output, size);

    double average = Average(output, size);

    string kind = determineKind(average);

    cout << "Average value: " << average << endl;
    cout << "Array kind: " << kind << endl;

    return 0;
}
