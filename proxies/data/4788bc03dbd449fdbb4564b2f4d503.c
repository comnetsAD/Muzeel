/******************************************
    File Name: style.css
    Template Name: TechMag
    Created By: Template Visual Team
    Website: http://templatevisual.com
    Version: 1.0
    Support: support@templatevisual.com
/******************************************

/******************************************
    TABLE OF CONTENT
/******************************************

    1. IMPORT FONT
    2. STARTUP
    3. HEADER
    4. MEGA MENU
    5. SECTIONS
    6. SHOP
    7. FOOTER
    8. SLIDER
    9. CAROUSEL
    10. PAGE 
    11. BLOG
    12. SIDEBAR
    13. CUSTOM BUTTON
    14. COLORS
    15. RESPONSIVE

******************************************/


/******************************************
    IMPORT FONT
******************************************/

@import url(https://fonts.googleapis.com/css?family=Roboto+Slab:400,700,300,100);
@import url(https://fonts.googleapis.com/css?family=Roboto:400,900italic,900,700italic,700,500italic,500,400italic,300italic,300,100italic,100);

/******************************************
    STARTUP
******************************************/

body {
    font-size: 14px;
    padding: 0;
    color: #111;
    background-color: #fff;
    font-family: Verdana, Geneva, sans-serif;
}

.landingpage,
.landingpage .sitecontainer {
    background-color: #EFEFEF;
}

.whitebody,
.whitebody .sitecontainer {
    background-color: #fff;
}

.landingpage .sitecontainer .col-md-4 {
    margin-bottom: 30px;
}

.landingpage .sitecontainer .col-md-4 h3 {
    font-size: 18px;
    padding: 0 !important;
    margin: 0 !important;
    line-height: 1;
}

.single-wrapper .check li,
p {
    color: #222;
    font-family: Verdana, Geneva, sans-serif;
    font-size: 15px;
    line-height: 26px;
    padding: 0;
}

h1,
h2,
h3,
h4,
h5,
h6 {
    font-family: "Roboto Slab", "Helvetica Neue", Helvetica, Arial, sans-serif;
    font-weight: normal;
    color: #121212;
}

a {
    color: #c0474d;
    text-decoration: none !important;
    outline: none;
    -moz-transition: all .3s ease-in-out;
    -o-transition: all .3s ease-in-out;
    -webkit-transition: all .3s ease-in-out;
    transition: all .3s ease-in-out;
}

a:hover,
a:focus {
    color: #D7898D;
    outline: none;
}

.col-xs-15,
.col-sm-15,
.col-md-15,
.col-lg-15 {
    position: relative;
    min-height: 1px;
    padding-right: 10px;
    padding-left: 10px;
}

.col-xs-15 {
    width: 20%;
    float: left;
}

.first {
    clear: both
}

.last {
    margin-right: 0
}

.alignleft {
    float: left;
    display: table-cell;
    margin: 10px 20px 10px 0;
}

.alignright {
    float: right;
    display: table-cell;
    margin: 10px 0 10px 20px;
}

.sociallinks,
.check {
    padding: 0;
    list-style: none;
}

.check li:before {
    content: "\f105";
    font-family: "FontAwesome";
    font-size: 13px;
    left: 0;
    color: #111111;
    padding-right: 8px;
    position: relative;
    top: 0;
}

p.dropcaps::first-letter {
    border-radius: 0 !important;
    color: #999;
    float: left;
    font-size: 48px;
    font-weight: 700;
    line-height: 1;
    margin: 8px 20px 0 0;
    padding: 9px 15px;
    font-family: "Montserrat", "Helvetica Neue", Helvetica, Arial, sans-serif;
}

.bgw {
    background-color: #ffffff;
}

.bgg {
    background-color: #f9f9f9
}

#wrapper .sitecontainer {
    padding: 30px;
    margin: 0 auto !important;
}

.singlefullwidth.sitecontainer {
    padding: 0 30px !important;
}

.m22 {
    margin-top: 22px;
}

.m30 {
    margin-top: 30px;
}

.ads-widget img {
    margin: 0 auto;
    width: auto;
    display: block;
}


/******************************************
    HEADER
******************************************/

.header {
    position: relative;
    -moz-transition: all .3s ease-in;
    -o-transition: all .3s ease-in;
    -webkit-transition: all .3s ease-in;
    transition: all .3s ease-in;
    padding: 0;
    left: 0;
    right: 0;
    top: 0;
    text-align: left;
    width: 100%;
    z-index: 100;
    padding: 0;
    background-color: #ffffff;
}

.header.affix {
    position: fixed;
    -moz-transition: all .3s ease-in;
    -o-transition: all .3s ease-in;
    -webkit-transition: all .3s ease-in;
    transition: all .3s ease-in;
    padding: 0;
    left: 0;
    right: 0;
    top: 0;
    text-align: left;
    width: 100%;
    z-index: 100;
    padding: 0;
    background-color: #ffffff;
}

.header2 .logo-wrapper {
    margin-top: 60px;
}

.header2 .dm-social {
    margin-top: 60px;
    padding-top: 0px !important;
}

.header2 .dm-social li a {
    width: 3.6em !important;
}

.header .widget,
.header .widget-title,
.navbar-nav,
.navbar {
    margin: 0 !important;
    border-radius: 0 !important;
}

.widget-title {
    position: relative;
}

.widget-title a {
    position: absolute;
    right: 0;
    bottom: 20px;
    font-size: 13px;
}

.navbar-default {
    border: 0;
    box-shadow: none !important;
    background-color: #423A3D;
}

.logo-wrapper {
    padding: 20px 0;
    background-color: #fff;
}

.logo-wrapper .ads-widget img {
    margin: 0 !important;
    width: auto;
    display: block;
    float: right;
    text-align: right;
}

.navbar-brand {
    font-size: 24px;
    color: #fff !important;
    padding: 0 0 0 0;
    margin: 0;
    line-height: 1;
    text-transform: capitalize;
    height: auto;
    text-decoration: none !important;
    font-weight: 700;
    font-family: "Roboto Slab", "Helvetica Neue", Helvetica, Arial, sans-serif;
}

.navbar-brand img {
    width: 100%;
}

.navbar-nav > li > a i {
    margin-right: 3px;
}

.navbar-nav > li > a {
    font-size: 15px;
    color: #fff !important;
    padding: 15px 15px;
    text-transform: capitalize;
    text-decoration: none !important;
    font-weight: 700;
    line-height: 30px;
    font-family: "Roboto Slab", "Helvetica Neue", Helvetica, Arial, sans-serif;
}

.yamm-content .links-widget {
    padding: 20px 0 0;
}

.yamm-content .links-widget a {
    color: #111111 !important;
    font-family: "Roboto Slab", "Helvetica Neue", Helvetica, Arial, sans-serif;
}

.navbar-nav > li {
    -webkit-transition: background-color 0.7s ease 0s;
    -moz-transition: background-color 0.7s ease 0s;
    -ms-transition: background-color 0.7s ease 0s;
    -o-transition: background-color 0.7s ease 0s;
    transition: background-color 0.7s ease 0s;
}

.navbar-nav > li:hover,
.navbar-default .navbar-nav > .active > a,
.navbar-default .navbar-nav > .active > a:hover,
.navbar-default .navbar-nav > .active > a:focus {
    background-color: rgba(255, 255, 255, 0.1);
}

.navbar-default .navbar-nav > .open > a,
.navbar-default .navbar-nav > .open > a:hover,
.navbar-default .navbar-nav > .open > a:focus {
    background-color: transparent;
}

.searchandbag i {
    font-size: 15px;
    line-height: 1;
}

.searchwidget h3 {
    font-size: 26px !important;
    line-height: 36px !important;
}

.searchandbag li {
    padding: 0 5px;
    border-left: 1px solid rgba(255, 255, 255, 0.14);
}

.searchandbag li:first-child {
    border-left: 0;
}

.tooltip-inner {
    font-weight: 600;
    text-transform: uppercase;
    font-size: 11px !important;
    min-width: 90px;
    border-radius: 0 !important;
}

.news-ticker {
    display: inline-block;
    width: 100%;
    max-width: 100%;
    padding: 0;
    margin-bottom: 20px;
    line-height: 2.82857143;
    background-color: #eeeeee;
}

.retweet-wrapper {
    margin-bottom: 60px;
}

.news-title {
    height: auto;
    float: left;
    color: #fff;
    padding: 10px 35px;
    margin-right: 20px;
    margin-bottom: 0;
    text-align: center;
    background-color: #343840;
    position: relative;
}

.news-title:after {
    left: 100%;
    top: 50%;
    border: solid transparent;
    content: " ";
    height: 0;
    width: 0;
    position: absolute;
    pointer-events: none;
    border-color: rgba(18, 18, 18, 0);
    border-left-color: #343840;
    border-width: 7px;
    margin-top: -7px;
}

.news-title h3 {
    font-size: 18px;
    padding: 0 !important;
    margin: 0 !important;
    color: #fff;
}

#controls {
    display: none;
}

