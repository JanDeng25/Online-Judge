class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& matrix) {
        vector<int> fdo;
	if (matrix.size() == 0)    return fdo;
	int i = 0, j = 0;
	int m = matrix.size(), n = matrix[0].size();
	int count = 0, one = 1;
	while (count < m * n) {
		fdo.push_back(matrix[i][j]);
		count++;
		i -= one;
		j += one;
		if (i >= m) {
			i = m - 1;
			j += 2;
			one = -one;
		}
		if (j >= n) {
			j = n - 1;
			i += 2;
			one = -one;
		}
		if (i < 0) {
			i = 0;
			one = -one;
		}
		if (j < 0)
		{
			j = 0;
			one = -one;
		}

	}
	return fdo;
    }
};