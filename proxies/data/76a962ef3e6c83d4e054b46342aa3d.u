//'use strict';

(function ($) {
	
	$.fn.ns_mc_widget = function (options) {
		
		var defaults, eL, opts;
		defaults = {
			'url' : '/',
			'cookie_id' : false,
			'cookie_value' : ''
		};
		opts = jQuery.extend(defaults, options);

		eL = $(this);
		error_container = eL.siblings('div#failuremsg');
		success_container = eL.siblings('div#successmsg');
		eL.next('div#failuremsg').addClass('hidden');

		eL.submit(function () {
		
			var ajax_loader;
			ajax_loader = jQuery('<div></div>');
			ajax_loader.css({
				'background-image' : 'url(' + opts.loader_graphic + ')',
				'background-position' : 'center center',
				'background-repeat' : 'no-repeat',
				'height' : '16px',
				'width' : '16px',
				'z-index' : '100',
				'margin' : '50px auto'
			});
			
			eL.css({
				'height' : '100%',
				'position' : 'relative',
				'width' : '100%'
			});

			eL.siblings('div#failuremsg').addClass('hidden');
	
			eL.append(ajax_loader);
			$.getJSON(opts.url, eL.serialize(), function (data, textStatus) {
				var cookie_date, error_container, new_content;
				if ('success' === textStatus) {
					if (true === data.success) {
 						success_container = eL.siblings('div#successmsg');
						success_container.html('<p>' + data.success_message + '</p>');
						ajax_loader.remove();
						eL.addClass('hidden');
						eL.siblings('div#failuremsg').addClass('hidden');
						success_container.removeClass('hidden');
						success_container.fadeIn(400);
 
 						if (false !== opts.cookie_id) {
							cookie_date = new Date();
							cookie_date.setTime(cookie_date.getTime() + '3153600000');
							document.cookie = opts.cookie_id + '=' + opts.cookie_value + '; expires=' + cookie_date.toGMTString() + ';';
						}
					} else {

						error_container = eL.siblings('div#failuremsg');
						error_container.html('<p>' + data.error+ '</p>');
						ajax_loader.remove();
						error_container.removeClass('hidden');
					}
				}
				return false;
			});
			return false;
		});
	};
}(jQuery));
