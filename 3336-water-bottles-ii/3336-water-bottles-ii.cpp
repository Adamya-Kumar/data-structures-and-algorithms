class Solution {
public:
    int maxBottlesDrunk(int numBottles, int numExchange) {
        int drinkBottles=numBottles;
        int emptyBottles=numBottles;
        while(emptyBottles>=numExchange){
            numBottles -= numExchange;
            emptyBottles -= numExchange;
            numExchange++;
            drinkBottles++;
            emptyBottles++;
        }
        return drinkBottles;
    }
};