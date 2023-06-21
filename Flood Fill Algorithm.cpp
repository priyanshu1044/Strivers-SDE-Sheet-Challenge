void sol(int oColor, int newColor, int x, int y, int n, int m, vector<vector<int>> &image){
    if(x < 0 || x >= n || y < 0 || y >= m || image[x][y] != oColor){
        return;
    }
    image[x][y] = newColor;
    sol(oColor, newColor, x+1, y, n, m, image);
    sol(oColor, newColor, x-1, y, n, m, image);
    sol(oColor, newColor, x, y+1, n, m, image);
    sol(oColor, newColor, x, y-1, n, m, image);
}
vector<vector<int>> floodFill(vector<vector<int>> &image, int x, int y, int newColor)
{
    int oColor = image[x][y];
    if(oColor == newColor){
        return image;
    }
    int n = image.size();
    int m = image[0].size();
    sol(oColor, newColor, x, y, n, m, image);
    return image;
}