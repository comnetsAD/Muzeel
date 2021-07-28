/* 
	Author: Dodi Hidayatullah
	---------------------------------------
	TABLE of CONTENT:
	---------------------------------------
		- 0.0 Basic Styles Framework
			0.1 Foundation style
			0.2 perfect-scrollbar
			0.3 smoothdivscrool
			0.4 prettyphoto
			0.5 Font Awesome
			0.6 Flexslider
		- 1.0 MAIN STYLE 
		- 2.0 HEADER 
		- 3.0 MAIN SLIDER
		- 4.0 CAROUSEL FEATURED STYLE
		- 5.0 CONTENT
			5.1 List news
			5.2 Post Content 
		- 6.0 SIDEBAR & WIDGET STYLE
			6.1 widget by category
			6.2 widget recent vid
			6.3 widget top trending
			6.4 widget trend
			6.5 widget category
			6.6 widget review
			6.7 widget tags
			6.8 widget list comments 
			6.9 widget list contacts
		- 7.0 FOOTER & FOOTER WIDGET STYLE
			8.1 Footer widget
		- 8.0 Media Query 
*/

/* -------------------------------------------------------------------------------------------------
0.0 Basic Styles Framework
----------------------------------------------------------------------------------------------------*/
/* 0.1 faundation style */
*, *:before, *:after {
	-webkit-box-sizing: border-box;
	-moz-box-sizing: border-box;
	box-sizing: border-box
}
html {
	font-size: 62.5%
}
body {
	background: #fff;
	font-family: "Helvetica Neue", "Helvetica", Helvetica, Arial, sans-serif;
	font-weight: normal;
	font-style: normal;
	font-size: 14px;
	line-height: 1;
	color: #222;
	position: relative;
	-webkit-font-smoothing: antialiased
}
a img {
	border: none
}
a {
	color: #2ba6cb;
	text-decoration: none;
	line-height: inherit
}
a:hover {
	color: #2795b6
}
a:focus {
	color: #2795b6
}
p a, p a:visited {
	line-height: inherit
}
.left {
	float: left
}
.right {
	float: right
}
.text-left {
	text-align: left
}
.text-right {
	text-align: right
}
.text-center {
	text-align: center
}
.hide {
	display: none
}
.hide-override {
	display: none !important
}
.highlight {
	background: #ff9
}
#googlemap img, object, embed {
	max-width: none
}
#map_canvas embed {
	max-width: none
}
#map_canvas img {
	max-width: none
}
#map_canvas object {
	max-width: none
}
figure {
	margin: 0
}
body, div, dl, dt, dd, ul, ol, li, h1, h2, h3, h4, h5, h6, pre, form, p, blockquote, th, td {
	margin: 0;
	padding: 0;
	font-size: 14px;
	direction: ltr
}
p {
	font-family: inherit;
	font-weight: normal;
	font-size: 14px;
	line-height: 1.6;
	margin-bottom: 17px
}
p.lead {
	font-size: 17.5px;
	line-height: 1.6;
	margin-bottom: 17px
}
aside p {
	font-size: 13px;
	line-height: 1.35;
	font-style: italic
}
h1, h2, h3, h4, h5, h6 {
	font-family: "Helvetica Neue", "Helvetica", Helvetica, Arial, sans-serif;
	font-weight: bold;
	font-style: normal;
	color: #222;
	text-rendering: optimizeLegibility;
	line-height: 1.1;
	margin-bottom: 14px;
	margin-top: 14px
}
h1 small, h2 small, h3 small, h4 small, h5 small, h6 small {
	font-size: 60%;
	color: #6f6f6f;
	line-height: 0
}
h1 {
	font-size: 44px
}
h2 {
	font-size: 37px
}
h3 {
	font-size: 27px
}
h4 {
	font-size: 23px
}
h5 {
	font-size: 17px
}
h6 {
	font-size: 14px
}
hr {
	border: solid #ddd;
	border-width: 1px 0 0;
	clear: both;
	margin: 22px 0 21px;
	height: 0
}
.subheader {
	line-height: 1.3;
	color: #6f6f6f;
	font-weight: 300;
	margin-bottom: 17px
}
em, i {
	font-style: italic;
	line-height: inherit
}
strong, b {
	font-weight: bold;
	line-height: inherit
}
small {
	font-size: 60%;
	line-height: inherit
}
code {
	font-weight: bold;
	background: #ff9
}
ul, ol, dl {
	font-size: 14px;
	line-height: 1.6;
	margin-bottom: 17px;
	list-style-position: outside
}
ul li ul, ul li ol {
	margin-left: 20px;
	margin-bottom: 0
}
ul.square, ul.circle, ul.disc {
	margin-left: 17px
}
ul.square {
	list-style-type: square
}
ul.square li ul {
	list-style: inherit
}
ul.circle {
	list-style-type: circle
}
ul.circle li ul {
	list-style: inherit
}
ul.disc {
	list-style-type: disc
}
ul.disc li ul {
	list-style: inherit
}
ul.no-bullet {
	list-style: none
}
ul.large li {
	line-height: 21px
}
ol {
	margin-left: 20px
}
ol li ul, ol li ol {
	margin-left: 20px;
	margin-bottom: 0
}
blockquote, blockquote p {
	line-height: 1.5;
	color: #6f6f6f
}
blockquote {
	margin: 0 0 17px;
	padding: 9px 20px 0 19px;
	border-left: 1px solid #ddd
}
blockquote cite {
	display: block;
	font-size: 13px;
	color: #555
}
blockquote cite:before {
	content: "\2014 \0020"
}
blockquote cite a, blockquote cite a:visited {
	color: #555
}
abbr, acronym {
	text-transform: uppercase;
	font-size: 90%;
	color: #222;
	border-bottom: 1px solid #ddd;
	cursor: help
}
abbr {
	text-transform: none
}
.print-only {
	display: none !important
}
@media print {
* {
	background: transparent !important;
	color: #000 !important;
	box-shadow: none !important;
	text-shadow: none !important;
	filter: none !important;
	-ms-filter: none !important
}
a, a:visited {
	text-decoration: underline
}
a[href]:after {
	content: " (" attr(href) ")"
}
abbr[title]:after {
	content: " (" attr(title) ")"
}
.ir a:after, a[href^="javascript:"]:after, a[href^="#"]:after {
	content: ""
}
pre, blockquote {
	border: 1px solid #999;
	page-break-inside: avoid
}
thead {
	display: table-header-group
}
tr, img {
	page-break-inside: avoid
}
img {
	max-width: 100% !important
}
@page {
margin:0.5cm
}
p, h2, h3 {
	orphans: 3;
	widows: 3
}
h2, h3 {
	page-break-after: avoid
}
.hide-on-print {
	display: none !important
}
.print-only {
	display: block !important
}
.hide-for-print {
	display: none !important
}
.show-for-print {
	display: inherit !important
}
}
form {
	margin: 0 0 19.41641px
}
.row form .row {
	margin: 0 -6px
}
.row form .row .column, .row form .row .columns {
	padding: 0 6px
}
.row form .row.collapse {
	margin: 0
}
.row form .row.collapse .column, .row form .row.collapse .columns {
	padding: 0
}
label {
	font-size: 14px;
	color: #4d4d4d;
	cursor: pointer;
	display: block;
	font-weight: 500;
	margin-bottom: 3px
}
label.right {
	float: none;
	text-align: right
}
label.inline {
	line-height: 32px;
	margin: 0 0 12px 0
}
.prefix, .postfix {
	display: block;
	position: relative;
	z-index: 2;
	text-align: center;
	width: 100%;
	padding-top: 0;
	padding-bottom: 0;
	height: 32px;
	line-height: 31px
}
a.button.prefix, a.button.postfix {
	padding-left: 0;
	padding-right: 0;
	text-align: center
}
span.prefix, span.postfix {
	background: #f2f2f2;
	border: 1px solid #ccc
}
.prefix {
	left: 2px;
	-moz-border-radius-topleft: 2px;
	-webkit-border-top-left-radius: 2px;
	border-top-left-radius: 2px;
	-moz-border-radius-bottomleft: 2px;
	-webkit-border-bottom-left-radius: 2px;
	border-bottom-left-radius: 2px;
	overflow: hidden
}
.postfix {
	right: 2px;
	-moz-border-radius-topright: 2px;
	-webkit-border-top-right-radius: 2px;
	border-top-right-radius: 2px;
	-moz-border-radius-bottomright: 2px;
	-webkit-border-bottom-right-radius: 2px;
	border-bottom-right-radius: 2px
}
input[type="text"], input[type="password"], input[type="date"], input[type="datetime"], input[type="email"], input[type="number"], input[type="search"], input[type="tel"], input[type="time"], input[type="url"], select, textarea {
	background-color: #fff;
	font-family: inherit;
	border: 1px solid #ccc;
	-webkit-border-radius: 2px;
	-moz-border-radius: 2px;
	-ms-border-radius: 2px;
	-o-border-radius: 2px;
	border-radius: 2px;
	-webkit-box-shadow: inset 0 1px 2px rgba(0,0,0,0.1);
	-moz-box-shadow: inset 0 1px 2px rgba(0,0,0,0.1);
	box-shadow: inset 0 1px 2px rgba(0,0,0,0.1);
	color: rgba(0,0,0,0.75);
	display: block;
	font-size: 14px;
	margin: 0 0 12px 0;
	padding: 6px;
	height: 32px;
	width: 100%;
	-webkit-transition: all 0.15s linear;
	-moz-transition: all 0.15s linear;
	-o-transition: all 0.15s linear;
	transition: all 0.15s linear
}
input[type="text"].oversize, input[type="password"].oversize, input[type="date"].oversize, input[type="datetime"].oversize, input[type="email"].oversize, input[type="number"].oversize, input[type="search"].oversize, input[type="tel"].oversize, input[type="time"].oversize, input[type="url"].oversize, textarea.oversize {
	font-size: 17px;
	padding: 4px 6px
}
input[type="text"]:focus, input[type="password"]:focus, input[type="date"]:focus, input[type="datetime"]:focus, input[type="email"]:focus, input[type="number"]:focus, input[type="search"]:focus, input[type="tel"]:focus, input[type="time"]:focus, input[type="url"]:focus, textarea:focus {
	background: #fafafa;
	border-color: #b3b3b3
}
input[type="text"][disabled], input[type="password"][disabled], input[type="date"][disabled], input[type="datetime"][disabled], input[type="email"][disabled], input[type="number"][disabled], input[type="search"][disabled], input[type="tel"][disabled], input[type="time"][disabled], input[type="url"][disabled], textarea[disabled] {
	background-color: #ddd
}
textarea {
	height: auto
}
select {
	width: 100%
}
fieldset {
	border: solid 1px #ddd;
	-webkit-border-radius: 3px;
	-moz-border-radius: 3px;
	-ms-border-radius: 3px;
	-o-border-radius: 3px;
	border-radius: 3px;
	padding: 12px;
	margin: 18px 0
}
fieldset legend {
	font-weight: bold;
	background: #fff;
	padding: 0 3px;
	margin: 0;
	margin-left: -3px
}
.error input, input.error, .error textarea, textarea.error, .error input:focus, input.error:focus, .error textarea:focus, textarea.error:focus {
	border-color: #c60f13;
	background-color: rgba(198,15,19,0.1)
}
.error input:focus, input.error:focus, .error textarea:focus, textarea.error:focus {
	outline-color: #f5797c
}
.error label, label.error {
	color: #c60f13
}
.error small, small.error {
	display: block;
	padding: 6px 4px;
	margin-top: -13px;
	margin-bottom: 12px;
	background: #c60f13;
	color: #fff;
	font-size: 12px;
	font-weight: bold;
	-moz-border-radius-bottomleft: 2px;
	-webkit-border-bottom-left-radius: 2px;
	border-bottom-left-radius: 2px;
	-moz-border-radius-bottomright: 2px;
	-webkit-border-bottom-right-radius: 2px;
	border-bottom-right-radius: 2px
}
form.custom span.custom {
	display: inline-block;
	width: 16px;
	height: 16px;
	position: relative;
	top: 2px;
	border: solid 1px #ccc;
	background: #fff
}
form.custom span.custom.radio {
	-webkit-border-radius: 100px;
	-moz-border-radius: 100px;
	-ms-border-radius: 100px;
	-o-border-radius: 100px;
	border-radius: 100px
}
form.custom span.custom.checkbox:before {
	content: "";
	display: block;
	line-height: 0.8;
	height: 14px;
	width: 14px;
	text-align: center;
	position: absolute;
	top: 0;
	left: 0;
	font-size: 14px;
	color: #fff
}
form.custom span.custom.radio.checked:before {
	content: "";
	display: block;
	width: 8px;
	height: 8px;
	-webkit-border-radius: 100px;
	-moz-border-radius: 100px;
	-ms-border-radius: 100px;
	-o-border-radius: 100px;
	border-radius: 100px;
	background: #222;
	position: relative;
	top: 3px;
	left: 3px
}
form.custom span.custom.checkbox.checked:before {
	content: "\00d7";
	color: #222
}
form.custom div.custom.dropdown {
	display: block;
	position: relative;
	width: auto;
	height: 28px;
	margin-bottom: 9px;
	margin-top: 2px
}
form.custom div.custom.dropdown ul {
	overflow-y: auto;
	max-height: 200px
}
form.custom div.custom.dropdown a.current {
	display: block;
	width: auto;
	line-height: 26px;
	min-height: 28px;
	padding: 0;
	padding-left: 6px;
	padding-right: 38px;
	border: solid 1px #ddd;
	color: #141414;
	background-color: #fff;
	white-space: nowrap
}
form.custom div.custom.dropdown a.selector {
	position: absolute;
	width: 27px;
	height: 28px;
	display: block;
	right: 0;
	top: 0;
	border: solid 1px #ddd
}
form.custom div.custom.dropdown a.selector:after {
	content: "";
	display: block;
	content: "";
	display: block;
	width: 0;
	height: 0;
	border: solid 5px;
	border-color: #aaa transparent transparent transparent;
	position: absolute;
	left: 50%;
	top: 50%;
	margin-top: -2px;
	margin-left: -5px
}
form.custom div.custom.dropdown:hover a.selector:after, form.custom div.custom.dropdown.open a.selector:after {
	content: "";
	display: block;
	width: 0;
	height: 0;
	border: solid 5px;
	border-color: #222 transparent transparent transparent
}
form.custom div.custom.dropdown.open ul {
	display: block;
	z-index: 10
}
form.custom div.custom.dropdown.small {
	width: 134px !important
}
form.custom div.custom.dropdown.medium {
	width: 254px !important
}
form.custom div.custom.dropdown.large {
	width: 434px !important
}
form.custom div.custom.dropdown.expand {
	width: 100% !important
}
form.custom div.custom.dropdown.open.small ul {
	width: 134px !important
}
form.custom div.custom.dropdown.open.medium ul {
	width: 254px !important
}
form.custom div.custom.dropdown.open.large ul {
	width: 434px !important
}
form.custom div.custom.dropdown.open.expand ul {
	width: 100% !important
}
form.custom div.custom.dropdown ul {
	position: absolute;
	width: auto;
	display: none;
	margin: 0;
	left: 0;
	top: 27px;
	margin: 0;
	padding: 0;
	background: #fff;
	background: rgba(255,255,255,0.95);
	border: solid 1px #ccc
}
form.custom div.custom.dropdown ul li {
	color: #555;
	font-size: 13px;
	cursor: pointer;
	padding: 3px;
	padding-left: 6px;
	padding-right: 38px;
	min-height: 18px;
	line-height: 18px;
	margin: 0;
	white-space: nowrap;
	list-style: none
}
form.custom div.custom.dropdown ul li.selected {
	background: #cdebf5;
	color: #000
}
form.custom div.custom.dropdown ul li.selected:after {
	content: "\2013";
	position: absolute;
	right: 10px
}
form.custom div.custom.dropdown ul li:hover {
	background-color: #cdebf5;
	color: #000
}
form.custom div.custom.dropdown ul li:hover:after {
	content: "\2013";
	position: absolute;
	right: 10px;
	color: #a3dbec
}
form.custom div.custom.dropdown ul li.selected:hover {
	background: #cdebf5;
	cursor: default;
	color: #000
}
form.custom div.custom.dropdown ul li.selected:hover:after {
	color: #000
}
form.custom div.custom.dropdown ul.show {
	display: block
}
form.custom .custom.disabled {
	background-color: #ddd
}
@-moz-document url-prefix() {
form.custom div.custom.dropdown a.selector {
height:28px
}
}
.lt-ie9 form.custom div.custom.dropdown a.selector {
	height: 28px
}
.row {
	width: 1200px;
	max-width: 100%;
	min-width: 768px;
	margin: 0 auto
}
.row .row {
	width: auto;
	max-width: none;
	min-width: 0;
	margin: 0 -15px
}
.row.collapse .column, .row.collapse .columns {
	padding: 0
}
.row .row {
	width: auto;
	max-width: none;
	min-width: 0;
	margin: 0 -15px
}
.row .row.collapse {
	margin: 0
}
.column, .columns {
	float: left;
	min-height: 1px;
	padding: 0 15px;
	position: relative
}
.column.centered, .columns.centered {
	float: none;
	margin: 0 auto
}
[class*="column"]+[class*="column"]:last-child {
float:right
}
[class*="column"]+[class*="column"].end {
float:left
}
.one, .row .one {
	width: 8.33333%
}
.two, .row .two {
	width: 16.66667%
}
.three, .row .three {
	width: 25%
}
.four, .row .four {
	width: 33.33333%
}
.five, .row .five {
	width: 41.66667%
}
.six, .row .six {
	width: 50%
}
.seven, .row .seven {
	width: 58.33333%
}
.eight, .row .eight {
	width: 66.66667%
}
.nine, .row .nine {
	width: 75%
}
.ten, .row .ten {
	width: 83.33333%
}
.eleven, .row .eleven {
	width: 91.66667%
}
.twelve, .row .twelve {
	width: 100%
}
.row .offset-by-one {
	margin-left: 8.33333%
}
.row .offset-by-two {
	margin-left: 16.66667%
}
.row .offset-by-three {
	margin-left: 25%
}
.row .offset-by-four {
	margin-left: 33.33333%
}
.row .offset-by-five {
	margin-left: 41.66667%
}
.row .offset-by-six {
	margin-left: 50%
}
.row .offset-by-seven {
	margin-left: 58.33333%
}
.row .offset-by-eight {
	margin-left: 66.66667%
}
.row .offset-by-nine {
	margin-left: 75%
}
.row .offset-by-ten {
	margin-left: 83.33333%
}
.push-two {
	left: 16.66667%
}
.pull-two {
	right: 16.66667%
}
.push-three {
	left: 25%
}
.pull-three {
	right: 25%
}
.push-four {
	left: 33.33333%
}
.pull-four {
	right: 33.33333%
}
.push-five {
	left: 41.66667%
}
.pull-five {
	right: 41.66667%
}
.push-six {
	left: 50%
}
.pull-six {
	right: 50%
}
.push-seven {
	left: 58.33333%
}
.pull-seven {
	right: 58.33333%
}
.push-eight {
	left: 66.66667%
}
.pull-eight {
	right: 66.66667%
}
.push-nine {
	left: 75%
}
.pull-nine {
	right: 75%
}
.push-ten {
	left: 83.33333%
}
.pull-ten {
	right: 83.33333%
}
img {
	height: auto
}
img, object, embed {
	max-width: 100%
}
img {
	-ms-interpolation-mode: bicubic
}
#map_canvas img, .map_canvas img {
	max-width: none!important
}
.row {
*zoom:1
}
.row:before, .row:after {
	content: " ";
	display: table
}
.row:after {
	clear: both
}
.block-grid {
	display: block;
	overflow: hidden;
	padding: 0
}
.block-grid>li {
	display: block;
	height: auto;
	float: left
}
.block-grid.one-up {
	margin: 0
}
.block-grid.one-up>li {
	width: 100%;
	padding: 0 0 15px
}
.block-grid.two-up {
	margin: 0 -15px
}
.block-grid.two-up>li {
	width: 50%;
	padding: 0 15px 15px
}
.block-grid.two-up>li:nth-child(2n+1) {
	clear: both
}
.block-grid.three-up {
	margin: 0 -12px
}
.block-grid.three-up>li {
	width: 33.33333%;
	padding: 0 12px 12px
}
.block-grid.three-up>li:nth-child(3n+1) {
	clear: both
}
.block-grid.four-up {
	margin: 0 -10px
}
.block-grid.four-up>li {
	width: 25%;
	padding: 0 10px 10px
}
.block-grid.four-up>li:nth-child(4n+1) {
	clear: both
}
.block-grid.five-up {
	margin: 0 -8px
}
.block-grid.five-up>li {
	width: 20%;
	padding: 0 8px 8px
}
.block-grid.five-up>li:nth-child(5n+1) {
	clear: both
}
.block-grid.six-up {
	margin: 0 -8px
}
.block-grid.six-up>li {
	width: 16.66667%;
	padding: 0 8px 8px
}
.block-grid.six-up>li:nth-child(6n+1) {
	clear: both
}
.block-grid.seven-up {
	margin: 0 -8px
}
.block-grid.seven-up>li {
	width: 14.28571%;
	padding: 0 8px 8px
}
.block-grid.seven-up>li:nth-child(7n+1) {
	clear: both
}
.block-grid.eight-up {
	margin: 0 -8px
}
.block-grid.eight-up>li {
	width: 12.5%;
	padding: 0 8px 8px
}
.block-grid.eight-up>li:nth-child(8n+1) {
	clear: both
}
.block-grid.nine-up {
	margin: 0 -8px
}
.block-grid.nine-up>li {
	width: 11.11111%;
	padding: 0 8px 8px
}
.block-grid.nine-up>li:nth-child(9n+1) {
	clear: both
}
.block-grid.ten-up {
	margin: 0 -8px
}
.block-grid.ten-up>li {
	width: 10%;
	padding: 0 8px 8px
}
.block-grid.ten-up>li:nth-child(10n+1) {
	clear: both
}
.block-grid.eleven-up {
	margin: 0 -8px
}
.block-grid.eleven-up>li {
	width: 9.09091%;
	padding: 0 8px 8px
}
.block-grid.eleven-up>li:nth-child(11n+1) {
	clear: both
}
.block-grid.twelve-up {
	margin: 0 -8px
}
.block-grid.twelve-up>li {
	width: 8.33333%;
	padding: 0 8px 8px
}
.block-grid.twelve-up>li:nth-child(12n+1) {
	clear: both
}
.button {
	width: auto;
	background: #2ba6cb;
	border: 1px solid #1e728c;
	-webkit-box-shadow: 0 1px 0 rgba(255,255,255,0.5) inset;
	-moz-box-shadow: 0 1px 0 rgba(255,255,255,0.5) inset;
	box-shadow: 0 1px 0 rgba(255,255,255,0.5) inset;
	color: #fff;
	cursor: pointer;
	display: inline-block;
	font-family: inherit;
	font-size: 14px;
	font-weight: bold;
	line-height: 1;
	margin: 0;
	padding: 10px 20px 11px;
	position: relative;
	text-align: center;
	text-decoration: none;
	-webkit-transition: background-color 0.15s ease-in-out;
	-moz-transition: background-color 0.15s ease-in-out;
	-o-transition: background-color 0.15s ease-in-out;
	transition: background-color 0.15s ease-in-out
}
.button:hover, .button:focus {
	color: #fff;
	background-color: #2284a1
}
.button:active {
	-webkit-box-shadow: 0 1px 0 rgba(0,0,0,0.2) inset;
	-moz-box-shadow: 0 1px 0 rgba(0,0,0,0.2) inset;
	box-shadow: 0 1px 0 rgba(0,0,0,0.2) inset
}
.button.large {
	font-size: 17px;
	padding: 15px 30px 16px
}
.button.medium {
	font-size: 14px
}
.button.small {
	font-size: 11px;
	padding: 7px 14px 8px
}
.button.tiny {
	font-size: 10px;
	padding: 5px 10px 6px
}
.button.expand {
	width: 100%;
	text-align: center
}
.button.primary {
	background-color: #2ba6cb;
	border: 1px solid #1e728c
}
.button.primary:hover, .button.primary:focus {
	background-color: #2284a1
}
.button.success {
	background-color: #5da423;
	border: 1px solid #396516
}
.button.success:hover, .button.success:focus {
	background-color: #457a1a
}
.button.alert {
	background-color: #c60f13;
	border: 1px solid #7f0a0c
}
.button.alert:hover, .button.alert:focus {
	background-color: #970b0e
}
.button.secondary {
	background-color: #e9e9e9;
	color: #1d1d1d;
	border: 1px solid #c3c3c3
}
.button.secondary:hover, .button.secondary:focus {
	background-color: #d0d0d0
}
.button.radius {
	-webkit-border-radius: 3px;
	-moz-border-radius: 3px;
	-ms-border-radius: 3px;
	-o-border-radius: 3px;
	border-radius: 3px
}
.button.round {
	-webkit-border-radius: 1000px;
	-moz-border-radius: 1000px;
	-ms-border-radius: 1000px;
	-o-border-radius: 1000px;
	border-radius: 1000px
}
.button.full-width {
	width: 100%;
	text-align: center;
	padding-left: 0px !important;
	padding-right: 0px !important
}
.button.left-align {
	text-align: left;
	text-indent: 12px
}
.button.disabled, .button[disabled] {
	opacity: 0.6;
	cursor: default;
	background: #2ba6cb;
	-webkit-box-shadow: none;
	-moz-box-shadow: none;
	box-shadow: none
}
.button.disabled:hover, .button[disabled]:hover {
	background: #2ba6cb
}
.button.disabled.success, .button[disabled].success {
	background-color: #5da423
}
.button.disabled.success:hover, .button.disabled.success:focus, .button[disabled].success:hover, .button[disabled].success:focus {
	background-color: #5da423;
	outline: none
}
.button.disabled.alert, .button[disabled].alert {
	background-color: #c60f13
}
.button.disabled.alert:hover, .button.disabled.alert:focus, .button[disabled].alert:hover, .button[disabled].alert:focus {
	background-color: #c60f13;
	outline: none
}
.button.disabled.secondary, .button[disabled].secondary {
	background-color: #e9e9e9
}
.button.disabled.secondary:hover, .button.disabled.secondary:focus, .button[disabled].secondary:hover, .button[disabled].secondary:focus {
	background-color: #e9e9e9;
	outline: none
}
input[type=submit].button, button.button {
	-webkit-appearance: none
}
@-moz-document url-prefix() {
button::-moz-focus-inner, input[type="reset"]::-moz-focus-inner, input[type="button"]::-moz-focus-inner, input[type="submit"]::-moz-focus-inner, input[type="file"]>input[type="button"]::-moz-focus-inner {
border:none;
padding:0
}
input[type="submit"].tiny.button {
padding:3px 10px 4px
}
input[type="submit"].small.button {
padding:5px 14px 6px
}
input[type="submit"].button, input[type=submit].medium.button {
padding:8px 20px 9px
}
input[type="submit"].large.button {
padding:13px 30px 14px
}
}
.button.dropdown {
	position: relative;
	padding-right: 44px
}
.button.dropdown.large {
	padding-right: 60px
}
.button.dropdown.small {
	padding-right: 28px
}
.button.dropdown.tiny {
	padding-right: 20px
}
.button.dropdown:after {
	content: "";
	display: block;
	width: 0;
	height: 0;
	border: solid 6px;
	border-color: #fff transparent transparent transparent;
	position: absolute;
	top: 50%;
	right: 20px;
	margin-top: -2px
}
.button.dropdown.large:after {
	content: "";
	display: block;
	width: 0;
	height: 0;
	border: solid 7px;
	border-color: #fff transparent transparent transparent;
	margin-top: -3px;
	right: 30px
}
.button.dropdown.small:after {
	content: "";
	display: block;
	width: 0;
	height: 0;
	border: solid 5px;
	border-color: #fff transparent transparent transparent;
	margin-top: -2px;
	right: 14px
}
.button.dropdown.tiny:after {
	content: "";
	display: block;
	width: 0;
	height: 0;
	border: solid 4px;
	border-color: #fff transparent transparent transparent;
	margin-top: -1px;
	right: 10px
}
.button.dropdown>ul {
	-webkit-box-sizing: content-box;
	-moz-box-sizing: content-box;
	box-sizing: content-box;
	display: none;
	position: absolute;
	left: -1px;
	background: #fff;
	background: rgba(255,255,255,0.95);
	list-style: none;
	margin: 0;
	padding: 0;
	border: 1px solid #ccc;
	border-top: none;
	min-width: 100%;
	z-index: 40
}
.button.dropdown>ul li {
	width: 100%;
	cursor: pointer;
	padding: 0;
	min-height: 18px;
	line-height: 18px;
	margin: 0;
	white-space: nowrap;
	list-style: none
}
.button.dropdown>ul li a, .button.dropdown>ul li button {
	display: block;
	color: #555;
	font-size: 13px;
	font-weight: normal;
	padding: 6px 14px;
	text-align: left
}
.button.dropdown>ul li button {
	width: 100%;
	border: inherit;
	background: inherit;
	font-family: inherit;
	margin: inherit;
	-webkit-font-smoothing: antialiased
}
.button.dropdown>ul li:hover, .button.dropdown>ul li:focus {
	background-color: #e3f4f9;
	color: #222
}
.button.dropdown>ul li.divider {
	min-height: 0;
	padding: 0;
	height: 1px;
	margin: 4px 0;
	background: #ededed
}
.button.dropdown.up>ul {
	border-top: 1px solid #ccc;
	border-bottom: none
}
.button.dropdown ul.no-hover.show-dropdown {
	display: block !important
}
.button.dropdown:hover>ul.no-hover {
	display: none
}
.button.dropdown.split {
	padding: 0;
	position: relative
}
.button.dropdown.split:after {
	display: none
}
.button.dropdown.split:hover, .button.dropdown.split:focus {
	background-color: #2ba6cb
}
.button.dropdown.split.alert:hover, .button.dropdown.split.alert:focus {
	background-color: #c60f13
}
.button.dropdown.split.success:hover, .button.dropdown.split.success:focus {
	background-color: #5da423
}
.button.dropdown.split.secondary:hover, .button.dropdown.split.secondary:focus {
	background-color: #e9e9e9
}
.button.dropdown.split>a {
	color: #fff;
	display: block;
	padding: 10px 50px 11px 20px;
	padding-left: 20px;
	padding-right: 50px;
	-webkit-transition: background-color 0.15s ease-in-out;
	-moz-transition: background-color 0.15s ease-in-out;
	-o-transition: background-color 0.15s ease-in-out;
	transition: background-color 0.15s ease-in-out
}
.button.dropdown.split>a:hover, .button.dropdown.split>a:focus {
	background-color: #2284a1;
	-webkit-box-shadow: 0 1px 0 rgba(255,255,255,0.5) inset;
	-moz-box-shadow: 0 1px 0 rgba(255,255,255,0.5) inset;
	box-shadow: 0 1px 0 rgba(255,255,255,0.5) inset
}
.button.dropdown.split.large>a {
	padding: 15px 75px 16px 30px;
	padding-left: 30px;
	padding-right: 75px
}
.button.dropdown.split.small>a {
	padding: 7px 35px 8px 14px;
	padding-left: 14px;
	padding-right: 35px
}
.button.dropdown.split.tiny>a {
	padding: 5px 25px 6px 10px;
	padding-left: 10px;
	padding-right: 25px
}
.button.dropdown.split>span {
	background-color: #2ba6cb;
	position: absolute;
	right: 0;
	top: 0;
	height: 100%;
	width: 30px;
	border-left: 1px solid #1e728c;
	-webkit-box-shadow: 1px 1px 0 rgba(255,255,255,0.5) inset;
	-moz-box-shadow: 1px 1px 0 rgba(255,255,255,0.5) inset;
	box-shadow: 1px 1px 0 rgba(255,255,255,0.5) inset;
	-webkit-transition: background-color 0.15s ease-in-out;
	-moz-transition: background-color 0.15s ease-in-out;
	-o-transition: background-color 0.15s ease-in-out;
	transition: background-color 0.15s ease-in-out
}
.button.dropdown.split>span:hover, .button.dropdown.split>span:focus {
	background-color: #2284a1
}
.button.dropdown.split>span:after {
	content: "";
	display: block;
	width: 0;
	height: 0;
	border: solid 6px;
	border-color: #fff transparent transparent transparent;
	position: absolute;
	top: 50%;
	left: 50%;
	margin-left: -6px;
	margin-top: -2px
}
.button.dropdown.split.secondary>span:after {
	content: "";
	display: block;
	width: 0;
	height: 0;
	border: solid 6px;
	border-color: #1d1d1d transparent transparent transparent
}
.button.dropdown.split.large span {
	width: 45px
}
.button.dropdown.split.small span {
	width: 21px
}
.button.dropdown.split.tiny span {
	width: 15px
}
.button.dropdown.split.large span:after {
	content: "";
	display: block;
	width: 0;
	height: 0;
	border: solid 7px;
	border-color: #fff transparent transparent transparent;
	margin-top: -3px;
	margin-left: -7px
}
.button.dropdown.split.small span:after {
	content: "";
	display: block;
	width: 0;
	height: 0;
	border: solid 4px;
	border-color: #fff transparent transparent transparent;
	margin-top: -1px;
	margin-left: -4px
}
.button.dropdown.split.tiny span:after {
	content: "";
	display: block;
	width: 0;
	height: 0;
	border: solid 3px;
	border-color: #fff transparent transparent transparent;
	margin-top: -1px;
	margin-left: -3px
}
.button.dropdown.split.alert>span {
	background-color: #c60f13;
	border-left-color: #7f0a0c
}
.button.dropdown.split.success>span {
	background-color: #5da423;
	border-left-color: #396516
}
.button.dropdown.split.secondary>span {
	background-color: #e9e9e9;
	border-left-color: #c3c3c3
}
.button.dropdown.split.secondary>a {
	color: #1d1d1d
}
.button.dropdown.split.alert>a:hover, .button.dropdown.split.alert>span:hover, .button.dropdown.split.alert>a:focus, .button.dropdown.split.alert>span:focus {
	background-color: #970b0e
}
.button.dropdown.split.success>a:hover, .button.dropdown.split.success>span:hover, .button.dropdown.split.success>a:focus, .button.dropdown.split.success>span:focus {
	background-color: #457a1a
}
.button.dropdown.split.secondary>a:hover, .button.dropdown.split.secondary>span:hover, .button.dropdown.split.secondary>a:focus, .button.dropdown.split.secondary>span:focus {
	background-color: #d0d0d0
}
ul.button-group {
	list-style: none;
	padding: 0;
	margin: 0 0 12px;
*zoom:1
}
ul.button-group:before, ul.button-group:after {
	content: " ";
	display: table
}
ul.button-group:after {
	clear: both
}
ul.button-group li {
	padding: 0;
	margin: 0 0 0 -1px;
	float: left
}
ul.button-group li:first-child {
	margin-left: 0
}
ul.button-group.radius li .button, ul.button-group.radius li .button.radius, ul.button-group.radius li .button-rounded {
	-webkit-border-radius: 0px;
	-moz-border-radius: 0px;
	-ms-border-radius: 0px;
	-o-border-radius: 0px;
	border-radius: 0px
}
ul.button-group.radius li:first-child .button, ul.button-group.radius li:first-child .button.radius {
	-moz-border-radius-topleft: 3px;
	-webkit-border-top-left-radius: 3px;
	border-top-left-radius: 3px;
	-moz-border-radius-bottomleft: 3px;
	-webkit-border-bottom-left-radius: 3px;
	border-bottom-left-radius: 3px
}
ul.button-group.radius li:first-child .button.rounded {
	-moz-border-radius-topleft: 1000px;
	-webkit-border-top-left-radius: 1000px;
	border-top-left-radius: 1000px;
	-moz-border-radius-bottomleft: 1000px;
	-webkit-border-bottom-left-radius: 1000px;
	border-bottom-left-radius: 1000px
}
ul.button-group.radius li:last-child .button, ul.button-group.radius li:last-child .button.radius {
	-moz-border-radius-topright: 3px;
	-webkit-border-top-right-radius: 3px;
	border-top-right-radius: 3px;
	-moz-border-radius-bottomright: 3px;
	-webkit-border-bottom-right-radius: 3px;
	border-bottom-right-radius: 3px
}
ul.button-group.radius li:last-child .button.rounded {
	-moz-border-radius-topright: 1000px;
	-webkit-border-top-right-radius: 1000px;
	border-top-right-radius: 1000px;
	-moz-border-radius-bottomright: 1000px;
	-webkit-border-bottom-right-radius: 1000px;
	border-bottom-right-radius: 1000px
}
ul.button-group.even .button {
	width: 100%
}
ul.button-group.even.two-up li {
	width: 50%
}
ul.button-group.even.three-up li {
	width: 33.3%
}
ul.button-group.even.three-up li:first-child {
	width: 33.4%
}
ul.button-group.even.four-up li {
	width: 25%
}
ul.button-group.even.five-up li {
	width: 20%
}
div.button-bar {
	overflow: hidden
}
div.button-bar ul.button-group {
	float: left;
	margin-right: 8px
}
div.button-bar ul.button-group:last-child {
	margin-left: 0
}
.nav-bar {
	height: 40px;
	background: #4d4d4d;
	margin-left: 0;
	margin-top: 20px;
	padding: 0
}
.nav-bar>li {
	float: left;
	display: block;
	position: relative;
	padding: 0;
	margin: 0;
	border: 1px solid #333;
	border-right: none;
	line-height: 38px;
	-webkit-box-shadow: 1px 0 0 rgba(255,255,255,0.2) inset;
	-moz-box-shadow: 1px 0 0 rgba(255,255,255,0.2) inset;
	box-shadow: 1px 0 0 rgba(255,255,255,0.2) inset
}
.nav-bar>li:first-child {
	-webkit-box-shadow: 0 0 0;
	-moz-box-shadow: 0 0 0;
	box-shadow: 0 0 0
}
.nav-bar>li:last-child {
	border-right: solid 1px #333;
	-webkit-box-shadow: 1px 0 0 rgba(255,255,255,0.2) inset, 1px 0 0 rgba(255,255,255,0.2);
	-moz-box-shadow: 1px 0 0 rgba(255,255,255,0.2) inset, 1px 0 0 rgba(255,255,255,0.2);
	box-shadow: 1px 0 0 rgba(255,255,255,0.2) inset, 1px 0 0 rgba(255,255,255,0.2)
}
.nav-bar>li.active {
	background: #2ba6cb;
	border-color: #2284a1
}
.nav-bar>li.active>a {
	color: #fff;
	cursor: default
}
.nav-bar>li.active:hover {
	background: #2ba6cb;
	cursor: default
}
.nav-bar>li:hover {
	background: #333
}
.nav-bar>li>a {
	color: #e6e6e6
}
.nav-bar>li ul {
	margin-bottom: 0
}
.nav-bar>li .flyout {
	display: none
}
.nav-bar>li.has-flyout>a:first-child {
	padding-right: 40px;
	position: relative
}
.nav-bar>li.has-flyout>a:first-child:after {
	content: "";
	display: block;
	width: 0;
	height: 0;
	border: solid 4px;
	border-color: #e6e6e6 transparent transparent transparent;
	position: absolute;
	right: 20px;
	top: 17px
}
.nav-bar>li.has-flyout>a.flyout-toggle {
	border-left: 0 !important;
	position: absolute;
	right: 0;
	top: 0;
	padding: 20px;
	z-index: 2;
	display: block
}
.nav-bar>li.has-flyout.is-touch>a:first-child {
	padding-right: 55px
}
.nav-bar>li.has-flyout.is-touch>a.flyout-toggle {
	border-left: 1px dashed #666
}
.nav-bar>li>a:first-child {
	position: relative;
	padding: 0 20px;
	display: block;
	text-decoration: none;
	font-size: 14px
}
.nav-bar>li>input {
	margin: 0 10px
}
.nav-bar.vertical {
	height: auto;
	margin-top: 0
}
.nav-bar.vertical>li {
	float: none;
	border-bottom: none;
	border-right: solid 1px #333;
	-webkit-box-shadow: none;
	-moz-box-shadow: none;
	box-shadow: none
}
.nav-bar.vertical>li.has-flyout>a:first-child:after {
	content: "";
	display: block;
	width: 0;
	height: 0;
	border: solid 4px;
	border-color: transparent transparent transparent #e6e6e6
}
.nav-bar.vertical>li .flyout {
	left: 100%;
	top: -1px
}
.nav-bar.vertical>li .flyout.right {
	left: auto;
	right: 100%
}
.nav-bar.vertical>li.active {
	border-right: solid 1px #2284a1
}
.nav-bar.vertical>li:last-child {
	border-bottom: solid 1px #333
}
.flyout {
	background: #f2f2f2;
	padding: 20px;
	margin: 0;
	border: 1px solid #d9d9d9;
	position: absolute;
	top: 39px;
	left: -1px;
	width: 250px;
	z-index: 40;
	-webkit-box-shadow: 0 1px 5px rgba(0,0,0,0.1);
	-moz-box-shadow: 0 1px 5px rgba(0,0,0,0.1);
	box-shadow: 0 1px 5px rgba(0,0,0,0.1)
}
.flyout p {
	line-height: 1.2;
	font-size: 13px
}
.flyout *:first-child {
	margin-top: 0
}
.flyout *:last-child {
	margin-bottom: 0
}
.flyout.small {
	width: 166.66667px
}
.flyout.large {
	width: 437.5px
}
.flyout.right {
	left: auto;
	right: -2px
}
.flyout.left {
	right: auto;
	left: -2px
}
.flyout.up {
	top: auto;
	bottom: 39px
}
ul.flyout, .nav-bar li ul {
	padding: 0;
	list-style: none
}
ul.flyout li, .nav-bar li ul li {
	border-left: solid 3px #ccc
}
ul.flyout li a, .nav-bar li ul li a {
	background: #f2f2f2;
	border: 1px solid #e6e6e6;
	border-width: 1px 1px 0 0;
	color: #555;
	display: block;
	font-size: 14px;
	height: auto;
	line-height: 1;
	padding: 15px 20px;
	-webkit-box-shadow: 0 1px 0 rgba(255,255,255,0.5) inset;
	-moz-box-shadow: 0 1px 0 rgba(255,255,255,0.5) inset;
	box-shadow: 0 1px 0 rgba(255,255,255,0.5) inset
}
ul.flyout li a:hover, ul.flyout li a:focus, .nav-bar li ul li a:hover, .nav-bar li ul li a:focus {
	background: #ebebeb;
	color: #333
}
ul.flyout li.active, .nav-bar li ul li.active {
	margin-top: 0;
	border-top: 1px solid #4d4d4d;
	border-left: 4px solid #1a1a1a
}
ul.flyout li.active a, .nav-bar li ul li.active a {
	background: #4d4d4d;
	border: none;
	color: #fff;
	height: auto;
	margin: 0;
	position: static;
	top: 0;
	-webkit-box-shadow: 0 0 0;
	-moz-box-shadow: 0 0 0;
	box-shadow: 0 0 0
}
.orbit-wrapper {
	width: 1px;
	height: 1px;
	position: relative
}
.orbit {
	width: 1px;
	height: 1px;
	position: relative;
	overflow: hidden;
	margin-bottom: 17px
}
.orbit.with-bullets {
	margin-bottom: 40px
}
.orbit .orbit-slide {
	max-width: 100%;
	position: absolute;
	top: 0;
	left: 0
}
.orbit a.orbit-slide {
	border: none;
	line-height: 0;
	display: none
}
.orbit div.orbit-slide {
	width: 100%;
	height: 100%;
filter:progid:DXImageTransform.Microsoft.Alpha(Opacity=0);
	opacity: 0
}
.orbit-wrapper .timer {
	width: 40px;
	height: 40px;
	overflow: hidden;
	position: absolute;
	top: 10px;
	right: 10px;
	opacity: .6;
	cursor: pointer;
	z-index: 31
}
.orbit-wrapper span.rotator {
	display: block;
	width: 40px;
	height: 40px;
	position: absolute;
	top: 0;
	left: -20px;
	background: url('../images/foundation/orbit/rotator-black.png') no-repeat;
	z-index: 3
}
.orbit-wrapper span.rotator.move {
	left: 0
}
.orbit-wrapper span.mask {
	display: block;
	width: 20px;
	height: 40px;
	position: absolute;
	top: 0;
	right: 0;
	z-index: 2;
	overflow: hidden
}
.orbit-wrapper span.mask.move {
	width: 40px;
	left: 0;
	background: url('../images/foundation/orbit/timer-black.png') repeat 0 0
}
.orbit-wrapper span.pause {
	display: block;
	width: 40px;
	height: 40px;
	position: absolute;
	top: 0;
	left: 0;
	background: url('../images/foundation/orbit/pause-black.png') no-repeat;
	z-index: 4;
	opacity: 0
}
.orbit-wrapper span.pause.active {
	background: url('../images/foundation/orbit/pause-black.png') no-repeat 0 -40px
}
.orbit-wrapper .timer:hover span.pause, .orbit-wrapper .timer:focus span.pause, .orbit-wrapper span.pause.active {
	opacity: 1
}
.orbit-caption {
	display: none;
	font-family: inherit
}
.orbit-wrapper .orbit-caption {
	background: #000;
	background: rgba(0,0,0,0.6);
	z-index: 30;
	color: #fff;
	text-align: center;
	padding: 7px 0;
	font-size: 13px;
	position: absolute;
	right: 0;
	bottom: 0;
	width: 100%
}
.orbit-wrapper .slider-nav {
	display: block
}
.orbit-wrapper .slider-nav span {
	width: 39px;
	height: 50px;
	text-indent: -9999px;
	position: absolute;
	z-index: 30;
	top: 50%;
	margin-top: -25px;
	cursor: pointer
}
.orbit-wrapper .slider-nav span.right {
	background: url('../images/foundation/orbit/right-arrow.png');
	background-size: 100%;
	right: 0
}
.orbit-wrapper .slider-nav span.left {
	background: url('../images/foundation/orbit/left-arrow.png');
	background-size: 100%;
	left: 0
}
.lt-ie9 .orbit-wrapper .slider-nav span.right {
	background: url('../images/foundation/orbit/right-arrow-small.png')
}
.lt-ie9 .orbit-wrapper .slider-nav span.left {
	background: url('../images/foundation/orbit/left-arrow-small.png')
}
ul.orbit-bullets {
	position: absolute;
	z-index: 30;
	list-style: none;
	bottom: -40px;
	left: 50%;
	margin-left: -50px;
	padding: 0
}
ul.orbit-bullets li {
	float: left;
	margin-left: 5px;
	cursor: pointer;
	color: #999;
	text-indent: -9999px;
	background: url('../images/foundation/orbit/bullets.jpg') no-repeat 4px 0;
	width: 13px;
	height: 12px;
	overflow: hidden
}
ul.orbit-bullets li.active {
	color: #222;
	background-position: -8px 0
}
ul.orbit-bullets li.has-thumb {
	background: none;
	width: 100px;
	height: 75px
}
ul.orbit-bullets li.active.has-thumb {
	background-position: 0 0;
	border-top: 2px solid #000
}
.orbit-slide-counter {
	position: absolute;
	bottom: 0;
	z-index: 99;
	background: rgba(0,0,0,0.7);
	color: #fff;
	padding: 5px
}
.orbit img.fluid-placeholder {
	visibility: hidden;
	position: static;
	display: block;
	width: 100%
}
.orbit, .orbit-wrapper {
	width: 100% !important
}
.lt-ie9 .timer {
	display: none !important
}
.lt-ie9 .orbit-caption {
	background: #000;
filter:progid:DXImageTransform.Microsoft.gradient(startColorstr=#99000000, endColorstr=#99000000);
	zoom: 1
}
@media only screen and (max-width: 767px) {
.orbit.orbit-stack-on-small img.fluid-placeholder {
	visibility: visible
}
.orbit.orbit-stack-on-small .orbit-slide {
	position: static;
	margin-bottom: 10px
}
}
.reveal-modal-bg {
	position: fixed;
	height: 100%;
	width: 100%;
	background: #000;
	background: rgba(0,0,0,0.45);
	z-index: 40;
	display: none;
	top: 0;
	left: 0
}
.reveal-modal {
	background: #fff;
	visibility: hidden;
	display: none;
	top: 100px;
	left: 50%;
	margin-left: -260px;
	width: 520px;
	position: absolute;
	z-index: 41;
	padding: 30px;
	-webkit-box-shadow: 0 0 10px rgba(0,0,0,0.4);
	-moz-box-shadow: 0 0 10px rgba(0,0,0,0.4);
	box-shadow: 0 0 10px rgba(0,0,0,0.4)
}
.reveal-modal .close-reveal-modal:not(.button) {
	font-size: 22px;
	font-size: 2.2rem;
	line-height: .5;
	position: absolute;
	top: 8px;
	right: 11px;
	color: #aaa;
	text-shadow: 0 -1px 1px rgba(0,0,0,0.6);
	font-weight: bold;
	cursor: pointer
}
.reveal-modal.small {
	width: 30%;
	margin-left: -15%
}
.reveal-modal.medium {
	width: 40%;
	margin-left: -20%
}
.reveal-modal.large {
	width: 60%;
	margin-left: -30%
}
.reveal-modal.xlarge {
	width: 70%;
	margin-left: -35%
}
.reveal-modal.expand {
	width: 90%;
	margin-left: -45%
}
.reveal-modal .row {
	min-width: 0;
	margin-bottom: 10px
}
.reveal-modal>:first-child {
	margin-top: 0
}
.reveal-modal>:last-child {
	margin-bottom: 0
}
@media print {
.reveal-modal {
	border: solid 1px #000;
	background: #fff
}
}
.tabs {
	list-style: none;
	border-bottom: solid 1px #e6e6e6;
	display: block;
	height: 40px;
	padding: 0;
	margin-bottom: 20px
}
.tabs.contained {
	margin-bottom: 0;
	margin-left: 0
}
.tabs dt, .tabs li.section-title {
	color: #b3b3b3;
	cursor: default;
	display: block;
	float: left;
	font-size: 12px;
	height: 40px;
	line-height: 40px;
	padding: 0;
	padding-right: 9px;
	padding-left: 20px;
	font-weight: normal;
	width: auto;
	text-transform: uppercase
}
.tabs dt:first-child, .tabs li.section-title:first-child {
	padding: 0;
	padding-right: 9px
}
.tabs dd, .tabs li {
	display: block;
	float: left;
	padding: 0;
	margin: 0
}
.tabs dd a, .tabs li a {
	color: #6f6f6f;
	display: block;
	font-size: 14px;
	height: 40px;
	line-height: 40px;
	padding: 0px 23.8px
}
.tabs dd a:focus, .tabs li a:focus {
	font-weight: bold;
	color: #2ba6cb
}
.tabs dd.active, .tabs li.active {
	border-top: 3px solid #2ba6cb;
	margin-top: -3px
}
.tabs dd.active a, .tabs li.active a {
	cursor: default;
	color: #3c3c3c;
	background: #fff;
	border-left: 1px solid #e6e6e6;
	border-right: 1px solid #e6e6e6;
	font-weight: bold
}
.tabs dd:first-child, .tabs li:first-child {
	margin-left: 0
}
.tabs.vertical {
	height: auto;
	border-bottom: 1px solid #e6e6e6
}
.tabs.vertical dt, .tabs.vertical dd, .tabs.vertical li {
	float: none;
	height: auto
}
.tabs.vertical dd, .tabs.vertical li {
	border-left: 3px solid #ccc
}
.tabs.vertical dd a, .tabs.vertical li a {
	background: #f2f2f2;
	border: none;
	border: 1px solid #e6e6e6;
	border-width: 1px 1px 0 0;
	color: #555;
	display: block;
	font-size: 14px;
	height: auto;
	line-height: 1;
	padding: 15px 20px;
	-webkit-box-shadow: 0 1px 0 rgba(255,255,255,0.5) inset;
	-moz-box-shadow: 0 1px 0 rgba(255,255,255,0.5) inset;
	box-shadow: 0 1px 0 rgba(255,255,255,0.5) inset
}
.tabs.vertical dd.active, .tabs.vertical li.active {
	margin-top: 0;
	border-top: 1px solid #4d4d4d;
	border-left: 4px solid #1a1a1a
}
.tabs.vertical dd.active a, .tabs.vertical li.active a {
	background: #4d4d4d;
	border: none;
	color: #fff;
	height: auto;
	margin: 0;
	position: static;
	top: 0;
	-webkit-box-shadow: 0 0 0;
	-moz-box-shadow: 0 0 0;
	box-shadow: 0 0 0
}
.tabs.vertical dd:first-child a.active, .tabs.vertical li:first-child a.active {
	margin: 0
}
.tabs.pill {
	border-bottom: none;
	margin-bottom: 10px
}
.tabs.pill dd, .tabs.pill li {
	margin-right: 10px
}
.tabs.pill dd:last-child, .tabs.pill li:last-child {
	margin-right: 0
}
.tabs.pill dd a, .tabs.pill li a {
	-webkit-border-radius: 1000px;
	-moz-border-radius: 1000px;
	-ms-border-radius: 1000px;
	-o-border-radius: 1000px;
	border-radius: 1000px;
	background: #e6e6e6;
	height: 26px;
	line-height: 26px;
	color: #666
}
.tabs.pill dd.active, .tabs.pill li.active {
	border: none;
	margin-top: 0
}
.tabs.pill dd.active a, .tabs.pill li.active a {
	background-color: #2ba6cb;
	border: none;
	color: #fff
}
.tabs.pill.contained {
	border-bottom: solid 1px #eee;
	margin-bottom: 0
}
.tabs.pill.two-up dd, .tabs.pill.two-up li, .tabs.pill.three-up dd, .tabs.pill.three-up li, .tabs.pill.four-up dd, .tabs.pill.four-up li, .tabs.pill.five-up dd, .tabs.pill.five-up li {
	margin-right: 0
}
.tabs.two-up dt a, .tabs.two-up dd a, .tabs.two-up li a, .tabs.three-up dt a, .tabs.three-up dd a, .tabs.three-up li a, .tabs.four-up dt a, .tabs.four-up dd a, .tabs.four-up li a, .tabs.five-up dt a, .tabs.five-up dd a, .tabs.five-up li a {
	padding: 0 17px;
	text-align: center;
	overflow: hidden
}
.tabs.two-up dt, .tabs.two-up dd, .tabs.two-up li {
	width: 50%
}
.tabs.three-up dt, .tabs.three-up dd, .tabs.three-up li {
	width: 33.33%
}
.tabs.four-up dt, .tabs.four-up dd, .tabs.four-up li {
	width: 25%
}
.tabs.five-up dt, .tabs.five-up dd, .tabs.five-up li {
	width: 20%
}
ul.tabs-content {
	display: block;
	margin: 0 0 20px;
	padding: 0
}
ul.tabs-content>li {
	display: none
}
ul.tabs-content>li.active {
	display: block
}
ul.tabs-content.contained {
	padding: 0
}
ul.tabs-content.contained>li {
	border: solid 0 #e6e6e6;
	border-width: 0 1px 1px 1px;
	padding: 20px
}
ul.tabs-content.contained.vertical>li {
	border-width: 1px 1px 1px 1px
}
.no-js ul.tabs-content>li {
	display: block
}
div.alert-box {
	display: block;
	padding: 6px 7px 7px;
	font-weight: bold;
	font-size: 14px;
	color: #fff;
	background-color: #2ba6cb;
	border: 1px solid rgba(0,0,0,0.1);
	margin-bottom: 12px;
	-webkit-border-radius: 3px;
	-moz-border-radius: 3px;
	-ms-border-radius: 3px;
	-o-border-radius: 3px;
	border-radius: 3px;
	text-shadow: 0 -1px rgba(0,0,0,0.3);
	position: relative
}
div.alert-box.success {
	background-color: #5da423;
	color: #fff;
	text-shadow: 0 -1px rgba(0,0,0,0.3)
}
div.alert-box.alert {
	background-color: #c60f13;
	color: #fff;
	text-shadow: 0 -1px rgba(0,0,0,0.3)
}
div.alert-box.secondary {
	background-color: #e9e9e9;
	color: #505050;
	text-shadow: 0 1px rgba(255,255,255,0.3)
}
div.alert-box a.close {
	color: #333;
	position: absolute;
	right: 4px;
	top: -1px;
	font-size: 17px;
	opacity: 0.2;
	padding: 4px
}
div.alert-box a.close:hover, div.alert-box a.close:focus {
	opacity: 0.4
}
.label {
	padding: 1px 4px 2px;
	font-size: 12px;
	font-weight: bold;
	text-align: center;
	text-decoration: none;
	line-height: 1;
	white-space: nowrap;
	display: inline;
	position: relative;
	bottom: 1px;
	color: #fff;
	background: #2ba6cb
}
.label.radius {
	-webkit-border-radius: 3px;
	-moz-border-radius: 3px;
	-ms-border-radius: 3px;
	-o-border-radius: 3px;
	border-radius: 3px
}
.label.round {
	padding: 1px 7px 2px;
	-webkit-border-radius: 1000px;
	-moz-border-radius: 1000px;
	-ms-border-radius: 1000px;
	-o-border-radius: 1000px;
	border-radius: 1000px
}
.label.alert {
	background-color: #c60f13
}
.label.success {
	background-color: #5da423
}
.label.secondary {
	background-color: #e9e9e9;
	color: #505050
}
.has-tip {
	border-bottom: dotted 1px #ccc;
	cursor: help;
	font-weight: bold;
	color: #333
}
.has-tip:hover, .has-tip:focus {
	border-bottom: dotted 1px #196177;
	color: #2ba6cb
}
.has-tip.tip-left, .has-tip.tip-right {
	float: none !important
}
.tooltip {
	display: none;
	background: #000;
	background: rgba(0,0,0,0.85);
	position: absolute;
	color: #fff;
	font-weight: bold;
	font-size: 12px;
	padding: 5px;
	z-index: 999;
	-webkit-border-radius: 4px;
	-moz-border-radius: 4px;
	-ms-border-radius: 4px;
	-o-border-radius: 4px;
	border-radius: 4px;
	line-height: normal
}
.tooltip>.nub {
	display: block;
	width: 0;
	height: 0;
	border: solid 5px;
	border-color: transparent transparent #000 transparent;
	border-color: transparent transparent rgba(0,0,0,0.85) transparent;
	position: absolute;
	top: -10px;
	left: 10px
}
.tooltip.tip-override>.nub {
	border-color: transparent transparent #000 transparent !important;
	border-color: transparent transparent rgba(0,0,0,0.85) transparent !important;
	top: -10px !important
}
.tooltip.tip-top>.nub, .tooltip.tip-centered-top>.nub {
	border-color: #000 transparent transparent transparent;
	border-color: rgba(0,0,0,0.85) transparent transparent transparent;
	top: auto;
	bottom: -10px
}
.tooltip.tip-left, .tooltip.tip-right {
	float: none !important
}
.tooltip.tip-left>.nub {
	border-color: transparent transparent transparent #000;
	border-color: transparent transparent transparent rgba(0,0,0,0.85);
	right: -10px;
	left: auto
}
.tooltip.tip-right>.nub {
	border-color: transparent #000 transparent transparent;
	border-color: transparent rgba(0,0,0,0.85) transparent transparent;
	right: auto;
	left: -10px
}
.tooltip.noradius {
	-webkit-border-radius: 0;
	-moz-border-radius: 0;
	-ms-border-radius: 0;
	-o-border-radius: 0;
	border-radius: 0
}
.tooltip.opened {
	color: #2ba6cb !important;
	border-bottom: dotted 1px #196177 !important
}
.tap-to-close {
	display: block;
	font-size: 10px;
	font-size: 1rem;
	color: #888;
	font-weight: normal
}
.panel {
	background: #f2f2f2;
	border: solid 1px #e6e6e6;
	margin: 0 0 22px 0;
	padding: 20px
}
.panel>:first-child {
	margin-top: 0
}
.panel>:last-child {
	margin-bottom: 0
}
.panel.callout {
	background: #2ba6cb;
	color: #fff;
	border-color: #2284a1;
	-webkit-box-shadow: inset 0px 1px 0px rgba(255,255,255,0.5);
	-moz-box-shadow: inset 0px 1px 0px rgba(255,255,255,0.5);
	box-shadow: inset 0px 1px 0px rgba(255,255,255,0.5)
}
.panel.callout a {
	color: #fff
}
.panel.callout .button {
	background: #fff;
	border: none;
	color: #2ba6cb;
	text-shadow: none
}
.panel.callout .button:hover, .panel.callout .button:focus {
	background: rgba(255,255,255,0.8)
}
.panel.radius {
	-webkit-border-radius: 3px;
	-moz-border-radius: 3px;
	-ms-border-radius: 3px;
	-o-border-radius: 3px;
	border-radius: 3px
}
ul.accordion {
	margin: 0 0 22px 0;
	border-bottom: 1px solid #e9e9e9
}
ul.accordion>li {
	list-style: none;
	margin: 0;
	padding: 0;
	border-top: 1px solid #e9e9e9
}
ul.accordion>li>div.title {
	cursor: pointer;
	background: #f6f6f6;
	padding: 15px;
	margin: 0;
	position: relative;
	border-left: 1px solid #e9e9e9;
	border-right: 1px solid #e9e9e9;
	-webkit-transition: 0.15s background linear;
	-moz-transition: 0.15s background linear;
	-o-transition: 0.15s background linear;
	transition: 0.15s background linear
}
ul.accordion>li>div.title h1, ul.accordion>li>div.title h2, ul.accordion>li>div.title h3, ul.accordion>li>div.title h4, ul.accordion>li>div.title h5 {
	margin: 0
}
ul.accordion>li>div.title:after {
	content: "";
	display: block;
	width: 0;
	height: 0;
	border: solid 6px;
	border-color: transparent #9d9d9d transparent transparent;
	position: absolute;
	right: 15px;
	top: 21px
}
ul.accordion>li .content {
	display: none;
	padding: 15px
}
ul.accordion>li.active {
	border-top: 3px solid #2ba6cb
}
ul.accordion>li.active .title {
	background: #fff;
	padding-top: 13px
}
ul.accordion>li.active .title:after {
	content: "";
	display: block;
	width: 0;
	height: 0;
	border: solid 6px;
	border-color: #9d9d9d transparent transparent transparent
}
ul.accordion>li.active .content {
	background: #fff;
	display: block;
	border-left: 1px solid #e9e9e9;
	border-right: 1px solid #e9e9e9
}
ul.side-nav {
	display: block;
	list-style: none;
	margin: 0;
	padding: 17px 0
}
ul.side-nav li {
	display: block;
	list-style: none;
	margin: 0 0 7px 0
}
ul.side-nav li a {
	display: block
}
ul.side-nav li.active a {
	color: #4d4d4d;
	font-weight: bold
}
ul.side-nav li.divider {
	border-top: 1px solid #e6e6e6;
	height: 0;
	padding: 0
}
dl.sub-nav {
	display: block;
	width: auto;
	overflow: hidden;
	margin: -4px 0 18px;
	margin-right: 0;
	margin-left: -9px;
	padding-top: 4px
}
dl.sub-nav dt, dl.sub-nav dd {
	float: left;
	display: inline;
	margin-left: 9px;
	margin-bottom: 10px
}
dl.sub-nav dt {
	color: #999;
	font-weight: normal
}
dl.sub-nav dd a {
	text-decoration: none;
	-webkit-border-radius: 1000px;
	-moz-border-radius: 1000px;
	-ms-border-radius: 1000px;
	-o-border-radius: 1000px;
	border-radius: 1000px
}
dl.sub-nav dd.active a {
	font-weight: bold;
	background: #2ba6cb;
	color: #fff;
	padding: 3px 9px;
	cursor: default
}
ul.pagination {
	display: block;
	height: 24px;
	margin-left: -5px
}
ul.pagination li {
	float: left;
	display: block;
	height: 24px;
	color: #999;
	font-size: 14px;
	margin-left: 5px
}
ul.pagination li a {
	display: block;
	padding: 1px 7px 1px;
	color: #555
}
ul.pagination li:hover a, ul.pagination li a:focus {
	background: #e6e6e6
}
ul.pagination li.unavailable a {
	cursor: default;
	color: #999
}
ul.pagination li.unavailable:hover a, ul.pagination li.unavailable a:focus {
	background: transparent
}
ul.pagination li.current a {
	background: #2ba6cb;
	color: #fff;
	font-weight: bold;
	cursor: default
}
ul.pagination li.current a:hover, ul.pagination li.current a:focus {
	background: #2ba6cb
}
div.pagination-centered {
	text-align: center
}
div.pagination-centered ul>li {
	float: none;
	display: inline-block
}
ul.breadcrumbs {
	display: block;
	background: #f6f6f6;
	padding: 6px 10px 7px;
	border: 1px solid #e9e9e9;
	-webkit-border-radius: 2px;
	-moz-border-radius: 2px;
	-ms-border-radius: 2px;
	-o-border-radius: 2px;
	border-radius: 2px;
	overflow: hidden;
	margin-left: 0
}
ul.breadcrumbs li {
	margin: 0;
	padding: 0 12px 0 0;
	float: left;
	list-style: none
}
ul.breadcrumbs li a, ul.breadcrumbs li span {
	text-transform: uppercase;
	font-size: 11px;
	font-size: 1.1rem;
	padding-left: 12px
}
ul.breadcrumbs li:first-child a, ul.breadcrumbs li:first-child span {
	padding-left: 0
}
ul.breadcrumbs li:before {
	content: "/";
	color: #aaa
}
ul.breadcrumbs li:first-child:before {
	content: " "
}
ul.breadcrumbs li.current a {
	cursor: default;
	color: #333
}
ul.breadcrumbs li:hover a, ul.breadcrumbs li a:focus {
	text-decoration: underline
}
ul.breadcrumbs li.current:hover a, ul.breadcrumbs li.current a:focus {
	text-decoration: none
}
ul.breadcrumbs li.unavailable a {
	color: #999
}
ul.breadcrumbs li.unavailable:hover a, ul.breadcrumbs li.unavailable a:focus {
	text-decoration: none;
	color: #999;
	cursor: default
}
ul.inline-list, ul.link-list {
	margin: 0 0 17px -22px;
	padding: 0;
	list-style: none;
	overflow: hidden
}
ul.inline-list>li, ul.link-list>li {
	list-style: none;
	float: left;
	margin-left: 22px;
	display: block
}
ul.inline-list>li>*, ul.link-list>li>* {
	display: block
}
.keystroke, kbd {
	font-family: "Consolas", "Menlo", "Courier", monospace;
	font-size: 13px;
	padding: 2px 4px 0px;
	margin: 0;
	background: #ededed;
	border: solid 1px #dbdbdb;
	-webkit-border-radius: 3px;
	-moz-border-radius: 3px;
	-ms-border-radius: 3px;
	-o-border-radius: 3px;
	border-radius: 3px
}
.th {
	display: block
}
.th img {
	display: block;
	border: solid 4px #fff;
	-webkit-box-shadow: 0 0 0 1px rgba(0,0,0,0.2);
	-moz-box-shadow: 0 0 0 1px rgba(0,0,0,0.2);
	box-shadow: 0 0 0 1px rgba(0,0,0,0.2);
	-webkit-border-radius: 3px;
	-moz-border-radius: 3px;
	-ms-border-radius: 3px;
	-o-border-radius: 3px;
	border-radius: 3px;
	-webkit-transition-property: box-shadow;
	-moz-transition-property: box-shadow;
	-o-transition-property: box-shadow;
	transition-property: box-shadow;
	-webkit-transition-duration: 300ms;
	-moz-transition-duration: 300ms;
	-o-transition-duration: 300ms;
	transition-duration: 300ms
}
.th:hover img, .th:focus img {
	-webkit-box-shadow: 0 0 6px 1px rgba(43,166,203,0.5);
	-moz-box-shadow: 0 0 6px 1px rgba(43,166,203,0.5);
	box-shadow: 0 0 6px 1px rgba(43,166,203,0.5)
}
.flex-video {
	position: relative;
	padding-top: 25px;
	padding-bottom: 67.5%;
	height: 0;
	margin-bottom: 16px;
	overflow: hidden
}
.flex-video.widescreen {
	padding-bottom: 57.25%
}
.flex-video.vimeo {
	padding-top: 0
}
.flex-video iframe, .flex-video object, .flex-video embed, .flex-video video {
	position: absolute;
	top: 0;
	left: 0;
	width: 100%;
	height: 100%
}
table {
	background: #fff;
	-webkit-border-radius: 3px;
	-moz-border-radius: 3px;
	-ms-border-radius: 3px;
	-o-border-radius: 3px;
	border-radius: 3px;
	margin: 0 0 18px;
	border: 1px solid #ddd
}
table thead, table tfoot {
	background: #f5f5f5
}
table thead tr th, table tfoot tr th, table tbody tr td, table tr td, table tfoot tr td {
	display: table-cell;
	font-size: 14px;
	line-height: 18px;
	text-align: left
}
table thead tr th, table tfoot tr td {
	padding: 8px 10px 9px;
	font-size: 14px;
	font-weight: bold;
	color: #222
}
table thead tr th:first-child, table tfoot tr td:first-child {
	border-left: none
}
table thead tr th:last-child, table tfoot tr td:last-child {
	border-right: none
}
table tbody tr.even, table tbody tr.alt {
	background: #f9f9f9
}
table tbody tr:nth-child(even) {
	background: #f9f9f9
}
table tbody tr td {
	color: #333;
	padding: 9px 10px;
	vertical-align: top;
	border: none
}
ul.vcard {
	display: inline-block;
	margin: 0 0 12px 0;
	border: 1px solid #ddd;
	padding: 10px
}
ul.vcard li {
	margin: 0;
	display: block
}
ul.vcard li.fn {
	font-weight: bold;
	font-size: 15px
}
p.vevent span.summary {
	font-weight: bold
}
p.vevent abbr {
	cursor: default;
	text-decoration: none;
	font-weight: bold;
	border: none;
	padding: 0 1px
}
div.progress {
	padding: 2px;
	margin-bottom: 10px;
	border: 1px solid #ccc;
	height: 25px
}
div.progress .meter {
	background: #2ba6cb;
	height: 100%;
	display: block;
	width: 50%
}
div.progress.secondary .meter {
	background: #e9e9e9
}
div.progress.success .meter {
	background: #5da423
}
div.progress.alert .meter {
	background: #c60f13
}
div.progress.radius {
	-webkit-border-radius: 3px;
	-moz-border-radius: 3px;
	-ms-border-radius: 3px;
	-o-border-radius: 3px;
	border-radius: 3px
}
div.progress.radius .meter {
	-webkit-border-radius: 2px;
	-moz-border-radius: 2px;
	-ms-border-radius: 2px;
	-o-border-radius: 2px;
	border-radius: 2px
}
div.progress.round {
	-webkit-border-radius: 1000px;
	-moz-border-radius: 1000px;
	-ms-border-radius: 1000px;
	-o-border-radius: 1000px;
	border-radius: 1000px
}
div.progress.round .meter {
	-webkit-border-radius: 1000px;
	-moz-border-radius: 1000px;
	-ms-border-radius: 1000px;
	-o-border-radius: 1000px;
	border-radius: 1000px
}
.pricing-table {
	border: solid 1px #ddd;
	margin-left: 0;
	margin-bottom: 20px
}
.pricing-table * {
	list-style: none;
	line-height: 1
}
.pricing-table .title {
	background-color: #ddd;
	padding: 15px 20px;
	text-align: center;
	color: #333;
	font-weight: bold;
	font-size: 16px
}
.pricing-table .price {
	background-color: #eee;
	padding: 15px 20px;
	text-align: center;
	color: #333;
	font-weight: normal;
	font-size: 20px
}
.pricing-table .description {
	background-color: #fff;
	padding: 15px;
	text-align: center;
	color: #777;
	font-size: 12px;
	font-weight: normal;
	line-height: 1.4;
	border-bottom: dotted 1px #ddd
}
.pricing-table .bullet-item {
	background-color: #fff;
	padding: 15px;
	text-align: center;
	color: #333;
	font-size: 14px;
	font-weight: normal;
	border-bottom: dotted 1px #ddd
}
.pricing-table .cta-button {
	background-color: #f5f5f5;
	text-align: center;
	padding: 20px
}
.top-bar-js-breakpoint {
	width: 1200px !important;
	visibility: hidden
}
.contain-to-grid {
	width: 100%;
	background: #222
}
.fixed {
	width: 100%;
	left: 0;
	position: fixed;
	top: 0;
	z-index: 99
}
.sticky {
	float: left;
	overflow: hidden
}
.sticky.fixed {
	float: none
}
.top-bar {
	background: #222;
	min-height: 45px;
	line-height: 45px;
	margin: 0 0 30px 0;
	padding: 0;
	width: 100%;
	position: relative
}
.contain-to-grid .top-bar {
	max-width: 1200px;
	margin: 0 auto
}
.top-bar>ul .name h1 {
	line-height: 45px;
	margin: 0
}
.top-bar>ul .name h1 a {
	font-weight: bold;
	padding: 0 22.5px;
	font-size: 17px !important
}
.top-bar>ul .name img {
	margin-top: -5px;
	vertical-align: middle
}
.top-bar.expanded {
	height: inherit
}
.top-bar ul {
	margin-left: 0;
	display: inline;
	height: 45px;
	line-height: 45px;
	list-style: none
}
.top-bar ul>li {
	float: left
}
.top-bar ul>li a:not(.button) {
	color: #fff;
	display: block;
	font-size: 13px;
	font-weight: bold;
	height: 45px;
	line-height: 45px;
	padding: 0 15px
}
.top-bar ul>li:not(.name):hover, .top-bar ul>li:not(.name).active, .top-bar ul>li:not(.name):focus {
	background: #000
}
.top-bar ul>li:not(.name):hover a, .top-bar ul>li:not(.name).active a, .top-bar ul>li:not(.name):focus a {
	color: #d9d9d9
}
.top-bar ul>li.divider {
	background: #000;
	-webkit-box-shadow: 1px 0 0 rgba(255,255,255,0.1);
	-moz-box-shadow: 1px 0 0 rgba(255,255,255,0.1);
	box-shadow: 1px 0 0 rgba(255,255,255,0.1);
	height: 100%;
	margin-right: 1px;
	width: 1px
}
.top-bar ul>li.has-button a.button {
	margin: 0 11.25px
}
.top-bar ul>li.has-button:hover, .top-bar ul>li.has-button:focus {
	background: #222
}
.top-bar ul>li.has-button:hover a, .top-bar ul>li.has-button:focus a {
	color: #fff
}
.top-bar ul>li.search {
	padding: 0 15px
}
.top-bar ul>li.search form {
	display: inline-block;
	margin-bottom: 0;
	vertical-align: middle;
	width: 200px
}
.top-bar ul>li.search form input[type=text] {
	-moz-border-radius-topright: 0;
	-webkit-border-top-right-radius: 0;
	border-top-right-radius: 0;
	-moz-border-radius-bottomright: 0;
	-webkit-border-bottom-right-radius: 0;
	border-bottom-right-radius: 0;
	float: left;
	font-size: 13px;
	margin-top: -1px;
	height: 22.5px;
	margin-bottom: 0;
	width: 130px
}
.top-bar ul>li.search form input[type=text]+.button {
	border-left: none;
	-moz-border-radius-topleft: 0;
	-webkit-border-top-left-radius: 0;
	border-top-left-radius: 0;
	-moz-border-radius-bottomleft: 0;
	-webkit-border-bottom-left-radius: 0;
	border-bottom-left-radius: 0;
	float: left;
	font-size: 12px;
	margin-top: -1px;
	padding: 5px 12px 4px
}
.top-bar ul>li.search form input[type=search] {
	font-size: 16px;
	margin-bottom: 0
}
.top-bar ul>li.search:hover, .top-bar ul>li.search:focus {
	background: #222
}
.top-bar ul>li.login {
	padding: 0 15px
}
.top-bar ul>li.login form {
	display: inline-block;
	margin-bottom: 0;
	vertical-align: middle;
	width: 300px
}
.top-bar ul>li.login form input {
	float: left;
	width: auto;
	font-size: 13px;
	margin-top: -1px;
	height: 22.5px;
	margin-bottom: 0
}
.top-bar ul>li.login form input[type=text] {
	-moz-border-radius-topright: 0;
	-webkit-border-top-right-radius: 0;
	border-top-right-radius: 0;
	-moz-border-radius-bottomright: 0;
	-webkit-border-bottom-right-radius: 0;
	border-bottom-right-radius: 0;
	width: 120px
}
.top-bar ul>li.login form input[type=password] {
	margin-bottom: 0;
	-moz-border-radius-topleft: 0;
	-webkit-border-top-left-radius: 0;
	border-top-left-radius: 0;
	-moz-border-radius-bottomleft: 0;
	-webkit-border-bottom-left-radius: 0;
	border-bottom-left-radius: 0;
	width: 120px
}
.top-bar ul>li.login form input[type=password]+.button {
	border-left: none;
	-moz-border-radius-topleft: 0;
	-webkit-border-top-left-radius: 0;
	border-top-left-radius: 0;
	-moz-border-radius-bottomleft: 0;
	-webkit-border-bottom-left-radius: 0;
	border-bottom-left-radius: 0;
	-moz-border-radius-topright: 2px;
	-webkit-border-top-right-radius: 2px;
	border-top-right-radius: 2px;
	-moz-border-radius-bottomright: 2px;
	-webkit-border-bottom-right-radius: 2px;
	border-bottom-right-radius: 2px;
	float: left;
	font-size: 12px;
	margin-top: -1px;
	padding: 5px 12px 4px;
	width: 60px
}
.top-bar ul>li.login:hover, .top-bar ul>li.login:focus {
	background: #222
}
.top-bar ul>li.toggle-topbar {
	display: none
}
.top-bar ul>li.has-dropdown {
	position: relative
}
.top-bar ul>li.has-dropdown:hover>.dropdown, .top-bar ul>li.has-dropdown:focus>.dropdown {
	display: block;
	visibility: visible
}
.top-bar ul>li.has-dropdown a {
	padding-right: 33.75px
}
.top-bar ul>li.has-dropdown a:after {
	content: "";
	display: block;
	width: 0;
	height: 0;
	border: solid 5px;
	border-color: #fff transparent transparent transparent;
	margin-right: 15px;
	margin-top: -2.5px;
	position: absolute;
	right: 0;
	top: 50%
}
.top-bar ul>li.has-dropdown .dropdown {
	background: #222;
	left: 0;
	margin: 0;
	padding: 9px 0 0 0;
	position: absolute;
	visibility: hidden;
	z-index: 99
}
.top-bar ul>li.has-dropdown .dropdown li {
	background: #222;
	line-height: 1;
	min-width: 100%;
	padding-bottom: 5px
}
.top-bar ul>li.has-dropdown .dropdown li a {
	color: #fff;
	font-weight: normal;
	height: 100%;
	line-height: 1;
	padding: 5px 17px 5px 15px;
	white-space: nowrap
}
.top-bar ul>li.has-dropdown .dropdown li a:after {
	border: none
}
.top-bar ul>li.has-dropdown .dropdown li a:hover, .top-bar ul>li.has-dropdown .dropdown li a:focus {
	background: #3c3c3c
}
.top-bar ul>li.has-dropdown .dropdown li label {
	color: #6f6f6f;
	font-size: 10px;
	font-weight: bold;
	margin: 0;
	padding-left: 15px;
	text-transform: uppercase
}
.top-bar ul>li.has-dropdown .dropdown li.divider {
	border-top: solid 1px #000;
	-webkit-box-shadow: 0 1px 0 rgba(255,255,255,0.1) inset;
	-moz-box-shadow: 0 1px 0 rgba(255,255,255,0.1) inset;
	box-shadow: 0 1px 0 rgba(255,255,255,0.1) inset;
	height: 10px;
	padding: 0;
	width: 100%
}
.top-bar ul>li.has-dropdown .dropdown li:last-child {
	padding-bottom: 10px
}
.top-bar ul>li.has-dropdown .dropdown li.active a {
	background: #000
}
.top-bar ul>li.has-dropdown .dropdown li.has-dropdown>a {
	padding-right: 30px
}
.top-bar ul>li.has-dropdown .dropdown li.has-dropdown>a:after {
	border: none;
	content: "\00bb";
	right: 5px;
	top: 6px
}
.top-bar ul>li.has-dropdown .dropdown li.has-dropdown .dropdown {
	position: absolute;
	left: 100%;
	top: 0
}
.top-bar ul>li.has-dropdown .dropdown li.has-dropdown:hover>.dropdown, .top-bar ul>li.has-dropdown .dropdown li.has-dropdown:focus>.dropdown {
	display: block
}
.top-bar ul.left {
	float: left;
	width: auto;
	margin-bottom: 0
}
.top-bar ul.right {
	float: right;
	width: auto;
	margin-bottom: 0
}
.top-bar ul.right .has-dropdown .dropdown {
	left: auto;
	right: 0px
}
.top-bar ul.right .has-dropdown .dropdown li.has-dropdown>.dropdown {
	right: 100%;
	left: auto;
	width: 100%
}
.top-bar .js-generated {
	display: none
}
@-moz-document url-prefix() {
.top-bar ul li .button.small {
padding-bottom:6px
}
.top-bar ul li.search form input[type=search] {
font-size:14px;
height:22px;
padding:3px
}
}
.lt-ie9 .top-bar ul li a {
	color: #fff;
	display: block;
	font-weight: bold;
	font-size: 13px;
	height: 45px;
	line-height: 45px;
	padding: 0 15px
}
.lt-ie9 .top-bar ul li a.button {
	height: auto;
	line-height: 30px;
	margin-top: 7px
}
.lt-ie9 .top-bar ul li a img {
	margin-top: -5px;
	vertical-align: middle
}
.lt-ie9 .top-bar section>ul>li a:hover, .lt-ie9 .top-bar section>ul>li a:focus {
	color: #ccc
}
.lt-ie9 .top-bar section>ul>li:hover, .lt-ie9 .top-bar section>ul>li:focus {
	background: #000
}
.lt-ie9 .top-bar section>ul>li.search:hover, .lt-ie9 .top-bar section>ul>li.search:focus, .lt-ie9 .top-bar section>ul>li.has-button:hover, .lt-ie9 .top-bar section>ul>li.has-button:focus {
	background: none
}
.lt-ie9 .top-bar section>ul>li.active {
	background: #000;
	color: #d9d9d9
}
.lt-ie9 .top-bar ul li.has-dropdown {
	padding-right: 33.75px
}
.lt-ie9 .top-bar ul li.has-dropdown>ul li {
	padding-right: 0
}
#joyRideTipContent {
	display: none
}
.joyride-tip-guide {
	display: none;
	position: absolute;
	background: #000;
	background: rgba(0,0,0,0.8);
	color: #fff;
	width: 300px;
	z-index: 101;
	top: 0;
	left: 0;
	font-family: inherit;
	font-weight: normal;
	-webkit-border-radius: 4px;
	-moz-border-radius: 4px;
	-ms-border-radius: 4px;
	-o-border-radius: 4px;
	border-radius: 4px
}
.joyride-content-wrapper {
	padding: 18px 20px 24px
}
.joyride-tip-guide span.joyride-nub {
	display: block;
	position: absolute;
	left: 22px;
	width: 0;
	height: 0;
	border: solid 14px
}
.joyride-tip-guide span.joyride-nub.top {
	border-color: #000;
	border-color: rgba(0,0,0,0.8);
	border-top-color: transparent !important;
	border-left-color: transparent !important;
	border-right-color: transparent !important;
	top: -28px;
	bottom: none
}
.joyride-tip-guide span.joyride-nub.bottom {
	border-color: #000;
	border-color: rgba(0,0,0,0.8) !important;
	border-bottom-color: transparent !important;
	border-left-color: transparent !important;
	border-right-color: transparent !important;
	bottom: -28px;
	bottom: none
}
.joyride-tip-guide span.joyride-nub.right {
	border-color: #000;
	border-color: rgba(0,0,0,0.8) !important;
	border-top-color: transparent !important;
	border-right-color: transparent !important;
	border-bottom-color: transparent !important;
	top: 22px;
	bottom: none;
	left: auto;
	right: -28px
}
.joyride-tip-guide span.joyride-nub.left {
	border-color: #000;
	border-color: rgba(0,0,0,0.8) !important;
	border-top-color: transparent !important;
	border-left-color: transparent !important;
	border-bottom-color: transparent !important;
	top: 22px;
	left: -28px;
	right: auto;
	bottom: none
}
.joyride-tip-guide h1, .joyride-tip-guide h2, .joyride-tip-guide h3, .joyride-tip-guide h4, .joyride-tip-guide h5, .joyride-tip-guide h6 {
	line-height: 1.25;
	margin: 0;
	font-weight: bold;
	color: #fff
}
.joyride-tip-guide p {
	margin: 0 0 18px 0;
	font-size: 14px;
	line-height: 1.3
}
.joyride-timer-indicator-wrap {
	width: 50px;
	height: 3px;
	border: solid 1px #555;
	position: absolute;
	right: 17px;
	bottom: 16px
}
.joyride-timer-indicator {
	display: block;
	width: 0;
	height: inherit;
	background: #666
}
.joyride-close-tip {
	position: absolute;
	right: 10px;
	top: 10px;
	color: #777 !important;
	text-decoration: none;
	font-size: 20px;
	font-weight: normal;
	line-height: 0.5 !important
}
.joyride-close-tip:hover, .joyride-close-tip:focus {
	color: #eee !important
}
.joyride-modal-bg {
	position: fixed;
	height: 100%;
	width: 100%;
	background: transparent;
	background: rgba(0,0,0,0.5);
	z-index: 100;
	display: none;
	top: 0;
	left: 0;
	cursor: pointer
}
.clearing-blackout {
	background: #000;
	background: rgba(0,0,0,0.8);
	position: fixed;
	width: 100%;
	height: 100%;
	top: 0;
	left: 0;
	z-index: 999
}
.clearing-blackout .clearing-close {
	display: block
}
.clearing-container {
	position: relative;
	z-index: 999;
	height: 100%;
	overflow: hidden
}
.visible-img {
	height: 75%;
	position: relative
}
.visible-img img {
	position: absolute;
	left: 50%;
	top: 50%;
	margin-left: -50%;
	max-height: 100%;
	max-width: 100%
}
.visible-img .clearing-caption {
	color: #fff;
	margin-bottom: 0;
	text-align: center;
	position: absolute;
	bottom: 0;
	background: #000;
	background: rgba(0,0,0,0.7);
	width: 100%;
	padding: 10px 100px
}
.clearing-close {
	z-index: 999;
	position: absolute;
	top: 10px;
	right: 20px;
	font-size: 30px;
	line-height: 1;
	color: #fff;
	display: none
}
.clearing-close:hover, .clearing-close:focus {
	color: #ccc
}
.clearing-main-left, .clearing-main-right {
	position: absolute;
	top: 50%;
	margin-top: -16px
}
.clearing-main-left.disabled, .clearing-main-right.disabled {
	opacity: 0.5
}
.clearing-main-left:active, .clearing-main-right:active {
	margin-top: -15px
}
.clearing-main-left {
	left: 10px;
	content: "";
	display: block;
	width: 0;
	height: 0;
	border: solid 16px;
	border-color: transparent #fff transparent transparent
}
.clearing-main-right {
	right: 10px;
	content: "";
	display: block;
	width: 0;
	height: 0;
	border: solid 16px;
	border-color: transparent transparent transparent #fff
}
ul[data-clearing].block-grid.three-up>li:nth-child(3n+1) {
	clear: none
}
ul[data-clearing] li {
	cursor: pointer;
	display: block
}
ul[data-clearing] li.clearing-feature ~ li {
	display: none
}
.clearing-assembled .clearing-container .carousel {
	background: #000;
	background: rgba(0,0,0,0.75);
	height: 150px;
	margin-top: 5px
}
.clearing-assembled .clearing-container .visible-img {
	background: #000;
	background: rgba(0,0,0,0.75);
	overflow: hidden
}
.clearing-assembled .clearing-container ul[data-clearing] {
	z-index: 999;
	width: 200%;
	height: 100%;
	margin-left: 0;
	position: relative;
	left: 0
}
.clearing-assembled .clearing-container ul[data-clearing] li {
	display: block;
	width: 175px;
	height: inherit;
	padding: 0;
	float: left;
	overflow: hidden;
	background: #222;
	margin-right: 1px;
	position: relative
}
.clearing-assembled .clearing-container ul[data-clearing] li.fix-height img {
	min-height: 100%;
	height: 100%;
	max-width: none
}
.clearing-assembled .clearing-container ul[data-clearing] li img {
	cursor: pointer !important;
	min-width: 100% !important
}
.clearing-assembled .clearing-container ul[data-clearing] li.visible {
	border-top: 4px solid #fff
}
ul.block-grid[data-clearing] {
	overflow: visible
}
.clearing-blackout ul.block-grid[data-clearing].two-up>li:nth-child(2n+1) {
	clear: none
}
.clearing-blackout ul.block-grid[data-clearing].three-up>li:nth-child(3n+1) {
	clear: none
}
.clearing-blackout ul.block-grid[data-clearing].four-up>li:nth-child(4n+1) {
	clear: none
}
.clearing-blackout ul.block-grid[data-clearing].five-up>li:nth-child(5n+1) {
	clear: none
}
.clearing-blackout ul.block-grid[data-clearing].six-up>li:nth-child(6n+1) {
	clear: none
}
.clearing-blackout ul.block-grid[data-clearing].seven-up>li:nth-child(7n+1) {
	clear: none
}
.clearing-blackout ul.block-grid[data-clearing].eight-up>li:nth-child(8n+1) {
	clear: none
}
.clearing-blackout ul.block-grid[data-clearing].nine-up>li:nth-child(9n+1) {
	clear: none
}
.clearing-blackout ul.block-grid[data-clearing].ten-up>li:nth-child(10n+1) {
	clear: none
}
.clearing-blackout ul.block-grid[data-clearing].eleven-up>li:nth-child(11n+1) {
	clear: none
}
.clearing-blackout ul.block-grid[data-clearing].twelve-up>li:nth-child(12n+1) {
	clear: none
}
.clearing-blackout .th img {
	border: none;
	-webkit-box-shadow: 0 0 0 0 rgba(0,0,0,0);
	-moz-box-shadow: 0 0 0 0 rgba(0,0,0,0);
	box-shadow: 0 0 0 0 rgba(0,0,0,0);
	-webkit-border-radius: 0;
	-moz-border-radius: 0;
	-ms-border-radius: 0;
	-o-border-radius: 0;
	border-radius: 0
}
.clearing-blackout:hover img, .clearing-blackout:focus img {
	-webkit-box-shadow: 0 0 0 0 rgba(0,0,0,0);
	-moz-box-shadow: 0 0 0 0 rgba(0,0,0,0);
	box-shadow: 0 0 0 0 rgba(0,0,0,0)
}
.show-for-small, .show-for-medium, .show-for-medium-down, .hide-for-large, .hide-for-large-up, .show-for-xlarge, .show-for-print {
	display: none !important
}
.hide-for-small, .hide-for-medium, .hide-for-medium-down, .show-for-large, .show-for-large-up, .hide-for-xlarge, .hide-for-print {
	display: inherit !important
}
@media only screen and (min-width: 1441px) {
.hide-for-small, .hide-for-medium, .hide-for-medium-down, .hide-for-large, .show-for-large-up, .show-for-xlarge {
	display: inherit !important
}
.show-for-small, .show-for-medium, .show-for-medium-down, .show-for-large, .hide-for-large-up, .hide-for-xlarge {
	display: none !important
}
}
@media only screen and (max-width: 1279px) and (min-width: 768px) {
.hide-for-small, .show-for-medium, .show-for-medium-down, .hide-for-large, .hide-for-large-up, .hide-for-xlarge {
	display: inherit !important
}
.show-for-small, .hide-for-medium, .hide-for-medium-down, .show-for-large, .show-for-large-up, .show-for-xlarge {
	display: none !important
}
}
@media only screen and (max-width: 767px) {
.show-for-small, .hide-for-medium, .show-for-medium-down, .hide-for-large, .hide-for-large-up, .hide-for-xlarge {
	display: inherit !important
}
.hide-for-small, .show-for-medium, .hide-for-medium-down, .show-for-large, .show-for-large-up, .show-for-xlarge {
	display: none !important
}
}
.show-for-landscape, .hide-for-portrait {
	display: inherit !important
}
.hide-for-landscape, .show-for-portrait {
	display: none !important
}
@media screen and (orientation: landscape) {
.show-for-landscape, .hide-for-portrait {
	display: inherit !important
}
.hide-for-landscape, .show-for-portrait {
	display: none !important
}
}
@media screen and (orientation: portrait) {
.show-for-portrait, .hide-for-landscape {
	display: inherit !important
}
.hide-for-portrait, .show-for-landscape {
	display: none !important
}
}
.show-for-touch {
	display: none !important
}
.hide-for-touch {
	display: inherit !important
}
.touch .show-for-touch {
	display: inherit !important
}
.touch .hide-for-touch {
	display: none !important
}
table.show-for-xlarge, table.show-for-large, table.hide-for-small, table.hide-for-medium {
	display: table !important
}
@media only screen and (max-width: 1279px) and (min-width: 768px) {
.touch table.hide-for-xlarge, .touch table.hide-for-large, .touch table.hide-for-small, .touch table.show-for-medium {
	display: table !important
}
}
@media only screen and (max-width: 767px) {
table.hide-for-xlarge, table.hide-for-large, table.hide-for-medium, table.show-for-small {
	display: table !important
}
}
@media only screen and (max-device-width: 1280px) {
.touch .nav-bar li.has-flyout>a {
	padding-right: 36px !important
}
}
@media only screen and (max-device-width: 800px), only screen and (device-width: 1024px) and (device-height: 600px), only screen and (width: 1280px) and (orientation: landscape), only screen and (device-width: 800px), only screen and (max-width: 767px) {
.flex-video {
	padding-top: 0
}
}
@media only screen and (max-width: 1279px) and (min-width: 768px) {
.touch .nav-bar li a {
	font-size: 13px
}
.touch .nav-bar li.has-flyout>a.flyout-toggle {
	padding: 20px !important
}
.touch .nav-bar li.has-flyout>a {
	padding-right: 36px !important
}
.clearing-main-right, .clearing-main-left {
	height: 100%;
	width: 40px;
	top: 0;
	border: none
}
.clearing-main-right:before, .clearing-main-left:before {
	position: absolute;
	top: 50%
}
.clearing-main-left {
	left: 0
}
.clearing-main-left:before {
	left: 5px;
	content: "";
	display: block;
	width: 0;
	height: 0;
	border: solid 16px;
	border-color: transparent #fff transparent transparent
}
.clearing-main-right {
	height: 100%;
	right: 0
}
.clearing-main-right:before {
	content: "";
	display: block;
	width: 0;
	height: 0;
	border: solid 16px;
	border-color: transparent transparent transparent #fff
}
}
@media only screen and (max-width: 767px) {
.left, .right {
	float: none
}
body {
	-webkit-text-size-adjust: none;
	-ms-text-size-adjust: none;
	width: 100%;
	min-width: 0;
	margin-left: 0;
	margin-right: 0;
	padding-left: 0;
	padding-right: 0
}
.row {
	width: auto;
	min-width: 0;
	margin-left: 0;
	margin-right: 0
}
.column, .columns {
	width: auto !important;
	float: none
}
.column:last-child, .columns:last-child {
	float: none
}
[class*="column"]+[class*="column"]:last-child {
float:none
}
.column:before, .columns:before, .column:after, .columns:after {
	content: "";
	display: table
}
.column:after, .columns:after {
	clear: both
}
.offset-by-one, .offset-by-two, .offset-by-three, .offset-by-four, .offset-by-five, .offset-by-six, .offset-by-seven, .offset-by-eight, .offset-by-nine, .offset-by-ten {
	margin-left: 0 !important
}
.push-two, .push-three, .push-four, .push-five, .push-six, .push-seven, .push-eight, .push-nine, .push-ten {
	left: auto
}
.pull-two, .pull-three, .pull-four, .pull-five, .pull-six, .pull-seven, .pull-eight, .pull-nine, .pull-ten {
	right: auto
}
.row .mobile-one {
	width: 25% !important;
	float: left;
	padding: 0 15px
}
.row .mobile-one:last-child {
	float: right
}
.row .mobile-one.end {
	float: left
}
.row.collapse .mobile-one {
	padding: 0
}
.row .mobile-two {
	width: 50% !important;
	float: left;
	padding: 0 15px
}
.row .mobile-two:last-child {
	float: right
}
.row .mobile-two.end {
	float: left
}
.row.collapse .mobile-two {
	padding: 0
}
.row .mobile-three {
	width: 75% !important;
	float: left;
	padding: 0 15px
}
.row .mobile-three:last-child {
	float: right
}
.row .mobile-three.end {
	float: left
}
.row.collapse .mobile-three {
	padding: 0
}
.row .mobile-four {
	width: 100% !important;
	float: left;
	padding: 0 15px
}
.row .mobile-four:last-child {
	float: right
}
.row .mobile-four.end {
	float: left
}
.row.collapse .mobile-four {
	padding: 0
}
.push-one-mobile {
	left: 25%
}
.pull-one-mobile {
	right: 25%
}
.push-two-mobile {
	left: 50%
}
.pull-two-mobile {
	right: 50%
}
.push-three-mobile {
	left: 75%
}
.pull-three-mobile {
	right: 75%
}
.block-grid.mobile>li {
	float: none;
	width: 100%;
	margin-left: 0
}
.block-grid>li {
	clear: none
}
.block-grid.mobile-one-up>li {
	width: 100%
}
.block-grid.mobile-two-up>li {
	width: 50%
}
.block-grid.mobile-two-up>li:nth-child(2n+1) {
	clear: both
}
.block-grid.mobile-three-up>li {
	width: 33.33333%
}
.block-grid.mobile-three-up>li:nth-child(3n+1) {
	clear: both
}
.block-grid.mobile-four-up>li {
	width: 25%
}
.block-grid.mobile-four-up>li:nth-child(4n+1) {
	clear: both
}
.block-grid.mobile-five-up>li {
	width: 20%
}
.block-grid.mobile-five-up>li:nth-child(5n+1) {
	clear: both
}
.block-grid.mobile-six-up>li {
	width: 16.66667%
}
.block-grid.mobile-six-up>li:nth-child(6n+1) {
	clear: both
}
.block-grid.mobile-seven-up>li {
	width: 14.28571%
}
.block-grid.mobile-seven-up>li:nth-child(7n+1) {
	clear: both
}
.block-grid.mobile-eight-up>li {
	width: 12.5%
}
.block-grid.mobile-eight-up>li:nth-child(8n+1) {
	clear: both
}
.block-grid.mobile-nine-up>li {
	width: 11.11111%
}
.block-grid.mobile-nine-up>li:nth-child(9n+1) {
	clear: both
}
.block-grid.mobile-ten-up>li {
	width: 10%
}
.block-grid.mobile-ten-up>li:nth-child(10n+1) {
	clear: both
}
.block-grid.mobile-eleven-up>li {
	width: 9.09091%
}
.block-grid.mobile-eleven-up>li:nth-child(11n+1) {
	clear: both
}
.block-grid.mobile-twelve-up>li {
	width: 8.33333%
}
.block-grid.mobile-twelve-up>li:nth-child(12n+1) {
	clear: both
}
label.right {
	text-align: left
}
input[type="text"].one, .row input[type="text"].one, input[type="password"].one, .row input[type="password"].one, input[type="date"].one, .row input[type="date"].one, input[type="datetime"].one, .row input[type="datetime"].one, input[type="email"].one, .row input[type="email"].one, input[type="number"].one, .row input[type="number"].one, input[type="search"].one, .row input[type="search"].one, input[type="tel"].one, .row input[type="tel"].one, input[type="time"].one, .row input[type="time"].one, input[type="url"].one, .row input[type="url"].one, textarea.one, .row textarea.one {
	width: 100% !important
}
input[type="text"].two, .row input[type="text"].two, input[type="password"].two, .row input[type="password"].two, input[type="date"].two, .row input[type="date"].two, input[type="datetime"].two, .row input[type="datetime"].two, input[type="email"].two, .row input[type="email"].two, input[type="number"].two, .row input[type="number"].two, input[type="search"].two, .row input[type="search"].two, input[type="tel"].two, .row input[type="tel"].two, input[type="time"].two, .row input[type="time"].two, input[type="url"].two, .row input[type="url"].two, textarea.two, .row textarea.two {
	width: 100% !important
}
input[type="text"].three, .row input[type="text"].three, input[type="password"].three, .row input[type="password"].three, input[type="date"].three, .row input[type="date"].three, input[type="datetime"].three, .row input[type="datetime"].three, input[type="email"].three, .row input[type="email"].three, input[type="number"].three, .row input[type="number"].three, input[type="search"].three, .row input[type="search"].three, input[type="tel"].three, .row input[type="tel"].three, input[type="time"].three, .row input[type="time"].three, input[type="url"].three, .row input[type="url"].three, textarea.three, .row textarea.three {
	width: 100% !important
}
input[type="text"].four, .row input[type="text"].four, input[type="password"].four, .row input[type="password"].four, input[type="date"].four, .row input[type="date"].four, input[type="datetime"].four, .row input[type="datetime"].four, input[type="email"].four, .row input[type="email"].four, input[type="number"].four, .row input[type="number"].four, input[type="search"].four, .row input[type="search"].four, input[type="tel"].four, .row input[type="tel"].four, input[type="time"].four, .row input[type="time"].four, input[type="url"].four, .row input[type="url"].four, textarea.four, .row textarea.four {
	width: 100% !important
}
input[type="text"].five, .row input[type="text"].five, input[type="password"].five, .row input[type="password"].five, input[type="date"].five, .row input[type="date"].five, input[type="datetime"].five, .row input[type="datetime"].five, input[type="email"].five, .row input[type="email"].five, input[type="number"].five, .row input[type="number"].five, input[type="search"].five, .row input[type="search"].five, input[type="tel"].five, .row input[type="tel"].five, input[type="time"].five, .row input[type="time"].five, input[type="url"].five, .row input[type="url"].five, textarea.five, .row textarea.five {
	width: 100% !important
}
input[type="text"].six, .row input[type="text"].six, input[type="password"].six, .row input[type="password"].six, input[type="date"].six, .row input[type="date"].six, input[type="datetime"].six, .row input[type="datetime"].six, input[type="email"].six, .row input[type="email"].six, input[type="number"].six, .row input[type="number"].six, input[type="search"].six, .row input[type="search"].six, input[type="tel"].six, .row input[type="tel"].six, input[type="time"].six, .row input[type="time"].six, input[type="url"].six, .row input[type="url"].six, textarea.six, .row textarea.six {
	width: 100% !important
}
input[type="text"].seven, .row input[type="text"].seven, input[type="password"].seven, .row input[type="password"].seven, input[type="date"].seven, .row input[type="date"].seven, input[type="datetime"].seven, .row input[type="datetime"].seven, input[type="email"].seven, .row input[type="email"].seven, input[type="number"].seven, .row input[type="number"].seven, input[type="search"].seven, .row input[type="search"].seven, input[type="tel"].seven, .row input[type="tel"].seven, input[type="time"].seven, .row input[type="time"].seven, input[type="url"].seven, .row input[type="url"].seven, textarea.seven, .row textarea.seven {
	width: 100% !important
}
input[type="text"].eight, .row input[type="text"].eight, input[type="password"].eight, .row input[type="password"].eight, input[type="date"].eight, .row input[type="date"].eight, input[type="datetime"].eight, .row input[type="datetime"].eight, input[type="email"].eight, .row input[type="email"].eight, input[type="number"].eight, .row input[type="number"].eight, input[type="search"].eight, .row input[type="search"].eight, input[type="tel"].eight, .row input[type="tel"].eight, input[type="time"].eight, .row input[type="time"].eight, input[type="url"].eight, .row input[type="url"].eight, textarea.eight, .row textarea.eight {
	width: 100% !important
}
input[type="text"].nine, .row input[type="text"].nine, input[type="password"].nine, .row input[type="password"].nine, input[type="date"].nine, .row input[type="date"].nine, input[type="datetime"].nine, .row input[type="datetime"].nine, input[type="email"].nine, .row input[type="email"].nine, input[type="number"].nine, .row input[type="number"].nine, input[type="search"].nine, .row input[type="search"].nine, input[type="tel"].nine, .row input[type="tel"].nine, input[type="time"].nine, .row input[type="time"].nine, input[type="url"].nine, .row input[type="url"].nine, textarea.nine, .row textarea.nine {
	width: 100% !important
}
input[type="text"].ten, .row input[type="text"].ten, input[type="password"].ten, .row input[type="password"].ten, input[type="date"].ten, .row input[type="date"].ten, input[type="datetime"].ten, .row input[type="datetime"].ten, input[type="email"].ten, .row input[type="email"].ten, input[type="number"].ten, .row input[type="number"].ten, input[type="search"].ten, .row input[type="search"].ten, input[type="tel"].ten, .row input[type="tel"].ten, input[type="time"].ten, .row input[type="time"].ten, input[type="url"].ten, .row input[type="url"].ten, textarea.ten, .row textarea.ten {
	width: 100% !important
}
input[type="text"].eleven, .row input[type="text"].eleven, input[type="password"].eleven, .row input[type="password"].eleven, input[type="date"].eleven, .row input[type="date"].eleven, input[type="datetime"].eleven, .row input[type="datetime"].eleven, input[type="email"].eleven, .row input[type="email"].eleven, input[type="number"].eleven, .row input[type="number"].eleven, input[type="search"].eleven, .row input[type="search"].eleven, input[type="tel"].eleven, .row input[type="tel"].eleven, input[type="time"].eleven, .row input[type="time"].eleven, input[type="url"].eleven, .row input[type="url"].eleven, textarea.eleven, .row textarea.eleven {
	width: 100% !important
}
input[type="text"].twelve, .row input[type="text"].twelve, input[type="password"].twelve, .row input[type="password"].twelve, input[type="date"].twelve, .row input[type="date"].twelve, input[type="datetime"].twelve, .row input[type="datetime"].twelve, input[type="email"].twelve, .row input[type="email"].twelve, input[type="number"].twelve, .row input[type="number"].twelve, input[type="search"].twelve, .row input[type="search"].twelve, input[type="tel"].twelve, .row input[type="tel"].twelve, input[type="time"].twelve, .row input[type="time"].twelve, input[type="url"].twelve, .row input[type="url"].twelve, textarea.twelve, .row textarea.twelve {
	width: 100% !important
}
.button {
	display: block
}
button.button, input[type="submit"].button, input[type="reset"].button {
	width: 100%;
	padding-left: 0;
	padding-right: 0
}
.button-group button.button, .button-group input[type="submit"].button {
	width: auto;
	padding: 10px 20px 11px
}
.button-group button.button.large, .button-group input[type="submit"].button.large {
	padding: 15px 30px 16px
}
.button-group button.button.medium, .button-group input[type="submit"].button.medium {
	padding: 10px 20px 11px
}
.button-group button.button.small, .button-group input[type="submit"].button.small {
	padding: 7px 14px 8px
}
.button-group button.button.tiny, .button-group input[type="submit"].button.tiny {
	padding: 5px 10px 6px
}
.button-group.even button.button, .button-group.even input[type="submit"].button {
	width: 100%;
	padding-left: 0;
	padding-right: 0
}
.nav-bar {
	height: auto
}
.nav-bar>li {
	float: none;
	display: block;
	border-right: none
}
.nav-bar>li>a.main {
	text-align: left;
	border-top: 1px solid #ddd;
	border-right: none
}
.nav-bar>li:first-child>a.main {
	border-top: none
}
.nav-bar>li.has-flyout>a.flyout-toggle {
	position: absolute;
	right: 0;
	top: 0;
	padding: 22px;
	z-index: 2;
	display: block
}
.nav-bar>li.has-flyout.is-touch>a.flyout-toggle span {
	content: "";
	width: 0;
	height: 0;
	display: block
}
.nav-bar>li.has-flyout>a.flyout-toggle:hover span {
	border-top-color: #141414
}
.nav-bar.vertical>li.has-flyout>.flyout {
	left: 0
}
.flyout {
	position: relative;
	width: 100% !important;
	top: auto;
	margin-right: -2px;
	border-width: 1px 1px 0 1px
}
.flyout.right {
	float: none;
	right: auto;
	left: -1px
}
.flyout.small, .flyout.large {
	width: 100% !important
}
.flyout p:last-child {
	margin-bottom: 18px
}
.reveal-modal-bg {
	position: absolute
}
.reveal-modal, .reveal-modal.small, .reveal-modal.medium, .reveal-modal.large, .reveal-modal.xlarge {
	width: 80%;
	top: 15px;
	left: 50%;
	margin-left: -40%;
	padding: 20px;
	height: auto
}
.clearing-container {
	margin: 0
}
.clearing-close {
	z-index: 99;
	font-size: 37px;
	top: 0px;
	right: 5px
}
.clearing-caption {
	position: fixed;
	bottom: 0;
	left: 0;
	padding: 10px !important;
	line-height: 1.3
}
.clearing-main-right, .clearing-main-left {
	display: none
}
.clearing-blackout.clearing-assembled .visible-img, .clearing-blackout.clearing-assembled .clearing-container {
	height: 100%
}
.clearing-blackout.clearing-assembled ul[data-clearing] {
	display: none
}
.joyride-tip-guide {
	width: 95% !important;
	left: 2.5% !important;
	-webkit-border-radius: 4px;
	-moz-border-radius: 4px;
	-ms-border-radius: 4px;
	-o-border-radius: 4px;
	border-radius: 4px
}
.joyride-tip-guide-wrapper {
	width: 100%
}
.tabs.mobile {
	width: auto;
	margin: 20px -20px 40px;
	border-bottom: solid 1px #ccc;
	height: auto;
	margin: 20px -15px 0px -15px
}
.tabs.mobile dt, .tabs.mobile li, .tabs.mobile dd {
	float: none;
	height: auto
}
.tabs.mobile dd a, .tabs.mobile li a {
	font-size: 15px;
	display: block;
	width: auto;
	height: auto;
	padding: 18px 20px;
	margin: 0;
	color: #555;
	line-height: 1;
	border: none;
	border-left: none;
	border-right: none;
	border-top: 1px solid #ccc;
	background: #fff
}
.tabs.mobile dd a.active, .tabs.mobile li a.active {
	border: none;
	background: #2ba6cb;
	color: #fff;
	margin: 0;
	position: static;
	top: 0;
	height: auto
}
.tabs.mobile dd:first-child a.active, .tabs.mobile li:first-child a.active {
	margin: 0
}
.tabs.mobile+.tabs-content.contained {
	margin-left: -15px;
	margin-right: -15px
}
.tabs.mobile .section-title {
	padding-left: 20px !important
}
.contained.mobile {
	margin-bottom: 0
}
.contained.tabs.mobile dd a, .contained.tabs.mobile li a {
	padding: 18px 20px
}
.tabs.mobile+ul.contained {
	margin-left: -20px;
	margin-right: -20px;
	border-width: 0 0 1px 0
}
.tooltip {
	font-size: 14px;
	line-height: 1.4;
	padding: 7px 10px 9px 10px;
	left: 50% !important;
	max-width: 80% !important;
	margin-left: -40%;
	font-size: 110%
}
.tooltip>.nub, .tooltip.top>.nub, .tooltip.left>.nub, .tooltip.right>.nub {
	border-color: transparent transparent #000 transparent;
	border-color: transparent transparent rgba(0,0,0,0.85) transparent;
	top: -12px;
	left: 10px
}
}
@media only screen and (max-width: 1200px) {
.top-bar {
	margin-bottom: 0;
	overflow: hidden;
	height: 45px;
	background: #222
}
.top-bar .js-generated {
	display: block
}
.contain-to-grid .top-bar {
	width: auto
}
.top-bar section {
	left: 0;
	position: relative;
	width: auto;
	-webkit-transition: left 300ms 0;
	-moz-transition: left 300ms 0;
	-o-transition: left 300ms 0;
	transition: left 300ms 0
}
.top-bar ul {
	width: 100%;
	height: 100%;
	margin-bottom: 0;
	display: block
}
.top-bar ul>li {
	float: none
}
.top-bar ul>li.active, .top-bar ul>li:hover {
	background: #151515
}
.top-bar ul>li.name {
	height: 45px
}
.top-bar ul>li.name h1 {
	line-height: 1
}
.top-bar ul>li.name h1 a {
	color: #fff;
	display: block;
	line-height: 45px !important;
	padding-left: 15px;
	height: 45px
}
.top-bar ul>li:hover a, .top-bar ul>li.active a {
	color: #fff
}
.top-bar ul>li a:not(.button) {
	color: #fff
}
.top-bar ul>li.toggle-topbar {
	cursor: pointer;
	display: block;
	height: 45px;
	position: absolute;
	right: 0;
	top: 0;
	width: 50%
}
.top-bar ul>li.toggle-topbar a {
	content: "";
	display: block;
	width: 0;
	height: 0;
	border: solid 8px;
	border-color: #fff transparent transparent transparent;
	padding: 0;
	position: absolute;
	top: 50%;
	right: 22.5px;
	margin-top: -4px
}
.top-bar ul>li.toggle-topbar:hover {
	background: inherit
}
.top-bar ul>li.toggle-topbar a {
	padding: 0 !important
}
.top-bar ul>li.divider {
	border-bottom: solid 1px #3c3c3c;
	border-top: solid 1px #000;
	clear: both;
	height: 1px !important;
	margin: 8px 0 !important;
	width: 100%
}
.top-bar ul>li.search {
	padding: 0 22.5px
}
.top-bar ul>li.search form {
	width: 100%
}
.top-bar ul>li.search form input[type=text] {
	width: 75%
}
.top-bar ul>li.search form .button {
	top: -1px;
	width: 25%
}
.top-bar ul>li.has-dropdown a {
	padding-right: 33.75px
}
.top-bar ul>li.has-dropdown a:after {
	content: "";
	display: block;
	width: 0;
	height: 0;
	border: solid 5px;
	border-color: transparent transparent transparent rgba(255,255,255,0.5);
	margin-right: 15px;
	margin-top: -4.5px;
	position: absolute;
	top: 50%
}
.top-bar ul>li.has-dropdown:hover>.dropdown {
	display: block;
	visibility: hidden
}
.top-bar ul>li.has-dropdown .dropdown {
	visibility: hidden;
	z-index: 0 !important
}
.top-bar ul>li.has-dropdown.moved {
	position: static
}
.top-bar ul>li.has-dropdown.moved>.dropdown {
	top: 0;
	visibility: visible
}
.top-bar ul>li.has-dropdown.moved>.dropdown li label {
	margin-bottom: 6px;
	padding-top: 6px !important;
	font-size: 11px
}
.top-bar ul>li.has-dropdown.moved>.dropdown li:not(.title) {
	padding-bottom: 0
}
.top-bar ul>li.has-dropdown.moved>.dropdown li:not(.title) a {
	padding: 8px 22.5px;
	font-size: 14px
}
.top-bar ul>li.has-dropdown.moved>.dropdown li a, .top-bar ul>li.has-dropdown.moved>.dropdown li label {
	padding: 0 22.5px
}
.top-bar ul>li.has-dropdown.moved>.dropdown li a:hover {
	background: #3c3c3c;
	display: block
}
.top-bar ul>li.has-dropdown.moved>.dropdown li.divider {
	border-bottom: solid 1px rgba(255,255,255,0.1);
	margin-top: 8px !important;
	margin-bottom: 8px !important
}
.top-bar ul>li.has-dropdown.moved .back.title {
	padding-bottom: 0
}
.top-bar ul>li.has-dropdown.moved .back.title a:before {
	position: absolute;
	top: 50%;
	left: 17.5px;
	margin-top: -5px;
	width: 0;
	height: 0;
	content: "";
	display: block;
	width: 0;
	height: 0;
	border: solid 5px;
	border-color: transparent #fff transparent transparent
}
.top-bar ul>li.has-dropdown.moved .back.title h5 {
	margin: 0;
	padding-left: 15px;
	position: relative
}
.top-bar ul>li.has-dropdown.moved .back.title h5 a {
	background: transparent;
	padding-top: 8px;
	padding-bottom: 8px;
	font-size: 23px;
	font-weight: bold
}
.top-bar ul>li.has-dropdown .dropdown li {
	background: transparent
}
.top-bar ul>li.has-dropdown .dropdown li.has-dropdown .dropdown {
	left: 100% !important;
	top: 0;
	right: auto !important
}
.top-bar ul>li.has-dropdown .dropdown li.has-dropdown>a {
	padding-right: 33.75px
}
.top-bar ul>li.has-dropdown .dropdown li.has-dropdown>a:after {
	content: "";
	margin-right: 15px;
	content: "";
	display: block;
	width: 0;
	height: 0;
	border: solid 5px;
	border-color: transparent transparent transparent rgba(255,255,255,0.5);
	position: absolute;
	top: 50%;
	margin-top: -4.5px
}
.top-bar ul>li.has-dropdown .dropdown li.has-dropdown>a li a:hover {
	background: #3c3c3c
}
.top-bar ul>li.has-dropdown .dropdown li.has-dropdown.moved {
	position: static
}
.top-bar ul>li.has-dropdown .dropdown li.has-dropdown.moved .dropdown {
	top: 0;
	visibility: visible
}
.top-bar ul>li.has-dropdown .dropdown li.has-dropdown:hover {
	display: block
}
.top-bar ul.left, .top-bar ul.right {
	float: none;
	width: 100%
}
.top-bar ul.left>li, .top-bar ul.right>li {
	display: block;
	float: none;
	margin: 0 !important
}
.top-bar ul.left>li.has-dropdown .dropdown, .top-bar ul.right>li.has-dropdown .dropdown {
	left: 100% !important;
	top: 0;
	right: auto !important
}
.top-bar section>ul li a:not(.button) {
	padding-left: 22.5px !important
}
.top-bar.expanded {
	height: 100%
}
.top-bar.expanded ul li.toggle-topbar a {
	content: "";
	display: block;
	width: 0;
	height: 0;
	border: solid 8px;
	border-color: transparent transparent #ccc transparent;
	top: auto;
	bottom: 50%;
	margin-bottom: -4px
}
.top-bar ul li.has-button {
	padding: 5px 15px
}
.top-bar ul li .button.small {
	margin: 0 !important;
	display: inline-block;
	width: 100%
}
.top-bar ul>li.has-button a.button {
	margin: 0
}
}
/* 0.2 perfect-scrollbar style */
/*! perfect-scrollbar - v0.4.5
* http://noraesae.github.com/perfect-scrollbar/
* Copyright (c) 2013 HyeonJe Jun; Licensed MIT */

