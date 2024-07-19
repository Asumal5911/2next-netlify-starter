const s = [5, 7, 2];
function editInPlace() {
    "use strict";

    //s = [2, 5, 7];
    s[0] = 2;
    s[1] = 5;
    s[2] = 7;
};
//
///
//
function freezeObj() {
    "use strict";
    const MATH_CONSTANTS = { //setting a varibale that remains constant throughout//
        PI: 3.14
    };
    // we know that PI is a constant value that shall not change even if set to different value later//
    Object.freeze(MATH_CONSTATNS);//so we freeze the object so the value does not change//
    try {
        MATH_CONSTANTS.PI = 99;
    } catch(ex) {
    console.log(ex);
    }
    return MATH_CONSTANTS.PI;
};
//code above represents object mutation, eventhough it was set for an constant it was later "mutated" to become anther value//
//the reason for an error when you run this code is because now it cannot be changed and you are changing the value of PI//
//
///
//
var magic = function() {
    return new Date();
};// this has alot of key functions and codes that does the job but takes time to write all of this//
//The code above can be changed to the following below//
const magic2 = () => new Date();//2 for second version//
//with the use of arrow there is no need for function or return code neither the curly braces, and the var can be changed to const//
//
///
//
//Example#1 for the use of arrows from above//
var myConcat = function (arr1, arr2) {
    return arr1.concat(arr2);
};
// this can be transformed into//
const myConcat2 = (arr1, arr2) => arr1.concat(arr2);//2 for second version//
//and the result will be the same as the bigger and longer code above the new one//
//
///
//
const realNumberArray = [4, 5.6, -9.8, 3.14, 42, 6, 8.34, -2];

const squareList = (arr) => {
    const squaredIntegers = arr;
    return squaredIntegers;
}
