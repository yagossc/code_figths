function checkPalindrome(inputString) {
//    let auxiliaryString = Array.from(inputString);
    var reverseString = inputString.split("").reverse().join("");
    console.log("in " + inputString);
    console.log("out " + reverseString);
    if(inputString === reverseString)
        return true;
    else
        return false;
}

function main()
{
	if(checkPalindrome("abac"))
		console.log("correct");
	else
		console.log("incorrect");
}

main();