.ps-container .ps-scrollbar-x-rail {
	position: absolute;
	bottom: 3px;
	height: 8px;
	-webkit-border-radius: 4px;
	-moz-border-radius: 4px;
	border-radius: 4px;
	opacity: 0;
	filter: alpha(opacity=0);
	-o-transition: background-color .2s linear, opacity .2s linear;
	-webkit-transition: background-color.2s linear, opacity .2s linear;
	-moz-transition: background-color .2s linear, opacity .2s linear;
	transition: background-color .2s linear, opacity .2s linear
}
.ps-container:hover .ps-scrollbar-x-rail, .ps-container.hover .ps-scrollbar-x-rail {
	opacity: .6;
	filter: alpha(opacity=60)
}
.ps-container .ps-scrollbar-x-rail:hover, .ps-container .ps-scrollbar-x-rail.hover {
	background-color: #eee;
	opacity: .9;
	filter: alpha(opacity=90)
}
.ps-container .ps-scrollbar-x-rail.in-scrolling {
	opacity: .9;
	filter: alpha(opacity=90)
}
.ps-container .ps-scrollbar-y-rail {
	position: absolute;
	right: 3px;
	width: 8px;
	-webkit-border-radius: 4px;
	-moz-border-radius: 4px;
	border-radius: 4px;
	opacity: 0;
	filter: alpha(opacity=0);
	-o-transition: background-color .2s linear, opacity .2s linear;
	-webkit-transition: background-color.2s linear, opacity .2s linear;
	-moz-transition: background-color .2s linear, opacity .2s linear;
	transition: background-color .2s linear, opacity .2s linear
}
.ps-container:hover .ps-scrollbar-y-rail, .ps-container.hover .ps-scrollbar-y-rail {
	opacity: .6;
	filter: alpha(opacity=60)
}
.ps-container .ps-scrollbar-y-rail:hover, .ps-container .ps-scrollbar-y-rail.hover {
	background-color: #eee;
	opacity: .9;
	filter: alpha(opacity=90)
}
.ps-container .ps-scrollbar-y-rail.in-scrolling {
	opacity: .9;
	filter: alpha(opacity=90)
}
.ps-container .ps-scrollbar-x {
	position: absolute;
	bottom: 0;
	height: 8px;
	background-color: #aaa;
	-webkit-border-radius: 4px;
	-moz-border-radius: 4px;
	border-radius: 4px;
	-o-transition: background-color .2s linear;
	-webkit-transition: background-color.2s linear;
	-moz-transition: background-color .2s linear;
	transition: background-color .2s linear
}
.ps-container.ie6 .ps-scrollbar-x {
	font-size: 0
}
.ps-container .ps-scrollbar-x-rail:hover .ps-scrollbar-x, .ps-container .ps-scrollbar-x-rail.hover .ps-scrollbar-x {
	background-color: #999
}
.ps-container .ps-scrollbar-y {
	position: absolute;
	right: 0;
	width: 8px;
	background-color: #aaa;
	-webkit-border-radius: 4px;
	-moz-border-radius: 4px;
	border-radius: 4px;
	-o-transition: background-color .2s linear;
	-webkit-transition: background-color.2s linear;
	-moz-transition: background-color .2s linear;
	transition: background-color .2s linear
}
.ps-container.ie .ps-scrollbar-y {
	font-size: 0
}
.ps-container .ps-scrollbar-y-rail:hover .ps-scrollbar-y, .ps-container .ps-scrollbar-y-rail.hover .ps-scrollbar-y {
	background-color: #999
}
/* 0.3 smoothdivscrool style */
div.scrollingHotSpotLeft {
	min-width: 75px;
	width: 10%;
	height: 100%;
	background-image: url(../images/big_transparent.gif);
	background-repeat: repeat;
	background-position: center center;
	position: absolute;
	z-index: 200;
	left: 0;
	cursor: url(../images/cursors/cursor_arrow_left.png), w-resize; /* url(../images/cursors/cursor_arrow_left.cur) It was showing 403 forbidden */
}
div.scrollingHotSpotLeftVisible {
	background-image: url(../images/arrow_left.gif);
	background-color: #fff;
	background-repeat: no-repeat;
	opacity: 0.35;
	-moz-opacity: 0.35;
	filter: alpha(opacity=35);
	zoom: 1;
}
div.scrollingHotSpotRight {
	min-width: 75px;
	width: 10%;
	height: 100%;
	background-image: url(../images/big_transparent.gif);
	background-repeat: repeat;
	background-position: center center;
	position: absolute;
	z-index: 200;
	right: 0;
	cursor: url(../images/cursors/cursor_arrow_right.png), e-resize; /*url(../images/cursors/cursor_arrow_right.cur) It was showing 403 forbidden */
}
div.scrollingHotSpotRightVisible {
	background-image: url(../images/arrow_right.gif);
	background-color: #fff;
	background-repeat: no-repeat;
	opacity: 0.35;
	filter: alpha(opacity=35);
	-moz-opacity: 0.35;
	zoom: 1;
}
div.scrollWrapper {
	position: relative;
	overflow: hidden;
	width: 100%;
	height: 100%;
}
div.scrollableArea {
	position: relative;
	width: auto;
	height: 100%;
}
/* 0.4 prettyphoto style */

