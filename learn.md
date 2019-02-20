记录1：求M×N矩阵的对脚线元素？
for (int i = 0; i < m+n-1 ; i++) {
	int row = max(0, i-n+1);
	int col = min(i, n-1);
	for (; col >= 0 && row < m; row++, col--) {
		tmp[i].push_back(matrix[row][col]);
	}
}
