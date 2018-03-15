dishes = [["Salad", "Tomato", "Cucumber", "Salad", "Sauce"],
            ["Pizza", "Tomato", "Sausage", "Sauce", "Dough"],
            ["Quesadilla", "Chicken", "Cheese", "Sauce"],
            ["Sandwich", "Salad", "Bread", "Tomato", "Cheese"]];

function groupingDishes(dishes){
	for(var i = 0; i < dishes.length; i++){
		for(var j = 0; j < dishes[i].length; j++){
			console.log(dishes[i][j]);
		}
	}
}
groupingDishes(dishes);