.random-article {
    height: auto;
    float: right;
    color: #fff;
    padding: 0 20px;
    min-width: 30px;
    margin-right: 0;
    margin-bottom: 0;
    text-align: center;
    background-color: #343840;
}

.news-ticker a {
    color: #5e5e5e;
    font-family: "Roboto Slab", "Helvetica Neue", Helvetica, Arial, sans-serif;
    font-size: 14px;
}

.random a {
    float: right;
    text-align: center;
    display: inline-block;
}

.fa-random {
    color: #fff !important;
}

#custom-search-input .btn {
    border: 0 none !important;
    border-radius: 0 !important;
    font-size: 14px;
    height: 46px;
    line-height: 45px;
    padding: 0 !important;
    vertical-align: middle;
    width: 45px;
}

#custom-search-input .fa {
    margin-top: -4px !important;
}

#custom-search-input .form-control {
    border-radius: 0;
    border-color: #eeeeee;
    box-shadow: none !important;
    font-size: 13px;
}

.btn-dark {
    background-color: #31343B;
    border-color: #31343B;
    color: #fff !important;
}

.reviewbox {
    max-width: 280px;
    border: 1px solid #e5e5e5;
    padding: 20px 30px;
    margin-bottom: 20px !important;
    background-color: #fff;
}

.reviewbox .review-star {
    margin-bottom: 0;
    display: block;
}

.reviewbox .review-star p {
    display: inline-block;
    margin-right: 10px;
}

.reviewbox .review-star i {
    vertical-align: text-bottom;
}

.reviewbox h3 {
    text-align: center;
    font-size: 15px;
    padding: 10px 10px;
    margin: 0 0 20px;
}

.reviewbox p {
    font-size: 12px;
    line-height: 22px;
    margin-bottom: 15px !important;
}

.bigreviewbox {
    border: 1px solid #e5e5e5;
    padding: 20px 30px;
    margin-bottom: 40px !important;
    background-color: #fff;
}

.bigreviewbox h2 {
    font-size: 21px;
    padding: 0;
    font-weight: bold;
    margin: 10px 0 15px;
}

.bigreviewbox p {
    font-size: 14px;
}

.bigreviewbox .progress {
    background-color: #f9f9f9;
    border-radius: 0;
    box-shadow: none;
    height: 14px;
    margin-bottom: 10px;
    overflow: hidden;
}

.reviews-progress p {
    font-weight: bold;
    position: relative;
    font-family: Roboto Slab;
    margin: 0 0 5px !important;
}

.reviews-progress p small {
    position: absolute;
    font-size: 15px;
    right: 0;
}

.finalreview h3,
.bigreviewbox .row p {
    margin: 0 !important;
    padding: 0;
}

.finalreview h3 {
    margin-bottom: 5px !important;
}


/******************************************
    MEGA MENU
******************************************/

.yamm .nav,
.yamm .collapse,
.yamm .dropup,
.yamm .dropdown {
    position: static;
}

.yamm .dropdown.yamm-fw {
    position: static;
}

.yamm .container {
    position: relative;
}

.yamm .yamm-content {
    padding: 30px;
}

.yamm .dropdown.yamm-fw .dropdown-menu {
    left: 0;
    right: 0;
    padding: 30px;
}

.yamm .dropdown {
    position: relative;
}

.yamm .dropdown.yamm-fw.yamm-half .dropdown-menu {
    left: auto;
    right: auto;
}

.yamm-half .yamm-content ul {
    min-width: 180px;
}

.yamm-fw .dropdown-menu li {
    padding: 10px 0px;
}

.yamm-fw .dropdown-menu li a {
    padding: 0 !important;
    font-size: 14px;
    background-color: transparent !important;
}

.yamm .dropdown .dropdown-menu {
    border-radius: 0;
    margin-top: 0;
    padding: 0;
}

.yamm .dropdown.yamm-fw .dropdown-menu {
    border-radius: 0;
    left: 0;
    background-color: #fff !important;
    margin: 0;
    padding: 0;
    right: 0;
}

.yamm .dropdown .dropdown-menu .show-left {
    margin-top: 0
}

.well {
    border: 0;
    padding: 12px 0;
}

.yamm p {
    margin-top: 0;
    padding-top: 0;
    border-bottom: 0;
    line-height: 1;
    margin-bottom: 0;
    padding-bottom: 15px;
    font-weight: 600;
    color: #222222;
    font-size: 14px;
}

.well .form-control {
    font-size: 12px !important;
    height: 35px;
    margin-bottom: 15px;
}

.yamm ul {
    padding: 0;
}

