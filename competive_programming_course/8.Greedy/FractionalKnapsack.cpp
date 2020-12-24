#include <iostream>
using namespace std;
// #define N 4;
int N = 4;

void print(float ratio[], int wt[], int value[])
{
    cout << "Weight\tProfit\tratio\n";
    for (int i = 0; i < N; i++)
    {
        cout << wt[i] << "\t"
             << value[i] << "\t"
             << ratio[i] << endl;
    }
    cout << endl;
}

void knapsack(float ratio[], int wt[], int value[], int W)
{
    int cap = 0;
    float profit = 0;
    float capacity[N], temp_profit[N];
    for (int i = 0; i < N; i++)
    {
        if (cap + wt[i] <= W)
        {
            cap += wt[i];
            profit += value[i];
            capacity[i] = 1;
            temp_profit[i] = profit;
        }
        else
        {
            int cap_left = W - cap;
            float fraction = (float)(cap_left) / wt[i];
            cap += wt[i] * fraction;
            capacity[i] = fraction;
            temp_profit[i] = temp_profit[i - 1] + value[i] * fraction;
        }
    }
    cout << "Weight\tProfit\tCapacity\tProfit Cut\tTill Profit\n";
    for (int i = 0; i < N; i++)
    {
        cout << wt[i] << "\t"
             << value[i] << "\t"
             << capacity[i] << "\t\t" << value[i] * capacity[i] << "\t\t" << temp_profit[i] << endl;
    }
    cout << "(Weight, Total Profit) = (" << W << ", " << temp_profit[N - 1] << ")";
}

int main()
{
    int wt[] = {30, 20, 10, 5};
    int value[] = {120, 100, 60, 40};
    int W = 30;
    float ratio[N];
    for (int i = 0; i < N; i++)
    {
        ratio[i] = float(value[i]) / wt[i];
    }
    // Print
    cout << "\nBefore Sorting -> \n";
    print(ratio, wt, value);

    int temp1 = 0, temp2 = 0, temp3 = 0;
    //Sort
    for (int i = 0; i < N; i++)
    {
        for (int j = i; j < N; j++)
        {
            if (ratio[j] > ratio[i])
            {
                temp1 = ratio[i];
                ratio[i] = ratio[j];
                ratio[j] = temp1;

                temp2 = wt[i];
                wt[i] = wt[j];
                wt[j] = temp2;

                temp3 = value[i];
                value[i] = value[j];
                value[j] = temp3;
            }
        }
    }
    cout << "After Sorting -> \n";
    print(ratio, wt, value);
    knapsack(ratio, wt, value, W);
    return 0;
}