class Box {
    private:
       int Length;
       int Width;
       int Height;
       int Ans;
    public:
       // write prototypes of setters for length, width and height
       // write prototypes of getters for length, width and height

       void setDetails(int l ,int w , int h);
       int getHeight();
       int getLength();
       int getWidth();
       int calcVolume();
};
