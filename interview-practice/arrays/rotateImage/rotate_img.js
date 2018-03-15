function rotateImage(a) {
	var rotatedImage = [];
	console.log(a);

	var k = 0;
	for(var i = 0; i < a.length; i++){
		for(var j = a.length -1; j  >= 0; j--){
			console.log("rotating");
			console.log(rotatedImage[i][k]);
			console.log(a[j][i]);
			k++;
		}k = 0;
	}
}

rotateImage([[1,2,3],[4,5,6],[7,8,9]]);