div.pp_default .pp_top, div.pp_default .pp_top .pp_middle, div.pp_default .pp_top .pp_left, div.pp_default .pp_top .pp_right, div.pp_default .pp_bottom, div.pp_default .pp_bottom .pp_left, div.pp_default .pp_bottom .pp_middle, div.pp_default .pp_bottom .pp_right {
	height: 13px;
}
div.pp_default .pp_top .pp_left {
	background: url(../images/prettyPhoto/default/sprite.png) -78px -93px no-repeat;
} /* Top left corner */
div.pp_default .pp_top .pp_middle {
	background: url(../images/prettyPhoto/default/sprite_x.png) top left repeat-x;
} /* Top pattern/color */
div.pp_default .pp_top .pp_right {
	background: url(../images/prettyPhoto/default/sprite.png) -112px -93px no-repeat;
} /* Top right corner */
div.pp_default .pp_content .ppt {
	color: #f8f8f8;
}
div.pp_default .pp_content_container .pp_left {
	background: url(../images/prettyPhoto/default/sprite_y.png) -7px 0 repeat-y;
	padding-left: 13px;
}
div.pp_default .pp_content_container .pp_right {
	background: url(../images/prettyPhoto/default/sprite_y.png) top right repeat-y;
	padding-right: 13px;
}
div.pp_default .pp_content {
	background-color: #fff;
} /* Content background */
div.pp_default .pp_next:hover {
	background: url(../images/prettyPhoto/default/sprite_next.png) center right no-repeat;
	cursor: pointer;
} /* Next button */
div.pp_default .pp_previous:hover {
	background: url(../images/prettyPhoto/default/sprite_prev.png) center left no-repeat;
	cursor: pointer;
} /* Previous button */
div.pp_default .pp_expand {
	background: url(../images/prettyPhoto/default/sprite.png) 0 -29px no-repeat;
	cursor: pointer;
	width: 28px;
	height: 28px;
} /* Expand button */
div.pp_default .pp_expand:hover {
	background: url(../images/prettyPhoto/default/sprite.png) 0 -56px no-repeat;
	cursor: pointer;
} /* Expand button hover */
div.pp_default .pp_contract {
	background: url(../images/prettyPhoto/default/sprite.png) 0 -84px no-repeat;
	cursor: pointer;
	width: 28px;
	height: 28px;
} /* Contract button */
div.pp_default .pp_contract:hover {
	background: url(../images/prettyPhoto/default/sprite.png) 0 -113px no-repeat;
	cursor: pointer;
} /* Contract button hover */
div.pp_default .pp_close {
	width: 30px;
	height: 30px;
	background: url(../images/prettyPhoto/default/sprite.png) 2px 1px no-repeat;
	cursor: pointer;
} /* Close button */
div.pp_default #pp_full_res .pp_inline {
	color: #000;
}
div.pp_default .pp_gallery ul li a {
	background: url(../images/prettyPhoto/default/default_thumb.png) center center #f8f8f8;
	border: 1px solid #aaa;
}
div.pp_default .pp_gallery ul li a:hover, div.pp_default .pp_gallery ul li.selected a {
	border-color: #fff;
}
div.pp_default .pp_social {
	margin-top: 7px;
}
div.pp_default .pp_gallery a.pp_arrow_previous, div.pp_default .pp_gallery a.pp_arrow_next {
	position: static;
	left: auto;
}
div.pp_default .pp_nav .pp_play, div.pp_default .pp_nav .pp_pause {
	background: url(../images/prettyPhoto/default/sprite.png) -51px 1px no-repeat;
	height: 30px;
	width: 30px;
}
div.pp_default .pp_nav .pp_pause {
	background-position: -51px -29px;
}
div.pp_default .pp_details {
	position: relative;
}
div.pp_default a.pp_arrow_previous, div.pp_default a.pp_arrow_next {
	background: url(../images/prettyPhoto/default/sprite.png) -31px -3px no-repeat;
	height: 20px;
	margin: 4px 0 0 0;
	width: 20px;
}
div.pp_default a.pp_arrow_next {
	left: 52px;
	background-position: -82px -3px;
} /* The next arrow in the bottom nav */
div.pp_default .pp_content_container .pp_details {
	margin-top: 5px;
}
div.pp_default .pp_nav {
	clear: none;
	height: 30px;
	width: 110px;
	position: relative;
}
div.pp_default .pp_nav .currentTextHolder {
	font-family: Georgia;
	font-style: italic;
	color: #999;
	font-size: 11px;
	left: 75px;
	line-height: 25px;
	margin: 0;
	padding: 0 0 0 10px;
	position: absolute;
	top: 2px;
}
div.pp_default .pp_close:hover, div.pp_default .pp_nav .pp_play:hover, div.pp_default .pp_nav .pp_pause:hover, div.pp_default .pp_arrow_next:hover, div.pp_default .pp_arrow_previous:hover {
	opacity: 0.7;
}
div.pp_default .pp_description {
	font-size: 11px;
	font-weight: bold;
	line-height: 14px;
	margin: 5px 50px 5px 0;
}
div.pp_default .pp_bottom .pp_left {
	background: url(../images/prettyPhoto/default/sprite.png) -78px -127px no-repeat;
} /* Bottom left corner */
div.pp_default .pp_bottom .pp_middle {
	background: url(../images/prettyPhoto/default/sprite_x.png) bottom left repeat-x;
} /* Bottom pattern/color */
div.pp_default .pp_bottom .pp_right {
	background: url(../images/prettyPhoto/default/sprite.png) -112px -127px no-repeat;
} /* Bottom right corner */
div.pp_default .pp_loaderIcon {
	background: url(../images/prettyPhoto/default/loader.gif) center center no-repeat;
} /* Loader icon */
div.pp_pic_holder a:focus {
	outline: none
}
div.pp_overlay {
	background: #000;
	display: none;
	left: 0;
	position: absolute;
	top: 0;
	width: 100%;
	z-index: 9500
}
div.pp_pic_holder {
	display: none;
	position: absolute;
	width: 100px;
	z-index: 10000
}
.pp_content {
	height: 40px;
	min-width: 40px
}
* html .pp_content {
	width: 40px
}
.pp_content_container {
	position: relative;
	text-align: left;
	width: 100%
}
.pp_content_container .pp_left {
	padding-left: 20px
}
.pp_content_container .pp_right {
	padding-right: 20px
}
.pp_content_container .pp_details {
	float: left;
	margin: 10px 0 2px
}
.pp_description {
	display: none;
	margin: 0
}
.pp_social {
	float: left;
	margin: 0
}
.pp_social .facebook {
	float: left;
	margin-left: 5px;
	width: 55px;
	overflow: hidden
}
.pp_social .twitter {
	float: left
}
.pp_nav {
	clear: right;
	float: left;
	margin: 3px 10px 0 0
}
.pp_nav p {
	float: left;
	white-space: nowrap;
	margin: 2px 4px
}
.pp_nav .pp_play, .pp_nav .pp_pause {
	float: left;
	margin-right: 4px;
	text-indent: -10000px
}
a.pp_arrow_previous, a.pp_arrow_next {
	display: block;
	float: left;
	height: 15px;
	margin-top: 3px;
	overflow: hidden;
	text-indent: -10000px;
	width: 14px
}
.pp_hoverContainer {
	position: absolute;
	top: 0;
	width: 100%;
	z-index: 2000
}
.pp_gallery {
	display: none;
	left: 50%;
	margin-top: -50px;
	position: absolute;
	z-index: 10000
}
.pp_gallery div {
	float: left;
	overflow: hidden;
	position: relative
}
.pp_gallery ul {
	float: left;
	height: 35px;
	position: relative;
	white-space: nowrap;
	margin: 0 0 0 5px;
	padding: 0
}
.pp_gallery ul a {
	border: 1px rgba(0,0,0,0.5) solid;
	display: block;
	float: left;
	height: 33px;
	overflow: hidden
}
.pp_gallery ul a:hover, .pp_gallery li.selected a {
	border-color: #fff
}
.pp_gallery ul a img {
	border: 0
}
.pp_gallery li {
	display: block;
	float: left;
	margin: 0 5px 0 0;
	padding: 0
}
.pp_gallery li.default a {
	background: url(../images/prettyPhoto/facebook/default_thumbnail.gif) 0 0 no-repeat;
	display: block;
	height: 33px;
	width: 50px
}
.pp_gallery .pp_arrow_previous, .pp_gallery .pp_arrow_next {
	margin-top: 7px!important
}
a.pp_next {
	background: url(../images/prettyPhoto/light_rounded/btnNext.png) 10000px 10000px no-repeat;
	display: block;
	float: right;
	height: 100%;
	text-indent: -10000px;
	width: 49%
}
a.pp_previous {
	background: url(../images/prettyPhoto/light_rounded/btnNext.png) 10000px 10000px no-repeat;
	display: block;
	float: left;
	height: 100%;
	text-indent: -10000px;
	width: 49%
}
a.pp_expand, a.pp_contract {
	cursor: pointer;
	display: none;
	height: 20px;
	position: absolute;
	right: 30px;
	text-indent: -10000px;
	top: 10px;
	width: 20px;
	z-index: 20000
}
a.pp_close {
	position: absolute;
	right: 0;
	top: 0;
	display: block;
	line-height: 22px;
	text-indent: -10000px
}
.pp_loaderIcon {
	display: block;
	height: 24px;
	left: 50%;
	position: absolute;
	top: 50%;
	width: 24px;
	margin: -12px 0 0 -12px
}
#pp_full_res {
	line-height: 1!important
}
#pp_full_res .pp_inline {
	text-align: left
}
#pp_full_res .pp_inline p {
	margin: 0 0 15px
}
div.ppt {
	color: #fff;
	display: none;
	font-size: 17px;
	z-index: 9999;
	margin: 0 0 5px 15px
}
.pp_top, .pp_bottom {
	height: 20px;
	position: relative
}
* html .pp_top, * html .pp_bottom {
	padding: 0 20px
}
.pp_top .pp_left, .pp_bottom .pp_left {
	height: 20px;
	left: 0;
	position: absolute;
	width: 20px
}
.pp_top .pp_middle, .pp_bottom .pp_middle {
	height: 20px;
	left: 20px;
	position: absolute;
	right: 20px
}
* html .pp_top .pp_middle, * html .pp_bottom .pp_middle {
	left: 0;
	position: static
}
.pp_top .pp_right, .pp_bottom .pp_right {
	height: 20px;
	left: auto;
	position: absolute;
	right: 0;
	top: 0;
	width: 20px
}
.pp_fade, .pp_gallery li.default a img {
	display: none
}
/* 0.5 font awesome 4 */

