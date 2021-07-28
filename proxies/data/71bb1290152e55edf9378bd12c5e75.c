@font-face {
    font-family: 'Nafees';
    src:url('nafees-nastaleeq-webfont.eot?#iefix') format('embedded-opentype'),
        url('nafees-nastaleeq-webfont.woff') format('woff'),
        url('nafees-nastaleeq-webfont.ttf') format('truetype'),
        url('nafees-nastaleeq-webfont.svg#NafeesRegular') format('svg');
    font-weight: normal;
    font-style: normal;
    line-height: 2;
}
.epaper_edition_heading{
    margin: 15px 0px;
    text-align: center;
}
.no-js{
        overflow:visible;
        left:auto!important;
}
.controlHolder{
        display:none !important;
}
#archive {
        width: 100%;
        padding: 10px;
        margin-bottom: 10px;
}

.panzoom-parent{
    margin: 10px;
}
.panzoom-parent img{
    width: 100%; 
}
.select-wrapper {
        clear: both;
        width: 100%;
        margin: 0px;
        margin-bottom: 14px;
}
.select-wrapper.page-no {
        min-width: 100%;
        width: auto;
        margin: 0px 0px 10px 0px;
}
.select-wrapper select {
        margin: 2px 0px 2px 0px;
}
.epaper-date {
        text-align: center;
        display: inline-block;
        width: 100%;
}
.epaper-navigation {
        float: right;
        padding: 10px 5px;
        margin: 0px;
        border: none;
        font-size: 15px;
}
a.epaper-navigation.next-btn {
        float: left;
}

.lSAction > .lSNext {
        background-position: -34px -1px;
        right: 10px;
}
.lSAction > .lSPrev {
        background-position: 1px 0px;
        left: 10px;
}
.lSAction > a {
        width: 31px;
        height: 30px;
        background-color: #111;
        border-radius: 50%;
}
#page-inner-wrap{
        top:auto !important;
}
.go-button-calender a
{
        width:100%;
        border-radius: 0px;
}  
.go-button-calender {
        padding-top: 10px;
}
.go_back_btn_epaper 
{
    float: left;
}
#archive_btn
{
    float: right;
}
.date-span{
    display: inline-block;
    width: fit-content;
}
.go_back_btn_epaper ,#archive_btn
{
        text-decoration: none;
        cursor: pointer;
        display: block;
}
.go_back_btn_epaper:hover, .go_back_btn_epaper:focus ,a.epaper-navigation:hover
{
    text-decoration: none;
}

