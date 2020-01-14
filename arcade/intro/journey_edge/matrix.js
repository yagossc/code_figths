function matrixElementsSum(matrix) {
    var total = 0;
    for(var j = 0; j < matrix[0].length; j++){
        for(var i = 0; i < matrix.length; i++){
            if(matrix[i][j] <= 0){
		    break;
		}
            total+=matrix[i][j];
        }
    }
    return total;
}

var matrix = [	[1, 1, 0, 3],
		[1, 0, 1, 0],
		[1, 2, 0, 1] ];
//console.log(matrix.length);
//console.log(matrix[0].length);
console.log(matrixElementsSum(matrix));