@font-face {
	font-family: 'FontAwesome';
	src: url('font/fontawesome-webfont.eot?v=4.0.1');
	src: url('font/fontawesome-webfont.eot?#iefix&v=4.0.1') format('embedded-opentype'), url('font/fontawesome-webfont.woff?v=4.0.1') format('woff'), url('font/fontawesome-webfont.ttf?v=4.0.1') format('truetype'), url('font/fontawesome-webfont.svg?v=4.0.1#fontawesomeregular') format('svg');
	font-weight: normal;
	font-style: normal
}
.fa {
	display: inline-block;
	font-family: FontAwesome;
	font-style: normal;
	font-weight: normal;
	line-height: 1;
	-webkit-font-smoothing: antialiased;
	-moz-osx-font-smoothing: grayscale
}
.fa-lg {
	font-size: 1.3333333333333333em;
	line-height: .75em;
	vertical-align: -15%
}
.fa-2x {
	font-size: 2em
}
.fa-3x {
	font-size: 3em
}
.fa-4x {
	font-size: 4em
}
.fa-5x {
	font-size: 5em
}
.fa-fw {
	width: 1.2857142857142858em;
	text-align: center
}
.fa-ul {
	padding-left: 0;
	margin-left: 2.142857142857143em;
	list-style-type: none
}
.fa-ul>li {
	position: relative
}
.fa-li {
	position: absolute;
	left: -2.142857142857143em;
	width: 2.142857142857143em;
	top: .14285714285714285em;
	text-align: center
}
.fa-li.fa-lg {
	left: -1.8571428571428572em
}
.fa-border {
	padding: .2em .25em .15em;
	border: solid .08em #eee;
	border-radius: .1em
}
.pull-right {
	float: right
}
.pull-left {
	float: left
}
.fa.pull-left {
	margin-right: .3em
}
.fa.pull-right {
	margin-left: .3em
}
.fa-spin {
	-webkit-animation: spin 2s infinite linear;
	-moz-animation: spin 2s infinite linear;
	-o-animation: spin 2s infinite linear;
	animation: spin 2s infinite linear
}
@-moz-keyframes spin {
0% {
-moz-transform:rotate(0deg)
}
100% {
-moz-transform:rotate(359deg)
}
}
@-webkit-keyframes spin {
0% {
-webkit-transform:rotate(0deg)
}
100% {
-webkit-transform:rotate(359deg)
}
}
@-o-keyframes spin {
0% {
-o-transform:rotate(0deg)
}
100% {
-o-transform:rotate(359deg)
}
}
@-ms-keyframes spin {
0% {
-ms-transform:rotate(0deg)
}
100% {
-ms-transform:rotate(359deg)
}
}
@keyframes spin {
0% {
transform:rotate(0deg)
}
100% {
transform:rotate(359deg)
}
}
.fa-rotate-90 {
filter:progid:DXImageTransform.Microsoft.BasicImage(rotation=1);
	-webkit-transform: rotate(90deg);
	-moz-transform: rotate(90deg);
	-ms-transform: rotate(90deg);
	-o-transform: rotate(90deg);
	transform: rotate(90deg)
}
.fa-rotate-180 {
filter:progid:DXImageTransform.Microsoft.BasicImage(rotation=2);
	-webkit-transform: rotate(180deg);
	-moz-transform: rotate(180deg);
	-ms-transform: rotate(180deg);
	-o-transform: rotate(180deg);
	transform: rotate(180deg)
}
.fa-rotate-270 {
filter:progid:DXImageTransform.Microsoft.BasicImage(rotation=3);
	-webkit-transform: rotate(270deg);
	-moz-transform: rotate(270deg);
	-ms-transform: rotate(270deg);
	-o-transform: rotate(270deg);
	transform: rotate(270deg)
}
.fa-flip-horizontal {
filter:progid:DXImageTransform.Microsoft.BasicImage(rotation=0, mirror=1);
	-webkit-transform: scale(-1, 1);
	-moz-transform: scale(-1, 1);
	-ms-transform: scale(-1, 1);
	-o-transform: scale(-1, 1);
	transform: scale(-1, 1)
}
.fa-flip-vertical {
filter:progid:DXImageTransform.Microsoft.BasicImage(rotation=2, mirror=1);
	-webkit-transform: scale(1, -1);
	-moz-transform: scale(1, -1);
	-ms-transform: scale(1, -1);
	-o-transform: scale(1, -1);
	transform: scale(1, -1)
}
.fa-stack {
	position: relative;
	display: inline-block;
	width: 2em;
	height: 2em;
	line-height: 2em;
	vertical-align: middle
}
.fa-stack-1x, .fa-stack-2x {
	position: absolute;
	left: 0;
	width: 100%;
	text-align: center
}
.fa-stack-1x {
	line-height: inherit
}
.fa-stack-2x {
	font-size: 2em
}
.fa-inverse {
	color: #fff
}
.fa-glass:before {
	content: "\f000"
}
.fa-music:before {
	content: "\f001"
}
.fa-search:before {
	content: "\f002"
}
.fa-envelope-o:before {
	content: "\f003"
}
.fa-heart:before {
	content: "\f004"
}
.fa-star:before {
	content: "\f005"
}
.fa-star-o:before {
	content: "\f006"
}
.fa-user:before {
	content: "\f007"
}
.fa-film:before {
	content: "\f008"
}
.fa-th-large:before {
	content: "\f009"
}
.fa-th:before {
	content: "\f00a"
}
.fa-th-list:before {
	content: "\f00b"
}
.fa-check:before {
	content: "\f00c"
}
.fa-times:before {
	content: "\f00d"
}
.fa-search-plus:before {
	content: "\f00e"
}
.fa-search-minus:before {
	content: "\f010"
}
.fa-power-off:before {
	content: "\f011"
}
.fa-signal:before {
	content: "\f012"
}
.fa-gear:before, .fa-cog:before {
	content: "\f013"
}
.fa-trash-o:before {
	content: "\f014"
}
.fa-home:before {
	content: "\f015"
}
.fa-file-o:before {
	content: "\f016"
}
.fa-clock-o:before {
	content: "\f017"
}
.fa-road:before {
	content: "\f018"
}
.fa-download:before {
	content: "\f019"
}
.fa-arrow-circle-o-down:before {
	content: "\f01a"
}
.fa-arrow-circle-o-up:before {
	content: "\f01b"
}
.fa-inbox:before {
	content: "\f01c"
}
.fa-play-circle-o:before {
	content: "\f01d"
}
.fa-rotate-right:before, .fa-repeat:before {
	content: "\f01e"
}
.fa-refresh:before {
	content: "\f021"
}
.fa-list-alt:before {
	content: "\f022"
}
.fa-lock:before {
	content: "\f023"
}
.fa-flag:before {
	content: "\f024"
}
.fa-headphones:before {
	content: "\f025"
}
.fa-volume-off:before {
	content: "\f026"
}
.fa-volume-down:before {
	content: "\f027"
}
.fa-volume-up:before {
	content: "\f028"
}
.fa-qrcode:before {
	content: "\f029"
}
.fa-barcode:before {
	content: "\f02a"
}
.fa-tag:before {
	content: "\f02b"
}
.fa-tags:before {
	content: "\f02c"
}
.fa-book:before {
	content: "\f02d"
}
.fa-bookmark:before {
	content: "\f02e"
}
.fa-print:before {
	content: "\f02f"
}
.fa-camera:before {
	content: "\f030"
}
.fa-font:before {
	content: "\f031"
}
.fa-bold:before {
	content: "\f032"
}
.fa-italic:before {
	content: "\f033"
}
.fa-text-height:before {
	content: "\f034"
}
.fa-text-width:before {
	content: "\f035"
}
.fa-align-left:before {
	content: "\f036"
}
.fa-align-center:before {
	content: "\f037"
}
.fa-align-right:before {
	content: "\f038"
}
.fa-align-justify:before {
	content: "\f039"
}
.fa-list:before {
	content: "\f03a"
}
.fa-dedent:before, .fa-outdent:before {
	content: "\f03b"
}
.fa-indent:before {
	content: "\f03c"
}
.fa-video-camera:before {
	content: "\f03d"
}
.fa-picture-o:before {
	content: "\f03e"
}
.fa-pencil:before {
	content: "\f040"
}
.fa-map-marker:before {
	content: "\f041"
}
.fa-adjust:before {
	content: "\f042"
}
.fa-tint:before {
	content: "\f043"
}
.fa-edit:before, .fa-pencil-square-o:before {
	content: "\f044"
}
.fa-share-square-o:before {
	content: "\f045"
}
.fa-check-square-o:before {
	content: "\f046"
}
.fa-move:before {
	content: "\f047"
}
.fa-step-backward:before {
	content: "\f048"
}
.fa-fast-backward:before {
	content: "\f049"
}
.fa-backward:before {
	content: "\f04a"
}
.fa-play:before {
	content: "\f04b"
}
.fa-pause:before {
	content: "\f04c"
}
.fa-stop:before {
	content: "\f04d"
}
.fa-forward:before {
	content: "\f04e"
}
.fa-fast-forward:before {
	content: "\f050"
}
.fa-step-forward:before {
	content: "\f051"
}
.fa-eject:before {
	content: "\f052"
}
.fa-chevron-left:before {
	content: "\f053"
}
.fa-chevron-right:before {
	content: "\f054"
}
.fa-plus-circle:before {
	content: "\f055"
}
.fa-minus-circle:before {
	content: "\f056"
}
.fa-times-circle:before {
	content: "\f057"
}
.fa-check-circle:before {
	content: "\f058"
}
.fa-question-circle:before {
	content: "\f059"
}
.fa-info-circle:before {
	content: "\f05a"
}
.fa-crosshairs:before {
	content: "\f05b"
}
.fa-times-circle-o:before {
	content: "\f05c"
}
.fa-check-circle-o:before {
	content: "\f05d"
}
.fa-ban:before {
	content: "\f05e"
}
.fa-arrow-left:before {
	content: "\f060"
}
.fa-arrow-right:before {
	content: "\f061"
}
.fa-arrow-up:before {
	content: "\f062"
}
.fa-arrow-down:before {
	content: "\f063"
}
.fa-mail-forward:before, .fa-share:before {
	content: "\f064"
}
.fa-resize-full:before {
	content: "\f065"
}
.fa-resize-small:before {
	content: "\f066"
}
.fa-plus:before {
	content: "\f067"
}
.fa-minus:before {
	content: "\f068"
}
.fa-asterisk:before {
	content: "\f069"
}
.fa-exclamation-circle:before {
	content: "\f06a"
}
.fa-gift:before {
	content: "\f06b"
}
.fa-leaf:before {
	content: "\f06c"
}
.fa-fire:before {
	content: "\f06d"
}
.fa-eye:before {
	content: "\f06e"
}
.fa-eye-slash:before {
	content: "\f070"
}
.fa-warning:before, .fa-exclamation-triangle:before {
	content: "\f071"
}
.fa-plane:before {
	content: "\f072"
}
.fa-calendar:before {
	content: "\f073"
}
.fa-random:before {
	content: "\f074"
}
.fa-comment:before {
	content: "\f075"
}
.fa-magnet:before {
	content: "\f076"
}
.fa-chevron-up:before {
	content: "\f077"
}
.fa-chevron-down:before {
	content: "\f078"
}
.fa-retweet:before {
	content: "\f079"
}
.fa-shopping-cart:before {
	content: "\f07a"
}
.fa-folder:before {
	content: "\f07b"
}
.fa-folder-open:before {
	content: "\f07c"
}
.fa-resize-vertical:before {
	content: "\f07d"
}
.fa-resize-horizontal:before {
	content: "\f07e"
}
.fa-bar-chart-o:before {
	content: "\f080"
}
.fa-twitter-square:before {
	content: "\f081"
}
.fa-facebook-square:before {
	content: "\f082"
}
.fa-camera-retro:before {
	content: "\f083"
}
.fa-key:before {
	content: "\f084"
}
.fa-gears:before, .fa-cogs:before {
	content: "\f085"
}
.fa-comments:before {
	content: "\f086"
}
.fa-thumbs-o-up:before {
	content: "\f087"
}
.fa-thumbs-o-down:before {
	content: "\f088"
}
.fa-star-half:before {
	content: "\f089"
}
.fa-heart-o:before {
	content: "\f08a"
}
.fa-sign-out:before {
	content: "\f08b"
}
.fa-linkedin-square:before {
	content: "\f08c"
}
.fa-thumb-tack:before {
	content: "\f08d"
}
.fa-external-link:before {
	content: "\f08e"
}
.fa-sign-in:before {
	content: "\f090"
}
.fa-trophy:before {
	content: "\f091"
}
.fa-github-square:before {
	content: "\f092"
}
.fa-upload:before {
	content: "\f093"
}
.fa-lemon-o:before {
	content: "\f094"
}
.fa-phone:before {
	content: "\f095"
}
.fa-square-o:before {
	content: "\f096"
}
.fa-bookmark-o:before {
	content: "\f097"
}
.fa-phone-square:before {
	content: "\f098"
}
.fa-twitter:before {
	content: "\f099"
}
.fa-facebook:before {
	content: "\f09a"
}
.fa-github:before {
	content: "\f09b"
}
.fa-unlock:before {
	content: "\f09c"
}
.fa-credit-card:before {
	content: "\f09d"
}
.fa-rss:before {
	content: "\f09e"
}
.fa-hdd-o:before {
	content: "\f0a0"
}
.fa-bullhorn:before {
	content: "\f0a1"
}
.fa-bell:before {
	content: "\f0f3"
}
.fa-certificate:before {
	content: "\f0a3"
}
.fa-hand-o-right:before {
	content: "\f0a4"
}
.fa-hand-o-left:before {
	content: "\f0a5"
}
.fa-hand-o-up:before {
	content: "\f0a6"
}
.fa-hand-o-down:before {
	content: "\f0a7"
}
.fa-arrow-circle-left:before {
	content: "\f0a8"
}
.fa-arrow-circle-right:before {
	content: "\f0a9"
}
.fa-arrow-circle-up:before {
	content: "\f0aa"
}
.fa-arrow-circle-down:before {
	content: "\f0ab"
}
.fa-globe:before {
	content: "\f0ac"
}
.fa-wrench:before {
	content: "\f0ad"
}
.fa-tasks:before {
	content: "\f0ae"
}
.fa-filter:before {
	content: "\f0b0"
}
.fa-briefcase:before {
	content: "\f0b1"
}
.fa-fullscreen:before {
	content: "\f0b2"
}
.fa-group:before {
	content: "\f0c0"
}
.fa-chain:before, .fa-link:before {
	content: "\f0c1"
}
.fa-cloud:before {
	content: "\f0c2"
}
.fa-flask:before {
	content: "\f0c3"
}
.fa-cut:before, .fa-scissors:before {
	content: "\f0c4"
}
.fa-copy:before, .fa-files-o:before {
	content: "\f0c5"
}
.fa-paperclip:before {
	content: "\f0c6"
}
.fa-save:before, .fa-floppy-o:before {
	content: "\f0c7"
}
.fa-square:before {
	content: "\f0c8"
}
.fa-reorder:before {
	content: "\f0c9"
}
.fa-list-ul:before {
	content: "\f0ca"
}
.fa-list-ol:before {
	content: "\f0cb"
}
.fa-strikethrough:before {
	content: "\f0cc"
}
.fa-underline:before {
	content: "\f0cd"
}
.fa-table:before {
	content: "\f0ce"
}
.fa-magic:before {
	content: "\f0d0"
}
.fa-truck:before {
	content: "\f0d1"
}
.fa-pinterest:before {
	content: "\f0d2"
}
.fa-pinterest-square:before {
	content: "\f0d3"
}
.fa-google-plus-square:before {
	content: "\f0d4"
}
.fa-google-plus:before {
	content: "\f0d5"
}
.fa-money:before {
	content: "\f0d6"
}
.fa-caret-down:before {
	content: "\f0d7"
}
.fa-caret-up:before {
	content: "\f0d8"
}
.fa-caret-left:before {
	content: "\f0d9"
}
.fa-caret-right:before {
	content: "\f0da"
}
.fa-columns:before {
	content: "\f0db"
}
.fa-unsorted:before, .fa-sort:before {
	content: "\f0dc"
}
.fa-sort-down:before, .fa-sort-asc:before {
	content: "\f0dd"
}
.fa-sort-up:before, .fa-sort-desc:before {
	content: "\f0de"
}
.fa-envelope:before {
	content: "\f0e0"
}
.fa-linkedin:before {
	content: "\f0e1"
}
.fa-rotate-left:before, .fa-undo:before {
	content: "\f0e2"
}
.fa-legal:before, .fa-gavel:before {
	content: "\f0e3"
}
.fa-dashboard:before, .fa-tachometer:before {
	content: "\f0e4"
}
.fa-comment-o:before {
	content: "\f0e5"
}
.fa-comments-o:before {
	content: "\f0e6"
}
.fa-flash:before, .fa-bolt:before {
	content: "\f0e7"
}
.fa-sitemap:before {
	content: "\f0e8"
}
.fa-umbrella:before {
	content: "\f0e9"
}
.fa-paste:before, .fa-clipboard:before {
	content: "\f0ea"
}
.fa-lightbulb-o:before {
	content: "\f0eb"
}
.fa-exchange:before {
	content: "\f0ec"
}
.fa-cloud-download:before {
	content: "\f0ed"
}
.fa-cloud-upload:before {
	content: "\f0ee"
}
.fa-user-md:before {
	content: "\f0f0"
}
.fa-stethoscope:before {
	content: "\f0f1"
}
.fa-suitcase:before {
	content: "\f0f2"
}
.fa-bell-o:before {
	content: "\f0a2"
}
.fa-coffee:before {
	content: "\f0f4"
}
.fa-cutlery:before {
	content: "\f0f5"
}
.fa-file-text-o:before {
	content: "\f0f6"
}
.fa-building:before {
	content: "\f0f7"
}
.fa-hospital:before {
	content: "\f0f8"
}
.fa-ambulance:before {
	content: "\f0f9"
}
.fa-medkit:before {
	content: "\f0fa"
}
.fa-fighter-jet:before {
	content: "\f0fb"
}
.fa-beer:before {
	content: "\f0fc"
}
.fa-h-square:before {
	content: "\f0fd"
}
.fa-plus-square:before {
	content: "\f0fe"
}
.fa-angle-double-left:before {
	content: "\f100"
}
.fa-angle-double-right:before {
	content: "\f101"
}
.fa-angle-double-up:before {
	content: "\f102"
}
.fa-angle-double-down:before {
	content: "\f103"
}
.fa-angle-left:before {
	content: "\f104"
}
.fa-angle-right:before {
	content: "\f105"
}
.fa-angle-up:before {
	content: "\f106"
}
.fa-angle-down:before {
	content: "\f107"
}
.fa-desktop:before {
	content: "\f108"
}
.fa-laptop:before {
	content: "\f109"
}
.fa-tablet:before {
	content: "\f10a"
}
.fa-mobile-phone:before, .fa-mobile:before {
	content: "\f10b"
}
.fa-circle-o:before {
	content: "\f10c"
}
.fa-quote-left:before {
	content: "\f10d"
}
.fa-quote-right:before {
	content: "\f10e"
}
.fa-spinner:before {
	content: "\f110"
}
.fa-circle:before {
	content: "\f111"
}
.fa-mail-reply:before, .fa-reply:before {
	content: "\f112"
}
.fa-github-alt:before {
	content: "\f113"
}
.fa-folder-o:before {
	content: "\f114"
}
.fa-folder-open-o:before {
	content: "\f115"
}
.fa-expand-o:before {
	content: "\f116"
}
.fa-collapse-o:before {
	content: "\f117"
}
.fa-smile-o:before {
	content: "\f118"
}
.fa-frown-o:before {
	content: "\f119"
}
.fa-meh-o:before {
	content: "\f11a"
}
.fa-gamepad:before {
	content: "\f11b"
}
.fa-keyboard-o:before {
	content: "\f11c"
}
.fa-flag-o:before {
	content: "\f11d"
}
.fa-flag-checkered:before {
	content: "\f11e"
}
.fa-terminal:before {
	content: "\f120"
}
.fa-code:before {
	content: "\f121"
}
.fa-reply-all:before {
	content: "\f122"
}
.fa-mail-reply-all:before {
	content: "\f122"
}
.fa-star-half-empty:before, .fa-star-half-full:before, .fa-star-half-o:before {
	content: "\f123"
}
.fa-location-arrow:before {
	content: "\f124"
}
.fa-crop:before {
	content: "\f125"
}
.fa-code-fork:before {
	content: "\f126"
}
.fa-unlink:before, .fa-chain-broken:before {
	content: "\f127"
}
.fa-question:before {
	content: "\f128"
}
.fa-info:before {
	content: "\f129"
}
.fa-exclamation:before {
	content: "\f12a"
}
.fa-superscript:before {
	content: "\f12b"
}
.fa-subscript:before {
	content: "\f12c"
}
.fa-eraser:before {
	content: "\f12d"
}
.fa-puzzle-piece:before {
	content: "\f12e"
}
.fa-microphone:before {
	content: "\f130"
}
.fa-microphone-slash:before {
	content: "\f131"
}
.fa-shield:before {
	content: "\f132"
}
.fa-calendar-o:before {
	content: "\f133"
}
.fa-fire-extinguisher:before {
	content: "\f134"
}
.fa-rocket:before {
	content: "\f135"
}
.fa-maxcdn:before {
	content: "\f136"
}
.fa-chevron-circle-left:before {
	content: "\f137"
}
.fa-chevron-circle-right:before {
	content: "\f138"
}
.fa-chevron-circle-up:before {
	content: "\f139"
}
.fa-chevron-circle-down:before {
	content: "\f13a"
}
.fa-html5:before {
	content: "\f13b"
}
.fa-css3:before {
	content: "\f13c"
}
.fa-anchor:before {
	content: "\f13d"
}
.fa-unlock-o:before {
	content: "\f13e"
}
.fa-bullseye:before {
	content: "\f140"
}
.fa-ellipsis-horizontal:before {
	content: "\f141"
}
.fa-ellipsis-vertical:before {
	content: "\f142"
}
.fa-rss-square:before {
	content: "\f143"
}
.fa-play-circle:before {
	content: "\f144"
}
.fa-ticket:before {
	content: "\f145"
}
.fa-minus-square:before {
	content: "\f146"
}
.fa-minus-square-o:before {
	content: "\f147"
}
.fa-level-up:before {
	content: "\f148"
}
.fa-level-down:before {
	content: "\f149"
}
.fa-check-square:before {
	content: "\f14a"
}
.fa-pencil-square:before {
	content: "\f14b"
}
.fa-external-link-square:before {
	content: "\f14c"
}
.fa-share-square:before {
	content: "\f14d"
}
.fa-compass:before {
	content: "\f14e"
}
.fa-toggle-down:before, .fa-caret-square-o-down:before {
	content: "\f150"
}
.fa-toggle-up:before, .fa-caret-square-o-up:before {
	content: "\f151"
}
.fa-toggle-right:before, .fa-caret-square-o-right:before {
	content: "\f152"
}
.fa-euro:before, .fa-eur:before {
	content: "\f153"
}
.fa-gbp:before {
	content: "\f154"
}
.fa-dollar:before, .fa-usd:before {
	content: "\f155"
}
.fa-rupee:before, .fa-inr:before {
	content: "\f156"
}
.fa-cny:before, .fa-rmb:before, .fa-yen:before, .fa-jpy:before {
	content: "\f157"
}
.fa-ruble:before, .fa-rouble:before, .fa-rub:before {
	content: "\f158"
}
.fa-won:before, .fa-krw:before {
	content: "\f159"
}
.fa-bitcoin:before, .fa-btc:before {
	content: "\f15a"
}
.fa-file:before {
	content: "\f15b"
}
.fa-file-text:before {
	content: "\f15c"
}
.fa-sort-alpha-asc:before {
	content: "\f15d"
}
.fa-sort-alpha-desc:before {
	content: "\f15e"
}
.fa-sort-amount-asc:before {
	content: "\f160"
}
.fa-sort-amount-desc:before {
	content: "\f161"
}
.fa-sort-numeric-asc:before {
	content: "\f162"
}
.fa-sort-numeric-desc:before {
	content: "\f163"
}
.fa-thumbs-up:before {
	content: "\f164"
}
.fa-thumbs-down:before {
	content: "\f165"
}
.fa-youtube-square:before {
	content: "\f166"
}
.fa-youtube:before {
	content: "\f167"
}
.fa-xing:before {
	content: "\f168"
}
.fa-xing-square:before {
	content: "\f169"
}
.fa-youtube-play:before {
	content: "\f16a"
}
.fa-dropbox:before {
	content: "\f16b"
}
.fa-stack-overflow:before {
	content: "\f16c"
}
.fa-instagram:before {
	content: "\f16d"
}
.fa-flickr:before {
	content: "\f16e"
}
.fa-adn:before {
	content: "\f170"
}
.fa-bitbucket:before {
	content: "\f171"
}
.fa-bitbucket-square:before {
	content: "\f172"
}
.fa-tumblr:before {
	content: "\f173"
}
.fa-tumblr-square:before {
	content: "\f174"
}
.fa-long-arrow-down:before {
	content: "\f175"
}
.fa-long-arrow-up:before {
	content: "\f176"
}
.fa-long-arrow-left:before {
	content: "\f177"
}
.fa-long-arrow-right:before {
	content: "\f178"
}
.fa-apple:before {
	content: "\f179"
}
.fa-windows:before {
	content: "\f17a"
}
.fa-android:before {
	content: "\f17b"
}
.fa-linux:before {
	content: "\f17c"
}
.fa-dribbble:before {
	content: "\f17d"
}
.fa-skype:before {
	content: "\f17e"
}
.fa-foursquare:before {
	content: "\f180"
}
.fa-trello:before {
	content: "\f181"
}
.fa-female:before {
	content: "\f182"
}
.fa-male:before {
	content: "\f183"
}
.fa-gittip:before {
	content: "\f184"
}
.fa-sun-o:before {
	content: "\f185"
}
.fa-moon-o:before {
	content: "\f186"
}
.fa-archive:before {
	content: "\f187"
}
.fa-bug:before {
	content: "\f188"
}
.fa-vk:before {
	content: "\f189"
}
.fa-weibo:before {
	content: "\f18a"
}
.fa-renren:before {
	content: "\f18b"
}
.fa-pagelines:before {
	content: "\f18c"
}
.fa-stack-exchange:before {
	content: "\f18d"
}
.fa-arrow-circle-o-right:before {
	content: "\f18e"
}
.fa-arrow-circle-o-left:before {
	content: "\f190"
}
.fa-toggle-left:before, .fa-caret-square-o-left:before {
	content: "\f191"
}
.fa-dot-circle-o:before {
	content: "\f192"
}
.fa-wheelchair:before {
	content: "\f193"
}
.fa-vimeo-square:before {
	content: "\f194"
}
.fa-turkish-lira:before, .fa-try:before {
	content: "\f195"
}
/* 0.6 flexslider */

