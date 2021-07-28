/* 
  Author: Dodi Hidayatullah
  ---------------------------------------
  TABLE of CONTENT:
  ---------------------------------------
    - 0.0 Basic script Foundation
    - 1.0  config plugins & custome script 
        1.1 Pretty Photo
        1.2 Offcanvas menu pushy
        1.3 carousel post 
        1.4 orbit slider
        1.5 overlay image script
        1.6 dropdown foundation
        1.7 Score review
        1.8 Wookmark Masonry Style
        1.9 Newsticker 
        1.11 Breadcumb
        1.12 Flexslider
        1.13 initialise plugin superfish
        1.14 scroll to top
*/

/* ----------------------------------------------
  0.0  Basic Foundation script 
-------------------------------------------------*/

;(function ($, window, undefined) {
  'use strict';

  var $doc = $(document),
      Modernizr = window.Modernizr;

  $(document).ready(function() {
    $.fn.foundationAlerts           ? $doc.foundationAlerts() : null;
    $.fn.foundationButtons          ? $doc.foundationButtons() : null;
    $.fn.foundationAccordion        ? $doc.foundationAccordion() : null;
    $.fn.foundationNavigation       ? $doc.foundationNavigation() : null;
    $.fn.foundationTopBar           ? $doc.foundationTopBar() : null;
    $.fn.foundationCustomForms      ? $doc.foundationCustomForms() : null;
    $.fn.foundationMediaQueryViewer ? $doc.foundationMediaQueryViewer() : null;
    $.fn.foundationTabs             ? $doc.foundationTabs({callback : $.foundation.customForms.appendCustomMarkup}) : null;
    $.fn.foundationTooltips         ? $doc.foundationTooltips() : null;
    $.fn.foundationMagellan         ? $doc.foundationMagellan() : null;
    $.fn.foundationClearing         ? $doc.foundationClearing() : null;

    $.fn.placeholder                ? $('input, textarea').placeholder() : null;
  });

  // UNCOMMENT THE LINE YOU WANT BELOW IF YOU WANT IE8 SUPPORT AND ARE USING .block-grids
  // $('.block-grid.two-up>li:nth-child(2n+1)').css({clear: 'both'});
  // $('.block-grid.three-up>li:nth-child(3n+1)').css({clear: 'both'});
  // $('.block-grid.four-up>li:nth-child(4n+1)').css({clear: 'both'});
  // $('.block-grid.five-up>li:nth-child(5n+1)').css({clear: 'both'});

  // Hide address bar on mobile devices (except if #hash present, so we don't mess up deep linking).
  if (Modernizr.touch && !window.location.hash) {
    $(window).load(function () {
      setTimeout(function () {
        window.scrollTo(0, 1);
      }, 0);
    });
  }

})(jQuery, this);



/* ----------------------------------------------
  1.0  config plugins script 
-------------------------------------------------*/

