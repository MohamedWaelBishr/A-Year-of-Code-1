var a = [35235, 203, 5, 745446, 2, 98434354, 3398, 7645454, 9331];

function bubbleSort(a) {
    var swapped;

    do {

        swapped = false;

        for (var i = 0; i < a.length - 1; i++) {

            for (var j = 0; j <= i; j++) {
            
                if (a[i] > a[i + 1]) {
                
                    var temp = a[i];
                    a[i] = a[i + 1];
                    a[i + 1] = temp;
                    swapped = true;
               }
            }
        }
    } while (swapped);
}

bubbleSort(a);
console.log(a);
