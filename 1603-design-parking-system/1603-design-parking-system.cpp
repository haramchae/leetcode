class ParkingSystem {
public:
    int big, medium, small;
    ParkingSystem(int big, int medium, int small) {
        this->big = big;
        this->medium = medium;
        this->small = small;
    }
    
    bool addCar(int carType) {
        if(carType == 1){
            big--;
            if(big>=0) return true;
            else return false;
        }else if(carType == 2){
            medium--;
            if(medium>=0) return true;
            else return false;
        }else{
            small--;
            if(small>=0) return true;
            else return false;
        }
        return false;
    }
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */