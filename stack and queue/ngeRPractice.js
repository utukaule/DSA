//Next greter element
let arr = [1, 5, 2, 7, 8, 3, 88];
let stack = [];
let answer = [];

for (let i = arr.length - 1; i >= 0; i--) {

    //stack length is 0 then push -1
    if ((stack.length) == 0) {
        answer.push(-1);
    }

    //here stack top element is greter then the arr[i] then push it.
    else if (stack.length > 0 && stack[stack.length - 1] > arr[i]) {
        answer.push(stack[stack.length - 1])
    }

    //here stack top is not greter then arr[i]
    // then we will pop till we find any next greter element and 
    //if we dont get any element greter then arr[i] any stack then 
    //we will pop all elements from stack and push -1

    else if (stack.length > 0 && stack[stack.length - 1] <= arr[i]) {
        while (stack.length > 0 && stack[stack.length - 1] <= arr[i]) {
            stack.pop()
        }
        if(stack.length == 0){
            answer.push(-1)
        }
        else{
            answer.push(stack[stack.length-1])
        }
    }   
    stack.push(arr[i]);
}
console.log(answer)

let result = []
for(let i = answer.length - 1; i>=0;i--){
    result.push(answer[i]);
}
console.log(result)