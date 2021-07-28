(function($){function Carousel(obj,conf)
{var $current;var $root;var $itemsContainer;var $items;var $paginationContainer;var $prevButton;var $nextButton;var _rootCenterOffsetLeft;var _rootOffsetLeft;var _rootOffsetRight;var _rootWidth;var self=this;var _isScrolling=false;var pageCount;var currentPage;var $_lastItem;var $_firstItem;var _defaultPaginationContainerClass='carousel-pagination';var _itemsContainerWidth;var _activeCarouselClass='active-carousel';var settings={itemsContainerSelector:'.items',itemSelector:'.item',nextButtonSelector:null,prevButtonSelector:null,callback:'',pagination:true,paginationContainerSelector:null,rootParent:'.carousel-parent'};function init(root,userSettings)
{$root=$(root);if($root.length==0||$root.hasClass(_activeCarouselClass))return;$itemsContainer=$(settings.itemsContainerSelector,$root);if($itemsContainer.length==0)return;$items=$itemsContainer.children(settings.itemSelector);if($items.length==0)return;$_lastItem=$items.last();$_firstItem=$items.first();var marginRight=$_lastItem.css('marginRight');if(marginRight=='auto')marginRight=0;var marginLeft=$_firstItem.css('marginLeft');if(marginLeft=='auto')marginLeft=0;_itemsContainerWidth=($_lastItem.offset().left+$_lastItem.outerWidth()+parseInt(marginRight))
-($_firstItem.offset().left-parseInt(marginLeft));_itemsContainerWidth=Math.round(_itemsContainerWidth);$itemsContainer.width(_itemsContainerWidth);$root.css('overflow','hidden');$itemsContainer.css('position','relative');if(typeof userSettings=='object')$.extend(settings,userSettings);_rootOffsetLeft=$root.offset().left;_rootCenterOffsetLeft=_rootOffsetLeft+($root.outerWidth()/2);_rootWidth=$root.width();_rootOffsetRight=_rootOffsetLeft+_rootWidth;pageCount=Math.ceil(_itemsContainerWidth/$root.width());if(pageCount==1)settings.pagination=false;if(settings.pagination)
{if(settings.paginationContainerSelector!=null)$paginationContainer=$(settings.paginationContainerSelector);else
{$paginationContainer=($root.parents(settings.rootParent).length>0)?$root.parents(settings.rootParent).find('.'+_defaultPaginationContainerClass):$root.find('.'+_defaultPaginationContainerClass);if($paginationContainer.length==0)
{$paginationContainer=$('<div class="'+_defaultPaginationContainerClass+'"></div>');$root.append($paginationContainer);}}
var pageClick=function(event)
{event.preventDefault();_gotoPage(event.data.page);};for(var i=1;i<=pageCount;i++)
{var pageLinkClasses='carousel-page-'+i;var pageLink=$('<a href="#" class="'+pageLinkClasses+'"></a>');pageLink.bind('click',{page:i},pageClick);$paginationContainer.append(pageLink);}}
var _firstCurrent=$items.filter('.current');_firstCurrent=(_firstCurrent.length>0)?_firstCurrent.eq(0):$_firstItem;select(_firstCurrent);_updatePagination();$nextButton=(settings.nextButtonSelector==null)?$('.next',$root):$(settings.nextButtonSelector);$prevButton=(settings.prevButtonSelector==null)?$('.prev',$root):$(settings.prevButtonSelector);_updateNextPreviousButtonState();if($nextButton.length!=0)$nextButton.click(self.nextPage);if($prevButton.length!=0)$prevButton.click(self.prevPage);$items.click(function(e)
{var href=($(e.target).attr('href')!=undefined)?$(e.target).attr('href'):$(e.target).parent().attr('href');if(href==undefined||href.indexOf('http')==-1)
{e.preventDefault();select(e.currentTarget);}});$root.addClass(_activeCarouselClass);}
self.prevPage=function()
{if(!$prevButton.hasClass('disabled'))
{_gotoPage(currentPage-1);}
return false;};self.nextPage=function()
{if(!$nextButton.hasClass('disabled'))
{_gotoPage(currentPage+1);}
return false;};function _gotoPage(page)
{if(page>pageCount)page=pageCount;else if(page<1)page=1;var currentOffset=_rootOffsetLeft-$itemsContainer.offset().left;var desiredOffset=((page-1)*_rootWidth);var scrollOffset=currentOffset-desiredOffset;_scroll(scrollOffset,_setFirstVisibleItemToCurrent);};function select(index_or_element)
{var $selectedItem=(typeof index_or_element=='number')?$items.eq(index_or_element):$(index_or_element);if($selectedItem.length==0||$items.index($selectedItem)<0)return;_updateCurrent($selectedItem);var selectedItemWidth=$selectedItem.outerWidth();var elCenterOffsetLeft=$selectedItem.offset().left+(selectedItemWidth/2);var scrollOffset=_rootCenterOffsetLeft-elCenterOffsetLeft;scrollOffset=parseInt(scrollOffset/selectedItemWidth)*$selectedItem.outerWidth(true);if(scrollOffset!==0)_scroll(scrollOffset);}
var _scroll=function(offset,onComplete)
{if(_isScrolling===true||offset===0)return;if(offset>0)
{var firstItemLeftEdge=$_firstItem.offset().left-parseInt($_firstItem.css('margin-left'));scrollOffset=Math.min((_rootOffsetLeft-firstItemLeftEdge),offset);}
else
{var $lastItem=$_lastItem;var marginRight=$lastItem.css('marginRight');if(marginRight=='auto')
marginRight=0;var lastItemRightEdge=$lastItem.offset().left+$lastItem.outerWidth()+parseInt(marginRight);if(lastItemRightEdge<_rootOffsetRight)return;scrollOffset=Math.max((_rootOffsetRight-lastItemRightEdge),offset);}
if(scrollOffset!=0)
{_isScrolling=true;$itemsContainer.animate({"left":'+='+scrollOffset+'px'},400,function(){if(typeof onComplete=='function')onComplete();_updatePagination();_updateNextPreviousButtonState();_isScrolling=false;});}};var _setFirstVisibleItemToCurrent=function()
{var $first;var itemsLength=$items.length;for(var i=0;i<itemsLength;i++)
{if($items.eq(i).offset().left>=_rootOffsetLeft)
{$first=$items.eq(i);break;}}
_updateCurrent($first);};var _updatePagination=function()
{var newCurrent;var currentPageClass='carousel-current-page';var lastItemRightEdge=$_lastItem.offset().left+$_lastItem.outerWidth();if(lastItemRightEdge<=_rootOffsetRight)newCurrent=pageCount;else
{var firstVisibleItemLeftEdge=Math.abs($itemsContainer.offset().left-_rootOffsetLeft);newCurrent=Math.ceil((firstVisibleItemLeftEdge+$current.width())/_rootWidth);}
if(currentPage!==undefined&&newCurrent===currentPage)return;currentPage=newCurrent;if(settings.pagination)
{$paginationContainer.find('a').removeClass(currentPageClass);$paginationContainer.find('a.carousel-page-'+currentPage).addClass(currentPageClass);}};var _updateNextPreviousButtonState=function()
{if(currentPage===1)$prevButton.addClass('disabled');else $prevButton.removeClass('disabled');if(currentPage==pageCount)$nextButton.addClass('disabled');else $nextButton.removeClass('disabled');};var _updateCurrent=function(newCurrent)
{if(undefined!==$current)$current.removeClass('current');$current=newCurrent;$current.addClass('current');if(typeof settings.callback=='function')settings.callback($current);};self.next=function()
{select($current.next());return $current;};self.prev=function()
{select($current.prev());return $current;};init(obj,conf);}
$.fn.carousel=function(conf)
{var carousels=new Array();this.each(function(i){carousels[i]=new Carousel(this,conf);});if(carousels.length==1)return carousels[0];return carousels;};})(jQuery);(function($)
{if($(window).width()>700){$(window).scroll(function(){var scroll=$(window).scrollTop();if(scroll>=250){if(!(window.location.href.indexOf("/story/")>-1)){$("#navigation").addClass("nav-sticky");}}else{if(!(window.location.href.indexOf("/story/")>-1)){$("#navigation").removeClass("nav-sticky");}}
if(scroll>=240){$(".story > .sticky").show();$(".story > .sticky").addClass("sticky-title");}else{$(".story > .sticky").hide();$(".story > .sticky").removeClass("sticky-title");}});}
$('#div-gpt-ad-1458982559926-0').rad({allowBiggerSizing:"true",maxWidth:"970"});$('.single_bottom').rad({maxWidth:"336"});$(window).load(function(){var topVal=$("#div-gpt-ad-1458982559926-0 iframe").css("width");$('.ad-center').css("width",topVal);});$(document).ready(function()
{$("a.comment").click(function(event){$('html,body').animate({scrollTop:$("#fb-root").offset().top-100},1000);});$('.ss-button').click(function(event){var width=500,height=400,left=($(window).width()-width)/2,top=($(window).height()-height)/2,url=this.href,opts='status=1'+',width='+width+',height='+height+',top='+top+',left='+left;window.open(url,'social',opts);return false;});$(".full-link").click(function(){$(".story-content.last").removeClass('full');$(".full-link").fadeOut();$(".full-cont").fadeOut();});if($('.ad-loader').length>1)
{var hoverInterval=new Array;$('.ad-loader').each(function()
{if($(this).find('div').length>0)
{var target=$(this).attr('class').match(/for-([a-z\-]+)/);if(target.length<=1)return;var $target=$('#'+target[1]);if($target.length<=0)return;$target.parent().show();var o=$target.offset();var offsetTop=(typeof(o.top)=='number')?o.top:getTopOffSet($target);var offsetLeft=(typeof(o.left)=='number')?o.left-$('.container').offset().left-parseInt($('.container').css('border-left-width')):getLeftOffSet($target)-getLeftOffSet($('.container'));var $source=$(this);var sourceId=$source.attr('id');var $embed=$source.find('embed');if($embed.length==0)
$embed=$source.find('object');if($embed.length>0)
{$source.data('targetHeight',$target.height());$source.hover(function(e){hoverInterval[sourceId]=setInterval(function()
{$source.height('auto');if($source.height()!=$target.height())
{var $nextAllAdLoader=$source.nextAll('.ad-loader');if($nextAllAdLoader.length>0)
{var heightDiff=0;if($source.height()>$target.height())
heightDiff=parseInt($source.height())-parseInt($target.height());else
heightDiff=parseInt($target.height())-parseInt($source.height());if(heightDiff>0)
{$nextAllAdLoader.each(function()
{var top=parseInt($(this).css('top'));var newtop;if($source.height()>$target.height())
newtop=top+heightDiff
else
newtop=top-heightDiff;if(top>0)$(this).css('top',newtop+'px');});}}
$target.height($source.height());}
else $source.height($source.data("targetHeight"));},400);});setTimeout(function(){$source.trigger('mouseover');},1000);}
$(this).css({'top':offsetTop+parseInt($target.css('border-top-width')),'left':offsetLeft+parseInt($target.css('border-left-width')),'height':$target.height(),'width':$target.width(),'position':'absolute'});}});}
var $tabs_ul=$('ul.tabs');if($tabs_ul.length>0)
{$tabs_ul.each(function()
{if($(this).next('div').children('div.tabs-content').length>0)
$(this).tabs('div.tabs-content');});}
$('.carousel').carousel();if($('.error-page .search').length>0)
{var $searchBox=$('#cse-search-box').find('.text');var searchBoxBg=$searchBox.css('background-image');$('.error-page .search').find('.text').css({'background-image':searchBoxBg,'background-repeat':'no-repeat','background-position':$searchBox.css('background-position')}).focus(function()
{$(this).css('background-image','none');}).blur(function()
{if($(this).val()=='')
$(this).css('background-image',searchBoxBg);});}});})(jQuery);function getTopOffSet(obj)
{var offset=0;while(obj.parentNode)
{offset+=(obj.offsetTop)?obj.offsetTop:0;if(obj==document.body)break;obj=obj.parentNode;}
return offset;}
function getLeftOffSet(obj)
{var offset=0;while(obj.parentNode)
{offset+=(obj.offsetLeft)?obj.offsetLeft:0;if(obj==document.body)break;obj=obj.parentNode;}
return offset;}
(function($){$.friendlyTime=function(timestamp){};var $ft=$.friendlyTime;$.extend($.friendlyTime,{settings:{refreshMillis:60000,strings:{seconds:"ایک منٹ سے پہلے",minute:"ایک منٹ پہلے",minutes:"%d منٹ پہلے",hour:"ایک گھنٹہ پہلے",hours:"%d گھنٹے پہلے",day:"کل",days:"%d دن پہلے",month:"تقریبا ایک مہینے پہلے",months:"%d مہینے پہلے",year:"ایک سال پہلے",years:"%d سال پہلے",numbers:[]}},inWords:function(seconds){var $l=this.settings.strings;var minutes=seconds/60;var hours=minutes/60;var days=hours/24;var years=days/365;function substitute(string,number){return string.replace(/%d/i,(($l.numbers&&$l.numbers[number])||number));}
var words=seconds<45&&substitute($l.seconds,Math.round(seconds))||seconds<90&&substitute($l.minute,1)||minutes<45&&substitute($l.minutes,Math.round(minutes))||minutes<90&&substitute($l.hour,1)||hours<24&&substitute($l.hours,Math.round(hours))||hours<48&&substitute($l.day,1)||days<30&&substitute($l.days,Math.floor(days))||days<60&&substitute($l.month,1)||days<365&&substitute($l.months,Math.floor(days/30))||years<2&&substitute($l.year,1)||substitute($l.years,Math.floor(years));return $.trim(words);},parse:function(gmtdate){var s=$.trim(gmtdate);s=s.replace(/-/,"/").replace(/-/,"/");s=s.replace(/T/," ");s=s.replace(/([\+-]\d\d)\:?(\d\d)/," $1$2");return new Date(s);}});$.fn.friendlyTime=function(minutes){var self=this;self.each(function(){refresh(this,minutes);});var $s=$ft.settings;if($s.refreshMillis>0)setInterval(function(){self.each(function(){refresh(this,minutes);});},$s.refreshMillis);return self;};function refresh(obj,minutes){var date=$ft.parse($(obj).attr("title"));var difference_in_seconds=(new Date().getTime()-date.getTime())/1000;if(minutes*60>difference_in_seconds)$(obj).text($ft.inWords(difference_in_seconds));if($.trim($(obj).text())!='')$(obj).show();}
$(document).ready(function(){$("#comments .timestamp").friendlyTime(23*60);$(".story span.timestamp").friendlyTime(4*60);});})(jQuery);