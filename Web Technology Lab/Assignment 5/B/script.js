document.addEventListener('DOMContentLoaded', function () {
    function createAnchor() {
        var anchor = document.createElement('a');
        anchor.textContent = 'Click here to go to the new page';
        anchor.href = 'https://www.google.com'; 
        anchor.target = '_blank'; 
        document.body.appendChild(anchor);
    }

    var redirectButton = document.getElementById('redirectButton');
    redirectButton.addEventListener('click', createAnchor);
});