@media (min-width: 992px) {
    .yamm-fw {
        position: relative;
    }
    .hasmenu:hover > ul,
    .yamm-fw:hover > ul {
        visibility: visible;
        opacity: 1;
        top: 100%;
    }
    .navbar-nav .hasmenu ul,
    .navbar-nav .yamm-fw ul {
        -webkit-transition: visibility 0.35s ease-in-out, opacity 0.35s ease-in-out, top 0.35s ease-in-out, bottom 0.35s ease-in-out, left 0.35s ease-in-out, right 0.35s ease-in-out;
        -moz-transition: visibility 0.35s ease-in-out, opacity 0.35s ease-in-out, top 0.35s ease-in-out, bottom 0.35s ease-in-out, left 0.35s ease-in-out, right 0.35s ease-in-out;
        -o-transition: visibility 0.35s ease-in-out, opacity 0.35s ease-in-out, top 0.35s ease-in-out, bottom 0.35s ease-in-out, left 0.35s ease-in-out, right 0.35s ease-in-out;
        transition: visibility 0.35s ease-in-out, opacity 0.35s ease-in-out, top 0.35s ease-in-out, bottom 0.35s ease-in-out, left 0.35s ease-in-out, right 0.35s ease-in-out;
    }
    .hasmenu .dropdown-menu,
    .yamm-fw .dropdown-menu {
        min-width: 240px;
        padding: 0;
        -webkit-border-radius: 0;
        -moz-border-radius: 0;
        border-radius: 0;
    }
    .hasmenu > ul,
    .yamm-fw > ul {
        position: absolute;
        top: 130%;
        visibility: hidden;
        display: block;
        opacity: 0;
        left: 0;
    }
    .hasmenu > ul.start-right,
    .yamm-fw > ul.start-right {
        right: 0;
        left: auto;
    }
    .hasmenu > ul li,
    .yamm-fw > ul li {
        position: relative;
    }
    .hasmenu > ul li:hover > ul,
    .yamm-fw > ul li:hover > ul {
        visibility: visible;
        opacity: 1;
        left: 100%;
    }
    .hasmenu > ul li:hover > ul.show-right,
    .yamm-fw > ul li:hover > ul.show-right {
        right: 100%;
    }
}

@media (max-width: 1200px) {
    .nav > li > a {
        padding: 1em 0.7em;
    }
}

.dropdown {
    position: relative;
}

.dropdown-toggle:focus {
    outline: 0;
}

.dropdown-menu {
    position: absolute;
    top: 100%;
    left: 0;
    z-index: 1000;
    display: none;
    float: left;
    min-width: 160px;
    padding: 0.25em 0;
    margin: 2px 0 0;
    list-style: none;
    font-size: 14px;
    text-align: left;
    background-color: #ffffff;
    border-radius: 0.25em;
    background-clip: padding-box;
    -webkit-box-shadow: none;
    -moz-box-shadow: none;
    border: 1px solid #efefef;
    box-shadow: none;
}

.dropdown-menu.pull-right {
    right: 0;
    left: auto;
}

.dropdown-menu .divider {
    height: 1px;
    margin: 0.5em 0;
    overflow: hidden;
    background-color: #e6e6e6;
}

.dropdown-mega span {
    position: absolute;
    right: 0;
    color: #999999;
    font-style: italic;
}

.dropdown-mega > li a:before {
    content: "\f105";
    font-family: "FontAwesome";
    font-size: 13px;
    left: 0;
    display: inline-block !important;
    color: #999;
    padding-right: 8px;
    position: relative;
    top: 0;
}

.dropdown-mega > li {
    list-style: none;
}

.box h5 {
    font-size: 15px;
    font-weight: 400;
    margin-bottom: 20px;
    text-transform: uppercase;
}

.dropdown-mega > li > a,
.dropdown-menu > li > a {
    clear: both;
    color: #111111 !important;
    display: block;
    font-family: "Roboto Slab", "Helvetica Neue", Helvetica, Arial, sans-serif;
    font-size: 13px !important;
    font-weight: 400 !important;
    line-height: 1;
    padding: 10px;
    white-space: nowrap;
    text-transform: capitalize;
}

.dropdown-mega > li,
.dropdown-menu > li {
    padding: 5px 10px;
    border-bottom: 1px solid #efefef;
}

.dropdown-mega > li:last-child,
.dropdown-menu > li:last-child {
    border-bottom: 0;
}

.dropdown-menu > li:hover > a {
    text-decoration: none !important;
    background-color: #fff;
}

.dropdown-menu > .active > a,
.dropdown-menu > .active > a:hover,
.dropdown-menu > .active > a:focus {
    text-decoration: none;
    outline: 0;
    background-color: #fff;
}

.dropdown-menu > .disabled > a,
.dropdown-menu > .disabled > a:hover,
.dropdown-menu > .disabled > a:focus {
    color: #cccccc;
}

.dropdown-menu > .disabled > a:hover,
.dropdown-menu > .disabled > a:focus {
    text-decoration: none;
    background-color: transparent;
    background-image: none;
    cursor: not-allowed;
}

.open > .dropdown-menu {
    display: block;
}

.open > a {
    outline: 0;
}

.dropdown-menu-right {
    left: auto;
    right: 0;
}

.dropdown-menu-left {
    left: 0;
    right: auto;
}

.dropdown-header {
    display: block;
    padding: 0.5em 1em;
    font-size: 14px;
    font-weight: bold;
    line-height: 1;
    color: #666666;
    white-space: nowrap;
}

.dropdown-backdrop {
    position: fixed;
    left: 0;
    right: 0;
    bottom: 0;
    top: 0;
    z-index: 990;
}

.pull-right > .dropdown-menu {
    right: 0;
    left: auto;
}

.dropup .caret,
.navbar-fixed-bottom .dropdown .caret {
    border-top: 0;
    border-bottom: 0.3em solid;
    content: "";
}

.dropup .dropdown-menu,
.navbar-fixed-bottom .dropdown .dropdown-menu {
    top: auto;
    bottom: 100%;
    margin-bottom: 1px;
}

@media (min-width: 768px) {
    .navbar-right .dropdown-menu {
        left: auto;
        right: 0;
    }
    .navbar-right .dropdown-menu-left {
        left: 0;
        right: auto;
    }
}


/******************************************
    LEFT SIDE
******************************************/

.dm-social {
    position: fixed;
    overflow: visible;
    top: 25%;
    left: 0;
    list-style-type: none;
    margin: 0;
    padding: 0;
    z-index: 110;
    background: #fff;
}

.dm-social li {
    border-top: 1px solid #eee;
    border-right: 1px solid #eee;
}

.dm-social li a {
    display: block;
    text-indent: -500em;
    height: 3.3em;
    width: 3.4em;
    line-height: 3.3em;
    text-align: center;
    color: #6b6b6b;
    position: relative;
    border-bottom: 1px solid rgba(255, 255, 255, 0.1);
    -webkit-transition: background 0.1s ease-in-out;
    -moz-transition: background 0.1s ease-in-out;
    transition: background 0.1s ease-in-out;
}

.dm-social li a:hover,
.dm-social li a:focus,
.dm-social li:first-child a {
    text-decoration: none;
}

.dm-social li a:before {
    font-family: 'FontAwesome';
    speak: none;
    font-style: normal;
    font-weight: normal;
    text-indent: 0em;
    position: absolute;
    top: 0;
    left: 0;
    width: 100%;
    height: 100%;
    font-size: 1.2em;
    -webkit-font-smoothing: antialiased;
}

