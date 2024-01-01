// function escapeRegExp(string) 
// {
//  return string.replace(/[.*+?^${}()|[\]\\]/g, '\\$&'); // $& means the whole matched string
// }

    
// var str = 'apple Red apple "orange" "green" avocado';

// var f= /^a/g;	//matches only at the beginning of the input
// console.log(str.match(f));
// var g= /o$/g;	//matches only at the end of the input
// console.log(str.match(g));
// var h= /\ba/g;	//matches only at a word boundary
// console.log(str.match(h));
// var i= /\Bg/g;	//matches only not at a word boundary
// console.log(str.match(i));

// // const re = new RegExp('ap+p');
// // document.write(re)

// document.write(escapeRegExp("Hello world!!![[[///''';;;;;;,,,...<<<////]>>>??::']]]"))
str = "HTML is a web-based Program Language..."

// $ for ending
// ^ for beginning
// \ only at boundary
// \B  for only not at a word boundary
 //g means global
 //i means case insensitivity

var a1 = /.$/
var a2 = /^HTML/
var a3 = /\H/
var a4 = /\../
var a5 = /\BL /

document.write(str.match(a1), "<br>")
document.write(str.match(a2), "<br>")
document.write(str.match(a3), "<br>")
document.write(str.match(a4), "<br>")
document.write(str.match(a5), "<br>")


