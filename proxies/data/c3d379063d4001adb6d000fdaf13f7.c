/************************************************************
				Box Sizing
************************************************************/
.wpcolumn, .wpcolumns  {-webkit-box-sizing: border-box; -moz-box-sizing: border-box;box-sizing: border-box;}
.wppsac-post-slider *, .wppsac-post-carousel * {-webkit-box-sizing: border-box; -moz-box-sizing: border-box;box-sizing: border-box;}

/************************************************************
				Clearfix
************************************************************/
.wppsac-clearfix:before, .wppsac-clearfix:after{content: "";display: table;}
.wppsac-clearfix::after{clear: both;}
.wppsac-clearfix{clear: both;}

/* Avada CSS */
.fusion-flex-container.wppsac-fusion-flex{ flex-direction: column; }

/***************Design-1**************/
.wppsac-post-slider a{text-decoration:none !important;}
.wppsac-post-slider.design-1 .wppsac-post-content-position{position:relative} 
.wppsac-post-slider.design-1 .wppsac-post-content-left{position:absolute !important; left:0; bottom: 0px; background:rgba(0, 0, 0, 0.5); z-index:999; color:#fff;}
.wppsac-post-slider.design-1 .wppsac-post-content-left a {color:#fff;}
.wppsac-post-slider.design-1 .wppsac-post-content-left{padding: 20px 20px 35px 20px;}
.wppsac-post-slider.design-1 .wppsac-post-image-bg{background: #f1f1f1;height: 350px; line-height: 0; overflow: hidden; position: relative; width: 100%;}
.wppsac-post-slider.design-1 .wppsac-post-content p{color:#fff;}
.wppsac-post-slider.design-1 .slick-arrow {bottom:0px !important; top:auto !important;}
.wppsac-post-slider.design-1 .slick-next{right:0px !important;}
.wppsac-post-slider.design-1 .slick-prev{right:31px !important; left:auto !important;}
.wppsac-post-slider.design-1 .slick-dots{left:15px !important;  bottom:2px !important;}
.wppsac-post-slider.design-1 a.wppsac-readmorebtn{color:#fff;}
.wppsac-post-slider.design-1 a.wppsac-readmorebtn:hover{color:#fff; background:rgba(0,0,0,0.5);}

/***************Design-2**************/
.wppsac-post-slider.design-2 .wppsac-post-content-position{position:relative;}
.wppsac-post-slider.design-2 .wppsac-post-content-left{position:absolute !important; left:0; top:0; bottom:0; background:rgba(0, 0, 0, 0.5); z-index:999; color:#fff;}
.wppsac-post-slider.design-2 .wppsac-post-content-left a{color:#fff;}
.wppsac-post-slider.design-2 .wppsac-post-content-left{padding: 33px 20px;}
.wppsac-post-slider.design-2 .wppsac-post-image-bg{background: #f1f1f1;height: 350px; line-height: 0; overflow: hidden; position: relative; width: 100%;}
.wppsac-post-slider.design-2 .wppsac-post-content p{color:#fff;}
.wppsac-post-slider.design-2 .slick-arrow {bottom:0px !important; top:auto !important;}
.wppsac-post-slider.design-2 .slick-next{right:0px !important;}
.wppsac-post-slider.design-2 .slick-prev{right:31px !important; left:auto !important;}
.wppsac-post-slider.design-2 .slick-dots{left:15px !important;  bottom:2px !important;}
.wppsac-post-slider.design-2 .wppsac-post-inner-content {width: 100%; max-height: 100%; overflow: hidden;}
.wppsac-post-slider.design-2 a.wppsac-readmorebtn{color:#fff;}
.wppsac-post-slider.design-2 a.wppsac-readmorebtn:hover{color:#fff; background:rgba(0,0,0,0.5);}

/***************Design-3**************/
.wppsac-post-slider.design-3 .wppsac-post-image-bg{background: #f1f1f1;height: 350px;line-height: 0; overflow: hidden; position: relative; width: 100%;}
.wppsac-post-slider.design-3 .wppsac-post-short-content{height: 46%;clear:both; background: rgba(51, 51, 51, 0.5);bottom: 0; color: #fff; left: 0; padding: 15px 30px 35px 30px; position: absolute; right: 0; transition: all 0.5s ease-in-out 0s;}
.wppsac-post-slider.design-3 .wppsac-post-content	{ opacity: 0; height:0; transition: all 0.5s ease-in-out 0s;}
.wppsac-post-slider.design-3 .wppsac-post-overlay:hover > .wppsac-post-short-content .wppsac-post-content{opacity:1;height:auto;}
.wppsac-post-slider.design-3 .wppsac-post-overlay:hover > .wppsac-post-short-content {height:85%;}
.wppsac-post-slider.design-3 .wppsac-post-categories{left: 0;top: 0px;position: absolute;}
.wppsac-post-slider.design-3 .wppsac-post-categories ul.post-categories li{margin: 0 2px 2px 0 !important;}
.wppsac-post-slider.design-3 h2.wppsac-post-title a,
.wppsac-post-slider.design-3 .wppsac-post-content a.wppsac-readmorebtn,
.wppsac-post-slider.design-3 .wppsac-post-content p{color: #fff;}
.wppsac-post-slider.design-3 .slick-arrow {bottom:0px !important; top:auto !important;}
.wppsac-post-slider.design-3 .slick-next{right:0px !important;}
.wppsac-post-slider.design-3 .slick-prev{right:31px !important; left:auto !important;}
.wppsac-post-slider.design-3 .slick-dots{left:15px !important; bottom:2px !important;}
.wppsac-post-slider.design-3 a.wppsac-readmorebtn:hover{color:#fff; background:rgba(0,0,0,0.5);}

/***************Design-4**************/
.wppsac-post-slider.design-4 .wppsac-post-list-content, .wppsac-post-slider.design-4 .post-list{width:100%; float:left; clear:both;}
.wppsac-post-slider.design-4 .wppsac-post-list-content .wppsac-post-title a{color:#444; text-decoration:none;}
.wppsac-post-slider.design-4 .wppsac-post-image-bg{background: #f1f1f1;height: 230px;line-height: 0; overflow: hidden; position: relative; width: 100%;}
.wppsac-post-slider.design-4 .wppsac-post-categories {margin-top: 0;}
.wppsac-post-slider.design-4 .wppsac-post-categories a{color:#fff;}
.wppsac-post-slider.design-4 .wp-medium-5{padding: 0px 10px 0 0;}
.wppsac-post-slider.design-4 .wppsac-post-list-content .wp-medium-7{padding:10px 35px 10px 15px;}
.wppsac-post-slider.design-4 .slick-arrow{top:50% ;transform: translateY(-50%);-webkit-transform: translateY(-50%);-moz-transform: translateY(-50%);}
.wppsac-post-slider.design-4 .slick-next{right:0px !important;}
.wppsac-post-slider.design-4 .slick-prev{left:0px !important;}
.wppsac-post-slider.design-4 .slick-dots{left: 0;right: 0;}
.wppsac-post-slider.design-4 .wppsac-post-content a.wppsac-readmorebtn {color: #444; border-color: #444;}
.wppsac-post-slider.design-4 a.wppsac-readmorebtn:hover{color:#fff; background:rgba(0,0,0,0.5);}


/************************************************************
        Slick Slider and Carousel
************************************************************/
.wppsac-post-slider, .wppsac-post-carousel{visibility: hidden; opacity:0; transition:opacity 0.5s linear;}
.wppsac-post-slider.slick-initialized, .wppsac-post-carousel.slick-initialized { visibility: visible; opacity:1;}
.wppsac-hide{display:none;}
.wppsac-post-carousel .slick-dots{padding:0 !important; margin:0 !important; position:absolute;  text-align:center;}
.wppsac-post-slider .slick-arrow, .wppsac-post-carousel .slick-arrow{text-indent:-99999px;}
.wppsac-post-slider button.slick-arrow, .wppsac-post-carousel button.slick-arrow  {background-color: transparent!important; cursor:pointer; width:30px; height:45px; position:absolute; z-index:9; border:0px !important;padding:0 !important; margin:0px !important; border-radius:0px !important;  -webkit-transition-duration: 0.4s;  transition-duration: 0.4s;}
.wppsac-post-slider button.slick-next, .wppsac-post-carousel button.slick-next {background:rgba(0,0,0,0.5) url(arrow-right.png) center center no-repeat !important; background-size:25px 25px !important; outline:none !important; box-shadow: none;}
.wppsac-post-slider button.slick-prev, .wppsac-post-carousel button.slick-prev{background:rgba(0,0,0,0.5) url(arrow-left.png) center center no-repeat !important; background-size:25px 25px !important;  outline:none !important; box-shadow: none;}
.wppsac-post-slider button.slick-next:hover, .wppsac-post-slider button.slick-next:focus, .wppsac-post-carousel button.slick-next:hover, .wppsac-post-carousel button.slick-next:focus,
.wppsac-post-slider button.slick-prev:hover, .wppsac-post-slider button.slick-prev:focus, .wppsac-post-carousel button.slick-prev:hover, .wppsac-post-carousel button.slick-prev:focus{background-color:rgba(0,0,0,0.8) !important;}
.wppsac-post-slider .slick-dots{padding:0 !important; margin:0 !important; position:absolute;  text-align:center;}
.wppsac-post-slider .slick-dots li button, .wppsac-post-carousel .slick-dots li button{text-indent:-99999px;}
.wppsac-post-slider .slick-dots li, .wppsac-post-carousel .slick-dots li {list-style:none !important; display:inline-block !important; margin:0 2px !important; padding:0px !important;}
.wppsac-post-slider .slick-dots li button, .wppsac-post-carousel .slick-dots li button{background:#fff !important; margin:0px !important; padding:0px !important; border:1px solid #000; border-radius:50% !important; width:13px !important; height:13px !important;}
.wppsac-post-slider .slick-dots li button:focus, .wppsac-post-carousel .slick-dots li button:focus{outline:none !important}
.wppsac-post-slider button:active, .wppsac-post-carousel button:active{box-shadow: none;}
.wppsac-post-slider .slick-dots li.slick-active button, .wppsac-post-carousel .slick-dots li.slick-active button{background:#444 !important;}
.wppsac-post-slider .slick-slide{padding:0px !important}
.wppsac-post-overlay{ position:relative;}
.wppsac-post-slider .wppsac-post-content a.wppsac-readmorebtn, .wppsac-post-carousel .wppsac-post-content a.wppsac-readmorebtn {padding: 5px 10px;border: 1px solid #e7e7e7;text-decoration: none;margin: 5px 0; font-size:14px; -moz-transition:all 0.5s ease-out 0s;-ms-transition:all 0.5s ease-out 0s;-o-transition:all 0.5s ease-out 0s; transition: all 0.5s ease-out 0s; }
.wppsac-post-content {padding-bottom: 10px;}
.wppsac-sub-content {padding-bottom: 10px;}
.wppsac-post-slider h2.wppsac-post-title, .wppsac-post-carousel h2.wppsac-post-title{margin:5px 0 !important; line-height:26px;}
.wppsac-post-slider h2.wppsac-post-title a, .wppsac-post-carousel h2.wppsac-post-title a{font-size:22px; line-height:26px;}
.wppsac-post-slider .wppsac-post-date, .wppsac-post-carousel .wppsac-post-date{margin-bottom:10px; position:relative; font-size:13px;}
.wppsac-post-slider .wppsac-post-date::after {  background: #e96656; bottom: -4px;content: "";height: 2px; left: 0; margin: auto ; position: absolute; width: 50px; z-index: 1;}
.wppsac-post-slider .wppsac-post-categories ul.wppsac-post-categories-list, .wppsac-post-carousel .wppsac-post-categories ul.wppsac-post-categories-list{margin:0px 0px 10px 0 !important; padding:0px !important; list-style:none !important; font-size: 0;}
.wppsac-post-slider .wppsac-post-categories ul.wppsac-post-categories-list li, .wppsac-post-carousel .wppsac-post-categories ul.wppsac-post-categories-list li{display:inline-block !important; margin: 2px !important; padding: 0 !important;}
.wppsac-post-slider .wppsac-post-categories ul.wppsac-post-categories-list li a, .wppsac-post-carousel .wppsac-post-categories ul.wppsac-post-categories-list li a{padding:4px 10px; text-transform:uppercase; font-size:11px; text-decoration:none; color: #fff; display: block; line-height: normal;}
.wppsac-post-slider .wppsac-post-categories ul.wppsac-post-categories-list li:nth-child(4n+1) a, .wppsac-post-carousel .wppsac-post-categories ul.wppsac-post-categories-list li:nth-child(4n+1) a{background:#1abc9c;}
.wppsac-post-slider .wppsac-post-categories ul.wppsac-post-categories-list li:nth-child(4n+2) a, .wppsac-post-carousel .wppsac-post-categories ul.wppsac-post-categories-list li:nth-child(4n+2) a{background:#3498db;}
.wppsac-post-slider .wppsac-post-categories ul.wppsac-post-categories-list li:nth-child(4n+3) a, .wppsac-post-carousel .wppsac-post-categories ul.wppsac-post-categories-list li:nth-child(4n+3) a{background:#e74c3c;}
.wppsac-post-slider .wppsac-post-categories ul.wppsac-post-categories-list li:nth-child(4n+4) a, .wppsac-post-carousel .wppsac-post-categories ul.wppsac-post-categories-list li:nth-child(4n+4) a{background:#34495e;}
.wppsac-post-slider .wppsac-post-image-bg img{height: 100%;width: 100%;object-fit: cover;object-position: top center;border-radius: 0px;}

/***************Design-1**************/
.wppsac-post-carousel a{text-decoration:none !important;}
.wppsac-post-carousel.design-1 .wppsac-post-title a{color:#444;}
.wppsac-post-carousel.design-1 .wppsac-post-image-bg{margin-bottom:15px;}
.wppsac-post-carousel.design-1 .slick-arrow{top:50% ;transform: translateY(-50%);-webkit-transform: translateY(-50%);-moz-transform: translateY(-50%);}
.wppsac-post-carousel.design-1 .wppsac-carousel-slides{padding: 0 10px}
.wppsac-post-carousel.design-1 .slick-next{right:0px !important;}
.wppsac-post-carousel.design-1 .slick-prev{left:0px !important;}
.wppsac-post-carousel.design-1 .slick-dots{left: 0;right: 0;}
.wppsac-post-carousel.design-1 a.wppsac-readmorebtn{color:#555;}
.wppsac-post-carousel.design-1 a.wppsac-readmorebtn:hover{color:#fff; background:rgba(0,0,0,0.5);}

.wpcolumn,
.wpcolumns {  padding-left: 0.9375em;  padding-right: 0.9375em; width:100%; float: left;  position: relative; }

 @media only screen and (max-width: 768px) { 
 .wppsac-post-slider.design-1 .wppsac-post-image-bg img, .wppsac-post-slider.design-2 .wppsac-post-image-bg img, .wppsac-post-slider.design-3 .wppsac-post-image-bg img{max-width:700px !important}
 }
 
 @media only screen and (max-width: 500px) { 
 .wppsac-post-slider.design-1 .wppsac-post-image-bg img, .wppsac-post-slider.design-2 .wppsac-post-image-bg img, .wppsac-post-slider.design-3 .wppsac-post-image-bg img{max-width:600px !important}
 .wppsac-post-slider.design-1 .wppsac-post-content,  .wppsac-post-slider.design-2 .wppsac-post-content,  .wppsac-post-slider.design-3 .wppsac-post-content{display:none}
 }

@media only screen {
  .wpcolumn,  .wpcolumns {position: relative;padding-left: 0.9375em;padding-right: 0.9375em; float: left; }
}
 @media only screen and (min-width: 40.0625em) {  
  .wpcolumn,
  .wpcolumns {position: relative;padding-left: 0.9375em;padding-right: 0.9375em;float: left; }

  .wp-medium-1 {width: 8.33333%;}
  .wp-medium-2 {width: 16.66667%;}
  .wp-medium-3 {width: 25%;}
  .wp-medium-4 {width: 33.33333%;}
  .wp-medium-5 {width: 41.66667%;}
  .wp-medium-6 {width: 50%;}
  .wp-medium-7 {width: 58.33333%;}
  .wp-medium-8 {width: 66.66667%;}
  .wp-medium-9 {width: 75%;}
  .wp-medium-10 {width: 83.33333%;}
  .wp-medium-11 {width: 91.66667%;}
  .wp-medium-12 {width: 100%;}

  .medium-offset-0 {margin-left: 0 !important;}
  .medium-offset-1 {margin-left: 8.33333% !important;}
  .medium-offset-2 {margin-left: 16.66667% !important;}
  .medium-offset-3 {margin-left: 25% !important;}
  .medium-offset-4 {margin-left: 33.33333% !important;}
  .medium-offset-5 {margin-left: 41.66667% !important;}
  .medium-offset-6 {margin-left: 50% !important;}
  .medium-offset-7 {margin-left: 58.33333% !important;}
  .medium-offset-8 {margin-left: 66.66667% !important;}
  .medium-offset-9 {margin-left: 75% !important;}
  .medium-offset-10 {margin-left: 83.33333% !important;}
  .medium-offset-11 {margin-left: 91.66667% !important;}
}