$(document).ready(function() {
    $(".animationButton").click(function() {
        const $div = $(this).closest("td").find(".animatedDiv");

        if ($div.hasClass("expanded")) {
            $div.animate({
                width: '100px',
                height: '100px',
                opacity: 1
            }, 1000).removeClass("expanded");
        } else {
            $div.animate({
                width: '200px',
                height: '200px',
                opacity: 0.5
            }, 1000).addClass("expanded");
        }
    });
});