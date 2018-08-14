
(function () {
    var a = {};

    (function (b) {
        b.b = 'c';
        console.log(b);
    })(a);
    console.log('out', a);
})();