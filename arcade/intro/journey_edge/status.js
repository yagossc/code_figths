function makeArrayConsecutive2(statues) {
    let sortedArray = sortArray(statues);
    console.log(sortedArray);
    let missingStatues = 0;
    for(var i  = 0; i < sortedArray.length - 1; i++){
        if(sortedArray[i + 1] - sortedArray[i ] > 1)
            missingStatues+=sortedArray[i + 1] - sortedArray[i] -1 ; 
    }
    return missingStatues;
}
function sortArray(array){
    let swaped = false;
    for(var i = 0; i < array.length; i++){
        for(var j = 0; j < array.length - 1; j++){
            if(array[j] > array[j + 1]){
                var aux = array[j + 1];
                array[j + 1] = array[j];
                array[j] = aux;
                swaped = true
            }
        }
        if(!swaped)
            return array;
        swaped = false;
    }
    return array;
}

console.log(makeArrayConsecutive2([6,2,3,8]));
