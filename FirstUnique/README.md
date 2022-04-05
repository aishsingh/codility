First Unique
============

Find the first unique number in a given sequence.

Scored
------
* Scored 100%  
* Passes all unit tests

Solution
--------

```cpp

int solution(vector<int> &A) 
{
    int firstUniqueNum = -1;

    for (unsigned int i=0; i<A.size(); i++)
    {
        bool isUnique = true;
        for (unsigned int j=0; j<A.size(); j++)
        {
            if (j == i)
            {
                // skip known number i
                continue;
            }

            if (A.at(j) == A.at(i))
            {
                // number is not unique! skip
                isUnique = false;
                break;
            }
        }

        if (isUnique)
        {
            firstUniqueNum = A.at(i);
            break;
        }
    }

    return firstUniqueNum;
}

```

Link
----
https://app.codility.com/programmers/trainings/4/first_unique/
