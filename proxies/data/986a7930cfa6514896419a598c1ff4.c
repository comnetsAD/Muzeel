/*--------------------------------------------------------
File            : home page, detail page etc
Description		: Get user click optio agaist poll 
Module			: poll widget
-----------------------------------------------------------*/
function poll_vote( poll_id, poll_title ) 
{
	var radioButtons = document.getElementsByName("poll_options");
	for ( var x = 0; x < radioButtons.length; x++ ) 
	{
		if (radioButtons[x].checked) 
		{
			  poll_answer_id = 	radioButtons[x].id;

			  // Pass poll id and poll answer id to save in database, and poll title is just used to display in poll result screen				  
			  xajax_poll_vote_data_xajax( poll_id, poll_answer_id, poll_title );
		}
	}
}

/*--------------------------------------------------------
File            : home page, detail page etc
Description		: Display Poll Result 
Module			: poll widget
-----------------------------------------------------------*/
function poll_stat( poll_id, poll_title )
{
	xajax_poll_vote_stat_xajax( poll_id, poll_title );
}


/*--------------------------------------------------------
File            : home page, detail page etc
Description		: Display Poll Result and bar on page load if user is vote
Module			: poll widget
-----------------------------------------------------------*/
//$(document).ready(function() {
//   $('.poll_container').find('.result_bar').each(function () {
//	   $(this).animate({width:$(this).attr('data-bars')+'%'},'slow');
//   });
//});


/*--------------------------------------------------------
File            : home page, detail page etc
Description		: status bar
Module			: poll widget
-----------------------------------------------------------*/
 function set_stats_bar()
{
   $('.poll_container').find('.result_bar').each(function () {
	   $(this).animate({width:$(this).attr('data-bars')+'%'},'slow');
   });
}

/*--------------------------------------------------------
File            : home page, detail page etc
Description		: show vote screen button to show vote screen
Module			: poll widget
-----------------------------------------------------------*/
function back_to_vote()
{
	$('#poll_stats_view_').hide();
	$('#poll_view_').show();
}