function isIPv4Address(inputString) {
	let ipv4Fields = inputString.split('.');
	if(ipv4Fields.length < 4) return false;
	ipv4Fields.forEach(field =>{
		let numeric_field = parseInt(field);
		console.log(numeric_field);
		if(numeric_field > 255 || numeric_field < 0)
			return false;
	});
	return true;
}