.pika-single.is-bound {
    width: 100%;
}
.pika-lendar {
    width: 93%;
}
.fa-calendar:before {
    content: "\f073";
    padding-left: 10px;
}
.loading {
    position: fixed;
    z-index: 999;
    height: 2em;
    width: 2em;
    overflow: show;
    margin: auto;
    top: 0;
    left: 0;
    bottom: 0;
    right: 0;
  }

  /* Transparent Overlay */
  .loading:before {
    content: '';
    display: block;
    position: fixed;
    top: 0;
    left: 0;
    width: 100%;
    height: 100%;
    background-color: rgba(0,0,0,0.3);
  }

  /* :not(:required) hides these rules from IE9 and below */
  .loading:not(:required) {
    /* hide "loading..." text */
    font: 0/0 a;
    color: transparent;
    text-shadow: none;
    background-color: transparent;
    border: 0;
  }

  .loading:not(:required):after {
    content: '';
    display: block;
    font-size: 10px;
    width: 1em;
    height: 1em;
    margin-top: -0.5em;
    -webkit-animation: spinner 1500ms infinite linear;
    -moz-animation: spinner 1500ms infinite linear;
    -ms-animation: spinner 1500ms infinite linear;
    -o-animation: spinner 1500ms infinite linear;
    animation: spinner 1500ms infinite linear;
    border-radius: 0.5em;
    -webkit-box-shadow: rgba(0, 0, 0, 0.75) 1.5em 0 0 0, rgba(0, 0, 0, 0.75) 1.1em 1.1em 0 0, rgba(0, 0, 0, 0.75) 0 1.5em 0 0, rgba(0, 0, 0, 0.75) -1.1em 1.1em 0 0, rgba(0, 0, 0, 0.5) -1.5em 0 0 0, rgba(0, 0, 0, 0.5) -1.1em -1.1em 0 0, rgba(0, 0, 0, 0.75) 0 -1.5em 0 0, rgba(0, 0, 0, 0.75) 1.1em -1.1em 0 0;
    box-shadow: rgba(0, 0, 0, 0.75) 1.5em 0 0 0, rgba(0, 0, 0, 0.75) 1.1em 1.1em 0 0, rgba(0, 0, 0, 0.75) 0 1.5em 0 0, rgba(0, 0, 0, 0.75) -1.1em 1.1em 0 0, rgba(0, 0, 0, 0.75) -1.5em 0 0 0, rgba(0, 0, 0, 0.75) -1.1em -1.1em 0 0, rgba(0, 0, 0, 0.75) 0 -1.5em 0 0, rgba(0, 0, 0, 0.75) 1.1em -1.1em 0 0;
  }

  /* Animation */

  @-webkit-keyframes spinner {
    0% {
      -webkit-transform: rotate(0deg);
      -moz-transform: rotate(0deg);
      -ms-transform: rotate(0deg);
      -o-transform: rotate(0deg);
      transform: rotate(0deg);
    }
    100% {
      -webkit-transform: rotate(360deg);
      -moz-transform: rotate(360deg);
      -ms-transform: rotate(360deg);
      -o-transform: rotate(360deg);
      transform: rotate(360deg);
    }
  }
  @-moz-keyframes spinner {
    0% {
      -webkit-transform: rotate(0deg);
      -moz-transform: rotate(0deg);
      -ms-transform: rotate(0deg);
      -o-transform: rotate(0deg);
      transform: rotate(0deg);
    }
    100% {
      -webkit-transform: rotate(360deg);
      -moz-transform: rotate(360deg);
      -ms-transform: rotate(360deg);
      -o-transform: rotate(360deg);
      transform: rotate(360deg);
    }
  }
  @-o-keyframes spinner {
    0% {
      -webkit-transform: rotate(0deg);
      -moz-transform: rotate(0deg);
      -ms-transform: rotate(0deg);
      -o-transform: rotate(0deg);
      transform: rotate(0deg);
    }
    100% {
      -webkit-transform: rotate(360deg);
      -moz-transform: rotate(360deg);
      -ms-transform: rotate(360deg);
      -o-transform: rotate(360deg);
      transform: rotate(360deg);
    }
  }
  @keyframes spinner {
    0% {
      -webkit-transform: rotate(0deg);
      -moz-transform: rotate(0deg);
      -ms-transform: rotate(0deg);
      -o-transform: rotate(0deg);
      transform: rotate(0deg);
    }
    100% {
      -webkit-transform: rotate(360deg);
      -moz-transform: rotate(360deg);
      -ms-transform: rotate(360deg);
      -o-transform: rotate(360deg);
      transform: rotate(360deg);
    }
  }
.top-center-contain{
        background-position: top center !important;
        background-size:contain !important;
        background-repeat: no-repeat !important;
}
@media(max-width: 768px){
    .zoom_button{
        right: 0px;
    }
}
.zoom_button{
    position: absolute;
    z-index: 9999;
    right: 37px;
    opacity: 0.85;
    top: 214px;
}
.zoom_button .button_wrapper{
    background-color: #b7b7b7;
    border-radius: 10px;
    padding: 7px 0px;
    width: 33px;
}
.zoom_button .button_wrapper .zoom-in{
    width: 25px;
    margin-right: 4px;
    margin-top: 20px;
}
.zoom_button .button_wrapper .zoom-out{
    width: 25px;
    margin-right: 4px;
}
.next_prev_buttons{
    width: 100%;
    display: inline-block;
    text-align: center;
}
.navigation-wrapper{
    margin-bottom: 5px;
    padding-bottom: 5px;
}
.english_font{
    font-family: 'Droid Serif',sans-serif,Arial!important;
}
.urdu_font{
    font-family: 'Jameel Noori Nastaleeq','Nafees'!important;
}
.m-auto{
    margin: 0 auto;
}
#archive_btn .fa-calendar{
    height: 0px;
}
.top_go_back{
    width: 100%;
    display: block;
    margin-top: 10px;
    color: white;
    background-size: 40px 40px!important;
    background-repeat: no-repeat!important;
    background-position: 2px 2px!important;
}
.top_go_back:hover{
    color: #fff;
}
.epaper_header{
    margin: 10px;
}
#calender_month_div_id option, #calender_year_div_id option{
    text-align: center;
}
#calender_month_div_id, #calender_year_div_id{
    width: 30%;
    text-align-last: center;
    margin-bottom: 10px;
    background-color: #fff;
    background-position-x: 8px;
    background-size: 8px 8px;
}
