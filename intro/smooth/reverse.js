function reverseParentheses(s) {
	var input;
	if(!Array.isArray(s)){
		input = Array.from(s);
	}
	var stack = new Array();
	var aux_buffer = new Array();
	var return_value = new Array();
	var in_prntses;

	for(var i = 0; i < input.length; i++){
		if(input[i] === '('){
			in_prntses = true;
			while(in_prntses){
				while(input[i] !== ')'){
					stack.push(input[i]);
					i++; 
				}
				while(stack[stack.length - 1] !== '('){
					aux_buffer.push(stack.pop());
					
				}
				if(stack.length > 1){
					stack.pop();
					in_prntses = true;
					while(aux_buffer.length > 0){
						stack.push(aux_buffer.shift());
					}i++;
				}else{
					stack.pop();
					while(aux_buffer.length > 0){
						return_value.push(aux_buffer.shift());
					}
					in_prntses = false;
				}
			} 
		}else{
			return_value.push(input[i]);
		}
	}
	var ret = return_value.join("");
	return ret
}

console.log(reverseParentheses("a(bc(de)fg)h"));

console.log(reverseParentheses("a(bcdefghijkl(mno)p)q"));

console.log(reverseParentheses("abc(cba)ab(bac)c"));
