#include <iostream>

using namespace std;

class Rectangle{
    
    int inputX, inputY;

    class Point{
        private: 
            int x, y;
        public:
            Point() {
                setPoint(0, 0);
            }
            Point(int x, int y){
                setPoint(x, y);
            }

            void setPoint(int x, int y){
                this->x = x;
                this->y = y;
            }

            int getx(){
                return this->x;
            }

            int gety(){
                return this->y;
            }
    };

    public: 
        Point start, end;
        Rectangle(int x1, int y1, int x2, int y2){
            start = Point(x1, y1);
            end = Point(x2, y2);
        }
    
         void display(){

            int row1 = start.getx();
            int col1 = start.gety();
            int row2 = end.getx();
            int col2 = end.gety();
            int tempRow, tempCol;
            int row, col;

            if(row1 < row2){
                tempRow = row1;
            }else{
                tempRow = row2;
            }

            if(col1 < col2){
                tempCol = col1;
            }else{
                tempCol = col2;
            }

            row = row2 - tempRow;
            col = col2 - tempCol;

            for(int i = 1; i <= row; i++){
                for(int j = 1; j <= col; j++){
                    if(i == 1|| i == row || j == 1 || j == col){
                        cout << "# ";
                    }else{
                        cout << "  ";
                    }
                }
                cout << "\n";
            }
            
        }

        int area(){
            int row1 = start.getx();
            int col1 = start.gety();
            int row2 = end.getx();
            int col2 = end.gety();
            int tempRow, tempCol;
            int row, col;

            if(row1 < row2){
                tempRow = row1;
            }else{
                tempRow = row2;
            }

            if(col1 < col2){
                tempCol = col1;
            }else{
                tempCol = col2;
            }

            row = row2 - tempRow;
            col = col2 - tempCol;

            return row*col;
        }

        int perimeter(){
            int row1 = start.getx();
            int col1 = start.gety();
            int row2 = end.getx();
            int col2 = end.gety();
            int tempRow, tempCol;
            int row, col;

            if(row1 < row2){
                tempRow = row1;
            }else{
                tempRow = row2;
            }

            if(col1 < col2){
                tempCol = col1;
            }else{
                tempCol = col2;
            }

            row = row2 - tempRow;
            col = col2 - tempCol;

            return ((2*row) + (2*col)); 
        }

        void centerPoint(){
            
            float row1 = start.getx();
            float col1 = start.gety();
            float row2 = end.getx();
            float col2 = end.gety();

            float xCenter = (row1 + row2) / 2; 
            float yCenter = (col1 + col2) / 2;

            printf("(%.2f, %.2f)", xCenter, yCenter);
        }

        bool square(){
            int row1 = start.getx();
            int col1 = start.gety();
            int row2 = end.getx();
            int col2 = end.gety();
            int tempRow, tempCol;
            int row, col;

            if(row1 < row2){
                tempRow = row1;
            }else{
                tempRow = row2;
            }

            if(col1 < col2){
                tempCol = col1;
            }else{
                tempCol = col2;
            }

            row = row2 - tempRow;
            col = col2 - tempCol;

            if(row == col){
                return true;
            }else{
                return false;
            }
        }
};

int main(){

    int x1, y1, x2, y2;

    cout << "X Start: ";
    cin >> x1;
    cout << "Y-Start: ";
    cin >> y1;
    cout << "X End: ";
    cin >> x2;
    cout << "Y End: ";
    cin >> y2;

    Rectangle b(x1, y1, x2, y2);

    cout << "\narea: " << b.area();

    cout << "\nperimeter: " << b.perimeter();

    b.centerPoint();

    if(b.square() == 1){
        cout << "\nsquare: yes";
    }else{
        cout << "\nsquare: no";
    }
    
    cout << "\n";

    b.display();

    return 0;
}