.dm-social .tooltip-inner {
    height: 3.5em;
    min-width: 120px;
    text-align: center;
    line-height: 3.2em;
    background-color: #212121;
    font-size: 13px !important;
}

.dm-social .tooltip.right {
    margin-left: -5px;
}

body.header2 .dm-social {
    background-color: #343840;
    top: 0;
    height: 100%;
    padding-top: 3%;
}

body.header2 .dm-social li {
    border-right: 0 solid #383c44;
    border-top: 1px solid #383c44;
    border-bottom: 1px solid #383c44;
}

body.header2 .dm-social li a {
    border: 0;
}

body.header2 .tooltip.right .tooltip-arrow {
    display: none;
}

body.header2 .header .container-fluid {
    margin: 0 35px !important;
    padding: 0 !important;
}

.logo-center .navbar-brand {
    width: 240px;
    margin: 10px auto 20px;
    float: none;
    display: block;
}

@media (min-width: 768px) {
    body.landingpage .navbar .navbar-nav {
        display: inline-block;
        float: none;
        vertical-align: top;
    }
    body.landingpage .navbar .navbar-collapse {
        text-align: center;
    }
}

body.header2 .yamm-fw .dropdown-menu {
    border: 0 !important;
}

body.header2 .dm-social li a {
    color: rgba(255, 255, 255, 0.5) !important;
}

body.header2 .logo-wrapper {
    border-bottom: 1px solid #eee;
}

.tooltip.right .tooltip-arrow {
    top: 50%;
    left: 0;
    margin-top: -5px;
    border-width: 5px 5px 5px 0;
    border-right-color: #fff;
}

.rssbg .tooltip-inner {
    background-color: #F36F24;
}

.linkedinbg .tooltip-inner {
    background-color: #0177B5;
}

.pinterestbg .tooltip-inner {
    background-color: #CC2128;
}

.twitterbg .tooltip-inner {
    background-color: #00B6F1;
}

.facebookbg .tooltip-inner {
    background-color: #3B5998;
}

.googlebg .tooltip-inner {
    background-color: #DA5333;
}


/******************************************
    WIDGETS
******************************************/

.widget {
    position: relative;
    display: block;
    margin-bottom: 30px;
}

.widget-title {
    padding: 15px 0 0;
    display: block;
    position: relative;
}

.widget-title h4 {
    line-height: 1;
    padding: 0 !important;
    font-weight: 700;
    margin: 0 !important;
    text-transform: capitalize;
}

.widget-title hr {
    border-width: 4px;
    margin-bottom: 0;
}

.widget-title hr:before {
    width: 80px;
    background-color: #ddd;
    display: block;
    height: 4px;
    position: relative;
    content: "";
    top: -4px;
}

.post-review .post-title h3 a,
.post-review .post-title h3 {
    color: #121212;
    font-size: 16px;
    font-weight: 400;
    line-height: 20px;
    padding: 0 !important;
    margin-top: 15px !important;
}

.hover-title-left {
    position: absolute;
    left: 20px;
    bottom: 15px;
}

.hover-title a,
.hover-title-left a {
    color: #ffffff;
    text-decoration: underline !important;
}

.hover-title {
    position: absolute;
    right: 20px;
    bottom: 15px;
}

.hover-title span {
    color: #ffffff;
    font-family: "Roboto Slab", "Helvetica Neue", Helvetica, Arial, sans-serif;
}

.review-stat {
    position: absolute;
    bottom: 15px;
    left: 20px;
}

.widget hr {
    border-color: #e0e0e0;
}

div.mini-widget-title {
    float: left;
    margin-left: 15px;
    width: 175px;
}

div.mini-widget-title a {
    color: #121212;
    font-family: "Roboto Slab", "Helvetica Neue", Helvetica, Arial, sans-serif;
    font-size: 16px;
    font-weight: 400;
    line-height: 20px;
}

div.mini-widget-hr {
    border-bottom: 1px solid #e0e0e0;
    height: 1px;
    margin-top: 15px;
    width: 45px;
}

div.mini-widget-thumb {
    display: block;
    float: left;
    width: 80px;
}

div.mini-widget-thumb a,
div.mini-widget-thumb img {
    display: inherit;
    height: inherit;
    width: inherit;
}

.mini-widget .post {
    margin-bottom: 30px;
}

.carrier-widget a {
    display: block;
}

.carrier-widget span {
    display: inline-block;
    margin-top: 10px;
}

.mini-widget-title small {
    display: block;
    padding: 5px 0 0;
    font-style: italic;
    color: #999;
}

.large-widget hr {
    margin-bottom: 30px;
}

.large-widget-title {
    display: block;
    padding: 15px 0;
}

.large-widget-title a {
    color: #121212;
    font-family: "Roboto Slab", "Helvetica Neue", Helvetica, Arial, sans-serif;
    font-size: 24px;
    font-weight: 400;
    line-height: 34px;
}

.large-post-meta {
    display: block;
    font-size: 12px;
    width: 100%;
    position: relative;
    padding: 20px 0 0;
    font-family: "Roboto Slab", "Helvetica Neue", Helvetica, Arial, sans-serif;
}

.large-post-meta .avatar img {
    max-width: 30px;
    border: 1px solid #EEEEEE;
    margin-right: 5px;
}

.large-post-meta small {
    color: #dadada;
    font-size: 16px;
    margin: 0 5px;
}

.social-media-widget ul {
    padding: 0;
    margin: 0 !important;
}

.social-media-widget li {
    text-align: center;
    padding: 20px;
    list-style: none;
    float: left;
    width: 25%;
    margin: 0 !important;
    -webkit-transition: all 0.7s ease 0s;
    -moz-transition: all 0.7s ease 0s;
    -ms-transition: all 0.7s ease 0s;
    -o-transition: all 0.7s ease 0s;
    transition: all 0.7s ease 0s;
}

.social-media-widget li:hover {
    zoom: 1;
    filter: alpha(opacity=80);
    opacity: 0.8;
}

.social-media-widget small {
    font-family: "Roboto Slab", "Helvetica Neue", Helvetica, Arial, sans-serif;
    line-height: 1;
    padding: 10px 0 0;
}

.social-media-widget li i {
    font-size: 24px;
}

.social-media-widget li a {
    color: #ffffff;
}

.social-media-widget li small {
    display: block;
}

.customshare .list a.fb,
.social-media-widget li.facebook {
    background-color: #3b5998;
}

.customshare .list a.tw,
.social-media-widget li.twitter {
    background-color: #55acee;
}

.customshare .list a.gp,
.social-media-widget li.googleplus {
    background-color: #dd4b39;
}

.social-media-widget li.pinterest {
    background-color: #cb2027;
}

.social-media-widget li.linkedin {
    background-color: #007bb5;
}

.social-media-widget li.rss {
    background-color: #F36F24;
}

.social-media-widget li.youtube {
    background-color: #bb0000;
}

.social-media-widget li.instagram {
    background-color: #125688;
}


