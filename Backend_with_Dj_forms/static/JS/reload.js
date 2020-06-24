console.log("HELLO")
var e = performance.getEntriesByType("navigation")[0].type;
console.log(e)
/*if(performance.getEntriesByType("navigation")[0].type === "back_forward") {
    location.reload(true);
    console.log("Page reloaded")
}*/

window.onhashchange = function() {

    console.log("HEY")
    location.reload(true);
}

/*if(performance.navigation.type === 2) {
    // type is 2 when the back button is click
    location.reload(true);
 }*/
