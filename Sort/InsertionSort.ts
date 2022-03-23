function swap(arr:Array<number>, i: number, j:number ): void{
  let temp = arr[i];
  arr[i] = arr[j];
  arr[j] = temp;
}
function InsertionSort(array: Array<number>): void{
  for (let i = 0; i < array.length; i++) {
    for (let j = i; j > 0; j--) {
      if(array[j] < array[j-1]){
        // swap(array, array[j], array[j-1]);
        let temp = 
      }
    }
  }
}
let a: Array<number> = [1, 0, 3, 2, -1, 4 ,5];
console.log(a);
InsertionSort(a);
console.log(a);