/******************************************
    SHAARE BUTTONS
******************************************/

.post-share {
    position: relative;
    display: block;
}

.customshare {
    display: inline-block;
    position: absolute;
    right: 0;
    bottom: 20px;
}

.customshare .list {
    position: absolute;
    top: 0;
    right: 0;
    text-align: right;
    background: transparent;
}

.customshare .list strong {
    display: block;
    width: 40px;
    color: #9f9f9f;
    cursor: pointer;
    font-weight: 400;
    text-align: right;
    font-family: "Roboto Slab", "Helvetica Neue", Helvetica, Arial, sans-serif;
}

.customshare .list a {
    position: relative;
    display: block;
    width: 40px;
    height: 40px;
    line-height: 40px;
    margin-top: 5px;
    z-index: 1000;
    font-weight: normal;
    text-align: center;
    background: #fff;
    color: #ffffff !important;
}

.ie9 .customshare .list strong {
    padding-top: 5px;
    height: 41px;
}

.customshare .list a {
    background: #ff3;
    -webkit-transition: -webkit-transform .0001s linear, background .0001s ease, color .0001s ease;
    -moz-transition: -moz-transform .0001s linear, background .0001s ease, color .0001s ease;
    -ms-transition: -ms-transform .0001s linear, background .0001s ease, color .0001s ease;
    -o-transition: -o-transform .0001s linear, background .0001s ease, color .0001s ease;
    transition: transform .0001s linear, background .0001s ease, color .0001s ease;
    -webkit-transform: scale(0) translate3d(0, 0, 0);
    -moz-transform: scale(0) translate3d(0, 0, 0);
    -ms-transform: scale(0) translate3d(0, 0, 0);
    -o-transform: scale(0) translate3d(0, 0, 0);
    transform: scale(0) translate3d(0, 0, 0);
    opacity: 0;
    filter: progid: DXImageTransform.Microsoft.Alpha(Opacity=0);
}

.customshare .list a:hover {
    color: #fff;
    text-decoration: none;
}

.customshare .list .tw,
.customshare .list .fb,
.customshare .list .gp {
    font-size: 16px;
}

.customshare .list:hover strong span,
.customshare .list.hover strong span {
    height: 135px;
    opacity: 1;
    filter: progid: DXImageTransform.Microsoft.Alpha(Opacity=100);
    -webkit-transition-duration: .3s;
    -moz-transition-duration: .3s;
    -ms-transition-duration: .3s;
    -o-transition-duration: .3s;
    transition-duration: .3s;
}

.customshare .list:hover a,
.customshare .list.hover a {
    -webkit-transform: scale(1) translate3d(0, 0, 0);
    -moz-transform: scale(1) translate3d(0, 0, 0);
    -ms-transform: scale(1) translate3d(0, 0, 0);
    -o-transform: scale(1) translate3d(0, 0, 0);
    transform: scale(1) translate3d(0, 0, 0);
    opacity: 1;
    filter: progid: DXImageTransform.Microsoft.Alpha(Opacity=100);
    -webkit-transition-duration: .3s, .4s, .4s;
    -moz-transition-duration: .3s, .4s, .4s;
    -ms-transition-duration: .3s, .4s, .4s;
    -o-transition-duration: .3s, .4s, .4s;
    transition-duration: .3s, .4s, .4s;
}

.customshare .list:hover .tw,
.customshare .list.hover .tw {
    -webkit-transition-delay: .1s, .0001s, .0001s;
    -moz-transition-delay: .1s, .0001s, .0001s;
    -ms-transition-delay: .1s, .0001s, .0001s;
    -o-transition-delay: .1s, .0001s, .0001s;
    transition-delay: .1s, .0001s, .0001s;
}

.customshare .list:hover .fb,
.customshare .list.hover .fb {
    -webkit-transition-delay: .2s, .0001s, .0001s;
    -moz-transition-delay: .2s, .0001s, .0001s;
    -ms-transition-delay: .2s, .0001s, .0001s;
    -o-transition-delay: .2s, .0001s, .0001s;
    transition-delay: .2s, .0001s, .0001s;
}

.customshare .list:hover .gp,
.customshare .list.hover .gp {
    -webkit-transition-delay: .3s, .0001s, .0001s;
    -moz-transition-delay: .3s, .0001s, .0001s;
    -ms-transition-delay: .3s, .0001s, .0001s;
    -o-transition-delay: .3s, .0001s, .0001s;
    transition-delay: .3s, .0001s, .0001s;
}

.rating i {
    color: #FFD203 !important;
    display: inline-block;
    margin: 3px -2px 0 0 !important;
    text-align: center;
    width: auto !important;
}

.entry {
    position: relative;
    padding: 0 !important;
    margin-bottom: 0;
}

.magnifier {
    position: absolute;
    top: 0;
    cursor: pointer;
    /* Permalink - use to edit and share this gradient: http://colorzilla.com/gradient-editor/#000000+0,000000+100&0.65+0,0+100;Neutral+Density */
    background: -moz-linear-gradient(45deg, rgba(0, 0, 0, 0.65) 0%, rgba(0, 0, 0, 0) 100%);
    /* FF3.6-15 */
    background: -webkit-linear-gradient(45deg, rgba(0, 0, 0, 0.65) 0%, rgba(0, 0, 0, 0) 100%);
    /* Chrome10-25,Safari5.1-6 */
    background: linear-gradient(45deg, rgba(0, 0, 0, 0.65) 0%, rgba(0, 0, 0, 0) 100%);
    /* W3C, IE10+, FF16+, Chrome26+, Opera12+, Safari7+ */
    filter: progid: DXImageTransform.Microsoft.gradient( startColorstr='#a6000000', endColorstr='#00000000', GradientType=1);
    /* IE6-9 fallback on horizontal gradient */
    left: 0;
    bottom: 0;
    right: 0;
    z-index: 1;
    zoom: 1;
    filter: alpha(opacity=0);
    opacity: 0;
    -webkit-transition: all .3s ease-in-out;
    -moz-transition: all .3s ease-in-out;
    -ms-transition: all .3s ease-in-out;
    -o-transition: all .3s ease-in-out;
    transition: all .3s ease-in-out;
}

.entry:hover .magnifier {
    zoom: 1;
    filter: alpha(opacity=100);
    opacity: 1;
}


/******************************************
    FOOTER
******************************************/

#sitefooter-wrap {
    background: #31343b none repeat scroll 0 0;
    font-size: 14px;
    padding: 45px 0;
}

#sitefooter {
    color: #fff;
    position: relative;
}

.footer-links span {
    color: rgba(255, 255, 255, 0.3);
    margin: 0 10px;
}

.copyright-notice {
    margin-bottom: 5px;
}

.footer {
    background-color: #343840;
    padding: 60px 0;
}

.sociallinks li,
.footer .check li {
    margin-bottom: 10px;
}

.footer .sociallinks li::before,
.footer .check li::before,
.footer .mini-widget-title small,
#sitefooter a,
#sitefooter p {
    color: rgba(255, 255, 255, 0.5);
    margin-bottom: 0;
}

