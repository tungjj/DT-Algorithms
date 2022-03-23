var a: Array<number> ;
a =  [2, 10, 3, 25, 6, 9, -1, 11, 40, 56, 34];

var mot = 1;
var hai = 2;

function swap(a:number, b:number):void {
  var temp = a;
  a = b;
  b = temp;
}
swap(mot, hai);
console.log(mot, hai);

function BubbleSort(arr: Array<number>){
  for (let i = 0; i < arr.length; i++) {
    for (let j = 0; j < arr.length; j++) {
      if(j != arr.length-1 ){
        if(arr[j] > arr[j+1]){
          let temp = arr[j];
          arr[j] = arr[j+1];
          arr[j+1] = temp;
        }
      }
    }
  }
}
console.log(a);
BubbleSort(a);
console.log(a);