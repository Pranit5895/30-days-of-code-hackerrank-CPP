
class Calculator : public AdvancedArithmetic {
  public:
    virtual int divisorSum(int n) override {
        int sum = 0;
        if ( 1 == n ) { return 1; }
        
        // Identify the divisors
        for (int lo = 1, hi = n ; lo < hi ; ++lo) {
            if (n % lo) { continue; }
            sum += lo;
            hi = (n / lo);
            if (hi <= lo) { break; }
            sum += hi;
        }
        
        return sum;
    }
};


