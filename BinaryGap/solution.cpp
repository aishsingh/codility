int solution(int N) 
{
    const size_t totalBits      = sizeof(N) * 8;

    int     longestBinaryGap    = 0;
    bool    is1BitFound         = false;
    int     last1BitIndex       = 0;

    for (int i=0; i<totalBits; i++)
    {
        bool is1Bit = (N & (1 << i)); 
        if (is1Bit)
        {
            if (is1BitFound)
            {
                // not the first 1 bit

                int binaryGap = (i - last1BitIndex) - 1;

                if (binaryGap > longestBinaryGap)
                {
                    // new binary gap found

                    longestBinaryGap = binaryGap;
                }
            }

            last1BitIndex = i;
            is1BitFound = true;
        }
    }

    return longestBinaryGap;
}
