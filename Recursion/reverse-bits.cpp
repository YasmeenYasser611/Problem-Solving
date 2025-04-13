class Solution {
public:
    uint32_t reverseBits(uint32_t n) 
    {
        return reverse(n, 0, 0);
    }

private:
    uint32_t reverse(uint32_t n, int i, uint32_t result) 
    {
        if (i == 32) return result;
        result <<= 1;
        result |= (n & 1);
        return reverse(n >> 1, i + 1, result);
    }
};