#sitefooter a {
    text-decoration: underline !important;
}

.footer .mini-widget-hr,
.footer .widget hr {
    border-color: #444850;
}

.newsletter-widget h3,
.footer p,
.newsletter-widget .btn,
.newsletter-widget .input-group .form-control,
.footer .sociallinks li::before,
.footer .mini-widget-title small,
#sitefooter a,
#sitefooter p,
.sociallinks li a,
.footer .check li a,
.footer div.mini-widget-title a {
    color: rgba(255, 255, 255, 0.5);
    font-family: "Roboto Slab", "Helvetica Neue", Helvetica, Arial, sans-serif;
}

.newsletter-widget hr {
    margin: 40px 0 20px;
}

.newsletter-widget h3 span {
    display: inline-block;
    font-size: 15px;
    margin-right: 15px
}

.newsletter-widget .btn,
.footer .widget-title h4 {
    color: #ffffff;
}

.darkcolor .form-control {
    background-color: #ffffff !important;
    border-color: #dddddd !important;
}

.darkcolor h3 span {
    color: #121212 !important
}

.footer p {
    margin-bottom: 20px;
}

.sociallinks i {
    margin-right: 5px;
}

.newsletter-widget .input-group .form-control {
    background: #3d4149 none repeat scroll 0 0;
    border-color: #42464e;
    box-shadow: none;
}


/******************************************
    SINGLE PAGES
******************************************/

#bbpress-forums li.bbp-body ul.forum li.bbp-forum-topic-count,
#bbpress-forums li.bbp-body ul.forum li.bbp-forum-reply-count {
    font-size: 15px;
    border: 1px solid #eee;
    color: #111 !important;
}

#bbpress-forums li.bbp-body ul.forum li.bbp-forum-topic-count {
    margin-left: 30px;
}

#bbpress-forums li.bbp-body ul.forum li.bbp-forum-reply-count {
    margin-left: 50px !important
}

.darkcolor a {
    color: #121212 !important;
}

li.bbp-forum-freshness {}

.category-desc p {
    padding-bottom: 20px;
}

.category-desc {
    border-bottom: 1px solid #eee;
    padding-bottom: 40px !important;
    display: block;
    margin-bottom: 40px;
    position: relative;
}

.pagination-wrapper {
    display: block;
    margin: 40px 0 80px;
}

.pagination > li > a,
.pagination > li > span {
    background-color: #ffffff;
    border: 1px solid #dddddd;
    color: #337ab7;
    float: left;
    line-height: 1.42857;
    margin-left: -1px;
    margin-right: 5px;
    border-radius: 0 !important;
    padding: 10px 15px;
    position: relative;
    text-decoration: none;
}

.single-post {}

.single-post p {
    margin-bottom: 26px;
}

.single-post .large-widget-title h3 {
    font-weight: 700;
    margin-top: 10px;
    font-size: 28px;
    line-height: 1.6;
}

blockquote {
    color: #999;
    font-family: Georgia, Palatino, "Palatino Linotype", Times, "Times New Roman", serif;
    font-size: 18px;
    line-height: 1.8;
    margin-bottom: 20px;
    border-left: 0;
    padding: 0.25em 50px 0.50em;
    position: relative;
}

blockquote::before {
    color: #ccc;
    content: "“";
    display: block;
    font-size: 64px;
    left: 0;
    position: absolute;
    top: -15px;
}

blockquote cite {
    color: #333;
    display: block;
    margin-top: 10px;
}

blockquote cite::before {
    content: "— ";
}

.authorbox,
.post-bottom {
    padding: 20px 30px;
    margin: 40px 0;
    display: block;
    position: relative;
    border: 1px solid #eee;
}

.post-bottom .post-share {
    top: 28px;
}

.post-bottom {
    margin: 0 0 40px;
}

.tags a {
    font-size: 12px;
    display: inline-block;
    padding: 5px 10px;
    background-color: #f9f9f9;
    color: #5e5e5e;
    border-radius: 0.25em;
}

.tags h4 {
    display: inline-block;
    margin-right: 5px;
    text-transform: uppercase !important;
    vertical-align: sub;
}

.post-pager {
    border: 1px solid #eee;
    padding: 20px 20px;
}

.media img {
    width: 65px;
    margin-right: 20px;
}

.media .rating {
    margin-bottom: 5px;
}

.media-heading {
    font-size: 16px;
    padding-bottom: 0;
    font-weight: 600;
}

.media-body .time-comment {
    margin-bottom: 10px;
    display: inline-block;
    color: #b4b4b4;
    line-height: 1;
}

.media {
    border: 0 !important;
    box-shadow: none !important;
    padding: 10px 20px;
    background-color: #ffffff !important;
    position: relative;
}

.media .btn {
    right: 20px;
    padding: 5px 10px;
    position: absolute;
    top: 14px;
}

.comment-reply {
    margin-left: 45px;
}

.comments .well {
    background-color: #ffffff !important;
    border: 0 !important;
    box-shadow: none !important;
}

.tabbed-widget .form-control,
.comments .form-control {
    margin: 10px 0;
}

.comments textarea {
    height: 140px;
}

.comments h3 {
    padding: 20px;
    text-align: left;
    font-weight: 700;
}

.required {
    color: #DA5333;
    margin-left: 5px;
}

.commentform {
    background-color: #fff;
}

.commentform textarea.form-control {
    height: 140px !important;
    max-width: 100% !important;
}

.commentform p,
.commentform label {
    font-weight: 400;
    margin-bottom: 10px;
    font-size: 13px;
    color: #515151;
}

.commentform .form-control {
    height: 45px;
    box-shadow: none !important;
    background-color: #fff;
    border-color: #ddd;
    margin-bottom: 20px;
    border-radius: 3px;
    color: #515151;
    font-size: 12px;
    padding: 8px;
}

.commentform .btn {
    padding: 10px 20px !important;
    margin-top: 5px;
}

.next div.mini-widget-title {
    float: right;
}

.previous div.mini-widget-title small,
.next div.mini-widget-title small {
    text-transform: uppercase;
    font-style: normal;
    font-size: 11px;
    color: #ccc;
}

.next div.mini-widget-thumb {
    float: right;
    margin-left: 15px;
}

.next div.mini-widget-thumb a,
.next div.mini-widget-thumb img {}

.authorbox .mini-widget-title {
    width: 100%;
}

.authorbox .avatar-author {
    float: left;
    width: 100px;
}

.authorbox .desc {
    font-size: 12px;
    margin-left: 117px;
}

.authorsocial {
    margin-top: 15px;
}

.authorbox p {
    font-size: 12px;
}

.authorbox .rightside {
    padding-left: 40px;
    border-left: 1px solid #f9f9f9
}

.sitemapwrapper ul li {
    margin-bottom: 10px;
}

.sitemapwrapper a {
    color: #121212;
}

.page-404-content h2 {
    font-size: 72px;
    font-weight: 700;
    line-height: 80px;
    margin-top: 40px;
    text-transform: capitalize;
}