(function($){
"use strict";
    /* 1.1 =========== prettyPhoto ==============*/
    $("a[data-rel^='prettyPhoto']").prettyPhoto();

    
    /* 1.2 =========== pushy ============== */
    $('.pushy').perfectScrollbar();

    
    /* 1.3 ============ carousel post ==============*/ 
    $("div#makeMeScrollable").smoothDivScroll({
      autoScrollingMode: "onStart",
    });
    $("#mixedContent").smoothDivScroll({
      touchScrolling: true,
    });
    $("#mixedContentSnippets").smoothDivScroll({
      touchScrolling: true,
    });
    
    $("#mixedContentCartoons").smoothDivScroll({
      touchScrolling: true,
    });
    
    $("#mixedContentCaption").smoothDivScroll({
      touchScrolling: true,
    });
    
    $('#mixedContentSnippets').mixitup({
		targetSelector: '.mix',
		filterSelector: '.filter',
		sortSelector: '.sort',
		buttonEvent: 'click',
		effects: ['fade'],
		listEffects: null,
		easing: 'smooth',
		layoutMode: 'grid',
		targetDisplayGrid: 'inline-block',
		targetDisplayList: 'block',
		gridClass: '',
		listClass: '',
		transitionSpeed: 600,
		showOnLoad: 'all',
		sortOnLoad: false,
		multiFilter: false,
		filterLogic: 'or',
		resizeContainer: true,
		minHeight: 0,
		failClass: 'fail',
		perspectiveDistance: '3000',
		perspectiveOrigin: '50% 50%',
		animateGridList: true,
		onMixLoad: null,
		onMixStart: null,
		onMixEnd: null
	});
    
    $('#mixedContent').mixitup({
		targetSelector: '.mix',
		filterSelector: '.filter',
		sortSelector: '.sort',
		buttonEvent: 'click',
		effects: ['fade'],
		listEffects: null,
		easing: 'smooth',
		layoutMode: 'grid',
		targetDisplayGrid: 'inline-block',
		targetDisplayList: 'block',
		gridClass: '',
		listClass: '',
		transitionSpeed: 600,
		showOnLoad: 'all',
		sortOnLoad: false,
		multiFilter: false,
		filterLogic: 'or',
		resizeContainer: true,
		minHeight: 0,
		failClass: 'fail',
		perspectiveDistance: '3000',
		perspectiveOrigin: '50% 50%',
		animateGridList: true,
		onMixLoad: null,
		onMixStart: null,
		onMixEnd: null
	});
    
    
    $('#mixedContent3').mixitup({
		targetSelector: '.mix',
		filterSelector: '.filter',
		sortSelector: '.sort',
		buttonEvent: 'click',
		effects: ['fade'],
		listEffects: null,
		easing: 'smooth',
		layoutMode: 'grid',
		targetDisplayGrid: 'inline-block',
		targetDisplayList: 'block',
		gridClass: '',
		listClass: '',
		transitionSpeed: 600,
		showOnLoad: 'all',
		sortOnLoad: false,
		multiFilter: false,
		filterLogic: 'or',
		resizeContainer: true,
		minHeight: 0,
		failClass: 'fail',
		perspectiveDistance: '3000',
		perspectiveOrigin: '50% 50%',
		animateGridList: true,
		onMixLoad: null,
		onMixStart: null,
		onMixEnd: null
	});
    
    
    
    $("#mixedContentSports").smoothDivScroll({
      touchScrolling: true,
     // autoScrollingMode: "always"
    });
    
    $("#mixedContent3").smoothDivScroll({
      touchScrolling: true,
     // autoScrollingMode: "always"
    });

    $(".contentBox .overlay").mouseover(function(){
     $(this).prev().css({
          opacity          : 1,
          WebkitTransition : 'opacity 1s ease-in-out',
          MozTransition    : 'opacity 1s ease-in-out',
          MsTransition     : 'opacity 1s ease-in-out',
          OTransition      : 'opacity 1s ease-in-out',
          transition       : 'opacity 1s ease-in-out'
      });
    });
    
    $(".contentBox .overlay").mouseleave(function(){
     $(this).prev().css({
          opacity          : 0.5,
          WebkitTransition : 'opacity 1s ease-in-out',
          MozTransition    : 'opacity 1s ease-in-out',
          MsTransition     : 'opacity 1s ease-in-out',
          OTransition      : 'opacity 1s ease-in-out',
          transition       : 'opacity 1s ease-in-out'
      });
    });
    
    $(".contentBox2 .overlay").mouseover(function(){
       $(this).prev().css({
            opacity          : 1,
            WebkitTransition : 'opacity 1s ease-in-out',
            MozTransition    : 'opacity 1s ease-in-out',
            MsTransition     : 'opacity 1s ease-in-out',
            OTransition      : 'opacity 1s ease-in-out',
            transition       : 'opacity 1s ease-in-out'
        });
    });
    
    $(".contentBox2 .overlay").mouseleave(function(){
       $(this).prev().css({
            opacity          : 0.5,
            WebkitTransition : 'opacity 1s ease-in-out',
            MozTransition    : 'opacity 1s ease-in-out',
            MsTransition     : 'opacity 1s ease-in-out',
            OTransition      : 'opacity 1s ease-in-out',
            transition       : 'opacity 1s ease-in-out'
        });
    });
    
    $(".contentBox3 .overlay").mouseover(function(){
     $(this).prev().css({
          opacity          : 1,
          WebkitTransition : 'opacity 1s ease-in-out',
          MozTransition    : 'opacity 1s ease-in-out',
          MsTransition     : 'opacity 1s ease-in-out',
          OTransition      : 'opacity 1s ease-in-out',
          transition       : 'opacity 1s ease-in-out'
      });
    });
    
    $(".contentBox3 .overlay").mouseleave(function(){
       $(this).prev().css({
            opacity          : 0.5,
            WebkitTransition : 'opacity 1s ease-in-out',
            MozTransition    : 'opacity 1s ease-in-out',
            MsTransition     : 'opacity 1s ease-in-out',
            OTransition      : 'opacity 1s ease-in-out',
            transition       : 'opacity 1s ease-in-out'
        });
    });

    /* 1.4 ============ orbit slider ============ */

    $('#slider').orbit({
      animation: 'fade',
      timer_speed: 10000,
      pause_on_hover: true,
      resume_on_mouseout: true,
      swipe: true,
      animation_speed: 800
    });

    $('#slider_two').orbit({
      animation: 'fade',
      timer_speed: 10000,
      pause_on_hover: true,
      resume_on_mouseout: false,
      next_class: 'orbitnext', // Class name given to the next button
      prev_class: 'orbitprev', // Class name given to the previous button
      swipe: true,
      animation_speed: 500
    });

    /* 1.5 ============ overlay image script ======================= */

    $(".lthumb").mouseover(function(){
       $(this).find('img').css({
            //opacity          : 0.1,
            WebkitTransition : 'opacity 1s ease-in-out',
            MozTransition    : 'opacity 1s ease-in-out',
            MsTransition     : 'opacity 1s ease-in-out',
            OTransition      : 'opacity 1s ease-in-out',
            transition       : 'opacity 1s ease-in-out'
        });
    });

    $(".lthumb").mouseleave(function(){
       $(this).find('img').css({
            opacity          : 1,
            WebkitTransition : 'opacity 1s ease-in-out',
            MozTransition    : 'opacity 1s ease-in-out',
            MsTransition     : 'opacity 1s ease-in-out',
            OTransition      : 'opacity 1s ease-in-out',
            transition       : 'opacity 1s ease-in-out'
        });
    });

    $(".topcat .tthumb").mouseover(function(){
       $(this).find('img').css({
            '-webkit-transform' : 'scale(1.1)',
            '-moz-transform'    : 'scale(1.1)',
            '-o-transform'     : 'scale(1.1)',
            '-ms-transform'   : 'scale(1.1)',
            'transform'         : 'scale(1.1)'
        });
    });

    $(".topcat .tthumb").mouseleave(function(){
       $(this).find('img').css({
            '-webkit-transform' : 'scale(1)',
            '-moz-transform'    : 'scale(1)',
            '-o-transform'     : 'scale(1)',
            '-ms-transform'   : 'scale(1)',
            'transform'         : 'scale(1)'
        });
    });


    /*1.6 ==========dropdown foundation ============*/
    $('.has-flyout').hover(function(){
        $(this).find('.flyout').stop().slideDown();
    }); 
    $('li.has-dropdown').hover(function(){
        $(this).find('ul.dropdown').slideDown(5000);
    }); 


    /*1.7 ========== Score review  ============*/
    $(".meter > span").each(function() {
      $(this)
        .data("origWidth", $(this).width())
        .width(0)
        .animate({
          width: $(this).data("width")
        }, 1200);
        $(this).prev().text($(this).data("width"));
    });

   /*1.8 ========== Wookmark Masonry Style ============*/
    $('#tiles').imagesLoaded(function() {
        // Prepare layout options.
        var options = {
          autoResize: true, // This will auto-update the layout when the browser window is resized.
          container: $('#masonrystyle'), // Optional, used for some extra CSS styling
          offset: 20, // Optional, the distance between grid items
          outerOffset: 20, // Optional, the distance to the containers border
          itemWidth: 354 // Optional, the width of a grid item
        };

        // Get a reference to your grid items.
        var handler = $('#tiles li');

        // Call the layout function.
        handler.wookmark(options);

        // Capture clicks on grid items.
        handler.click(function(){
          // Randomize the height of the clicked item.
          var newHeight = $('img', this).height() + Math.round(Math.random() * 300 + 30);
          //$(this).css('height', newHeight+'px');

          // Update the layout.
          handler.wookmark();
        });
      });

/*1.8 ========== Wookmark Masonry Style ============*/
    $('#tiles-blog').imagesLoaded(function() {
        // Prepare layout options.
        var options = {
          autoResize: true, // This will auto-update the layout when the browser window is resized.
          container: $('#masonrystyle-blog'), // Optional, used for some extra CSS styling
          offset: 20, // Optional, the distance between grid items
          outerOffset: 20, // Optional, the distance to the containers border
          itemWidth: 354 // Optional, the width of a grid item
        };

        // Get a reference to your grid items.
        var handler = $('#tiles-blog li');

        // Call the layout function.
        handler.wookmark(options);

        // Capture clicks on grid items.
        handler.click(function(){
          // Randomize the height of the clicked item.
          var newHeight = $('img', this).height() + Math.round(Math.random() * 300 + 30);
          //$(this).css('height', newHeight+'px');

          // Update the layout.
          handler.wookmark();
        });
      });



    /*1.9 ========== Newsticker  ============*/

    $("ul#ticker01").liScroll().css({'opacity':1});
    
    /*1.11 ========== Breadcumb  ============*/
    $('.breadcrumbs').css({'opacity':1,
            WebkitTransition : 'opacity 1s ease-in-out',
            MozTransition    : 'opacity 1s ease-in-out',
            MsTransition     : 'opacity 1s ease-in-out',
            OTransition      : 'opacity 1s ease-in-out',
            transition       : 'opacity 1s ease-in-out'});

    
})(jQuery);

   

