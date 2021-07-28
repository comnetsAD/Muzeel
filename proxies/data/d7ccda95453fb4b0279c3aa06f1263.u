/*
Track clicks from special elements
Version: 1.1
Original code: Arnan de Gans
With help from: Fraser Munro
Copyright: (c) 2020 Arnan de Gans
*/
(function($) {
	$(document).ready(function() {
		$(document).on('click', 'a.gofollow', function(){
			$.post(click_object.ajax_url, {'action':'adrotate_click','track':$(this).attr("data-track")});
		});
	});
}(jQuery));