.page-404-content {
    padding: 80px 90px;
}

.page-404-content a:hover {
    text-decoration: underline;
}

.page-404-content img {
    margin: 0 auto;
    display: block;
}

.authorlink {
    font-size: 13px !important;
    font-family: Verdana;
    font-style: italic;
    color: #444444 !important;
    font-weight: 400 !important;
    line-height: 21px;
    margin-bottom: 6px;
}

.authorbox .author-title a {
    font-size: 16px;
    margin-bottom: 10px;
    display: block;
    font-weight: 700;
    color: #121212;
    font-family: Roboto Slab;
}

.avatar-author img {
    max-width: 80px;
    margin-right: 20px;
}

.authorbox {
    padding: 30px;
}

.authorbox p {
    margin-bottom: 0;
}

.authorbox .newsletter-widget p {
    margin-bottom: 10px;
}

.authorbox .newsletter-widget .btn {
    border: 0;
}

.btn {
    border-radius: 0 !important;
}

.authorbox .newsletter-widget .form-control {
    background-color: #fff;
    font-size: 13px;
    border-color: #eee;
}

.related-posts .col-md-4 {
    margin-bottom: 30px;
}

.section {
    padding: 30px 0;
    border-bottom: 1px solid #eee;
}

.title-area {
    position: relative;
    padding: 20px 40px;
}

.shadowbg {
    position: relative;
    -webkit-box-shadow: inset 0px 5px 4px 0px rgba(0, 0, 0, 0.25);
    -moz-box-shadow: inset 0px 5px 4px 0px rgba(0, 0, 0, 0.25);
    box-shadow: inset 0px 5px 4px 0px rgba(0, 0, 0, 0.25);
}

.title-area h3 {
    font-size: 40px;
    line-height: 50px;
    margin-bottom: 7px;
    margin-top: 0;
    word-wrap: break-word;
}

.shadowbg .breadcrumb {
    padding-bottom: 0 !important;
}

.breadcrumb > .active {
    color: #555;
}

.breadcrumb > li {
    color: #555 !important;
    display: inline-block;
    font-size: 12px;
}

.breadcrumb {
    background-color: transparent;
    padding: 10px 5px;
}

.title-area small {
    font-size: 15px;
    padding-left: 15px;
}

.single-post {
    padding: 0 40px;
}

.single-post .large-post-meta {
    padding: 30px 0;
    color: #444;
}

.large-post-meta a {
    color: #444;
}

.post-sharing {
    display: block;
    width: 100%;
    position: relative;
    margin: 20px 0 0;
}

.gp-button.btn-primary:hover,
.gp-button.btn-primary:focus,
.gp-button.btn-primary {
    border-color: #DA5333 !important;
    background-color: #DA5333 !important;
}

.fb-button.btn-primary:focus,
.fb-button.btn-primary:hover,
.fb-button.btn-primary {
    background-color: #3B5998 !important;
    border-color: #3B5998 !important;
}

.tw-button.btn-primary:hover,
.tw-button.btn-primary:focus,
.tw-button.btn-primary {
    background-color: #00B6F1 !important;
    border-color: #00B6F1 !important;
}

.tw-button i,
.fb-button i {
    margin-right: 5px;
}

.post-sharing .btn {
    padding: 10px 16px;
}

.post-sharing .btn:hover {
    opacity: 0.9;
}

.colorfulcats {
    margin-bottom: 15px;
}

.single-wrapper .title-area {
    padding: 0 0 3em !important;
}

.single-wrapper .large-post-meta {
    color: #444;
    padding: 20px 0 5px;
}

.single-wrapper .title-area small {
    padding: 0;
}

.single-wrapper .breadcrumb {
    padding: 0;
}

.single-wrapper .post-media {
    margin-bottom: 20px;
}

.post-media img {
    width: 100%;
}

.single-wrapper .post-desc {
    padding: 20px 30px;
}

.job-details ul {
    list-style: none;
    padding: 20px 5px 15px;
}

.job-media img {
    width: 100%;
}

.job-details li:first-child {
    border-top: 1px solid #eee;
}

.job-details li {
    margin: 0;
    font-size: 13px;
    border-bottom: 1px solid #eee;
    padding: 8px 0;
}

.job-details li i {
    width: 30px;
    text-align: center;
    margin-right: 10px;
    border-right: 1px solid #eee;
    padding-right: 10px;
}

.job-details .btn {
    padding: 10px 20px;
}

.job-details .btn i {
    margin-right: 5px;
}

.joblist .large-widget {
    border: 1px solid #eee;
    padding: 30px;
}

.joblist .post-media {
    margin-bottom: 0;
}

.joblist .post-media .btn {
    margin-top: 20px;
}

.joblist img {
    border: 1px solid #eee;
}

.joblist ul {
    margin-bottom: 0;
    padding-bottom: 0;
}

.joblist .title-area {
    padding-bottom: 0 !important;
}

.joblist h3 {
    font-size: 24px;
    margin-top: 20px;
}

.banner,
.parallax {
    background-attachment: fixed;
    background-position: 50% 50%;
    background-repeat: no-repeat;
    background-size: cover;
    display: block;
    height: 100%;
    min-height: 100%;
    overflow: hidden;
    position: relative;
    vertical-align: sub;
    width: 100%;
    z-index: 99;
}

.banner {
    background-attachment: scroll;
    background-position: center top;
}

.reviewlist .col-md-4,
.reviewlist .col-md-3,
.reviewlist .col-md-6 {
    margin-bottom: 30px;
}

.homepage-version .title-area {
    padding: 0 20px 20px;
    position: relative;
}

.nopt {
    padding-top: 0 !important
}

.indexslider {
    margin-top: 40px;
}

.indexslider .title-area {
    padding: 10px 0 30px;
    position: relative;
}


/******************************************
    FLEXSLIDER
******************************************/

.psdesc {
    position: relative;
}

.ps-desc {
    background-color: rgba(0, 0, 0, 0.5);
    background-color: #000\5;
    position: absolute;
    top: 300px;
    left: 100px;
    right: 100px;
    display: block;
    padding: 20px 40px;
}

.ps-desc h3 {
    border-bottom: 0 solid #4B5475;
    margin-bottom: 10px;
    margin-top: 10px;
    padding-top: 0px;
    font-size: 18px;
    font-weight: 700;
    text-transform: capitalize;
}

.ps-desc h3 a {
    color: #fff;
    text-decoration: none;
}

.ps-desc p {
    font-size: 13px;
    color: #fff;
    line-height: 23px;
}

.ps-desc .type,
.ps-desc .status {
    display: inline-block;
    font-size: 13px;
    padding: 6px 13px 8px;
    font-family: Roboto Slab;
    text-align: center;
    position: absolute;
    text-decoration: none;
}

.ps-mini-desc .status {
    bottom: 11px;
    right: 80px;
}

.ps-desc .type {
    background: #010101;
    bottom: -34px;
    right: 82px;
    color: #ffffff;
}