.flex-container a:active, .flexslider a:active, .flex-container a:focus, .flexslider a:focus {
	outline: none
}
.slides, .flex-control-nav, .flex-direction-nav {
	list-style: none;
	margin: 0;
	padding: 0
}
@font-face {
	font-family: flexslider-icon;
	src: url(/font/flexslider-icon.eot?#iefix)format(embedded-opentype), url(/font/flexslider-icon.woff) format(woff), url(/font/flexslider-icon.ttf) format(truetype), url(/font/flexslider-icon.svg#flexslider-icon) format(svg);
	font-weight: 400;
	font-style: normal
}
.flexslider {
	background: #fff;
	border: 4px solid #fff;
	position: relative;
	-webkit-border-radius: 4px;
	-moz-border-radius: 4px;
	-o-border-radius: 4px;
	border-radius: 4px;
	-webkit-box-shadow: 0 1px 4px rgba(0,0,0,.2);
	-moz-box-shadow: 0 1px 4px rgba(0,0,0,.2);
	-o-box-shadow: 0 1px 4px rgba(0,0,0,.2);
	box-shadow: 0 1px 4px rgba(0,0,0,.2);
	zoom: 1;
	margin: 0 0 60px;
	padding: 0
}
.flexslider .slides > li {
	display: none;
	-webkit-backface-visibility: hidden;
}
.flexslider .slides img {
	width: 100%;
	display: block;
}
.flexslider .slides {
	zoom: 1
}
.flexslider:hover .flex-prev {
	opacity: 0.7;
	left: 10px
}
.flexslider:hover .flex-next {
	opacity: 0.7;
	right: 10px
}
.flexslider:hover .flex-next:hover, .flexslider:hover .flex-prev:hover {
	opacity: 1;
}
.flex-pauseplay span {
	text-transform: capitalize
}
.slides:after {
	content: "\0020";
	display: block;
	clear: both;
	visibility: hidden;
	line-height: 0;
	height: 0
}
* html .slides {
	height: 1%
}
.flex-viewport {
	max-height: 2000px;
	-webkit-transition: all 1s ease;
	-moz-transition: all 1s ease;
	-o-transition: all 1s ease;
	transition: all 1s ease
}
.loading .flex-viewport {
	max-height: 300px
}
.carousel li {
	margin-right: 5px
}
.flex-direction-nav {
	height: 0
}
.flex-direction-nav a {
	line-height: 40px;
	display: block;
	width: 40px;
	height: 40px;
	position: absolute;
	top: 40%;
	z-index: 10;
	overflow: hidden;
	opacity: 0;
	cursor: pointer;
	color: rgba(0,0,0,0.8);
	text-shadow: 1px 1px 0 rgba(255,255,255,0.3);
	-webkit-transition: all .3s ease;
	-moz-transition: all .3s ease;
	transition: all .3s ease;
	margin: -20px 0 0
}
.flex-direction-nav .flex-prev {
	left: -50px
}
.flex-direction-nav .flex-next {
	right: -50px;
	text-align: right
}
.flex-direction-nav .flex-disabled {
	opacity: 0!important;
	filter: alpha(opacity=0);
	cursor: default
}
.flex-direction-nav a:before {
	font-family: 'FontAwesome';
	font-size: 40px;
	display: inline-block;
	content: '\f053'
}
.flex-direction-nav a.flex-next:before {
	content: '\f054'
}
.flex-pauseplay a {
	display: block;
	width: 20px;
	height: 20px;
	position: absolute;
	bottom: 5px;
	left: 10px;
	opacity: 0.8;
	z-index: 10;
	overflow: hidden;
	cursor: pointer;
	color: #000
}
.flex-pauseplay a:before {
	font-family: 'flexslider-icon';
	font-size: 20px;
	display: inline-block;
	content: '\f053'
}
.flex-pauseplay a.flex-play:before {
	content: '\f054'
}
.flex-control-nav {
	width: 100%;
	position: absolute;
	bottom: -40px;
	text-align: center
}
.flex-control-nav li {
	zoom: 1;
	display: inline;
	margin: 0 6px
}
.flex-control-paging li a {
	width: 11px;
	height: 11px;
	display: block;
	background: rgba(0,0,0,0.5);
	cursor: pointer;
	text-indent: -9999px;
	-webkit-border-radius: 20px;
	-moz-border-radius: 20px;
	-o-border-radius: 20px;
	border-radius: 20px;
	-webkit-box-shadow: inset 0 0 3px rgba(0,0,0,0.3);
	-moz-box-shadow: inset 0 0 3px rgba(0,0,0,0.3);
	-o-box-shadow: inset 0 0 3px rgba(0,0,0,0.3);
	box-shadow: inset 0 0 3px rgba(0,0,0,0.3)
}
.flex-control-paging li a:hover {
	background: rgba(0,0,0,0.7)
}
.flex-control-paging li a.flex-active {
	background: rgba(0,0,0,0.9);
	cursor: default
}
.flex-control-thumbs {
	position: static;
	overflow: hidden;
	margin: 5px 0 0
}
.flex-control-thumbs li {
	width: 25%;
	float: left;
	margin: 0
}
.flex-control-thumbs img {
	width: 100%;
	display: block;
	opacity: .7;
	cursor: pointer
}
.flex-control-thumbs .flex-active {
	opacity: 1;
	cursor: default
}
html[xmlns] .slides, .no-js .slides > li:first-child {
	display: block
}
.flexslider:hover .flex-next:hover, .flexslider:hover .flex-prev:hover, .flex-pauseplay a:hover, .flex-control-thumbs img:hover {
	opacity: 1
}
@media screen and (max-width: 860px) {
.flex-direction-nav .flex-prev {
opacity:1;
left:10px
}
.flex-direction-nav .flex-next {
opacity:1;
right:10px
}
}
/* -------------------------------------------------------------------------------------------------
0.1 MAIN STYLE
----------------------------------------------------------------------------------------------------*/
body {
	font-family: 'Lato', arial;
	font-size: 14px;
	background: #FFFFFF url('../images/patterns/5.png') repeat;
}
a {
	color: #FFFFFF;
}
h1, h2, h3, h4, h5, h6 {
	font-family: 'Lato', arial;
	margin-bottom: 14px;
	margin-top: 14px;
}
.clear {
	clear: both;
}
.white {
	background: #FFFFFF !important;
}
.black {
	background: #000000 !important;
}
h3.blocktitle {
	background: #F8F8F8;
	height: 50px;
	line-height: 50px;
	overflow: hidden;
	padding-left: 20px;
	margin-top: 0px;
	border-bottom: 1px solid #EBEBEB;
	border-top: 1px solid #EBEBEB;
	margin-bottom: 20px;
}
h3.blocktitle span {
	text-align: right;
	float: right;
	padding: 0 20px 0 0;
	color: #FF0000;
	font-size: 14px;
}
h3.blocktitle span a {
	color: #FF0000;
}
#singlepost p {
	font-weight: normal;
	font-size: 14px;
	line-height: 24px;
	margin-bottom: 17px;
	font-family: 'Open Sans', sans-serif;
}
#maincontainer {
	background: #FFFFFF;
}
#maincontainer .tabs a {
	color: #000000;
}
#maincontainer a.button {
	color: #FFFFFF;
	border: 0px solid #1e728c;
	-webkit-box-shadow: 0 0px 0 rgba(255,255,255,0.5) inset;
	-moz-box-shadow: 0 0px 0 rgba(255,255,255,0.5) inset;
	box-shadow: 0 0px 0 rgba(255,255,255,0.5) inset;
}
dl.tabs {
	margin-bottom: 0px;
}
.tabs dd a {
}
ul.tabs-content {
	display: block;
	margin: 0 0 20px;
	padding: 20px;
	border-left: 1px solid #E6E6E6;
	border-right: 1px solid #E6E6E6;
	border-bottom: 1px solid #E6E6E6;
}
.tabs dd.active, .tabs li.active {
	border-top: 3px solid #F33C3C;
	margin-top: -3px;
}
ul.accordion>li.active {
	border-top: 3px solid #F33C3C;
}
ul.breadcrumbs {
	opacity: 0;
	margin-bottom: 0px;
	border-top: 0px;
	padding: 6px 10px 7px 20px;
}
ul.breadcrumbs a {
	color: #FF0000;
}
ul.breadcrumbs li:hover a, ul.breadcrumbs li a:focus {
	text-decoration: none;
	font-family: 'Lato';
}
ul.breadcrumbs a:hover {
	color: #000000;
}
.postrate {
	right: 0px;
	padding: 20px;
	color: #FFFFFF;
	font-size: 24px;
	background: #000000;
	width: 80px;
	text-align: center;
	line-height: 30px;
}
.postrate i {
	color: #FF0000;
}
ul.pagination {
	padding: 0 20px;
	margin-bottom: 40px;
	margin-top: 30px;
}
ul.pagination li.current a {
	background: #FF0000;
}
ul.pagination li.current a:hover {
	background: #000 !important;
}
#maincontainer ul.pagination li.current a {
	color: #FFFFFF;
}
#maincontainer ul.pagination li a {
	padding: 10px 17px;
}
/* -------------------------------------------------------------------------------------------------
0.2 HEADER STYLE ( top-bar, main navi, off canvas navigaiton, dropdown )
----------------------------------------------------------------------------------------------------*/

