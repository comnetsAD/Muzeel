(function($, document, window){
	
	$(document).ready(function(){

		// Cloning main navigation for mobile menu
		$(".mobile-navigation").append($(".main-navigation .menu").clone());

		// Mobile menu toggle 
		$(".menu-toggle").click(function(){
			$(".mobile-navigation").slideToggle();
		});

		$(".home-slider").flexslider({
			directionNav: false,
			controlNav: true
		});

		initLightbox({
	    	selector : '.filterable-item a',
	    	overlay: true,
	    	closeButton: true,
	    	arrow: true
	    });

		$('.map').gmap3({
			map: {
				options: {
					maxZoom: 14 
				}  
			},
			marker:{
				address: "40 Sibley St, Detroit",
			}
		},
		"autofit" );
	});

	$(window).load(function(){

	});

})(jQuery, document, window);