class Wektor2D
{
    // Tutaj napisz implementacje klasy Wektor2D
    public:
        Wektor2D(){
            x = 0.;
            y = 0.;
        }

        Wektor2D(double _x, double _y){
            x = _x;
            y = _y;
        }

        double getX(){
            return x;
        };

        double getY(){
            return y;
        };

        void setX(double _x){
            x = _x;
        };

        void setY(double _y){
            y = _y;
        };

    private:
        double x, y;
};

Wektor2D operator+(Wektor2D a, Wektor2D b){
    return Wektor2D(a.getX() + b.getX(), a.getY() + b.getY());
}

double operator*(Wektor2D a, Wektor2D b){
    return (a.getX()*b.getX() + a.getY()*b.getY());
}