.top-bar {
	background: #000;
	height: 45px;
	line-height: 45px;
	margin: 0 0 0px 0;
	font-family: 'Lato';
}
.top-bar ul {
	line-height: 45px;
	height: 45px;
}
.top-bar ul>li a:not(.button) {
	color: #fff;
	display: block;
	font-size: 14px;
	font-weight: normal;
	height: 45px;
	line-height: 45px;
	padding: 0 15px;
}
.top-bar ul>li {
	border-right: solid 1px #333;
}
.top-bar ul>li:not(.name):hover, .top-bar ul>li:not(.name).active, .top-bar ul>li:not(.name):focus {
	background: #202020;
}
.top-bar ul.right {
	text-align: right;
}
.top-bar ul>li.has-dropdown a {
	padding-left: 35px;
	padding-right: 35px;
}
.top-bar ul>li ul.dropdown li a {
	padding: 10px 35px !important;
}
.nav-bar {
	height: 55px;
	background: #000000;
	margin-top: 10px;
}
.nav-bar li img.logo {
	margin: 13px 0 0 0;
	float: left;
}
.nav-bar>li:hover.logo {
	background: none;
}
.nav-bar>li.logos:hover {
	height: 55px;
	background: #000000;
}
.nav-bar>li {
	line-height: 55px;
	border: none;
}
ul#logos {
	display: none;
}
.nav-bar>li>a:first-child {
	position: relative;
	padding: 0 20px;
	display: block;
	text-decoration: none;
	font-size: 18px;
	text-transform: uppercase;
	font-family: 'Lato', arial;
	font-weight: 100;
	font-weight: 400 !important;
}
.nav-bar>li:last-child, .nav-bar>li {
	border-right: none;
	-webkit-box-shadow: none;
	box-shadow: none;
}
.nav-bar>li>a {
	font-weight: 400 !important;
}
ul.nav-bar {
	margin-bottom: 0px;
}
ul.link-list {
	padding-left: 10px;
}
ul#mainnav.nav-bar > li {
	border-right: 1px solid #333;
}
ul#barnav.nav-bar > li {
	border-right: 0px solid #333;
}
/*** ESSENTIAL STYLES ***/
.sf-menu, .sf-menu * {
	margin: 0;
	padding: 0;
	list-style: none;
}
.sf-menu li {
	position: relative;
}
.sf-menu ul {
	position: absolute;
	display: none;
	top: 100%;
	left: 0;
	z-index: 9999;
}
.sf-menu > li {
	float: left;
}
.sf-menu li:hover > ul, .sf-menu li.sfHover > ul {
	display: block;
}
.sf-menu a {
	display: block;
	position: relative;
}
.sf-menu ul ul {
	top: 0;
	left: 100%;
}
/*** SKIN EXTRA NEWS  ***/
.sf-menu {
	float: left;
	margin-bottom: 1em;
}
.sf-menu ul {
	box-shadow: 2px 2px 6px rgba(0,0,0,.2);
	min-width: 15em; /* allow long menu items to determine submenu width */
 *width: 15em; /* no auto sub width for IE7, see white-space comment below */
}
.sf-menu a {
	border-right: 1px solid #333;
	border-top: 0px solid #333; /* fallback colour must use full shorthand */
	border-top: 0px solid rgba(255,255,255,.5);
	padding: .75em 1em;
	text-decoration: none;
	zoom: 1; /* IE7 */
}
.sf-menu a {
	color: #FFFFFF;
}
.sf-menu li {
	background: #000000;
	white-space: nowrap; /* no need for Supersubs plugin */
 *white-space: normal; /* ...unless you support IE7 (let it wrap) */
	-webkit-transition: background .2s;
	transition: background .2s;
}
.sf-menu ul li {
	background: #000000;
}
.sf-menu ul ul li {
	background: #000000;
}
.sf-menu li:hover, .sf-menu li.sfHover {
	background: #202020;
	/* only transition out, not in */
	-webkit-transition: none;
	transition: none;
}
/*** arrows (for all except IE7) **/
.sf-arrows .sf-with-ul {
	padding-right: 2.5em;
 *padding-right: 1em; /* no CSS arrows for IE7 (lack pseudo-elements) */
}
/* styling for both css and generated arrows */
.sf-arrows .sf-with-ul:after {
	content: '';
	position: absolute;
	top: 50%;
	right: 1em;
	margin-top: -3px;
	height: 0;
	width: 0;
	/* order of following 3 rules important for fallbacks to work */
	border: 5px solid transparent;
	border-top-color: #333; /* edit this to suit design (no rgba in IE8) */
	border-top-color: rgba(255,255,255,.5);
}
.sf-arrows > li > .sf-with-ul:focus:after, .sf-arrows > li:hover > .sf-with-ul:after, .sf-arrows > .sfHover > .sf-with-ul:after {
	border-top-color: white; /* IE8 fallback colour */
}
/* styling for right-facing arrows */
.sf-arrows ul .sf-with-ul:after {
	margin-top: -5px;
	margin-right: -3px;
	border-color: transparent;
	border-left-color: #333; /* edit this to suit design (no rgba in IE8) */
	border-left-color: rgba(255,255,255,.5);
}
.sf-arrows ul li > .sf-with-ul:focus:after, .sf-arrows ul li:hover > .sf-with-ul:after, .sf-arrows ul .sfHover > .sf-with-ul:after {
	border-left-color: #333;
}
#tobar {
	left: -10px;
}
#topsearch {
	float: right;
}
.topbar {
	background: #000;
	height: 45px;
	line-height: 45px;
	margin: 0 0 0px 0;
	font-family: 'Lato';
}
/*** mega menu dropdown ***/
.sf-mega {
	background-color: #CFDEFF;
	padding: 1em;
	box-sizing: border-box;
	width: 100%;
}
.sf-mega-section {
	float: left;
	width: 8em; /* optional */
	padding: 0 1em 1em 0;
	margin-right: 1em;
	border-right: 1px solid #b4c8f5;
}
.sf-mega {
}
.sf-mega ul {
	list-style-type: auto;
	margin: 0;
	padding-left: 1.2em;
}
.sf-mega li {
	margin-left: 0;
}
/*===================== DROPDOWN MENU NAVBAR ====================*/
.mainbar {
	background: #000;
	height: 55px;
	line-height: 55px;
	margin: 10px 0 0px 0;
	font-family: 'Lato';
}
#mainbar img.logo {
	line-height: 55px;
	padding: 13px 0 0 5px;
}
.mainbar .sf-arrows .sf-with-ul:after, .mainbar .sf-arrows ul li:hover > .sf-with-ul:after, .mainbar .sf-arrows ul .sfHover > .sf-with-ul:after {
	margin-top: -2px;
/*	border: 5px solid #FF0000 !important;
	border-top-color: none !important;
	border-top-color: none !important;*/
	right: 4px;
}
ul #mainnav li {
	display: block;
}
.nav-bar>li .flyout {
	margin-top: 0px;
	top: 55px;
}
ul.flyout li, .nav-bar li ul li {
	border-left: solid 0px #ccc;
}
.nav-bar>li.active {
	background: #FF0000;
	border-color: #6D0000;
}
.nav-bar>li.has-flyout>a:first-child:after {
	content: "";
	display: block;
	width: 0;
	height: 0;
	border: solid 4px;
	border-color: #FF0000;
	position: absolute;
	right: 20px;
	top: 23px;
}
.nav-bar>li.active:hover {
	background: #AD0000;
	cursor: default;
}
.flyout.fullwidth {
	width: 1170px;
	right: -132px;
}
.flyout.halfwidth {
	width: 550px;
	right: -312px;
}
.flyout img {
	width: 100%;
}
.has-dropdown .dropdown {
	display: block;
	visibility: hidden;
	opacity: 0;
}
.has-dropdown:hover > .dropdown {
	visibility: visible;
	opacity: 1;
}
.icon-ph {
	display: inline-block;
	width: auto;
	height: auto;
	min-width: 16px;
	padding: 4px 5px;
	font-size: 14px;
	font-weight: normal;
	line-height: 20px;
	text-align: center;
	text-shadow: 0 1px 0 #ffffff;
	position: absolute;
	right: 3px;
	top: 2px;
	bottom: 3px;
	z-index: 3;
}
input.custom-text {
	padding: 6px 6px 6px 6px !important;
	margin: 0px !important;
	-webkit-transition: all 0.5s ease-in-out;
	-moz-transition: all 0.5s ease-in-out;
	-o-transition: all 0.5s ease-in-out;
	-ms-transition: all 0.5s ease-in-out;
}
input.custom-text:focus {
	padding: 6px 60px 6px 6px !important;
}
.input-container {
	position: relative;
	margin: 5px 5px;
}
/*========================= OFF CANVAS MENUS ===================  */
#container {
	position: relative;
	overflow: hidden;
}
/* Menu Button */
.menu-btn {
	padding: 0px;
	background: #000;
	color: #FFF;
	text-align: center;
	cursor: pointer;
	display: none;
	font-size: 30px;
	width: 20px;
	float: right;
	margin-right: 30px;
}
.menu-btn:hover {
	background: #00b4ff;
	color: #FFF;
}
/*! Pushy - v0.9.1 - 2013-9-16
* Pushy is a responsive off-canvas navigation menu using CSS transforms & transitions.
* https://github.com/christophery/pushy/
* by Christopher Yee */