.ps-desc .status {
    bottom: -34px;
    width: 80px !important;
    right: 0;
}


/******************************************
    SHROTCDES
******************************************/

.appoform-wrapper {
    background-color: #fff;
    border: 1px solid #ededed;
    padding: 0 20px 40px 20px;
}

.form-header {
    border-radius: 3px;
    border: 1px solid #ededed;
    background-color: #fff;
    margin-bottom: 30px;
    margin-top: -30px;
    padding: 20px 0;
    text-align: center;
}

.form-header h3 {
    color: #121212;
    padding: 0;
    line-height: 1;
    margin: 0;
    font-size: 18px;
}

.nav-tabs {
    border: 0;
}

.nav-tabs > li > a,
.nav-tabs > li.active > a:hover,
.nav-tabs > li.active > a:focus {
    -moz-border-bottom-colors: none;
    -moz-border-left-colors: none;
    -moz-border-right-colors: none;
    -moz-border-top-colors: none;
    background-color: #fff;
    border-color: #ededed #ededed #ededed !important;
    border-image: none;
    border-radius: 0 !important;
    text-align: center;
    font-size: 14px;
    width: 100%;
    padding: 15px 30px;
    border-style: solid;
    border-top-width: 1px;
    cursor: pointer;
    color: #363a47 !important;
}

.nav-tabs > li.active > a,
.nav-tabs > li.active > a:hover,
.nav-tabs > li.active > a:focus {
    background-color: #ffffff !important;
}

.tab-content {
    border: 1px solid #eee;
    padding: 20px !important;
    background-color: #ffffff;
}

.nav-tabs > li a {
    font-weight: 600;
}

.tab-pane .alignleft {
    margin: 5px 20px 10px 0;
    max-width: 150px;
}

.tab-pane .alignright {
    margin: 5px 0 10px 20px;
    max-width: 150px;
}

#message {
    display: block;
    position: relative;
    text-align: left;
    padding: 0 20px;
}

#map {
    height: 450px;
    width: 100%
}

#map img {
    max-width: inherit
}

.map {
    position: relative
}

.map .row .col-lg-4 {
    float: right;
    margin-top: -450px;
    z-index: 9
}

.contact-icon {
    margin: 20px 0;
    overflow: hidden;
}

.map .row {
    position: relative
}

.infobox img {
    width: 100% !important;
}

.map .searchmodule {
    padding: 18px 10px
}

.infobox {
    display: inline-block;
    padding: 5px;
    position: relative;
    width: 270px;
}

.infobox img {
    width: 80px !important;
    padding-right: 10px
}

.infobox .title {
    font-size: 13px;
    font-weight: bold;
    margin-top: 0;
    margin-bottom: 0;
    text-transform: uppercase;
    padding-bottom: 5px;
}

.infobox .title a {
    font-weight: bold;
}

.btn-block.btn-lg {
    padding: 21px 16px;
}


/******************************************
    RESPONSIVE
******************************************/

@media (max-width: 1380px) {
    .ps-desc {
        top: 260px;
    }
}

@media (max-width: 1240px) {
    .ps-desc {
        top: 220px;
    }
}

@media (max-width: 1180px) {
    .ps-desc {
        top: 190px;
        left: 20px;
        right: 20px;
    }
    .newsletter-widget h3 span {
        font-size: 12px;
        margin-right: 5px;
    }
}

@media (max-width: 1230px) {
    div.mini-widget-thumb {
        width: 40px;
    }
    .social-media-widget li {
        width: 50%;
    }
}

@media (max-width: 1080px) {
    .ps-desc {
        top: 160px;
        left: 20px;
        right: 20px;
    }
    .yamm-content div.mini-widget-thumb {
        display: none !important;
    }
    div.mini-widget-thumb {
        width: 25px;
        float: left;
    }
    div.mini-widget-title {
        margin: 0 0 0 10px;
    }
}

@media (max-width: 992px) {
    .ps-desc {
        top: 250px;
        left: 20px;
        right: 20px;
    }
    .pager div.mini-widget-thumb a,
    .pager div.mini-widget-thumb img {
        display: none;
    }
    .pager div.mini-widget-title {
        display: block;
        width: 100%;
        float: none;
        margin: 0;
    }
    .navbar-default .navbar-toggle {
        background-color: #ffffff !important;
    }
    #sitefooter .text-right {
        text-align: center;
        margin-top: 10px;
    }
    #sitefooter .text-left {
        text-align: center !important;
    }
    .post-review {
        margin-bottom: 20px;
    }
    .logo-wrapper {
        padding-top: 0;
    }
    .navbar-brand {
        padding: 0;
        margin: 0 auto 10px !important;
        width: 100%;
        display: inline-block;
        float: none;
        text-align: center;
    }
    .navbar-brand img {
        max-width: 220px;
        padding: 0;
        margin: 0 auto;
    }
    .logo-wrapper .ads-widget img {
        margin: 0 auto!important;
        width: auto;
        display: block;
        float: none;
        text-align: center;
    }
    .authorbox .post {
        margin-bottom: 20px;
        display: block;
    }
    .joblist .title-area {
        margin-top: 30px;
        text-align: left !important;
    }
    .homepage-version .title-area {
        padding-top: 20px;
    }
}

@media (max-width: 900px) {
    .ps-desc {
        display: none;
    }
}

@media (max-width: 768px) {
    .finalreview .col-sm-4 {
        margin: 20px auto !important
    }
    .reviewbox {
        float: none !important;
        margin: 0 auto 30px !important;
        display: block;
        max-width: 100% !important;
    }
    .tw-button i,
    .fb-button i {
        margin-right: 0;
    }
    .title-area {
        text-align: center;
    }
    .single-wrapper .post-desc {
        padding: 20px 10px;
    }
    .title-area h3 {
        font-size: 21px;
        line-height: 34px;
        margin-bottom: 7px;
        margin-top: 0;
        word-wrap: break-word;
    }
    .comment-reply {
        margin-left: 0 !important
    }
    .single-post .large-widget-title h3 {
        font-size: 18px;
    }
    .single-post {
        padding: 5px;
    }
    .dropdown-menu {
        background-color: #ffffff !important;
    }
    .nav > li > a {
        padding: 5px 20px;
    }
    .yamm-content {
        padding: 0 20px !important;
    }
    .navbar-nav > li:hover,
    .navbar-default .navbar-nav > .active > a,
    .navbar-default .navbar-nav > .active > a:hover,
    .navbar-default .navbar-nav > .active > a:focus {
        background-color: transparent !important;
    }
}

@media (max-width: 420px) {
    .joblist .title-area h3 {
        font-size: 18px !important;
        line-height: 26px !important;
    }
    .job-details li {
        font-size: 12px;
    }
    .footer-links span {
        margin: 0 4px;
    }
    .copyright-notice,
    .footer-links,
    #sitefooter,
    .large-post-meta {
        font-size: 11px;
    }
}

@media (max-width: 1406px) {
    .dm-social {
        display: none;
    }
    .header,
    .logo-wrapper,
    .container {
        width: 100%;
    }
}