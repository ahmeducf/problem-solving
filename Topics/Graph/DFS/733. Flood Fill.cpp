/*
An image is represented by an m x n integer grid image
where image[i][j] represents the pixel value of the image.

You are also given three integers sr, sc, and newColor.
You should perform a flood fill on the image starting from the pixel image[sr][sc].

To perform a flood fill, consider the starting pixel,
plus any pixels connected 4-directionally to the starting pixel of the same color as the starting pixel,
plus any pixels connected 4-directionally to those pixels (also with the same color), and so on.
Replace the color of all of the aforementioned pixels with newColor.

Return the modified image after performing the flood fill.
*/

class Solution {
public:
    bool valid(int i, int j, int m, int n) { return i >= 0 && i < m && j >= 0 && j < n;}
    int dx[4] = {0, 0, 1, -1};
    int dy[4] = {1, -1, 0, 0};

    void DFS(int sr, int sc, int oldColor, int newColor,
             vector<vector<int>>& image, int m, int n) {
        image[sr][sc] = newColor;
        for (int k = 0; k < 4; k++){
            int nr = sr + dx[k];
            int nc = sc + dy[k];
            if (valid(nr, nc, m, n) && image[nr][nc] == oldColor)
                DFS(nr, nc, oldColor, newColor, image, m, n);
        }
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        int oldColor = image[sr][sc];
        if (oldColor != newColor)
            DFS(sr, sc, oldColor, newColor, image, image.size(), image[0].size());
        return image;
    }
};