/* Menu Appearance */
.pushy {
	position: fixed;
	width: 200px;
	height: 100%;
	top: 0;
	z-index: 9999;
	background: #333332;
	font-size: 0.9em;
	font-weight: bold;
	-webkit-box-shadow: inset -10px 0 6px -9px rgba(0, 0, 0, .7);
	-moz-box-shadow: inset -10px 0 6px -9px rgba(0, 0, 0, .7);
	box-shadow: inset -10px 0 6px -9px rgba(0, 0, 0, .7);
	overflow: auto;
	-webkit-overflow-scrolling: touch; /* enables momentum scrolling in iOS overflow elements */
}
.pushy a {
	display: block;
	color: #b3b3b1;
	padding: 15px 30px;
	border-bottom: 1px solid rgba(0, 0, 0, .1);
	border-top: 1px solid rgba(255, 255, 255, .1);
	text-decoration: none;
}
.pushy a:hover {
	background: #00b4ff;
	color: #FFF;
}
/* Menu Movement */

.pushy-left {
	-webkit-transform: translate3d(-200px, 0, 0);
	-moz-transform: translate3d(-200px, 0, 0);
	-ms-transform: translate3d(-200px, 0, 0);
	-o-transform: translate3d(-200px, 0, 0);
	transform: translate3d(-200px, 0, 0);
}
.pushy-open {
	-webkit-transform: translate3d(0, 0, 0);
	-moz-transform: translate3d(0, 0, 0);
	-ms-transform: translate3d(0, 0, 0);
	-o-transform: translate3d(0, 0, 0);
	transform: translate3d(0, 0, 0);
}
.container-push, .push-push {
	-webkit-transform: translate3d(200px, 0, 0);
	-moz-transform: translate3d(200px, 0, 0);
	-ms-transform: translate3d(200px, 0, 0);
	-o-transform: translate3d(200px, 0, 0);
	transform: translate3d(200px, 0, 0);
}
/* Menu Transitions */

.pushy, #container, .push {
	-webkit-transition: -webkit-transform .2s cubic-bezier(.16, .68, .43, .99);
	-moz-transition: -moz-transform .2s cubic-bezier(.16, .68, .43, .99);
	-o-transition: -o-transform .2s cubic-bezier(.16, .68, .43, .99);
	transition: transform .2s cubic-bezier(.16, .68, .43, .99);
	/* improves performance issues on mobile*/
	-webkit-backface-visibility: hidden;
	-webkit-perspective: 1000;
}
/* Site Overlay */
.site-overlay {
	display: none;
}
.pushy-active .site-overlay {
	display: block;
	position: fixed;
	top: 0;
	right: 0;
	bottom: 0;
	left: 200px;
	z-index: 9999;
}
.pushy {
	overflow: hidden;
}
.pushy ul li ul {
	margin-left: 0px;
}
.pushy ul li ul li {
	list-style: none;
	background: #242424;
}
.pushy ul li ul.dropdown li a:before {
	content: "";
	display: block;
	width: 0;
	height: 0;
	border: solid 4px;
	border-color: #FF0000;
	position: absolute;
	right: 20px;
	top: 23px;
}
/* ==================  NEWSTICKER STYLE ================== */
.trending {
	text-transform: uppercase;
	margin: -7px 0 0 -15px;
	font-weight: bold;
}
.tickercontainer { /* the outer div with the black border */
	background: #fff;
	margin: 0;
	padding: 0;
	overflow: hidden;
	margin: -10px 0 0 0;
}
.tickercontainer .mask { /* that serves as a mask. so you get a sort of padding both left and right */
	position: relative;
	overflow: hidden;
}
ul.newsticker { /* that's your list */
	position: relative;
	left: 750px;
	font: bold 10px Verdana;
	list-style-type: none;
	margin: 0;
	padding: 0;
}
ul.newsticker li {
	float: left; /* important: display inline gives incorrect results when you check for elem's width */
	margin: 0;
	padding: 0;
	background: #fff;
}
ul.newsticker a {
	//white-space: nowrap;
	padding: 0;
	color: #ff0000;
	font: bold 10px Verdana;
	margin: 0 50px 0 0;
}
ul.newsticker span {
	margin: 0 10px 0 0;
	font: bold 10px Verdana;
}
/* -------------------------------------------------------------------------------------------------
0.3 SLIDER STYLE ( big slider, features post, top cat, last post)
----------------------------------------------------------------------------------------------------*/
#catslide {
	background: #000000;
	min-height: 476px;
	margin-bottom: 1px;
	padding: 10px;
	margin-top: 20px;
}
.orbit-wrapper .slider-nav span.right {
	right: -45px;
	background-color: #000000;
}
.orbit-wrapper .slider-nav span.left {
	left: -45px;
	background-color: #000000;
}
.titlefeatured {
	background: #000000;
	min-height: 45px;
	margin-bottom: 1px;
}
.catf {
	width: 488px;
	float: left;
}
.catf .catf-caption {
	position: absolute;
	z-index: 2;
	margin-top: -170px;
	width: 430px;
}
.catf .catf-caption h2 {
	font-family: 'Lato', arial;
	font-size: 36px;
	line-height: 36px;
	background: #000000;
	color: #FFFFFF;
	margin-left: 14px;
	padding: 10px;
}
.catf .catf-caption span.meta {
	background: #ff0000;
	color: #FFFFFF;
	font-size: 12px;
	margin-left: 14px;
	padding: 5px 10px 5px 5px;
	line-height: 16px;
}
.catf-format {
	position: absolute;
	z-index: 2;
	margin-left: 14px;
	color: #FFFFFF;
	text-align: center;
}
.catf-format .fp {
	width: 50px;
	height: 50px;
	background: #ff0000;
	padding: 10px;
	font-size: 28px;
}
.catf-format .fdate {
	width: 50px;
	height: 50px;
	background: #000000;
	font-size: 24px;
	font-weight: 600;
	line-height: 14px;
	padding-top: 10px;
}
.catf-format .fdate span {
	font-size: 12px;
}
.listcat {
	width: 270px;
	float: left;
	padding: 15px;
	height: 455px;
	overflow: visible;
	background: #212121;
}
.title-catf, .title-topcat {
	font-family: 'Lato', arial;
	color: #FFFFFF;
	font-size: 24px;
	font-weight: 600;
}
ul.list-latestcat {
	margin-top: 20px;
	margin-bottom: 0px;
}
ul.list-latestcat li {
	padding: 19px 0 19px 0;
	border-top: 1px solid #3d3d3d;
	font-size: 18px;
	line-height: 20px;
	list-style: none;
}
ul.list-latestcat li a {
	color: #a1a1a1;
}
ul.list-latestcat li a:hover {
	color: #FFFFFF;
}
.topcat {
	width: 380px;
	float: left;
	margin: 0 0px 0 10px;
	background: #ff0000;
	height: 455px;
	overflow: visible;
	overflow: hidden;
}
#slider {
	height: 455px !important;
}
.imggallery #slider {
	height: 455px !important;
}
#en_slide .orbit-wrapper .slider-nav span.right {
	right: 0px;
	background-color: #000000;
}
#en_slide .orbit-wrapper .slider-nav span.left {
	left: 0px;
	background-color: #000000;
}
#catslide ul {
	margin-left: 0px !important;
}
ul.list-topcat li {
	line-height: 0px;
	list-style: none;
}
ul.list-topcat li .caption-text {
	line-height: 18px;
}
.title-topcat {
	line-height: 52px;
	border-left: 3px solid #FFFFFF;
	margin: 10px 10px 10px 10px;
	padding: 10px 10px 10px 10px;
}
.topcat img {
	height: 121px;
	width: 380px;
}
.topcat .tthumb {
	position: relative;
}
.topcat .tthumb img {
	-webkit-transition: all 0.5s ease-in-out;
	-moz-transition: all 0.5s ease-in-out;
	-o-transition: all 0.5s ease-in-out;
	-ms-transition: all 0.5s ease-in-out;
}
.topcat .tthumb img:hover {
}
.topcat .tthumb .overlay {
	position: absolute;
	top: 0;
	padding: 0px;
	color: #FFFFFF;
	width: 100%;
}
.topcat .overlay .number {
	width: 65px;
	overflow: hidden;
	height: 50px;
	line-height: 48px;
	background: #ff0000;
	margin-top: 10%;
	font-size: 48px;
	font-weight: 300;
	float: left;
	padding-left: 5px;
}
ul#slider {
	margin-bottom: 0;
}
.cright {
	width: 100px;
	float: right;
	text-align: right;
	font-size: 32px;
}
.rate {
	font-size: 36px;
	line-height: 36px;
	padding: 10px;
}
.stars {
	padding: 30px 10px 10px 10px;
}
a > .number:hover {
	color: #FFFFFF;
}
/* -------------------------------------------------------------------------------------------------
0.4 CAROUSEL FEATURED STYLE
----------------------------------------------------------------------------------------------------*/
.tcarousel {
	background: #000000;
	height: 45px;
	margin-top: 20px;
}
.titlefeatured {
	font-size: 24px;
	font-family: 'Lato';
	color: #FFFFFF;
	line-height: 45px;
	padding: 0 0 0 10px;
	width: 200px;
	float: left;
}
ul.nav-carousel {
	margin-bottom: 0px;
}
ul.nav-carousel li {
	float: left;
	list-style: none;
	line-height: 45px;
	padding: 0 10px;
}
ul.nav-carousel li a {
	text-decoration: none;
}
ul.nav-carousel li > a:before {
	content: "/\00a0";
	font-weight: bold;
	position: relative;
	left: -9px;
}
ul.nav-carousel li:first-child > a:before {
	content: " ";
	font-weight: bold;
	position: relative;
	left: -9px;
}
#mixedContent .overlay, #mixedContent .overlay-active {
	height: 100%;
	width: 100%;
	margin-top: -172px;
	color: #FFFFFF;
	padding: 0 10px 10px 10px;
	position: absolute;
}

.meta-carousel {
	text-align: right;
}
.rate-carousel {
	text-align: right;
	font-size: 44px;
	line-height: 44px;
}
.title-carousel {
	margin-top: 20px;
	padding: 10px;
	bottom: 30px;
	position: absolute;
	width: 270px;
}
.title-carousel a .ticarousel:hover {
	color: #FFFFFF;
}
.ticarousel {
	border-left: 3px solid #FF0000;
	padding: 10px;
	margin-left: 10px;
}
#mixedContent .overlay:hover > .title-carousel > a .ticarousel {
	border-left: 3px solid #FFFFFF !important;
}
#mixedContent .overlay:hover > .title-carousel {
	background: #FF0000;
}
#mixedContent .overlay-active > .title-carousel {
	background: #FF0000;
	opacity: 0.5;
}
#mixedContent .overlay-active .title-carousel > a .ticarousel {
	border-left: 3px solid #FFFFFF !important;
}

#mixedContent3 .overlay:hover > .title-carousel > a .ticarousel {
	border-left: 3px solid #FFFFFF !important;
}
#mixedContent3 .overlay:hover > .title-carousel {
	background: #FF0000;
}
#mixedContent3 .overlay-active > .title-carousel {
	background: #FF0000;
	opacity: 0.5;
}
#mixedContent3 .overlay-active .title-carousel > a .ticarousel {
	border-left: 3px solid #FFFFFF !important;
}


#makeMeScrollable {
	width: 100%;
	height: 330px;
	position: relative;
}
#makeMeScrollable2 {
	width: 100%;
	height: 330px;
	position: relative;
}

#makeMeScrollable3 {
	width: 100%;
	height: 330px;
	position: relative;
}
/* Replace the last selector for the type of element you have in
   your scroller. If you have div's use #makeMeScrollable div.scrollableArea div,
   if you have links use #makeMeScrollable div.scrollableArea a and so on. */
#makeMeScrollable div.scrollableArea img {
	position: relative;
	float: left;
	margin: 0;
	padding: 0;
	/* If you don't want the images in the scroller to be selectable, try the following
	   block of code. It's just a nice feature that prevent the images from
	   accidentally becoming selected/inverted when the user interacts with the scroller. */
	-webkit-user-select: none;
	-khtml-user-select: none;
	-moz-user-select: none;
	-o-user-select: none;
	user-select: none;
}
#makeMeScrollable2 div.scrollableArea img {
	position: relative;
	float: left;
	margin: 0;
	padding: 0;
	/* If you don't want the images in the scroller to be selectable, try the following
	   block of code. It's just a nice feature that prevent the images from
	   accidentally becoming selected/inverted when the user interacts with the scroller. */
	-webkit-user-select: none;
	-khtml-user-select: none;
	-moz-user-select: none;
	-o-user-select: none;
	user-select: none;
}
#makeMeScrollable3 div.scrollableArea img {
	position: relative;
	float: left;
	margin: 0;
	padding: 0;
	/* If you don't want the images in the scroller to be selectable, try the following
	   block of code. It's just a nice feature that prevent the images from
	   accidentally becoming selected/inverted when the user interacts with the scroller. */
	-webkit-user-select: none;
	-khtml-user-select: none;
	-moz-user-select: none;
	-o-user-select: none;
	user-select: none;
}

#mixedContent {
	width: 100%;
	height: 172px;
	position: relative;
	display: block;
	margin-bottom: 1px;
}
#mixedContent .contentBox {
	position: relative;
	float: left;
	display: block;
	height: 172px;
	width: 291px;
	border: solid 0px #ccc;
	margin: 0px 1px;
	background: #000000;
	/* If you don't want the images in the scroller to be selectable, try the following
	   block of code. It's just a nice feature that prevent the images from
	   accidentally becoming selected/inverted when the user interacts with the scroller. */
	-webkit-user-select: none;
	-khtml-user-select: none;
	-moz-user-select: none;
	-o-user-select: none;
	user-select: none;
}
#mixedContent .contentBox .img_bckg {
	margin-bottom: 10px;
	width: 100%;
	opacity: 0.5;
}
#mixedContent .overlay:hover > .contentBox .img_bckg {
	opacity: 1;
	-webkit-transition: all 0.5s ease-in-out;
	-moz-transition: all 0.5s ease-in-out;
	-o-transition: all 0.5s ease-in-out;
	-ms-transition: all 0.5s ease-in-out;
}
#mixedContent .contentBox p {
	font-size: 10px;
}

#mixedContent3 {
	width: 100%;
	height: 172px;
	position: relative;
	display: block;
	margin-bottom: 1px;
}
#mixedContent3 .contentBox3 {
	position: relative;
	float: left;
	display: block;
	height: 172px;
	width: 130px;
	border: solid 0px #ccc;
	margin: 0px 1px;
	background: #000000;
	/* If you don't want the images in the scroller to be selectable, try the following
	   block of code. It's just a nice feature that prevent the images from
	   accidentally becoming selected/inverted when the user interacts with the scroller. */
	-webkit-user-select: none;
	-khtml-user-select: none;
	-moz-user-select: none;
	-o-user-select: none;
	user-select: none;
}
#mixedContent3 .contentBox3 .img_bckg {
	margin-bottom: 10px;
	width: 100%;
	opacity: 0.5;
}
#mixedContent3 .overlay:hover > .contentBox3 .img_bckg {
	opacity: 1;
	-webkit-transition: all 0.5s ease-in-out;
	-moz-transition: all 0.5s ease-in-out;
	-o-transition: all 0.5s ease-in-out;
	-ms-transition: all 0.5s ease-in-out;
}
#mixedContent3 .contentBox3 p {
	font-size: 10px;
}
#mixedContent3 .overlay .title-carousel{ width:123px;}


#maincontainer {
	border: 1px solid #d6d6d6;
	position: relative;
	overflow: hidden;
}
/* -------------------------------------------------------------------------------------------------
0.5 MAINCONTENT STYLE
----------------------------------------------------------------------------------------------------*/
#content {
	border-right: 0px solid #d6d6d6;
	overflow: hidden;
}
#content.archive {
	border-right: 0px;
}
ul#ticker01 {
	opacity: 0;
}
.toppage {
	bottom: 0;
	float: right;
	text-align: right;
	font-size: 20px;
	color: #808080;
}
.itemblog .overlay {
	position: absolute;
	top: 0;
	float: right;
	text-align: right;
	width: 100%;
	padding: 20px;
	color: #FFFFFF;
}
#maincontainer {
	margin-top: 20px;
}
#maincontainer .column, #maincontainer .columns {
	padding: 0px;
}
p.meta-date {
	margin-bottom: 0px;
	margin-top: 15px;
	text-transform: uppercase;
	font-style: normal;
	font-size: 12px;
	color: #999999;
}
.panel {
	margin: 0px;
}
/* 5.1 ===================== list news ====================== */
.lthumb {
	width: 354px;
	height: 280px;
	overflow: hidden;
	float: left;
	margin-right: 20px;
}
h2.ntitle {
	font-size: 24px;
	display: inline;
}
#maincontainer a {
	color: #FF0000;
}
#maincontainer h2 a {
	color: #000000;
}
#maincontainer h2 a:hover {
	color: #FF0000;
}
#listnews ul li {
	padding: 0px 20px 20px 20px;
	margin-top: 20px;
	/*	min-height: 280px;*/
	overflow: hidden;
	border-bottom: 1px solid #d6d6d6;
	list-style: none;
}
#listnews .lthumb, #catnews .lthumb {
	position: relative;
}
#listnews.imgblock .lthumb {
	width: 100%;
}
#listnews .lthumb .overlay, #catnews .lthumb .overlay {
	position: absolute;
	top: 0;
	padding: 20px;
	text-align: right;
	color: #FFFFFF;
	right: 0;
}
#listnews ul li:first-child {
	margin-top: 0px;
}
#listnews ul li:last-child {
	border-bottom: 0px solid #d6d6d6;
}
#maincontainer #listnews ul {
	margin-bottom: 0px;
}
#maincontainer .blogtwo {
	padding: 0px 20px 20px 20px;
	overflow: hidden;
}
#maincontainer .blogtwo .columns {
	padding: 10px;
}
/* ===================== IMAGE HOVER STYLE  ======================= */
.lthumb, .thumb {
	position: relative;
	overflow: hidden;
	margin-bottom: 25px;
	cursor: pointer;
}
.hover-wrap a {
	color: #FFFFFF !important;
}
.lthumb img, .thumb img {
	width: 100%;
}
.lthumb .hover-wrap, .thumb .hover-wrap {
	position: absolute;
	display: block;
	width: 100%;
	height: 100%;
	opacity: 0;
	filter: alpha(opacity=0);
	-webkit-transition: all 450ms ease-out 0s;
	-moz-transition: all 450ms ease-out 0s;
	-o-transition: all 450ms ease-out 0s;
	transition: all 450ms ease-out 0s;
	-webkit-transform: rotateY(180deg) scale(0.5, 0.5);
	-moz-transform: rotateY(180deg) scale(0.5, 0.5);
	-ms-transform: rotateY(180deg) scale(0.5, 0.5);
	-o-transform: rotateY(180deg) scale(0.5, 0.5);
	transform: rotateY(180deg) scale(0.5, 0.5);
}
.lthumb:hover .hover-wrap, .lthumb.active .hover-wrap, .thumb:hover .hover-wrap, .thumb.active .hover-wrap {
	opacity: 1;
	filter: alpha(opacity=100);
	-webkit-transform: rotateY(0deg) scale(1, 1);
	-moz-transform: rotateY(0deg) scale(1, 1);
	-ms-transform: rotateY(0deg) scale(1, 1);
	-o-transform: rotateY(0deg) scale(1, 1);
	transform: rotateY(0deg) scale(1, 1);
}
.lthumb .hover-wrap .overlay-img, .thumb .hover-wrap .overlay-img {
	position: absolute;
	width: 100%;
	height: 100%;
	background: #DE5E60;
	opacity: 0.80;
	filter: alpha(opacity=80);
}
.lthumb .hover-wrap .overlay-text-thumb, .thumb .hover-wrap .overlay-text-thumb {
	position: absolute;
	width: 100%;
	height: 32px;
	top: 50%;
	margin: -16px 0 0 0;
	color: #FFFFFF;
	font-size: 20px;
	font-weight: 300;
	line-height: 32px;
	text-transform: uppercase;
	text-align: center;
	opacity: 1;
	filter: alpha(opacity=100);
}
.overlay > .fa {
	-webkit-transition: all 450ms ease-out 0s;
	-moz-transition: all 450ms ease-out 0s;
	-o-transition: all 450ms ease-out 0s;
	transition: all 450ms ease-out 0s;
	-webkit-transform: rotateY(180deg) scale(0.5, 0.5);
	-moz-transform: rotateY(180deg) scale(0.5, 0.5);
	-ms-transform: rotateY(180deg) scale(0.5, 0.5);
	-o-transform: rotateY(180deg) scale(0.5, 0.5);
	transform: rotateY(180deg) scale(0.5, 0.5);
}
.overlay:hover > .fa {
	-webkit-transform: rotateY(180deg) scale(0.5, 0.5);
	-moz-transform: rotateY(180deg) scale(0.5, 0.5);
	-ms-transform: rotateY(180deg) scale(0.5, 0.5);
	-o-transform: rotateY(180deg) scale(0.5, 0.5);
	transform: rotateY(180deg) scale(0.5, 0.5);
}
/* ============ LIST BLOCK CONTENT CATEGORY  =========================== */

.othercat {
	margin-top: 20px;
	overflow: hidden;
}
.otitle {
	border-bottom: 1px solid #d6d6d6;
	line-height: 18px;
	margin-bottom: 10px;
	font-weight: 600;
	padding-bottom: 10px;
}
ul.oc-horizon li {
	list-style: none;
	float: left;
	width: 50%;
	font-weight: 600;
	padding-bottom: 20px;
}
ul.oc-horizon li img {
	width: 80px;
	height: 80px;
	overflow: visible;
	float: left;
	margin-right: 10px;
}
ul.oc-horizon li .desc {
	display: inline;
}
ul.oc-horizon li .desc h4 {
	font-size: 16px;
	margin-top: 5px;
}
.othercat h4 a {
	color: #000000 !important;
}
.othercat h4 a:hover {
	color: #FF0000 !important;
}
/* ============== LIST BLOCK CONTENT CATEGORY TYPE 2 =========================== */
#cat2news {
	overflow: hidden;
}
#cat2news .featured {
	float: left;
	width: 50%;
	margin-right: 2%;
	padding-right: 0px;
	position: relative;
}
#cat2news .featured img {
	width: 100%;
}
#cat2news .thumb {
	width: 100%;
	height: 175px;
	overflow: hidden;
}
#cat2news .title-carousel {
	background: rgba(0,0,0,0.5);
	position: relative;
	width: 320px;
	margin-top: 50px;
}
#cat2news .othercat {
	float: left;
	width: 48%;
	padding-left: 10px;
}
#cat2news .ticarousel {
	padding: 0px 0px 10px 10px;
	font-size: 18px;
}
#cat2news .othercat {
	margin-top: 0px;
}
#cat2news ul.oc-horizon li {
	width: 100%;
}
#cat2news .overlay {
	top: 0px;
	position: absolute;
	color: #FFFFFF;
	padding: 20px 20px 20px 20px;
}
.line1 {
	border-bottom: 1px solid #d6d6d6;
	height: 1px;
	line-height: 1px;
}
.itemblog {
	border: 1px solid #d6d6d6;
	overflow: hidden;
}
.itemblog .excerpt {
	padding: 10px;
}
/* 5.2 ============== POST CONTENT ======================== */