jQuery(document).ready(function($) {
      "use strict";
     
    /*1.12 ========== Flexslider   ============*/
    $('#carousel').flexslider({
    animation: "slide",
    controlNav: false,
    animationLoop: false,
    slideshow: false,
    itemWidth: 210,
    itemMargin: 5,
    asNavFor: '#slider'
  });
   
  $('#slider').flexslider({
    animation: "slide",
    controlNav: false,
    animationLoop: false,
    slideshow: false,
    sync: "#carousel",
    captions:true
  });

   
    /*1.13 ========== initialise plugin superfish ============*/
    var tobar = $('#tobar,#barnav').superfish({
      //add options here if required
       animation:{height:'show'},
       animationOut:  {height:'hide'}
    });

    $('.chart').easyPieChart({
      easing: 'easeOutBounce',
      onStep: function(from, to, percent) {
        $(this.el).find('.percent').text(Math.round(percent));
      }
    });
   

    /*1.14 ========== scroll to top  ============*/
    jQuery(window).on('scroll', function() {
         if ($(window).scrollTop() > 300) {
              $(".backtop").show(500);
         }
         else {
              $(".backtop").hide(500);
         }
    });
     $('.backtop a').bind('click',function(event){
        var $anchor = $(this);
        $('html, body').stop().animate({
            scrollTop: $($anchor.attr('href')).offset().top
        }, 1000);
        event.preventDefault();
    });
 
});







  





