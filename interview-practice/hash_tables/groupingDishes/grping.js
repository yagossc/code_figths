//Firts Lvl from HashTables
//Base for C solution

dishes = [["Salad", "Tomato", "Cucumber", "Salad", "Sauce"],
            ["Pizza", "Tomato", "Sausage", "Sauce", "Dough"],
            ["Quesadilla", "Chicken", "Cheese", "Sauce"],
            ["Sandwich", "Salad", "Bread", "Tomato", "Cheese"]];

function groupingDishes(dishes){

	let hash_table = [];
	for(var i = 0; i < dishes.length; i++){
		for(var j = 1; j < dishes[i].length; j++){
			if(hash_table[dishes[i][j]] === undefined)
				hash_table[dishes[i][j]] = [];
			hash_table[dishes[i][j]].push(dishes[i][0]);
		}
	}
	
	var iterator = Object.keys(hash_table).sort();
	let return_table = [];
	iterator.forEach(entry =>{
		hash_table[entry].sort();
		if(hash_table[entry].length >= 2){
			hash_table[entry].unshift(entry);
			return_table.push(hash_table[entry]);
		}
	});

	return return_table;
}

groupingDishes(dishes);