#singlepost {
	border-right: 0px solid #d6d6d6;
}
#singlepost header {
	position: relative;
}
#singlepost .loverate a {
	color: #FFFFFF;
}
#singlepost .loverate:hover {
	background: #000000;
}
#singlepost .loverate {
	position: absolute;
	top: 0;
	right: 40px;
	height: 95px;
	width: 60px;
	background: #FF0000;
	text-align: center;
	padding-top: 45px;
	color: #FFFFFF;
	font-size: 32px;
	margin-top: -20px;
}
#singlepost header h1 {
	padding: 0px 20px;
	font-family: 'Lato', arial;
	font-weight: normal;
	font-size: 34px;
	border-left: 5px solid #FF0000;
	margin-left: 20px;
	margin-top: 20px;
	max-width: 900px;
	min-height: 66px;
}
#singlepost .postmeta {
	background: #f5f5f5;
	line-height: 18px;
	padding: 10px 20px;
	overflow: hidden;
}
#singlepost .postmeta .meta-date {
	width: 50%;
	float: left;
	font-size: 14px;
}
#singlepost .postmeta .share-post {
	width: 50%;
	float: right;
	text-align: right;
	font-weight: bold;
}
#singlepost .postmeta .share-post a {
	color: #000000;
	padding: 0 10px;
}
#singlepost .postmeta .share-post a:hover {
	color: #FF0000;
}
#singlepost .post-authorthumb {
	width: 12%;
	margin: 20px 0px 20px 20px;
	float: left;
}
#singlepost .post-authorthumb h5 {
	margin-top: 5px;
	font-size: 14px;
}
#singlepost .post-content {
	margin-top: auto;
	width: 85%;
	float: right;
	padding: 20px;
}
#singlepost .post-author {
	border-top: 1px solid #d6d6d6;
	padding: 20px;
	overflow: hidden;
}
#singlepost .post-author .at-thumb {
	width: 80px;
	margin-right: 20px;
	float: left;
}
#singlepost .post-author .at-name {
	font-size: 16px;
	font-weight: bold;
	margin-bottom: 10px;
}
#singlepost .post-author .at-text p {
	line-height: 18px;
}
.imgpost img, .banner8 img {
	width: 100%;
}
.vidpost {
	width: 100%;
	height: 350px;
	max-height: 650px;
}
#singlepost img.alignright {
	float: right;
	margin: 0 0 1em 1em;
}
#singlepost img.alignleft {
	float: left;
	margin: 0 1em 1em 0;
}
#singlepost img.aligncenter {
	display: block;
	margin-left: auto;
	margin-right: auto
}
#singlepost a img.alignright {
	float: right;
	margin: 0 0 1em 1em;
}
#singlepost a img.alignleft {
	float: left;
	margin: 0 1em 1em 0;
}
#singlepost a img.aligncenter {
	display: block;
	margin-left: auto;
	margin-right: auto;
}
#singlepost .imggallery .flexslider {
	margin: 0 0 0 0px !important;
}
#postwidget {
	overflow: hidden;
}
#postwidget .titlereview, #postwidget ul.listreview, #postwidget .nreview {
}
#postwidget .widget ul.listreview {
	padding-bottom: 0px;
}
#postwidget .widget {
	border-right: 1px solid #d6d6d6;
}
#postwidget .widget {
	border-right: 1px solid #d6d6d6;
}
#boxvid {
	background: #FFFFFF;
	padding: 20px;
	margin-top: 20px;
	overflow: hidden;
	height: auto;
	border: 1px solid #d6d6d6;
}
#boxvid h1 {
	font-family: 'Lato', arial;
	font-weight: normal;
	font-size: 34px;
	border-left: 5px solid #FF0000;
	margin-left: 20px;
	margin-top: 20px;
	max-width: 900px;
	min-height: 66px;
	padding: 0 0 0 20px;
}
.boxvid_desc {
	padding-left: 20px;
}
.button {
	width: auto;
	background: #2ba6cb;
	border: 1px solid #1e728c;
	-webkit-box-shadow: none;
	-moz-box-shadow: none;
	box-shadow: none;
}
/*===================== comment list ============================== */
.listcomments {
	padding: 20px !important;
}
.listcomments p {
	padding: 0px 10px 10px 10px;
}
.listcomments .item-comments {
	overflow: hidden;
	padding: 10px 0;
}
h2.titlecomment {
	font-family: 'Lato', arial;
	font-weight: normal;
	border-bottom: 1px solid #d6d6d6;
	line-height: 30px;
	padding: 10px 0 20px 0;
}
/* -----------------------------BANNER & SLIDE STYLE---------------------------------------------------*/
.banner8 {
	padding: 20px;
}
.flexhome {
	background: #fff;
	border: 4px solid #fff;
	position: relative;
	-webkit-border-radius: 4px;
	-moz-border-radius: 4px;
	-o-border-radius: 4px;
	border-radius: 4px;
	-webkit-box-shadow: 0 1px 4px rgba(0,0,0,.2);
	-moz-box-shadow: 0 1px 4px rgba(0,0,0,.2);
	-o-box-shadow: 0 1px 4px rgba(0,0,0,.2);
	box-shadow: 0 1px 4px rgba(0,0,0,.2);
	zoom: 1;
	margin: 0 0 0px;
	padding: 0
}
.flexhome .slides > li {
	display: none;
	-webkit-backface-visibility: hidden;
}
.flexhome .slides img {
	width: 100%;
	display: block;
}
.flexhome .slides {
	zoom: 1
}
.flexhome:hover .flex-prev {
	opacity: 0.7;
	left: 10px
}
.flexhome:hover .flex-next {
	opacity: 0.7;
	right: 10px
}
.flexhome:hover .flex-next:hover, .flexslider:hover .flex-prev:hover {
	opacity: 1;
}
.flexhome .flex-direction-nav a {
	top: 50%;
}
/* ----------------------------- review page ---------------------------------- */
.reviewscore {
	width: 100%;
	overflow: hidden;
	float: right;
	padding: 20px;
	border: 5px solid #ccc;
	margin: 0 0 0 20px;
}
.reviewscore h3 {
	margin-top: 0px;
	border-bottom: 1px solid #cccccc;
	padding-bottom: 10px;
}
.meter {
	height: 20px;
	position: relative;
	margin: 10px 0 10px 0;
	background: #555;
	/*-moz-border-radius: 25px;
		-webkit-border-radius: 25px;
		border-radius: 25px; */
	padding: 5px 5px 5px 5px;
}
.meter > span {
	display: block;
	height: 10px;
	/*-webkit-border-top-right-radius: 8px;
			-webkit-border-bottom-right-radius: 8px;
			       -moz-border-radius-topright: 8px;
			    -moz-border-radius-bottomright: 8px;
			           border-top-right-radius: 8px;
			        border-bottom-right-radius: 8px;
			    -webkit-border-top-left-radius: 20px;
			 -webkit-border-bottom-left-radius: 20px;
			        -moz-border-radius-topleft: 20px;
			     -moz-border-radius-bottomleft: 20px;
			            border-top-left-radius: 20px;
			         border-bottom-left-radius: 20px; */
	background-color: rgb(43,194,83);
 );
	background-image: -moz-linear-gradient(  center bottom,  rgb(43,194,83) 37%,  rgb(84,240,84) 69%  );
	position: relative;
	overflow: hidden;
}
.meter > span:after, .animate > span > span {
	content: "";
	position: absolute;
	top: 0;
	left: 0;
	bottom: 0;
	right: 0;
	background-image: -webkit-gradient(linear, 0 0, 100% 100%,  color-stop(.25, rgba(255, 255, 255, .2)),  color-stop(.25, transparent), color-stop(.5, transparent),  color-stop(.5, rgba(255, 255, 255, .2)),  color-stop(.75, rgba(255, 255, 255, .2)),  color-stop(.75, transparent), to(transparent)  );
	background-image: -moz-linear-gradient(  -45deg,  rgba(255, 255, 255, .2) 25%,  transparent 25%,  transparent 50%,  rgba(255, 255, 255, .2) 50%,  rgba(255, 255, 255, .2) 75%,  transparent 75%,  transparent  );
	z-index: 1;
	-webkit-background-size: 50px 50px;
	-moz-background-size: 50px 50px;
	-webkit-animation: move 2s linear infinite;
	/* -webkit-border-top-right-radius: 8px;
			-webkit-border-bottom-right-radius: 8px;
			       -moz-border-radius-topright: 8px;
			    -moz-border-radius-bottomright: 8px;
			           border-top-right-radius: 8px;
			        border-bottom-right-radius: 8px;
			    -webkit-border-top-left-radius: 20px;
			 -webkit-border-bottom-left-radius: 20px;
			        -moz-border-radius-topleft: 20px;
			     -moz-border-radius-bottomleft: 20px;
			            border-top-left-radius: 20px;
			         border-bottom-left-radius: 20px;*/
	overflow: hidden;
}
.animate > span:after {
	display: none;
}
 @-webkit-keyframes move {
 0% {
 background-position: 0 0;
}
 100% {
 background-position: 50px 50px;
}
}
.orange > span {
	background-color: #f1a165;
	background-image: -moz-linear-gradient(top, #f1a165, #f36d0a);
	background-image: -webkit-gradient(linear, left top, left bottom, color-stop(0, #f1a165), color-stop(1, #f36d0a));
	background-image: -webkit-linear-gradient(#f1a165, #f36d0a);
}
.red > span {
	background-color: #c0392b;/*background-image: -moz-linear-gradient(top, #f0a3a3, #f42323);
			background-image: -webkit-gradient(linear,left top,left bottom,color-stop(0, #f0a3a3),color-stop(1, #f42323));
			background-image: -webkit-linear-gradient(#f0a3a3, #f42323);*/
}
.nostripes > span > span, .nostripes > span:after {
	-webkit-animation: none;
	background-image: none;
}
.easyPieChart {
	position: relative;
	text-align: center;
}
.easyPieChart canvas {
	margin: 0;
}
.scorepie {
	float: right;
	width: 160px;
	overflow: hidden;
	padding: 20px;
	border: 5px solid #cccccc;
}
.meta-score {
	font-size: 14px;
	color: #cccccc;
	padding-top: 20px;
}
.scorepie h3 {
	font-family: 'Opensans', arial;
	font-size: 20px;
	margin-top: 0px;
}
.chart {
	position: relative;
	display: inline-block;
	width: 110px;
	height: 110px;
	text-align: center;
}
.chart canvas {
	position: absolute;
	top: 0;
	left: 0;
}
.percent {
	display: inline-block;
	line-height: 110px;
	z-index: 2;
	font-size: 24px;
}
.percent:after {
	content: '';
	margin-left: 0.1em;
	font-size: .8em;
}
.angular {
	margin-top: 100px;
}
.angular .chart {
	margin-top: 0;
}
/* ---------------Grid Masonry Style--------------------------------------------------- */
/* archive blog 3 style */
.authorpost {
	padding: 10px;
	overflow: hidden;
}
.authorpost .thumbauthor {
	width: 80px;
	float: left;
	border-radius: 10px;
	margin-right: 10px;
}
.authorname {
	margin-left: 10px;
	font-size: 24px;
	float: left;
	width: 200px;
}
.authorname h3 {
	margin: 0px;
	font-weight: normal !important;
}
.authorname span {
	font-size: 14px;
	color: #cccccc;
}
.thumbauthor img {
	border-radius: 10px;
}
.authorpost .share-post {
	margin-top: 0px;
}
.authorpost .share-post i {
	padding: 0 10px 0 0px;
}
#maincontainer .authorpost .share-post a {
	color: #000000;
}
#maincontainer .authorpost .share-post a:hover {
	color: #FF0000 !important;
}
.blogtwo .lthumb, #masonrystyle .lthumb {
	margin-bottom: 10px;
}
#masonrystyle .lthumb {
	width: 100%;
	height: auto;
}
#tiles {
	list-style-type: none;
	position: relative; /** Needed to ensure items are laid out relative to this container **/
	margin: 0;
	padding: 0;
}
#tiles li {
	width: 354px;
	background-color: #ffffff;
	border: 1px solid #dedede;
	border-radius: 2px;
	-moz-border-radius: 2px;
	-webkit-border-radius: 2px;
	display: none; /** Hide items initially to avoid a flicker effect **/
	cursor: pointer;
	padding: 4px;
}
#tiles li.inactive {
	visibility: hidden;
	opacity: 0;
}
#tiles li img {
	display: block;
}
/**
 * Grid item text
 */
#tiles li p {
	color: #666;
	font-size: 12px;
	margin: 7px 0 0 7px;
}
/**
 * Placerholder css
 */
.wookmark-placeholder {
	border-radius: 2px;
	-moz-border-radius: 2px;
	-webkit-border-radius: 2px;
	background-color: #eee;
	border: 1px solid #dedede;
	z-index: -1;
}
/* -------------------------------------------------------------------------------------------------
6.0 SIDEBAR & WIDGET STYLE
----------------------------------------------------------------------------------------------------*/
aside {
	border-left: 0px solid #d6d6d6;
	overflow: hidden;
	border-left: 0px solid #d6d6d6;
}
aside.sideleft {
	border-left: 0px solid #d6d6d6;
	overflow: hidden;
	border-right: 0px solid #d6d6d6;
}
.four.columns.gridleft {
	margin-bottom: -999999px !important;
	padding-bottom: 999999px !important;
	border-left: 1px solid #CCC;
}
.four.columns.gridright {
	margin-bottom: -999999px !important;
	padding-bottom: 999999px !important;
	border-right: 1px solid #CCC;
}
.sideright {
	border-right: 0px !important;
	border-left: 1px solid #d6d6d6;
}
.widget .stars {
	padding: 0px 10px 10px 0px;
	color: #FF0000;
}
.widget .metawidget {
	float: left;
	width: 100px;
}
.widget h3 {
	font-size: 18px;
}
.widget a:hover {
	color: #FF0000;
}
.widget a h2.wtitle:hover {
	color: #FF0000;
}
.widget h2.wtitle {
	font-size: 18px;
	line-height: 20px;
	margin-top: 0px;
	margin-bottom: 15px;
	font-weight: normal;
	color: #383838;
}
.getcat {
	padding: 0 20px;
}
.getcat img {
	width: 100%;
}
/* 6.1 ============================ WIDGET POST BY CATEGORY =================== */
.getcat .lthumb {
	position: relative;
	height: 163px;
	width: 100%;
}
.getcat .lthumb .overlay {
	position: absolute;
	right: 0;
	padding: 20px;
	top: 0px;
	color: #FFFFFF;
}
.getcat .overlay .stars {
	text-align: right;
	padding: 30px 0px 10px 10px;
}
ul.catlist li {
	list-style: none;
	border-top: 1px solid #d6d6d6;
}
ul.catlist {
	margin-bottom: 35px;
}
.catlist a {
	color: #000000;
}
/* 6.2 =================== widget recent vid =================== */
.recentvid h3.blocktitle, .wtrending h3.blocktitle, .wcategory h3.blocktitle, .lreview h3.blocktitle {
/* border-top:0px solid #d6d6d6;*/
}
.getvid, .titletrend, .listtrend, .wl-category, .listreview, .featured, .othercat, .titlereview {
	padding: 0 20px 20px 20px;
}
.nreview {
	margin: 0 20px 20px 20px;
}
.sponsor {
	padding: 0 20px 0px 20px;
}
.sponsor img {
	margin-bottom: 20px;
	width: 100%;
	padding-right: 20px;
}
/* 6.3============== widget top trending ================================== */
ul.listtrend li {
	list-style: none;
	padding: 20px;
	font-size: 18px;
	margin-bottom: 1px;
}
ul.listtrend li a {
	color: #FFFFFF !important;
}
.titletrend {
	background: #000000;
	margin: 0 20px;
	padding-top: 20px;
	padding-bottom: 20px;
	color: #FFFFFF;
}
/* 6.4 ===========================  WIDGET TREND  =============================== */
.wt1 {
	background: #FF0000;
}
.wt2 {
	background: #d80000;
}
.wt3 {
	background: #b60202;
}
.wt4 {
	background: #8f0101;
}
.wt5 {
	background: #670606;
}
.wt6 {
	background: #470202;
}
.wt1:hover, .wt2:hover, .wt3:hover, .wt4:hover, .wt5:hover, .wt6:hover {
	background: #000000;
}
ul.listtrend li, ul.listreview li, .nreview {
 color: #FFFFFF !important,  display: inline-block;
	-webkit-transition: all 0.5s ease-in-out;
	-moz-transition: all 0.5s ease-in-out;
	-o-transition: all 0.5s ease-in-out;
	-ms-transition: all 0.5s ease-in-out;
}
ul.listtrend li:hover, ul.listreview li:hover, .nreview:hover {
	-webkit-transform: scale(1.1);
	-moz-transform: scale(1.1);
	-o-transform: scale(1.1);
	-ms-transform: scale(1.1);
	transform: scale(1.1);
	-webkit-backface-visibility: hidden;
}
/* 6.5 =================== widget category =========================*/

ul.wl-category li {
	list-style: none;
	font-size: 18px;
	text-transform: uppercase;
	min-height: 50px;
	line-height: 50px;
	margin-bottom: 2px;
}
ul.wl-category li .cc {
	text-align: right;
	display: inline-block;
	padding-right: 10px;
	width: 54px;
	height: 50px;
	float: left;
	font-size: 18px;
	background: #470202;
	color: #FFFFFF;
	margin-right: 1px;
}
ul.wl-category li .ctitle {
	background: #e5e5e5;
	line-height: 50px;
	padding: 14px 30px 14px 14px;
	font-weight: 600;
	font-family: 'Lato', arial;
}
ul.wl-category li a {
	color: #000000 !important;
}
ul.wl-category li.active > .cc, ul.wl-category li:hover > .cc {
	background: #FF0000;
}
ul.wl-category li.active > .ctitle, ul.wl-category li:hover > .ctitle {
	background: #000000;
}
ul.wl-category li.active > a, ul.wl-category li:hover > a {
	color: #FFFFFF !important;
}
ul.wl-category li, ul.wl-category li .cc {
	-webkit-transition: all 0.5s ease-in-out;
	-moz-transition: all 0.5s ease-in-out;
	-o-transition: all 0.5s ease-in-out;
	-ms-transition: all 0.5s ease-in-out;
}
ul.wl-category li:hover {
	margin-left: 10px;
}
ul.wl-category li .cc:hover {
	-webkit-transform: rotateY(0deg) scale(1, 1);
	-moz-transform: rotateY(0deg) scale(1, 1);
	-ms-transform: rotateY(0deg) scale(1, 1);
	-o-transform: rotateY(0deg) scale(1, 1);
	transform: rotateY(0deg) scale(1, 1);
}
/* 6.6=================== widget review ===================*/

ul.listreview li {
	width: 100%;
	list-style: none;
	font-size: 18px;
	text-transform: uppercase;
	min-height: 50px;
	line-height: 50px;
	margin-bottom: 2px;
	background: #470202;
}
ul.listreview li .cc {
	text-align: right;
	padding-right: 10px;
	width: 54px;
	height: 50px;
	float: left;
	font-size: 18px;
	color: #FFFFFF;
	margin-right: 10px;
	border-right: 1px solid #FFFFFF;
}
ul.listreview li .ctitle {
	font-size: 18px;
	color: #FFFFFF;
	line-height: 50px;
	padding: 14px 30px 14px 14px;
	font-weight: 600;
	font-family: 'Lato', arial;
}
ul.listreview li.active > a, ul.listreview li:hover > a {
	color: #FFFFFF !important;
}
.titlereview a {
	font-size: 24px;
	color: #000000 !important;
}
.nreview {
	overflow: hidden;
	background: #470202;
}
.descreview {
	width: 70%;
	color: #FFFFFF;
	padding: 20px;
	line-height: 18px;
	float: left;
}
.rateview {
	background: #FF0000;
	text-align: right;
	font-size: 50px;
	line-height: 50px;
	width: 30%;
	float: right;
	padding: 20px;
	color: #FFFFFF;
}
/* 6.7 ================== widget tags ==================== */
.tagcloud a {
	display: inline-block;
	padding: 0px 12px;
	background: #FF0000;
	color: #FFFFFF;
	border: 1px solid #FFFFFF;
	margin: 10px 6px 0px 0px;
	line-height: 45px;
	text-decoration: none;
	text-transform: uppercase;
	-webkit-transition: all 0.5s;
	-moz-transition: all 0.5s;
	transition: all 0.5s;
}
.tagcloud a:hover {
	background: #FFFFFF;
	color: #FF0000;
	-webkit-transform: scale(1.2);
	-moz-transform: scale(1.2);
	-o-transform: scale(1.2);
	-ms-transform: scale(1.2);
	transform: scale(1.2);
}
/* 6.8 ===================== widget list commment ====================== */
ul.listcomment li {
	list-style: none;
	margin-bottom: 20px;
	overflow: hidden;
}
ul.listcomment li .cthumb {
	width: 70px;
	height: 70px;
	overflow: hidden;
	float: left;
	margin-right: 10px;
}
ul.listcomment li .dcomment {
	float: left;
	max-width: 70%;
	display: inline;
	margin-top: -2px;
	line-height: 18px;
	font-family: 'Lato', arial;
}
ul.listcomment li .dcomment strong {
	font-weight: bold;
}
ul.listcomment li a {
	color: #FFFFFF;
}
ul.listcomment li a {
	display: inline-block;
	-webkit-transition: all 0.2s;
	-moz-transition: all 0.2s;
	transition: all 0.2s;
	padding: 10px;
}
ul.listcomment li a:hover {
	background: #FFFFFF;
	color: #000000;
	-webkit-transform: scale(1.05);
	-moz-transform: scale(1.05);
	-o-transform: scale(1.05);
	-ms-transform: scale(1.05);
	transform: scale(1.05);
}
/* 6.9 ==================== widget contact ========================= */
.dcontact p {
	color: #FFFFFF;
}
.sn {
	color: #FFFFFF;
	font-size: 20px;
}
.sn i {
	margin: 0 10px;
}
.sn a {
	border: 1px solid #FFFFFF;
	width: 30px;
	height: 30px;
	padding: 10px;
}
.sn a:hover {
	color: #FFFFFF;
}
.sn a .fa, .share-post a .fa, .loverate a .fa:hover {
	transition: all 0.5s ease-in-out;
}
.sn a .fa:hover, .share-post a .fa:hover, .loverate a .fa:hover {
	color: #FFFFFF;
	-webkit-transform: rotate(360deg);
	-moz-transform: rotate(360deg);
	-o-transform: rotate(360deg);
	-ms-transform: rotate(360deg);
}
.share-post a .fa:hover {
	color: #FF0000;
}
.widget ul.oc-horizon li {
	width: 100%;
}
.floatright {
	float: right !important;
}
.floatleft {
	float: left !important;
}
/* -------------------------------------------------------------------------------------------------
7.0 FOOTER & FOOTER WIDGET STYLE
----------------------------------------------------------------------------------------------------*/
#footer {
	background: #000000;
	min-height: 350px;
	margin-top: 20px;
	overflow: hidden;
}
#footer h3.blocktitle {
	background: transparent;
	border: none;
	color: #FFFFFF;
	border-left: 1px solid #FF0000;
	border-top: 1px solid #FF0000;
}
#footer h3.blocktitle span {
	text-align: center;
	color: #FFFFFF;
	font-size: 18px;
	float: left;
}
#footer .widget {
	border-right: 0px solid #363636;
	padding: 20px;
}
#footer .columns {
	padding : 0px;
}
#footer .copyright {
	padding: 20px;
	border-top: 1px solid #363636;
	color: #FFFFFF;
	text-transform: uppercase;
	background: #000000;
}
#footer .gridfooter {
	border-right: 1px solid #363636;
	border-left: 1px solid #363636;
	margin-bottom: -99999px;
	padding-bottom: 99999px;
}
img.slidefeatured {
/*	height: 450px;*/
	width: 100%;
}
.catf {
	width: 45%;
}
.listcat {
	width: 24%;
}
.topcat {
	width: 30%;
}
/* =======================================================================
                               Media Query 
========================================================================= */

@media screen and (max-width: 768px) {
.pushy {
	font-size: 1.0em;
}
}
 @media only screen and (max-width: 1280px) {
.flyout.fullwidth {
	width: 1170px;
	right: -317px;
}
}
@media only screen and (max-width: 1170px) {
.topcat {
	width: 29%;
}
}
@media only screen and (max-width: 1025px) {
.flyout.fullwidth {
	width: 994px;
	right: -141px;
}
li .dcomment {
	max-width: 210px;
}
.sn a {
	padding: 0px;
	border: 0px;
}
.rateview {
	font-size: 36px;
}
.title-catf {
	font-size: 18px;
}
ul.list-latestcat li {
	font-size: 14px;
	line-height: 18px;
}
.catf .catf-caption {
	margin-top: -220px;
}
#singlepost .post-content {
	width: 84%;
}
.top-bar ul.left li {
	float: left;
}
.top-bar ul.left {
	float: left;
	width: 60% !important;
}
.top-bar ul.right {
	float: right;
	width: 20% !important;
}
.top-bar ul.left>li, .top-bar ul.right>li {
	display: block;
	float: left;
	margin: 0 !important;
}
.orbit-wrapper .slider-nav span.right {
	right: -15px;
	background-color: #000000;
}
.orbit-wrapper .slider-nav span.left {
	left: -15px;
	background-color: #000000;
}
}
 @media only screen and (max-width: 980px) {
.panel {
	display: none;
}
li .dcomment {
	max-width: 185px;
}
}
 @media only screen and (max-width: 1024px) {
.menu-btn {
	display: block;
}
#mainbar {
	display: none;
}
nav.topbar {
	display: none;
}
.panel {
	display: none;
}
.pushy {
	font-size: 1.0em;
}
ul#logos {
	display: block !important;
	overflow: hidden;
}
li.logos {
	width: 100% !important;
}
#catslide {
	//display: none;
}
}
@media only screen and (max-width: 900px) {
.topcat {
	width: 300px;
}
}
@media only screen and (max-width: 800px) {
.post-authorthumb {
	display: none;
}
#singlepost .post-content {
	width: 100%;
}
.nav-bar {
	margin-top: 0px;
}
li .dcomment {
	max-width: 70%;
}
.lthumb {
	width: 100%;
}
.menu-btn {
	display: block;
}
.pushy {
	font-size: 1.0em;
}
nav.topbar {
	display: none;
}
#mainbar {
	display: none;
}
ul#logos {
	display: block !important;
	overflow: hidden;
}
li.logos {
	width: 100% !important;
}
.panel {
	display: none;
}
#catslide, .orbit-wrapper {
	display: none;
}
ul.listreview li .ctitle {
	padding: 10px 14px 8px 5px;
}
.descreview {
	padding: 15px;
	line-height: 18px;
}
.rateview {
	font-size: 32px;
}
.rateview {
	width: 60px;
	float: right;
	padding: 10px;
}
ul.wl-category li .cc {
	display: none;
}
}
 @media only screen and (max-width: 480px) {
ul.oc-horizon li {
	float: none;
	width: 100%;
}
#cat2news .othercat {
	float: none;
	width: 100%;
}
#cat2news .featured {
	float: left;
	width: 95%;
}
li .dcomment {
	max-width: 80%;
}
.share-post {
	display: none;
}
.postmeta .meta-date {
	width: 100% !important;
}
.item-comments img {
	margin-right: 10px !important;
	padding-right: 10px;
}
ul.breadcrumbs, ul.nav-carousel {
	display: none;
}
#mainbar {
	display: none;
}
}
@media only screen and (max-width: 320px) {
#tiles li {
	width: 100% !important;
	left: 0px !important;
}
.authorpost {
	display: none;
}
}
/*--------------------------------------------------------------------------------
Remove this after web launch
 SWITCHER FOR CSS 
 --------------------------------------------------------------------------------*/

.openedit {
	position: absolute;
	right: -35px;
	top: 0;
	background: #000;
	border-radius: 0 5px 5px 0;
	padding: 5px;
	cursor: pointer;
	color: #fff;
}
.parentcontainer {
	-webkit-transition: all 0.25s;
	-moz-transition: all 0.25s;
	transition: all 0.25s;
}
.ganti {
	width: 173px;
	background: #fff;
	position: fixed;
	top: 0;
	bottom: 0;
	height: 400px;
	margin: auto 0;
	left: -173px;
	box-shadow: 0 0 5px 0 rgba(0,0,0,.2);
	z-index: 200000;
}
@media screen and (max-width: 767px) {
.ganti {
	display: none;
}
}
.slideleftha {
	padding: 15px;
	width: 84%;
	overflow: hidden;
}
.slideleftha h3 {
	font-size: 20px;
}
.ganti li {
	width: 20px;
	height: 20px;
	display: inline-block;
}
.ganti li img {
	width: 20px;
	height: 20px;
}
.chng {
	width: 20px;
	height: 20px;
	display: inline-block;
	margin: 5px 5px 5px 0;
	float: left;
	text-indent: -9999px;
}
.greenoriflat {
	background: #2ecc71 !important;
	color: #2ecc71;
}
.redflat {
	background: #e74c3c !important;
	color: #e74c3c;
}
.blueflat {
	background: #3498db !important;
	color: #3498db;
}
.greenseaflat {
	background: #16a085 !important;
	color: #16a085;
}
.orangeflat {
	background: #f39c12 !important;
	color: #f39c12;
}
.purpleflat {
	background: #8e44ad !important;
	color: #8e44ad;
}
.redori {
	background: #FF0000 !important;
	color: #ff0000;
}
/* Bodybackground Switch */

body {
	-webkit-transition: background 0.25s;
	-moz-transition: backgroun 0.25s;
	transition: backgroun 0.25s;
}
.poll_middle_div{
    float:left !important;
}

#archive {
	cursor: pointer;
}