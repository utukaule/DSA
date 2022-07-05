// Nearest Small Element To Left
let arr = [4, 5, 2, 10, 8];
let s = [];
let result = [];



for (let i = arr.length - 1; i >= 0; i--) {
    if (s.length == 0) {
        result.push(-1);
    }
    else if (s.length > 0 && s[s.length - 1] < arr[i]) {
        result.push(s[s.length - 1]);
    }
    if (s.length > 0 && s[s.length -1] >= arr[i]) {
        while (s.length > 0 && s[s.length - 1] >= arr[i]) {
            s.pop()
        }
        if (s.length == 0) {
            result.push(-1);
        }
        else {
            result.push(s[s.length - 1])
        }
    }
    s.push(arr[i])
}
let final = []
for(let i = result.length -1 ; i >= 0 ; i--){
    final.push(result[i]);
}

console.log(final);