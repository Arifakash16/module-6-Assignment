

class Multiplier {
public:
    int multiply(int x, int y) {
        if (y > x) // Swap two numbers because we want to iterate with the smaller number
            multiply(y, x);
        
        if (y == 0)  // 0 multiplied with anything gives 0
            return 0;

        if (y > 0)
            return x + multiply(x, y - 1);
        
        return 0;
    }
};


//Time complexity: O(min(x,y))
//Space complexity: O(min(x,y))