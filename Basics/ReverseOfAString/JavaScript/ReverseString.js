let originalStr = "Hello";
let reversedStr = "";

for (let i = originalStr.length - 1; i >= 0; i--) {

    reversedStr = reversedStr + originalStr.charAt(i);
}

console.log("Original String : " + originalStr);
console.log("Reversed String : " + reversedStr);
