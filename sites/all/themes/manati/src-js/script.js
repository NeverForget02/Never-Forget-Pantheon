// Manatí Base Theme JS functions
(function($) {
  $(document).ready(function(){
    $('.expanded').mouseenter(function(){
      $('.expanded .menu').removeClass('navNone').addClass('navBlock');
    });
    $('.expanded').mouseleave(function(){
      $('.expanded .menu').removeClass('navBlock').addClass('navNone');
    });

   $('.header').
      prepend($('<button id="btn-menu" class="btn-menu"><span class="icon-bar"></span><span class="icon-bar"></span><span class="icon-bar"></span></button>'));


    $('#btn-menu').click(function(){
      $('.menu').toggleClass('displayblock');
    });
  });
})(jQuery);

