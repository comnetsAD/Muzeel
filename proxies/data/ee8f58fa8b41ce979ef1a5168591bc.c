
/*
 * Bootstrap v3.2.0 (http://getbootstrap.com)
 * Copyright 2011-2014 Twitter, Inc.
 * Licensed under MIT (https://github.com/twbs/bootstrap/blob/master/LICENSE)
 */

/* normalize.css v3.0.1 | MIT License | git.io/normalize */
html{font-family:sans-serif;-webkit-text-size-adjust:100%;-ms-text-size-adjust:100%}body{margin:0}article,aside,details,figcaption,figure,footer,header,hgroup,main,nav,section,summary{display:block}audio,canvas,progress,video{display:inline-block;vertical-align:baseline}audio:not([controls]){display:none;height:0}[hidden],template{display:none}a{background:transparent}a:active,a:hover{outline:0}abbr[title]{border-bottom:1px dotted}b,strong{font-weight:bold}dfn{font-style:italic}h1{margin: .67em 0;font-size:2em}mark{color:#000;background:#ff0}small{font-size:80%}sub,sup{position:relative;font-size:75%;line-height:0;vertical-align:baseline}sup{top: -.5em}sub{bottom: -.25em}img{border:0}svg:not(:root){overflow:hidden}figure{margin:1em
40px}hr{height:0;-webkit-box-sizing:content-box;-moz-box-sizing:content-box;box-sizing:content-box}pre{overflow:auto}code,kbd,pre,samp{font-family:monospace,monospace;font-size:1em}button,input,optgroup,select,textarea{margin:0;font:inherit;color:inherit}button{overflow:visible}button,select{text-transform:none}button,
html input[type="button"],input[type="reset"],input[type="submit"]{-webkit-appearance:button;cursor:pointer}button[disabled],
html input[disabled]{cursor:default}button::-moz-focus-inner,input::-moz-focus-inner{padding:0;border:0}input{line-height:normal}input[type="checkbox"],input[type="radio"]{-webkit-box-sizing:border-box;-moz-box-sizing:border-box;box-sizing:border-box;padding:0}input[type="number"]::-webkit-inner-spin-button,input[type="number"]::-webkit-outer-spin-button{height:auto}input[type="search"]{-webkit-box-sizing:content-box;-moz-box-sizing:content-box;box-sizing:content-box;-webkit-appearance:textfield}input[type="search"]::-webkit-search-cancel-button,input[type="search"]::-webkit-search-decoration{-webkit-appearance:none}fieldset{padding: .35em .625em .75em;margin:0
2px;border:1px
solid #c0c0c0}legend{padding:0;border:0}textarea{overflow:auto}optgroup{font-weight:bold}table{border-spacing:0;border-collapse:collapse}td,th{padding:0}@media
print{*{color:#000 !important;text-shadow:none !important;background:transparent !important;-webkit-box-shadow:none !important;box-shadow:none !important}a,a:visited{text-decoration:underline}a[href]:after{content:" (" attr(href) ")"}abbr[title]:after{content:" (" attr(title) ")"}a[href^="javascript:"]:after,a[href^="#"]:after{content:""}pre,blockquote{border:1px
solid #999;page-break-inside:avoid}thead{display:table-header-group}tr,img{page-break-inside:avoid}img{max-width:100% !important}p,h2,h3{orphans:3;widows:3}h2,h3{page-break-after:avoid}select{background:#fff !important}.navbar{display:none}.table td,
.table
th{background-color:#fff !important}.btn>.caret,.dropup>.btn>.caret{border-top-color:#000 !important}.label{border:1px
solid #000}.table{border-collapse:collapse !important}.table-bordered th,
.table-bordered
td{border:1px
solid #ddd !important}}@font-face{font-family:'Glyphicons Halflings';src:url('../fonts/glyphicons-halflings-regular.eot');src:url('../fonts/glyphicons-halflings-regular.eot?#iefix') format('embedded-opentype'), url('../fonts/glyphicons-halflings-regular.woff') format('woff'), url('../fonts/glyphicons-halflings-regular.ttf') format('truetype'), url('../fonts/glyphicons-halflings-regular.svg#glyphicons_halflingsregular') format('svg')}.glyphicon{position:relative;top:1px;display:inline-block;font-family:'Glyphicons Halflings';font-style:normal;font-weight:normal;line-height:1;-webkit-font-smoothing:antialiased;-moz-osx-font-smoothing:grayscale}.glyphicon-asterisk:before{content:"\2a"}.glyphicon-plus:before{content:"\2b"}.glyphicon-euro:before{content:"\20ac"}.glyphicon-minus:before{content:"\2212"}.glyphicon-cloud:before{content:"\2601"}.glyphicon-envelope:before{content:"\2709"}.glyphicon-pencil:before{content:"\270f"}.glyphicon-glass:before{content:"\e001"}.glyphicon-music:before{content:"\e002"}.glyphicon-search:before{content:"\e003"}.glyphicon-heart:before{content:"\e005"}.glyphicon-star:before{content:"\e006"}.glyphicon-star-empty:before{content:"\e007"}.glyphicon-user:before{content:"\e008"}.glyphicon-film:before{content:"\e009"}.glyphicon-th-large:before{content:"\e010"}.glyphicon-th:before{content:"\e011"}.glyphicon-th-list:before{content:"\e012"}.glyphicon-ok:before{content:"\e013"}.glyphicon-remove:before{content:"\e014"}.glyphicon-zoom-in:before{content:"\e015"}.glyphicon-zoom-out:before{content:"\e016"}.glyphicon-off:before{content:"\e017"}.glyphicon-signal:before{content:"\e018"}.glyphicon-cog:before{content:"\e019"}.glyphicon-trash:before{content:"\e020"}.glyphicon-home:before{content:"\e021"}.glyphicon-file:before{content:"\e022"}.glyphicon-time:before{content:"\e023"}.glyphicon-road:before{content:"\e024"}.glyphicon-download-alt:before{content:"\e025"}.glyphicon-download:before{content:"\e026"}.glyphicon-upload:before{content:"\e027"}.glyphicon-inbox:before{content:"\e028"}.glyphicon-play-circle:before{content:"\e029"}.glyphicon-repeat:before{content:"\e030"}.glyphicon-refresh:before{content:"\e031"}.glyphicon-list-alt:before{content:"\e032"}.glyphicon-lock:before{content:"\e033"}.glyphicon-flag:before{content:"\e034"}.glyphicon-headphones:before{content:"\e035"}.glyphicon-volume-off:before{content:"\e036"}.glyphicon-volume-down:before{content:"\e037"}.glyphicon-volume-up:before{content:"\e038"}.glyphicon-qrcode:before{content:"\e039"}.glyphicon-barcode:before{content:"\e040"}.glyphicon-tag:before{content:"\e041"}.glyphicon-tags:before{content:"\e042"}.glyphicon-book:before{content:"\e043"}.glyphicon-bookmark:before{content:"\e044"}.glyphicon-print:before{content:"\e045"}.glyphicon-camera:before{content:"\e046"}.glyphicon-font:before{content:"\e047"}.glyphicon-bold:before{content:"\e048"}.glyphicon-italic:before{content:"\e049"}.glyphicon-text-height:before{content:"\e050"}.glyphicon-text-width:before{content:"\e051"}.glyphicon-align-left:before{content:"\e052"}.glyphicon-align-center:before{content:"\e053"}.glyphicon-align-right:before{content:"\e054"}.glyphicon-align-justify:before{content:"\e055"}.glyphicon-list:before{content:"\e056"}.glyphicon-indent-left:before{content:"\e057"}.glyphicon-indent-right:before{content:"\e058"}.glyphicon-facetime-video:before{content:"\e059"}.glyphicon-picture:before{content:"\e060"}.glyphicon-map-marker:before{content:"\e062"}.glyphicon-adjust:before{content:"\e063"}.glyphicon-tint:before{content:"\e064"}.glyphicon-edit:before{content:"\e065"}.glyphicon-share:before{content:"\e066"}.glyphicon-check:before{content:"\e067"}.glyphicon-move:before{content:"\e068"}.glyphicon-step-backward:before{content:"\e069"}.glyphicon-fast-backward:before{content:"\e070"}.glyphicon-backward:before{content:"\e071"}.glyphicon-play:before{content:"\e072"}.glyphicon-pause:before{content:"\e073"}.glyphicon-stop:before{content:"\e074"}.glyphicon-forward:before{content:"\e075"}.glyphicon-fast-forward:before{content:"\e076"}.glyphicon-step-forward:before{content:"\e077"}.glyphicon-eject:before{content:"\e078"}.glyphicon-chevron-left:before{content:"\e079"}.glyphicon-chevron-right:before{content:"\e080"}.glyphicon-plus-sign:before{content:"\e081"}.glyphicon-minus-sign:before{content:"\e082"}.glyphicon-remove-sign:before{content:"\e083"}.glyphicon-ok-sign:before{content:"\e084"}.glyphicon-question-sign:before{content:"\e085"}.glyphicon-info-sign:before{content:"\e086"}.glyphicon-screenshot:before{content:"\e087"}.glyphicon-remove-circle:before{content:"\e088"}.glyphicon-ok-circle:before{content:"\e089"}.glyphicon-ban-circle:before{content:"\e090"}.glyphicon-arrow-left:before{content:"\e091"}.glyphicon-arrow-right:before{content:"\e092"}.glyphicon-arrow-up:before{content:"\e093"}.glyphicon-arrow-down:before{content:"\e094"}.glyphicon-share-alt:before{content:"\e095"}.glyphicon-resize-full:before{content:"\e096"}.glyphicon-resize-small:before{content:"\e097"}.glyphicon-exclamation-sign:before{content:"\e101"}.glyphicon-gift:before{content:"\e102"}.glyphicon-leaf:before{content:"\e103"}.glyphicon-fire:before{content:"\e104"}.glyphicon-eye-open:before{content:"\e105"}.glyphicon-eye-close:before{content:"\e106"}.glyphicon-warning-sign:before{content:"\e107"}.glyphicon-plane:before{content:"\e108"}.glyphicon-calendar:before{content:"\e109"}.glyphicon-random:before{content:"\e110"}.glyphicon-comment:before{content:"\e111"}.glyphicon-magnet:before{content:"\e112"}.glyphicon-chevron-up:before{content:"\e113"}.glyphicon-chevron-down:before{content:"\e114"}.glyphicon-retweet:before{content:"\e115"}.glyphicon-shopping-cart:before{content:"\e116"}.glyphicon-folder-close:before{content:"\e117"}.glyphicon-folder-open:before{content:"\e118"}.glyphicon-resize-vertical:before{content:"\e119"}.glyphicon-resize-horizontal:before{content:"\e120"}.glyphicon-hdd:before{content:"\e121"}.glyphicon-bullhorn:before{content:"\e122"}.glyphicon-bell:before{content:"\e123"}.glyphicon-certificate:before{content:"\e124"}.glyphicon-thumbs-up:before{content:"\e125"}.glyphicon-thumbs-down:before{content:"\e126"}.glyphicon-hand-right:before{content:"\e127"}.glyphicon-hand-left:before{content:"\e128"}.glyphicon-hand-up:before{content:"\e129"}.glyphicon-hand-down:before{content:"\e130"}.glyphicon-circle-arrow-right:before{content:"\e131"}.glyphicon-circle-arrow-left:before{content:"\e132"}.glyphicon-circle-arrow-up:before{content:"\e133"}.glyphicon-circle-arrow-down:before{content:"\e134"}.glyphicon-globe:before{content:"\e135"}.glyphicon-wrench:before{content:"\e136"}.glyphicon-tasks:before{content:"\e137"}.glyphicon-filter:before{content:"\e138"}.glyphicon-briefcase:before{content:"\e139"}.glyphicon-fullscreen:before{content:"\e140"}.glyphicon-dashboard:before{content:"\e141"}.glyphicon-paperclip:before{content:"\e142"}.glyphicon-heart-empty:before{content:"\e143"}.glyphicon-link:before{content:"\e144"}.glyphicon-phone:before{content:"\e145"}.glyphicon-pushpin:before{content:"\e146"}.glyphicon-usd:before{content:"\e148"}.glyphicon-gbp:before{content:"\e149"}.glyphicon-sort:before{content:"\e150"}.glyphicon-sort-by-alphabet:before{content:"\e151"}.glyphicon-sort-by-alphabet-alt:before{content:"\e152"}.glyphicon-sort-by-order:before{content:"\e153"}.glyphicon-sort-by-order-alt:before{content:"\e154"}.glyphicon-sort-by-attributes:before{content:"\e155"}.glyphicon-sort-by-attributes-alt:before{content:"\e156"}.glyphicon-unchecked:before{content:"\e157"}.glyphicon-expand:before{content:"\e158"}.glyphicon-collapse-down:before{content:"\e159"}.glyphicon-collapse-up:before{content:"\e160"}.glyphicon-log-in:before{content:"\e161"}.glyphicon-flash:before{content:"\e162"}.glyphicon-log-out:before{content:"\e163"}.glyphicon-new-window:before{content:"\e164"}.glyphicon-record:before{content:"\e165"}.glyphicon-save:before{content:"\e166"}.glyphicon-open:before{content:"\e167"}.glyphicon-saved:before{content:"\e168"}.glyphicon-import:before{content:"\e169"}.glyphicon-export:before{content:"\e170"}.glyphicon-send:before{content:"\e171"}.glyphicon-floppy-disk:before{content:"\e172"}.glyphicon-floppy-saved:before{content:"\e173"}.glyphicon-floppy-remove:before{content:"\e174"}.glyphicon-floppy-save:before{content:"\e175"}.glyphicon-floppy-open:before{content:"\e176"}.glyphicon-credit-card:before{content:"\e177"}.glyphicon-transfer:before{content:"\e178"}.glyphicon-cutlery:before{content:"\e179"}.glyphicon-header:before{content:"\e180"}.glyphicon-compressed:before{content:"\e181"}.glyphicon-earphone:before{content:"\e182"}.glyphicon-phone-alt:before{content:"\e183"}.glyphicon-tower:before{content:"\e184"}.glyphicon-stats:before{content:"\e185"}.glyphicon-sd-video:before{content:"\e186"}.glyphicon-hd-video:before{content:"\e187"}.glyphicon-subtitles:before{content:"\e188"}.glyphicon-sound-stereo:before{content:"\e189"}.glyphicon-sound-dolby:before{content:"\e190"}.glyphicon-sound-5-1:before{content:"\e191"}.glyphicon-sound-6-1:before{content:"\e192"}.glyphicon-sound-7-1:before{content:"\e193"}.glyphicon-copyright-mark:before{content:"\e194"}.glyphicon-registration-mark:before{content:"\e195"}.glyphicon-cloud-download:before{content:"\e197"}.glyphicon-cloud-upload:before{content:"\e198"}.glyphicon-tree-conifer:before{content:"\e199"}.glyphicon-tree-deciduous:before{content:"\e200"}*{-webkit-box-sizing:border-box;-moz-box-sizing:border-box;box-sizing:border-box}*:before,*:after{-webkit-box-sizing:border-box;-moz-box-sizing:border-box;box-sizing:border-box}html{font-size:10px;-webkit-tap-highlight-color:rgba(0,0,0,0)}body{font-family:"Helvetica Neue",Helvetica,Arial,sans-serif;font-size:14px;line-height:1.42857143;color:#333;background-color:#fff}input,button,select,textarea{font-family:inherit;font-size:inherit;line-height:inherit}a{color:#428bca;text-decoration:none}a:hover,a:focus{color:#2a6496;text-decoration:underline}a:focus{outline:thin dotted;outline:5px
auto -webkit-focus-ring-color;outline-offset: -2px}figure{margin:0}img{vertical-align:middle}.img-responsive,
.thumbnail > img,
.thumbnail a>img,.carousel-inner>.item>img,.carousel-inner>.item>a>img{display:block;width:100% \9;max-width:100%;height:auto}.img-rounded{border-radius:6px}.img-thumbnail{display:inline-block;width:100% \9;max-width:100%;height:auto;padding:4px;line-height:1.42857143;background-color:#fff;border:1px
solid #ddd;border-radius:4px;-webkit-transition:all .2s ease-in-out;-o-transition:all .2s ease-in-out;transition:all .2s ease-in-out}.img-circle{border-radius:50%}hr{margin-top:20px;margin-bottom:20px;border:0;border-top:1px solid #eee}.sr-only{position:absolute;width:1px;height:1px;padding:0;margin: -1px;overflow:hidden;clip:rect(0,0,0,0);border:0}.sr-only-focusable:active,.sr-only-focusable:focus{position:static;width:auto;height:auto;margin:0;overflow:visible;clip:auto}h1,h2,h3,h4,h5,h6,.h1,.h2,.h3,.h4,.h5,.h6{font-family:inherit;font-weight:500;line-height:1.1;color:inherit}h1 small,
h2 small,
h3 small,
h4 small,
h5 small,
h6 small,
.h1 small,
.h2 small,
.h3 small,
.h4 small,
.h5 small,
.h6 small,
h1 .small,
h2 .small,
h3 .small,
h4 .small,
h5 .small,
h6 .small,
.h1 .small,
.h2 .small,
.h3 .small,
.h4 .small,
.h5 .small,
.h6
.small{font-weight:normal;line-height:1;color:#777}h1,.h1,h2,.h2,h3,.h3{margin-top:20px;margin-bottom:10px}h1 small,
.h1 small,
h2 small,
.h2 small,
h3 small,
.h3 small,
h1 .small,
.h1 .small,
h2 .small,
.h2 .small,
h3 .small,
.h3
.small{font-size:65%}h4,.h4,h5,.h5,h6,.h6{margin-top:10px;margin-bottom:10px}h4 small,
.h4 small,
h5 small,
.h5 small,
h6 small,
.h6 small,
h4 .small,
.h4 .small,
h5 .small,
.h5 .small,
h6 .small,
.h6
.small{font-size:75%}h1,.h1{font-size:36px}h2,.h2{font-size:30px}h3,.h3{font-size:24px}h4,.h4{font-size:18px}h5,.h5{font-size:14px}h6,.h6{font-size:12px}p{margin:0
0 10px}.lead{margin-bottom:20px;font-size:16px;font-weight:300;line-height:1.4}@media (min-width: 768px){.lead{font-size:21px}}small,.small{font-size:85%}cite{font-style:normal}mark,.mark{padding: .2em;background-color:#fcf8e3}.text-left{text-align:left}.text-right{text-align:right}.text-center{text-align:center}.text-justify{text-align:justify}.text-nowrap{white-space:nowrap}.text-lowercase{text-transform:lowercase}.text-uppercase{text-transform:uppercase}.text-capitalize{text-transform:capitalize}.text-muted{color:#777}.text-primary{color:#428bca}a.text-primary:hover{color:#3071a9}.text-success{color:#3c763d}a.text-success:hover{color:#2b542c}.text-info{color:#31708f}a.text-info:hover{color:#245269}.text-warning{color:#8a6d3b}a.text-warning:hover{color:#66512c}.text-danger{color:#a94442}a.text-danger:hover{color:#843534}.bg-primary{color:#fff;background-color:#428bca}a.bg-primary:hover{background-color:#3071a9}.bg-success{background-color:#dff0d8}a.bg-success:hover{background-color:#c1e2b3}.bg-info{background-color:#d9edf7}a.bg-info:hover{background-color:#afd9ee}.bg-warning{background-color:#fcf8e3}a.bg-warning:hover{background-color:#f7ecb5}.bg-danger{background-color:#f2dede}a.bg-danger:hover{background-color:#e4b9b9}.page-header{padding-bottom:9px;margin:40px
0 20px;border-bottom:1px solid #eee}ul,ol{margin-top:0;margin-bottom:10px}ul ul,
ol ul,
ul ol,
ol
ol{margin-bottom:0}.list-unstyled{padding-left:0;list-style:none}.list-inline{padding-left:0;margin-left: -5px;list-style:none}.list-inline>li{display:inline-block;padding-right:5px;padding-left:5px}dl{margin-top:0;margin-bottom:20px}dt,dd{line-height:1.42857143}dt{font-weight:bold}dd{margin-left:0}@media (min-width: 768px){.dl-horizontal
dt{float:left;width:160px;overflow:hidden;clear:left;text-align:right;text-overflow:ellipsis;white-space:nowrap}.dl-horizontal
dd{margin-left:180px}}abbr[title],abbr[data-original-title]{cursor:help;border-bottom:1px dotted #777}.initialism{font-size:90%;text-transform:uppercase}blockquote{padding:10px
20px;margin:0
0 20px;font-size:17.5px;border-left:5px solid #eee}blockquote p:last-child,
blockquote ul:last-child,
blockquote ol:last-child{margin-bottom:0}blockquote footer,
blockquote small,
blockquote
.small{display:block;font-size:80%;line-height:1.42857143;color:#777}blockquote footer:before,
blockquote small:before,
blockquote .small:before{content:'\2014 \00A0'}.blockquote-reverse,blockquote.pull-right{padding-right:15px;padding-left:0;text-align:right;border-right:5px solid #eee;border-left:0}.blockquote-reverse footer:before,
blockquote.pull-right footer:before,
.blockquote-reverse small:before,
blockquote.pull-right small:before,
.blockquote-reverse .small:before,
blockquote.pull-right .small:before{content:''}.blockquote-reverse footer:after,
blockquote.pull-right footer:after,
.blockquote-reverse small:after,
blockquote.pull-right small:after,
.blockquote-reverse .small:after,
blockquote.pull-right .small:after{content:'\00A0 \2014'}blockquote:before,blockquote:after{content:""}address{margin-bottom:20px;font-style:normal;line-height:1.42857143}code,kbd,pre,samp{font-family:Menlo,Monaco,Consolas,"Courier New",monospace}code{padding:2px
4px;font-size:90%;color:#c7254e;background-color:#f9f2f4;border-radius:4px}kbd{padding:2px
4px;font-size:90%;color:#fff;background-color:#333;border-radius:3px;-webkit-box-shadow:inset 0 -1px 0 rgba(0, 0, 0, .25);box-shadow:inset 0 -1px 0 rgba(0, 0, 0, .25)}kbd
kbd{padding:0;font-size:100%;-webkit-box-shadow:none;box-shadow:none}pre{display:block;padding:9.5px;margin:0
0 10px;font-size:13px;line-height:1.42857143;color:#333;word-break:break-all;word-wrap:break-word;background-color:#f5f5f5;border:1px
solid #ccc;border-radius:4px}pre
code{padding:0;font-size:inherit;color:inherit;white-space:pre-wrap;background-color:transparent;border-radius:0}.pre-scrollable{max-height:340px;overflow-y:scroll}.container{padding-right:15px;padding-left:15px;margin-right:auto;margin-left:auto}@media (min-width: 768px){.container{width:750px}}@media (min-width: 992px){.container{width:970px}}@media (min-width: 1200px){.container{width:1170px}}.container-fluid{padding-right:15px;margin-right:auto;margin-left:auto}.row{margin-right: -15px;margin-left: -15px}.col-xs-1,.col-sm-1,.col-md-1,.col-lg-1,.col-xs-2,.col-sm-2,.col-md-2,.col-lg-2,.col-xs-3,.col-sm-3,.col-md-3,.col-lg-3,.col-xs-4,.col-sm-4,.col-md-4,.col-lg-4,.col-xs-5,.col-sm-5,.col-md-5,.col-lg-5,.col-xs-6,.col-sm-6,.col-md-6,.col-lg-6,.col-xs-7,.col-sm-7,.col-md-7,.col-lg-7,.col-xs-8,.col-sm-8,.col-md-8,.col-lg-8,.col-xs-9,.col-sm-9,.col-md-9,.col-lg-9,.col-xs-10,.col-sm-10,.col-md-10,.col-lg-10,.col-xs-11,.col-sm-11,.col-md-11,.col-lg-11,.col-xs-12,.col-sm-12,.col-md-12,.col-lg-12{position:relative;min-height:1px;padding-right:15px;padding-left:15px}.col-xs-1,.col-xs-2,.col-xs-3,.col-xs-4,.col-xs-5,.col-xs-6,.col-xs-7,.col-xs-8,.col-xs-9,.col-xs-10,.col-xs-11,.col-xs-12{float:left}.col-xs-12{width:100%}.col-xs-11{width:91.66666667%}.col-xs-10{width:83.33333333%}.col-xs-9{width:75%}.col-xs-8{width:66.66666667%}.col-xs-7{width:58.33333333%}.col-xs-6{width:50%}.col-xs-5{width:41.66666667%}.col-xs-4{width:33.33333333%}.col-xs-3{width:25%}.col-xs-2{width:16.66666667%}.col-xs-1{width:8.33333333%}.col-xs-pull-12{right:100%}.col-xs-pull-11{right:91.66666667%}.col-xs-pull-10{right:83.33333333%}.col-xs-pull-9{right:75%}.col-xs-pull-8{right:66.66666667%}.col-xs-pull-7{right:58.33333333%}.col-xs-pull-6{right:50%}.col-xs-pull-5{right:41.66666667%}.col-xs-pull-4{right:33.33333333%}.col-xs-pull-3{right:25%}.col-xs-pull-2{right:16.66666667%}.col-xs-pull-1{right:8.33333333%}.col-xs-pull-0{right:auto}.col-xs-push-12{left:100%}.col-xs-push-11{left:91.66666667%}.col-xs-push-10{left:83.33333333%}.col-xs-push-9{left:75%}.col-xs-push-8{left:66.66666667%}.col-xs-push-7{left:58.33333333%}.col-xs-push-6{left:50%}.col-xs-push-5{left:41.66666667%}.col-xs-push-4{left:33.33333333%}.col-xs-push-3{left:25%}.col-xs-push-2{left:16.66666667%}.col-xs-push-1{left:8.33333333%}.col-xs-push-0{left:auto}.col-xs-offset-12{margin-left:100%}.col-xs-offset-11{margin-left:91.66666667%}.col-xs-offset-10{margin-left:83.33333333%}.col-xs-offset-9{margin-left:75%}.col-xs-offset-8{margin-left:66.66666667%}.col-xs-offset-7{margin-left:58.33333333%}.col-xs-offset-6{margin-left:50%}.col-xs-offset-5{margin-left:41.66666667%}.col-xs-offset-4{margin-left:33.33333333%}.col-xs-offset-3{margin-left:25%}.col-xs-offset-2{margin-left:16.66666667%}.col-xs-offset-1{margin-left:8.33333333%}.col-xs-offset-0{margin-left:0}@media (min-width: 768px){.col-sm-1,.col-sm-2,.col-sm-3,.col-sm-4,.col-sm-5,.col-sm-6,.col-sm-7,.col-sm-8,.col-sm-9,.col-sm-10,.col-sm-11,.col-sm-12{float:left}.col-sm-12{width:100%}.col-sm-11{width:91.66666667%}.col-sm-10{width:83.33333333%}.col-sm-9{width:75%}.col-sm-8{width:66.66666667%}.col-sm-7{width:58.33333333%}.col-sm-6{width:50%}.col-sm-5{width:41.66666667%}.col-sm-4{width:33.33333333%}.col-sm-3{width:25%}.col-sm-2{width:16.66666667%}.col-sm-1{width:8.33333333%}.col-sm-pull-12{right:100%}.col-sm-pull-11{right:91.66666667%}.col-sm-pull-10{right:83.33333333%}.col-sm-pull-9{right:75%}.col-sm-pull-8{right:66.66666667%}.col-sm-pull-7{right:58.33333333%}.col-sm-pull-6{right:50%}.col-sm-pull-5{right:41.66666667%}.col-sm-pull-4{right:33.33333333%}.col-sm-pull-3{right:25%}.col-sm-pull-2{right:16.66666667%}.col-sm-pull-1{right:8.33333333%}.col-sm-pull-0{right:auto}.col-sm-push-12{left:100%}.col-sm-push-11{left:91.66666667%}.col-sm-push-10{left:83.33333333%}.col-sm-push-9{left:75%}.col-sm-push-8{left:66.66666667%}.col-sm-push-7{left:58.33333333%}.col-sm-push-6{left:50%}.col-sm-push-5{left:41.66666667%}.col-sm-push-4{left:33.33333333%}.col-sm-push-3{left:25%}.col-sm-push-2{left:16.66666667%}.col-sm-push-1{left:8.33333333%}.col-sm-push-0{left:auto}.col-sm-offset-12{margin-left:100%}.col-sm-offset-11{margin-left:91.66666667%}.col-sm-offset-10{margin-left:83.33333333%}.col-sm-offset-9{margin-left:75%}.col-sm-offset-8{margin-left:66.66666667%}.col-sm-offset-7{margin-left:58.33333333%}.col-sm-offset-6{margin-left:50%}.col-sm-offset-5{margin-left:41.66666667%}.col-sm-offset-4{margin-left:33.33333333%}.col-sm-offset-3{margin-left:25%}.col-sm-offset-2{margin-left:16.66666667%}.col-sm-offset-1{margin-left:8.33333333%}.col-sm-offset-0{margin-left:0}}@media (min-width: 992px){.col-md-1,.col-md-2,.col-md-3,.col-md-4,.col-md-5,.col-md-6,.col-md-7,.col-md-8,.col-md-9,.col-md-10,.col-md-11,.col-md-12{float:left}.col-md-12{width:100%}.col-md-11{width:91.66666667%}.col-md-10{width:83.33333333%}.col-md-9{width:75%}.col-md-8{width:66.66666667%}.col-md-7{width:58.33333333%}.col-md-6{width:50%}.col-md-5{width:41.66666667%}.col-md-4{width:33.33333333%}.col-md-3{width:25%}.col-md-2{width:16.66666667%}.col-md-1{width:8.33333333%}.col-md-pull-12{right:100%}.col-md-pull-11{right:91.66666667%}.col-md-pull-10{right:83.33333333%}.col-md-pull-9{right:75%}.col-md-pull-8{right:66.66666667%}.col-md-pull-7{right:58.33333333%}.col-md-pull-6{right:50%}.col-md-pull-5{right:41.66666667%}.col-md-pull-4{right:33.33333333%}.col-md-pull-3{right:25%}.col-md-pull-2{right:16.66666667%}.col-md-pull-1{right:8.33333333%}.col-md-pull-0{right:auto}.col-md-push-12{left:100%}.col-md-push-11{left:91.66666667%}.col-md-push-10{left:83.33333333%}.col-md-push-9{left:75%}.col-md-push-8{left:66.66666667%}.col-md-push-7{left:58.33333333%}.col-md-push-6{left:50%}.col-md-push-5{left:41.66666667%}.col-md-push-4{left:33.33333333%}.col-md-push-3{left:25%}.col-md-push-2{left:16.66666667%}.col-md-push-1{left:8.33333333%}.col-md-push-0{left:auto}.col-md-offset-12{margin-left:100%}.col-md-offset-11{margin-left:91.66666667%}.col-md-offset-10{margin-left:83.33333333%}.col-md-offset-9{margin-left:75%}.col-md-offset-8{margin-left:66.66666667%}.col-md-offset-7{margin-left:58.33333333%}.col-md-offset-6{margin-left:50%}.col-md-offset-5{margin-left:41.66666667%}.col-md-offset-4{margin-left:33.33333333%}.col-md-offset-3{margin-left:25%}.col-md-offset-2{margin-left:16.66666667%}.col-md-offset-1{margin-left:8.33333333%}.col-md-offset-0{margin-left:0}}@media (min-width: 1200px){.col-lg-1,.col-lg-2,.col-lg-3,.col-lg-4,.col-lg-5,.col-lg-6,.col-lg-7,.col-lg-8,.col-lg-9,.col-lg-10,.col-lg-11,.col-lg-12{float:left}.col-lg-12{width:100%}.col-lg-11{width:91.66666667%}.col-lg-10{width:83.33333333%}.col-lg-9{width:75%}.col-lg-8{width:66.66666667%}.col-lg-7{width:58.33333333%}.col-lg-6{width:50%}.col-lg-5{width:41.66666667%}.col-lg-4{width:33.33333333%}.col-lg-3{width:25%}.col-lg-2{width:16.66666667%}.col-lg-1{width:8.33333333%}.col-lg-pull-12{right:100%}.col-lg-pull-11{right:91.66666667%}.col-lg-pull-10{right:83.33333333%}.col-lg-pull-9{right:75%}.col-lg-pull-8{right:66.66666667%}.col-lg-pull-7{right:58.33333333%}.col-lg-pull-6{right:50%}.col-lg-pull-5{right:41.66666667%}.col-lg-pull-4{right:33.33333333%}.col-lg-pull-3{right:25%}.col-lg-pull-2{right:16.66666667%}.col-lg-pull-1{right:8.33333333%}.col-lg-pull-0{right:auto}.col-lg-push-12{left:100%}.col-lg-push-11{left:91.66666667%}.col-lg-push-10{left:83.33333333%}.col-lg-push-9{left:75%}.col-lg-push-8{left:66.66666667%}.col-lg-push-7{left:58.33333333%}.col-lg-push-6{left:50%}.col-lg-push-5{left:41.66666667%}.col-lg-push-4{left:33.33333333%}.col-lg-push-3{left:25%}.col-lg-push-2{left:16.66666667%}.col-lg-push-1{left:8.33333333%}.col-lg-push-0{left:auto}.col-lg-offset-12{margin-left:100%}.col-lg-offset-11{margin-left:91.66666667%}.col-lg-offset-10{margin-left:83.33333333%}.col-lg-offset-9{margin-left:75%}.col-lg-offset-8{margin-left:66.66666667%}.col-lg-offset-7{margin-left:58.33333333%}.col-lg-offset-6{margin-left:50%}.col-lg-offset-5{margin-left:41.66666667%}.col-lg-offset-4{margin-left:33.33333333%}.col-lg-offset-3{margin-left:25%}.col-lg-offset-2{margin-left:16.66666667%}.col-lg-offset-1{margin-left:8.33333333%}.col-lg-offset-0{margin-left:0}}table{background-color:transparent}th{text-align:left}.table{width:100%;max-width:100%;margin-bottom:20px}.table>thead>tr>th,.table>tbody>tr>th,.table>tfoot>tr>th,.table>thead>tr>td,.table>tbody>tr>td,.table>tfoot>tr>td{padding:8px;line-height:1.42857143;vertical-align:top;border-top:1px solid #ddd}.table>thead>tr>th{vertical-align:bottom;border-bottom:2px solid #ddd}.table>caption+thead>tr:first-child>th,.table>colgroup+thead>tr:first-child>th,.table>thead:first-child>tr:first-child>th,.table>caption+thead>tr:first-child>td,.table>colgroup+thead>tr:first-child>td,.table>thead:first-child>tr:first-child>td{border-top:0}.table>tbody+tbody{border-top:2px solid #ddd}.table
.table{background-color:#fff}.table-condensed>thead>tr>th,.table-condensed>tbody>tr>th,.table-condensed>tfoot>tr>th,.table-condensed>thead>tr>td,.table-condensed>tbody>tr>td,.table-condensed>tfoot>tr>td{padding:5px}.table-bordered{border:1px
solid #ddd}.table-bordered>thead>tr>th,.table-bordered>tbody>tr>th,.table-bordered>tfoot>tr>th,.table-bordered>thead>tr>td,.table-bordered>tbody>tr>td,.table-bordered>tfoot>tr>td{border:1px
solid #ddd}.table-bordered>thead>tr>th,.table-bordered>thead>tr>td{border-bottom-width:2px}.table-striped>tbody>tr:nth-child(odd)>td,.table-striped>tbody>tr:nth-child(odd)>th{background-color:#f9f9f9}.table-hover>tbody>tr:hover>td,.table-hover>tbody>tr:hover>th{background-color:#f5f5f5}table col[class*="col-"]{position:static;display:table-column;float:none}table td[class*="col-"],
table th[class*="col-"]{position:static;display:table-cell;float:none}.table>thead>tr>td.active,.table>tbody>tr>td.active,.table>tfoot>tr>td.active,.table>thead>tr>th.active,.table>tbody>tr>th.active,.table>tfoot>tr>th.active,.table>thead>tr.active>td,.table>tbody>tr.active>td,.table>tfoot>tr.active>td,.table>thead>tr.active>th,.table>tbody>tr.active>th,.table>tfoot>tr.active>th{background-color:#f5f5f5}.table-hover>tbody>tr>td.active:hover,.table-hover>tbody>tr>th.active:hover,.table-hover>tbody>tr.active:hover>td,.table-hover>tbody>tr:hover>.active,.table-hover>tbody>tr.active:hover>th{background-color:#e8e8e8}.table>thead>tr>td.success,.table>tbody>tr>td.success,.table>tfoot>tr>td.success,.table>thead>tr>th.success,.table>tbody>tr>th.success,.table>tfoot>tr>th.success,.table>thead>tr.success>td,.table>tbody>tr.success>td,.table>tfoot>tr.success>td,.table>thead>tr.success>th,.table>tbody>tr.success>th,.table>tfoot>tr.success>th{background-color:#dff0d8}.table-hover>tbody>tr>td.success:hover,.table-hover>tbody>tr>th.success:hover,.table-hover>tbody>tr.success:hover>td,.table-hover>tbody>tr:hover>.success,.table-hover>tbody>tr.success:hover>th{background-color:#d0e9c6}.table>thead>tr>td.info,.table>tbody>tr>td.info,.table>tfoot>tr>td.info,.table>thead>tr>th.info,.table>tbody>tr>th.info,.table>tfoot>tr>th.info,.table>thead>tr.info>td,.table>tbody>tr.info>td,.table>tfoot>tr.info>td,.table>thead>tr.info>th,.table>tbody>tr.info>th,.table>tfoot>tr.info>th{background-color:#d9edf7}.table-hover>tbody>tr>td.info:hover,.table-hover>tbody>tr>th.info:hover,.table-hover>tbody>tr.info:hover>td,.table-hover>tbody>tr:hover>.info,.table-hover>tbody>tr.info:hover>th{background-color:#c4e3f3}.table>thead>tr>td.warning,.table>tbody>tr>td.warning,.table>tfoot>tr>td.warning,.table>thead>tr>th.warning,.table>tbody>tr>th.warning,.table>tfoot>tr>th.warning,.table>thead>tr.warning>td,.table>tbody>tr.warning>td,.table>tfoot>tr.warning>td,.table>thead>tr.warning>th,.table>tbody>tr.warning>th,.table>tfoot>tr.warning>th{background-color:#fcf8e3}.table-hover>tbody>tr>td.warning:hover,.table-hover>tbody>tr>th.warning:hover,.table-hover>tbody>tr.warning:hover>td,.table-hover>tbody>tr:hover>.warning,.table-hover>tbody>tr.warning:hover>th{background-color:#faf2cc}.table>thead>tr>td.danger,.table>tbody>tr>td.danger,.table>tfoot>tr>td.danger,.table>thead>tr>th.danger,.table>tbody>tr>th.danger,.table>tfoot>tr>th.danger,.table>thead>tr.danger>td,.table>tbody>tr.danger>td,.table>tfoot>tr.danger>td,.table>thead>tr.danger>th,.table>tbody>tr.danger>th,.table>tfoot>tr.danger>th{background-color:#f2dede}.table-hover>tbody>tr>td.danger:hover,.table-hover>tbody>tr>th.danger:hover,.table-hover>tbody>tr.danger:hover>td,.table-hover>tbody>tr:hover>.danger,.table-hover>tbody>tr.danger:hover>th{background-color:#ebcccc}@media screen and (max-width: 767px){.ear-ad{display:none}.table-responsive{width:100%;margin-bottom:15px;overflow-x:auto;overflow-y:hidden;-webkit-overflow-scrolling:touch;-ms-overflow-style: -ms-autohiding-scrollbar;border:1px
solid #ddd}.table-responsive>.table{margin-bottom:0}.table-responsive>.table>thead>tr>th,.table-responsive>.table>tbody>tr>th,.table-responsive>.table>tfoot>tr>th,.table-responsive>.table>thead>tr>td,.table-responsive>.table>tbody>tr>td,.table-responsive>.table>tfoot>tr>td{white-space:nowrap}.table-responsive>.table-bordered{border:0}.table-responsive>.table-bordered>thead>tr>th:first-child,.table-responsive>.table-bordered>tbody>tr>th:first-child,.table-responsive>.table-bordered>tfoot>tr>th:first-child,.table-responsive>.table-bordered>thead>tr>td:first-child,.table-responsive>.table-bordered>tbody>tr>td:first-child,.table-responsive>.table-bordered>tfoot>tr>td:first-child{border-left:0}.table-responsive>.table-bordered>thead>tr>th:last-child,.table-responsive>.table-bordered>tbody>tr>th:last-child,.table-responsive>.table-bordered>tfoot>tr>th:last-child,.table-responsive>.table-bordered>thead>tr>td:last-child,.table-responsive>.table-bordered>tbody>tr>td:last-child,.table-responsive>.table-bordered>tfoot>tr>td:last-child{border-right:0}.table-responsive>.table-bordered>tbody>tr:last-child>th,.table-responsive>.table-bordered>tfoot>tr:last-child>th,.table-responsive>.table-bordered>tbody>tr:last-child>td,.table-responsive>.table-bordered>tfoot>tr:last-child>td{border-bottom:0}}fieldset{min-width:0;padding:0;margin:0;border:0}legend{display:block;width:100%;padding:0;margin-bottom:20px;font-size:21px;line-height:inherit;color:#333;border:0;border-bottom:1px solid #e5e5e5}label{display:inline-block;max-width:100%;margin-bottom:5px;font-weight:bold}input[type="search"]{-webkit-box-sizing:border-box;-moz-box-sizing:border-box;box-sizing:border-box}input[type="radio"],input[type="checkbox"]{margin:4px
0 0;margin-top:1px \9;line-height:normal}input[type="file"]{display:block}input[type="range"]{display:block;width:100%}select[multiple],select[size]{height:auto}input[type="file"]:focus,input[type="radio"]:focus,input[type="checkbox"]:focus{outline:thin dotted;outline:5px
auto -webkit-focus-ring-color;outline-offset: -2px}output{display:block;padding-top:7px;font-size:14px;line-height:1.42857143;color:#555}.form-control{display:block;width:100%;height:34px;padding:6px
12px;font-size:14px;line-height:1.42857143;color:#555;background-color:#fff;background-image:none;border:1px
solid #ccc;border-radius:4px;-webkit-box-shadow:inset 0 1px 1px rgba(0, 0, 0, .075);box-shadow:inset 0 1px 1px rgba(0, 0, 0, .075);-webkit-transition:border-color ease-in-out .15s, -webkit-box-shadow ease-in-out .15s;-o-transition:border-color ease-in-out .15s, box-shadow ease-in-out .15s;transition:border-color ease-in-out .15s, box-shadow ease-in-out .15s}.form-control:focus{border-color:#66afe9;outline:0;-webkit-box-shadow:inset 0 1px 1px rgba(0,0,0,.075), 0 0 8px rgba(102, 175, 233, .6);box-shadow:inset 0 1px 1px rgba(0,0,0,.075), 0 0 8px rgba(102,175,233,.6)}.form-control::-moz-placeholder{color:#777;opacity:1}.form-control:-ms-input-placeholder{color:#777}.form-control::-webkit-input-placeholder{color:#777}.form-control[disabled],
.form-control[readonly],
fieldset[disabled] .form-control{cursor:not-allowed;background-color:#eee;opacity:1}textarea.form-control{height:auto}input[type="search"]{-webkit-appearance:none}input[type="date"],input[type="time"],input[type="datetime-local"],input[type="month"]{line-height:34px;line-height:1.42857143 \0}input[type="date"].input-sm,input[type="time"].input-sm,input[type="datetime-local"].input-sm,input[type="month"].input-sm{line-height:30px}input[type="date"].input-lg,input[type="time"].input-lg,input[type="datetime-local"].input-lg,input[type="month"].input-lg{line-height:46px}.form-group{margin-bottom:15px}.radio,.checkbox{position:relative;display:block;min-height:20px;margin-top:10px;margin-bottom:10px}.radio label,
.checkbox
label{padding-left:20px;margin-bottom:0;font-weight:normal;cursor:pointer}.radio input[type="radio"],
.radio-inline input[type="radio"],
.checkbox input[type="checkbox"],
.checkbox-inline input[type="checkbox"]{position:absolute;margin-top:4px \9;margin-left: -20px}.radio+.radio,.checkbox+.checkbox{margin-top: -5px}.radio-inline,.checkbox-inline{display:inline-block;padding-left:20px;margin-bottom:0;font-weight:normal;vertical-align:middle;cursor:pointer}.radio-inline+.radio-inline,.checkbox-inline+.checkbox-inline{margin-top:0;margin-left:10px}input[type="radio"][disabled],
input[type="checkbox"][disabled],
input[type="radio"].disabled,
input[type="checkbox"].disabled,
fieldset[disabled] input[type="radio"],
fieldset[disabled] input[type="checkbox"]{cursor:not-allowed}.radio-inline.disabled,
.checkbox-inline.disabled,
fieldset[disabled] .radio-inline,
fieldset[disabled] .checkbox-inline{cursor:not-allowed}.radio.disabled label,
.checkbox.disabled label,
fieldset[disabled] .radio label,
fieldset[disabled] .checkbox
label{cursor:not-allowed}.form-control-static{padding-top:7px;padding-bottom:7px;margin-bottom:0}.form-control-static.input-lg,.form-control-static.input-sm{padding-right:0;padding-left:0}.input-sm,
.form-horizontal .form-group-sm .form-control{height:30px;padding:5px
10px;font-size:12px;line-height:1.5;border-radius:3px}select.input-sm{height:30px;line-height:30px}textarea.input-sm,select[multiple].input-sm{height:auto}.input-lg,
.form-horizontal .form-group-lg .form-control{height:46px;padding:10px
16px;font-size:18px;line-height:1.33;border-radius:6px}select.input-lg{height:46px;line-height:46px}textarea.input-lg,select[multiple].input-lg{height:auto}.has-feedback{position:relative}.has-feedback .form-control{padding-right:42.5px}.form-control-feedback{position:absolute;top:25px;right:0;z-index:2;display:block;width:34px;height:34px;line-height:34px;text-align:center}.input-lg+.form-control-feedback{width:46px;height:46px;line-height:46px}.input-sm+.form-control-feedback{width:30px;height:30px;line-height:30px}.has-success .help-block,
.has-success .control-label,
.has-success .radio,
.has-success .checkbox,
.has-success .radio-inline,
.has-success .checkbox-inline{color:#3c763d}.has-success .form-control{border-color:#3c763d;-webkit-box-shadow:inset 0 1px 1px rgba(0, 0, 0, .075);box-shadow:inset 0 1px 1px rgba(0, 0, 0, .075)}.has-success .form-control:focus{border-color:#2b542c;-webkit-box-shadow:inset 0 1px 1px rgba(0, 0, 0, .075), 0 0 6px #67b168;box-shadow:inset 0 1px 1px rgba(0, 0, 0, .075), 0 0 6px #67b168}.has-success .input-group-addon{color:#3c763d;background-color:#dff0d8;border-color:#3c763d}.has-success .form-control-feedback{color:#3c763d}.has-warning .help-block,
.has-warning .control-label,
.has-warning .radio,
.has-warning .checkbox,
.has-warning .radio-inline,
.has-warning .checkbox-inline{color:#8a6d3b}.has-warning .form-control{border-color:#8a6d3b;-webkit-box-shadow:inset 0 1px 1px rgba(0, 0, 0, .075);box-shadow:inset 0 1px 1px rgba(0, 0, 0, .075)}.has-warning .form-control:focus{border-color:#66512c;-webkit-box-shadow:inset 0 1px 1px rgba(0, 0, 0, .075), 0 0 6px #c0a16b;box-shadow:inset 0 1px 1px rgba(0, 0, 0, .075), 0 0 6px #c0a16b}.has-warning .input-group-addon{color:#8a6d3b;background-color:#fcf8e3;border-color:#8a6d3b}.has-warning .form-control-feedback{color:#8a6d3b}.has-error .help-block,
.has-error .control-label,
.has-error .radio,
.has-error .checkbox,
.has-error .radio-inline,
.has-error .checkbox-inline{color:#a94442}.has-error .form-control{border-color:#a94442;-webkit-box-shadow:inset 0 1px 1px rgba(0, 0, 0, .075);box-shadow:inset 0 1px 1px rgba(0, 0, 0, .075)}.has-error .form-control:focus{border-color:#843534;-webkit-box-shadow:inset 0 1px 1px rgba(0, 0, 0, .075), 0 0 6px #ce8483;box-shadow:inset 0 1px 1px rgba(0, 0, 0, .075), 0 0 6px #ce8483}.has-error .input-group-addon{color:#a94442;background-color:#f2dede;border-color:#a94442}.has-error .form-control-feedback{color:#a94442}.has-feedback label.sr-only~.form-control-feedback{top:0}.help-block{display:block;margin-top:5px;margin-bottom:10px;color:#737373}@media (min-width: 768px){.form-inline .form-group{display:inline-block;margin-bottom:0;vertical-align:middle}.form-inline .form-control{display:inline-block;width:auto;vertical-align:middle}.form-inline .input-group{display:inline-table;vertical-align:middle}.form-inline .input-group .input-group-addon,
.form-inline .input-group .input-group-btn,
.form-inline .input-group .form-control{width:auto}.form-inline .input-group>.form-control{width:100%}.form-inline .control-label{margin-bottom:0;vertical-align:middle}.form-inline .radio,
.form-inline
.checkbox{display:inline-block;margin-top:0;margin-bottom:0;vertical-align:middle}.form-inline .radio label,
.form-inline .checkbox
label{padding-left:0}.form-inline .radio input[type="radio"],
.form-inline .checkbox input[type="checkbox"]{position:relative;margin-left:0}.form-inline .has-feedback .form-control-feedback{top:0}}.form-horizontal .radio,
.form-horizontal .checkbox,
.form-horizontal .radio-inline,
.form-horizontal .checkbox-inline{padding-top:7px;margin-top:0;margin-bottom:0}.form-horizontal .radio,
.form-horizontal
.checkbox{min-height:27px}.form-horizontal .form-group{margin-right: -15px;margin-left: -15px}@media (min-width: 768px){.form-horizontal .control-label{padding-top:7px;margin-bottom:0;text-align:right}}.form-horizontal .has-feedback .form-control-feedback{top:0;right:15px}@media (min-width: 768px){.form-horizontal .form-group-lg .control-label{padding-top:14.3px}}@media (min-width: 768px){.form-horizontal .form-group-sm .control-label{padding-top:6px}}.btn{display:inline-block;padding:6px
12px;margin-bottom:0;font-size:14px;font-weight:normal;line-height:1.42857143;text-align:center;white-space:nowrap;vertical-align:middle;cursor:pointer;-webkit-user-select:none;-moz-user-select:none;-ms-user-select:none;user-select:none;background-image:none;border:1px
solid transparent;border-radius:4px}.btn:focus,.btn:active:focus,.btn.active:focus{outline:thin dotted;outline:5px
auto -webkit-focus-ring-color;outline-offset: -2px}.btn:hover,.btn:focus{color:#333;text-decoration:none}.btn:active,.btn.active{background-image:none;outline:0;-webkit-box-shadow:inset 0 3px 5px rgba(0, 0, 0, .125);box-shadow:inset 0 3px 5px rgba(0, 0, 0, .125)}.btn.disabled,
.btn[disabled],
fieldset[disabled] .btn{pointer-events:none;cursor:not-allowed;filter:alpha(opacity=65);-webkit-box-shadow:none;box-shadow:none;opacity: .65}.btn-default{color:#333;background-color:#fff;border-color:#ccc}.btn-default:hover,.btn-default:focus,.btn-default:active,.btn-default.active,.open>.dropdown-toggle.btn-default{color:#333;background-color:#e6e6e6;border-color:#adadad}.btn-default:active,.btn-default.active,.open>.dropdown-toggle.btn-default{background-image:none}.btn-default.disabled,
.btn-default[disabled],
fieldset[disabled] .btn-default,
.btn-default.disabled:hover,
.btn-default[disabled]:hover,
fieldset[disabled] .btn-default:hover,
.btn-default.disabled:focus,
.btn-default[disabled]:focus,
fieldset[disabled] .btn-default:focus,
.btn-default.disabled:active,
.btn-default[disabled]:active,
fieldset[disabled] .btn-default:active,
.btn-default.disabled.active,
.btn-default[disabled].active,
fieldset[disabled] .btn-default.active{background-color:#fff;border-color:#ccc}.btn-default
.badge{color:#fff;background-color:#333}.btn-primary{color:#fff;background-color:#428bca;border-color:#357ebd}.btn-primary:hover,.btn-primary:focus,.btn-primary:active,.btn-primary.active,.open>.dropdown-toggle.btn-primary{color:#fff;background-color:#3071a9;border-color:#285e8e}.btn-primary:active,.btn-primary.active,.open>.dropdown-toggle.btn-primary{background-image:none}.btn-primary.disabled,
.btn-primary[disabled],
fieldset[disabled] .btn-primary,
.btn-primary.disabled:hover,
.btn-primary[disabled]:hover,
fieldset[disabled] .btn-primary:hover,
.btn-primary.disabled:focus,
.btn-primary[disabled]:focus,
fieldset[disabled] .btn-primary:focus,
.btn-primary.disabled:active,
.btn-primary[disabled]:active,
fieldset[disabled] .btn-primary:active,
.btn-primary.disabled.active,
.btn-primary[disabled].active,
fieldset[disabled] .btn-primary.active{background-color:#428bca;border-color:#357ebd}.btn-primary
.badge{color:#428bca;background-color:#fff}.btn-success{color:#fff;background-color:#5cb85c;border-color:#4cae4c}.btn-success:hover,.btn-success:focus,.btn-success:active,.btn-success.active,.open>.dropdown-toggle.btn-success{color:#fff;background-color:#449d44;border-color:#398439}.btn-success:active,.btn-success.active,.open>.dropdown-toggle.btn-success{background-image:none}.btn-success.disabled,
.btn-success[disabled],
fieldset[disabled] .btn-success,
.btn-success.disabled:hover,
.btn-success[disabled]:hover,
fieldset[disabled] .btn-success:hover,
.btn-success.disabled:focus,
.btn-success[disabled]:focus,
fieldset[disabled] .btn-success:focus,
.btn-success.disabled:active,
.btn-success[disabled]:active,
fieldset[disabled] .btn-success:active,
.btn-success.disabled.active,
.btn-success[disabled].active,
fieldset[disabled] .btn-success.active{background-color:#5cb85c;border-color:#4cae4c}.btn-success
.badge{color:#5cb85c;background-color:#fff}.btn-info{color:#fff;background-color:#5bc0de;border-color:#46b8da}.btn-info:hover,.btn-info:focus,.btn-info:active,.btn-info.active,.open>.dropdown-toggle.btn-info{color:#fff;background-color:#31b0d5;border-color:#269abc}.btn-info:active,.btn-info.active,.open>.dropdown-toggle.btn-info{background-image:none}.btn-info.disabled,
.btn-info[disabled],
fieldset[disabled] .btn-info,
.btn-info.disabled:hover,
.btn-info[disabled]:hover,
fieldset[disabled] .btn-info:hover,
.btn-info.disabled:focus,
.btn-info[disabled]:focus,
fieldset[disabled] .btn-info:focus,
.btn-info.disabled:active,
.btn-info[disabled]:active,
fieldset[disabled] .btn-info:active,
.btn-info.disabled.active,
.btn-info[disabled].active,
fieldset[disabled] .btn-info.active{background-color:#5bc0de;border-color:#46b8da}.btn-info
.badge{color:#5bc0de;background-color:#fff}.btn-warning{color:#fff;background-color:#f0ad4e;border-color:#eea236}.btn-warning:hover,.btn-warning:focus,.btn-warning:active,.btn-warning.active,.open>.dropdown-toggle.btn-warning{color:#fff;background-color:#ec971f;border-color:#d58512}.btn-warning:active,.btn-warning.active,.open>.dropdown-toggle.btn-warning{background-image:none}.btn-warning.disabled,
.btn-warning[disabled],
fieldset[disabled] .btn-warning,
.btn-warning.disabled:hover,
.btn-warning[disabled]:hover,
fieldset[disabled] .btn-warning:hover,
.btn-warning.disabled:focus,
.btn-warning[disabled]:focus,
fieldset[disabled] .btn-warning:focus,
.btn-warning.disabled:active,
.btn-warning[disabled]:active,
fieldset[disabled] .btn-warning:active,
.btn-warning.disabled.active,
.btn-warning[disabled].active,
fieldset[disabled] .btn-warning.active{background-color:#f0ad4e;border-color:#eea236}.btn-warning
.badge{color:#f0ad4e;background-color:#fff}.btn-danger{color:#fff;background-color:#d9534f;border-color:#d43f3a}.btn-danger:hover,.btn-danger:focus,.btn-danger:active,.btn-danger.active,.open>.dropdown-toggle.btn-danger{color:#fff;background-color:#c9302c;border-color:#ac2925}.btn-danger:active,.btn-danger.active,.open>.dropdown-toggle.btn-danger{background-image:none}.btn-danger.disabled,
.btn-danger[disabled],
fieldset[disabled] .btn-danger,
.btn-danger.disabled:hover,
.btn-danger[disabled]:hover,
fieldset[disabled] .btn-danger:hover,
.btn-danger.disabled:focus,
.btn-danger[disabled]:focus,
fieldset[disabled] .btn-danger:focus,
.btn-danger.disabled:active,
.btn-danger[disabled]:active,
fieldset[disabled] .btn-danger:active,
.btn-danger.disabled.active,
.btn-danger[disabled].active,
fieldset[disabled] .btn-danger.active{background-color:#d9534f;border-color:#d43f3a}.btn-danger
.badge{color:#d9534f;background-color:#fff}.btn-link{font-weight:normal;color:#428bca;cursor:pointer;border-radius:0}.btn-link,
.btn-link:active,
.btn-link[disabled],
fieldset[disabled] .btn-link{background-color:transparent;-webkit-box-shadow:none;box-shadow:none}.btn-link,.btn-link:hover,.btn-link:focus,.btn-link:active{border-color:transparent}.btn-link:hover,.btn-link:focus{color:#2a6496;text-decoration:underline;background-color:transparent}.btn-link[disabled]:hover,
fieldset[disabled] .btn-link:hover,
.btn-link[disabled]:focus,
fieldset[disabled] .btn-link:focus{color:#777;text-decoration:none}.btn-lg,.btn-group-lg>.btn{padding:10px
16px;font-size:18px;line-height:1.33;border-radius:6px}.btn-sm,.btn-group-sm>.btn{padding:5px
10px;font-size:12px;line-height:1.5;border-radius:3px}.btn-xs,.btn-group-xs>.btn{padding:1px
5px;font-size:12px;line-height:1.5;border-radius:3px}.btn-block{display:block;width:100%}.btn-block+.btn-block{margin-top:5px}input[type="submit"].btn-block,input[type="reset"].btn-block,input[type="button"].btn-block{width:100%}.fade{opacity:0;-webkit-transition:opacity .15s linear;-o-transition:opacity .15s linear;transition:opacity .15s linear}.fade.in{opacity:1}.collapse{display:none}.collapse.in{display:block}tr.collapse.in{display:table-row}tbody.collapse.in{display:table-row-group}.collapsing{position:relative;height:0;overflow:hidden;-webkit-transition:height .35s ease;-o-transition:height .35s ease;transition:height .35s ease}.caret{display:inline-block;width:0;height:0;margin-left:2px;vertical-align:middle;border-top:4px solid;border-right:4px solid transparent;border-left:4px solid transparent}.dropdown{position:relative}.dropdown-toggle:focus{outline:0}.dropdown-menu{position:absolute;top:100%;left:0;z-index:1000;display:none;float:left;min-width:160px;padding:5px
0;margin:2px
0 0;font-size:14px;text-align:left;list-style:none;background-color:#fff;-webkit-background-clip:padding-box;background-clip:padding-box;border:1px
solid #ccc;border:1px
solid rgba(0, 0, 0, .15);border-radius:4px;-webkit-box-shadow:0 6px 12px rgba(0, 0, 0, .175);box-shadow:0 6px 12px rgba(0,0,0,.175)}.dropdown-menu.pull-right{right:0;left:auto}.dropdown-menu
.divider{height:1px;margin:9px
0;overflow:hidden;background-color:#e5e5e5}.dropdown-menu>li>a{display:block;padding:3px
20px;clear:both;font-weight:normal;line-height:1.42857143;color:#333;white-space:nowrap}.dropdown-menu>li>a:hover,.dropdown-menu>li>a:focus{color:#262626;text-decoration:none;background-color:#f5f5f5}.dropdown-menu>.active>a,.dropdown-menu>.active>a:hover,.dropdown-menu>.active>a:focus{color:#fff;text-decoration:none;background-color:#428bca;outline:0}.dropdown-menu>.disabled>a,.dropdown-menu>.disabled>a:hover,.dropdown-menu>.disabled>a:focus{color:#777}.dropdown-menu>.disabled>a:hover,.dropdown-menu>.disabled>a:focus{text-decoration:none;cursor:not-allowed;background-color:transparent;background-image:none;filter:progid:DXImageTransform.Microsoft.gradient(enabled = false)}.open>.dropdown-menu{display:block}.open>a{outline:0}.dropdown-menu-right{right:0;left:auto}.dropdown-menu-left{right:auto;left:0}.dropdown-header{display:block;padding:3px
20px;font-size:12px;line-height:1.42857143;color:#777;white-space:nowrap}.dropdown-backdrop{position:fixed;top:0;right:0;bottom:0;left:0;z-index:990}.pull-right>.dropdown-menu{right:0;left:auto}.dropup .caret,
.navbar-fixed-bottom .dropdown
.caret{content:"";border-top:0;border-bottom:4px solid}.dropup .dropdown-menu,
.navbar-fixed-bottom .dropdown .dropdown-menu{top:auto;bottom:100%;margin-bottom:1px}@media (min-width: 768px){.navbar-right .dropdown-menu{right:0;left:auto}.navbar-right .dropdown-menu-left{right:auto;left:0}}.btn-group,.btn-group-vertical{position:relative;display:inline-block;vertical-align:middle}.btn-group>.btn,.btn-group-vertical>.btn{position:relative;float:left}.btn-group>.btn:hover,.btn-group-vertical>.btn:hover,.btn-group>.btn:focus,.btn-group-vertical>.btn:focus,.btn-group>.btn:active,.btn-group-vertical>.btn:active,.btn-group>.btn.active,.btn-group-vertical>.btn.active{z-index:2}.btn-group>.btn:focus,.btn-group-vertical>.btn:focus{outline:0}.btn-group .btn + .btn,
.btn-group .btn + .btn-group,
.btn-group .btn-group + .btn,
.btn-group .btn-group+.btn-group{margin-left: -1px}.btn-toolbar{margin-left: -5px}.btn-toolbar .btn-group,
.btn-toolbar .input-group{float:left}.btn-toolbar>.btn,.btn-toolbar>.btn-group,.btn-toolbar>.input-group{margin-left:5px}.btn-group>.btn:not(:first-child):not(:last-child):not(.dropdown-toggle){border-radius:0}.btn-group>.btn:first-child{margin-left:0}.btn-group>.btn:first-child:not(:last-child):not(.dropdown-toggle){border-top-right-radius:0;border-bottom-right-radius:0}.btn-group>.btn:last-child:not(:first-child),.btn-group>.dropdown-toggle:not(:first-child){border-top-left-radius:0;border-bottom-left-radius:0}.btn-group>.btn-group{float:left}.btn-group>.btn-group:not(:first-child):not(:last-child)>.btn{border-radius:0}.btn-group>.btn-group:first-child>.btn:last-child,.btn-group>.btn-group:first-child>.dropdown-toggle{border-top-right-radius:0;border-bottom-right-radius:0}.btn-group>.btn-group:last-child>.btn:first-child{border-top-left-radius:0;border-bottom-left-radius:0}.btn-group .dropdown-toggle:active,
.btn-group.open .dropdown-toggle{outline:0}.btn-group>.btn+.dropdown-toggle{padding-right:8px;padding-left:8px}.btn-group>.btn-lg+.dropdown-toggle{padding-right:12px;padding-left:12px}.btn-group.open .dropdown-toggle{-webkit-box-shadow:inset 0 3px 5px rgba(0, 0, 0, .125);box-shadow:inset 0 3px 5px rgba(0, 0, 0, .125)}.btn-group.open .dropdown-toggle.btn-link{-webkit-box-shadow:none;box-shadow:none}.btn
.caret{margin-left:0}.btn-lg
.caret{border-width:5px 5px 0;border-bottom-width:0}.dropup .btn-lg
.caret{border-width:0 5px 5px}.btn-group-vertical>.btn,.btn-group-vertical>.btn-group,.btn-group-vertical>.btn-group>.btn{display:block;float:none;width:100%;max-width:100%}.btn-group-vertical>.btn-group>.btn{float:none}.btn-group-vertical>.btn+.btn,.btn-group-vertical>.btn+.btn-group,.btn-group-vertical>.btn-group+.btn,.btn-group-vertical>.btn-group+.btn-group{margin-top: -1px;margin-left:0}.btn-group-vertical>.btn:not(:first-child):not(:last-child){border-radius:0}.btn-group-vertical>.btn:first-child:not(:last-child){border-top-right-radius:4px;border-bottom-right-radius:0;border-bottom-left-radius:0}.btn-group-vertical>.btn:last-child:not(:first-child){border-top-left-radius:0;border-top-right-radius:0;border-bottom-left-radius:4px}.btn-group-vertical>.btn-group:not(:first-child):not(:last-child)>.btn{border-radius:0}.btn-group-vertical>.btn-group:first-child:not(:last-child)>.btn:last-child,.btn-group-vertical>.btn-group:first-child:not(:last-child)>.dropdown-toggle{border-bottom-right-radius:0;border-bottom-left-radius:0}.btn-group-vertical>.btn-group:last-child:not(:first-child)>.btn:first-child{border-top-left-radius:0;border-top-right-radius:0}.btn-group-justified{display:table;width:100%;table-layout:fixed;border-collapse:separate}.btn-group-justified>.btn,.btn-group-justified>.btn-group{display:table-cell;float:none;width:1%}.btn-group-justified > .btn-group
.btn{width:100%}.btn-group-justified > .btn-group .dropdown-menu{left:auto}[data-toggle="buttons"]>.btn>input[type="radio"],[data-toggle="buttons"]>.btn>input[type="checkbox"]{position:absolute;z-index: -1;filter:alpha(opacity=0);opacity:0}.input-group{position:relative;display:table;border-collapse:separate}.input-group[class*="col-"]{float:none;padding-right:0;padding-left:0}.input-group .form-control{position:relative;z-index:2;float:left;width:100%;margin-bottom:0}.input-group-lg>.form-control,.input-group-lg>.input-group-addon,.input-group-lg>.input-group-btn>.btn{height:46px;padding:10px
16px;font-size:18px;line-height:1.33;border-radius:6px}select.input-group-lg>.form-control,select.input-group-lg>.input-group-addon,select.input-group-lg>.input-group-btn>.btn{height:46px;line-height:46px}textarea.input-group-lg>.form-control,textarea.input-group-lg>.input-group-addon,textarea.input-group-lg>.input-group-btn>.btn,select[multiple].input-group-lg>.form-control,select[multiple].input-group-lg>.input-group-addon,select[multiple].input-group-lg>.input-group-btn>.btn{height:auto}.input-group-sm>.form-control,.input-group-sm>.input-group-addon,.input-group-sm>.input-group-btn>.btn{height:30px;padding:5px
10px;font-size:12px;line-height:1.5;border-radius:3px}select.input-group-sm>.form-control,select.input-group-sm>.input-group-addon,select.input-group-sm>.input-group-btn>.btn{height:30px;line-height:30px}textarea.input-group-sm>.form-control,textarea.input-group-sm>.input-group-addon,textarea.input-group-sm>.input-group-btn>.btn,select[multiple].input-group-sm>.form-control,select[multiple].input-group-sm>.input-group-addon,select[multiple].input-group-sm>.input-group-btn>.btn{height:auto}.input-group-addon,
.input-group-btn,
.input-group .form-control{display:table-cell}.input-group-addon:not(:first-child):not(:last-child),
.input-group-btn:not(:first-child):not(:last-child),
.input-group .form-control:not(:first-child):not(:last-child){border-radius:0}.input-group-addon,.input-group-btn{width:1%;white-space:nowrap;vertical-align:middle}.input-group-addon{padding:6px
12px;font-size:14px;font-weight:normal;line-height:1;color:#555;text-align:center;background-color:#eee;border:1px
solid #ccc;border-radius:4px}.input-group-addon.input-sm{padding:5px
10px;font-size:12px;border-radius:3px}.input-group-addon.input-lg{padding:10px
16px;font-size:18px;border-radius:6px}.input-group-addon input[type="radio"],
.input-group-addon input[type="checkbox"]{margin-top:0}.input-group .form-control:first-child,.input-group-addon:first-child,.input-group-btn:first-child>.btn,.input-group-btn:first-child>.btn-group>.btn,.input-group-btn:first-child>.dropdown-toggle,.input-group-btn:last-child>.btn:not(:last-child):not(.dropdown-toggle),.input-group-btn:last-child>.btn-group:not(:last-child)>.btn{border-top-right-radius:0;border-bottom-right-radius:0}.input-group-addon:first-child{border-right:0}.input-group .form-control:last-child,.input-group-addon:last-child,.input-group-btn:last-child>.btn,.input-group-btn:last-child>.btn-group>.btn,.input-group-btn:last-child>.dropdown-toggle,.input-group-btn:first-child>.btn:not(:first-child),.input-group-btn:first-child>.btn-group:not(:first-child)>.btn{border-top-left-radius:0;border-bottom-left-radius:0}.input-group-addon:last-child{border-left:0}.input-group-btn{position:relative;font-size:0;white-space:nowrap}.input-group-btn>.btn{position:relative}.input-group-btn>.btn+.btn{margin-left: -1px}.input-group-btn>.btn:hover,.input-group-btn>.btn:focus,.input-group-btn>.btn:active{z-index:2}.input-group-btn:first-child>.btn,.input-group-btn:first-child>.btn-group{margin-right: -1px}.input-group-btn:last-child>.btn,.input-group-btn:last-child>.btn-group{margin-left: -1px}.nav{padding-left:0;margin-bottom:0;list-style:none}.nav>li{position:relative;display:block}.nav>li>a{position:relative;display:block;padding:10px
15px}.nav>li>a:hover,.nav>li>a:focus{text-decoration:none;background-color:#eee}.nav>li.disabled>a{color:#777}.nav>li.disabled>a:hover,.nav>li.disabled>a:focus{color:#777;text-decoration:none;cursor:not-allowed;background-color:transparent}.nav .open > a,
.nav .open > a:hover,
.nav .open>a:focus{background-color:#eee;border-color:#428bca}.nav .nav-divider{height:1px;margin:9px
0;overflow:hidden;background-color:#e5e5e5}.nav>li>a>img{max-width:none}.nav-tabs{border-bottom:1px solid #ddd}.nav-tabs>li{float:left;margin-bottom: -1px}.nav-tabs>li>a{margin-right:2px;line-height:1.42857143;border:1px
solid transparent;border-radius:4px 4px 0 0}.nav-tabs>li>a:hover{border-color:#eee #eee #ddd}.nav-tabs>li.active>a,.nav-tabs>li.active>a:hover,.nav-tabs>li.active>a:focus{color:#555;cursor:default;background-color:#fff;border:1px
solid #ddd;border-bottom-color:transparent}.nav-tabs.nav-justified{width:100%;border-bottom:0}.nav-tabs.nav-justified>li{float:none}.nav-tabs.nav-justified>li>a{margin-bottom:5px;text-align:center}.nav-tabs.nav-justified > .dropdown .dropdown-menu{top:auto;left:auto}@media (min-width: 768px){.nav-tabs.nav-justified>li{display:table-cell;width:1%}.nav-tabs.nav-justified>li>a{margin-bottom:0}}.nav-tabs.nav-justified>li>a{margin-right:0;border-radius:4px}.nav-tabs.nav-justified>.active>a,.nav-tabs.nav-justified>.active>a:hover,.nav-tabs.nav-justified>.active>a:focus{border:1px
solid #ddd}@media (min-width: 768px){.nav-tabs.nav-justified>li>a{border-bottom:1px solid #ddd;border-radius:4px 4px 0 0}.nav-tabs.nav-justified>.active>a,.nav-tabs.nav-justified>.active>a:hover,.nav-tabs.nav-justified>.active>a:focus{border-bottom-color:#fff}}.nav-pills>li{float:left}.nav-pills>li>a{border-radius:4px}.nav-pills>li+li{margin-left:2px}.nav-pills>li.active>a,.nav-pills>li.active>a:hover,.nav-pills>li.active>a:focus{color:#fff;background-color:#428bca}.nav-stacked>li{float:none}.nav-stacked>li+li{margin-top:2px;margin-left:0}.nav-justified{width:100%}.nav-justified>li{float:none}.nav-justified>li>a{margin-bottom:5px;text-align:center}.nav-justified > .dropdown .dropdown-menu{top:auto;left:auto}@media (min-width: 768px){.nav-justified>li{display:table-cell;width:1%}.nav-justified>li>a{margin-bottom:0}}.nav-tabs-justified{border-bottom:0}.nav-tabs-justified>li>a{margin-right:0;border-radius:4px}.nav-tabs-justified>.active>a,.nav-tabs-justified>.active>a:hover,.nav-tabs-justified>.active>a:focus{border:1px
solid #ddd}@media (min-width: 768px){.nav-tabs-justified>li>a{border-bottom:1px solid #ddd;border-radius:4px 4px 0 0}.nav-tabs-justified>.active>a,.nav-tabs-justified>.active>a:hover,.nav-tabs-justified>.active>a:focus{border-bottom-color:#fff}}.tab-content>.tab-pane{display:none}.tab-content>.active{display:block}.nav-tabs .dropdown-menu{margin-top: -1px;border-top-left-radius:0;border-top-right-radius:0}.navbar{position:relative;min-height:50px;margin-bottom:20px;border:1px
solid transparent}@media (min-width: 768px){.navbar{border-radius:4px}}@media (min-width: 768px){.navbar-header{float:left}}.navbar-collapse{padding-right:15px;padding-left:15px;overflow-x:visible;-webkit-overflow-scrolling:touch;border-top:1px solid transparent;-webkit-box-shadow:inset 0 1px 0 rgba(255, 255, 255, .1);box-shadow:inset 0 1px 0 rgba(255,255,255,.1)}.navbar-collapse.in{overflow-y:auto}@media (min-width: 768px){.navbar-collapse{width:auto;border-top:0;-webkit-box-shadow:none;box-shadow:none}.navbar-collapse.collapse{display:block !important;height:auto !important;padding-bottom:0;overflow:visible !important}.navbar-collapse.in{overflow-y:visible}.navbar-fixed-top .navbar-collapse,
.navbar-static-top .navbar-collapse,
.navbar-fixed-bottom .navbar-collapse{padding-right:0;padding-left:0}}.navbar-fixed-top .navbar-collapse,
.navbar-fixed-bottom .navbar-collapse{max-height:340px}@media (max-width: 480px) and (orientation: landscape){.navbar-fixed-top .navbar-collapse,
.navbar-fixed-bottom .navbar-collapse{max-height:200px}}.container>.navbar-header,.container-fluid>.navbar-header,.container>.navbar-collapse,.container-fluid>.navbar-collapse{margin-right: -15px;margin-left: -15px}@media (min-width: 768px){.container>.navbar-header,.container-fluid>.navbar-header,.container>.navbar-collapse,.container-fluid>.navbar-collapse{margin-right:0;margin-left:0}}.navbar-static-top{z-index:1000;border-width:0 0 1px}@media (min-width: 768px){.navbar-static-top{border-radius:0}}.navbar-fixed-top,.navbar-fixed-bottom{position:fixed;right:0;left:0;z-index:1030;-webkit-transform:translate3d(0, 0, 0);-o-transform:translate3d(0, 0, 0);transform:translate3d(0, 0, 0)}@media (min-width: 768px){.navbar-fixed-top,.navbar-fixed-bottom{border-radius:0}}.navbar-fixed-top{top:0;border-width:0 0 1px}.navbar-fixed-bottom{bottom:0;margin-bottom:0;border-width:1px 0 0}.navbar-brand{float:left;height:50px;padding:15px
15px;font-size:18px;line-height:20px}.navbar-brand:hover,.navbar-brand:focus{text-decoration:none}@media (min-width: 768px){.navbar > .container .navbar-brand,
.navbar > .container-fluid .navbar-brand{margin-left: -15px}}.navbar-toggle{position:relative;float:right;padding:9px
10px;margin-top:8px;margin-right:15px;margin-bottom:8px;background-color:transparent;background-image:none;border:1px
solid transparent;border-radius:4px}.navbar-toggle:focus{outline:0}.navbar-toggle .icon-bar{display:block;width:22px;height:2px;border-radius:1px}.navbar-toggle .icon-bar+.icon-bar{margin-top:4px}@media (min-width: 768px){.navbar-toggle{display:none}}.navbar-nav{margin:7.5px -15px}.navbar-nav>li>a{padding-top:10px;padding-bottom:10px;line-height:20px}@media (max-width: 767px){.navbar-nav .open .dropdown-menu{position:static;float:none;width:auto;margin-top:0;background-color:transparent;border:0;-webkit-box-shadow:none;box-shadow:none}.navbar-nav .open .dropdown-menu > li > a,
.navbar-nav .open .dropdown-menu .dropdown-header{padding:5px
15px 5px 25px}.navbar-nav .open .dropdown-menu>li>a{line-height:20px}.navbar-nav .open .dropdown-menu > li > a:hover,
.navbar-nav .open .dropdown-menu>li>a:focus{background-image:none}}@media (min-width: 768px){.navbar-nav{float:left;margin:0}.navbar-nav>li{float:left}.navbar-nav>li>a{padding-top:15px;padding-bottom:15px}.navbar-nav.navbar-right:last-child{margin-right: -15px}}@media (min-width: 768px){.navbar-left{float:left !important}.navbar-right{float:right !important}}.navbar-form{padding:10px
15px;margin-top:8px;margin-right: -15px;margin-bottom:8px;margin-left: -15px;border-top:1px solid transparent;border-bottom:1px solid transparent;-webkit-box-shadow:inset 0 1px 0 rgba(255, 255, 255, .1), 0 1px 0 rgba(255, 255, 255, .1);box-shadow:inset 0 1px 0 rgba(255, 255, 255, .1), 0 1px 0 rgba(255, 255, 255, .1)}@media (min-width: 768px){.navbar-form .form-group{display:inline-block;margin-bottom:0;vertical-align:middle}.navbar-form .form-control{display:inline-block;width:auto;vertical-align:middle}.navbar-form .input-group{display:inline-table;vertical-align:middle}.navbar-form .input-group .input-group-addon,
.navbar-form .input-group .input-group-btn,
.navbar-form .input-group .form-control{width:auto}.navbar-form .input-group>.form-control{width:100%}.navbar-form .control-label{margin-bottom:0;vertical-align:middle}.navbar-form .radio,
.navbar-form
.checkbox{display:inline-block;margin-top:0;margin-bottom:0;vertical-align:middle}.navbar-form .radio label,
.navbar-form .checkbox
label{padding-left:0}.navbar-form .radio input[type="radio"],
.navbar-form .checkbox input[type="checkbox"]{position:relative;margin-left:0}.navbar-form .has-feedback .form-control-feedback{top:0}}@media (max-width: 767px){.navbar-form .form-group{margin-bottom:5px}}@media (min-width: 768px){.navbar-form{width:auto;padding-top:0;padding-bottom:0;margin-right:0;margin-left:0;border:0;-webkit-box-shadow:none;box-shadow:none}.navbar-form.navbar-right:last-child{margin-right: -15px}}.navbar-nav>li>.dropdown-menu{margin-top:0;border-top-left-radius:0;border-top-right-radius:0}.navbar-fixed-bottom .navbar-nav>li>.dropdown-menu{border-bottom-right-radius:0;border-bottom-left-radius:0}.navbar-btn{margin-top:8px;margin-bottom:8px}.navbar-btn.btn-sm{margin-top:10px;margin-bottom:10px}.navbar-btn.btn-xs{margin-top:14px;margin-bottom:14px}.navbar-text{margin-top:15px;margin-bottom:15px}@media (min-width: 768px){.navbar-text{float:left;margin-right:15px;margin-left:15px}.navbar-text.navbar-right:last-child{margin-right:0}}.navbar-default{background-color:#f8f8f8;border-color:#e7e7e7}.navbar-default .navbar-brand{color:#777}.navbar-default .navbar-brand:hover,
.navbar-default .navbar-brand:focus{color:#5e5e5e;background-color:transparent}.navbar-default .navbar-text{color:#777}.navbar-default .navbar-nav>li>a{color:#777}.navbar-default .navbar-nav > li > a:hover,
.navbar-default .navbar-nav>li>a:focus{color:#333;background-color:transparent}.navbar-default .navbar-nav > .active > a,
.navbar-default .navbar-nav > .active > a:hover,
.navbar-default .navbar-nav>.active>a:focus{color:#555;background-color:#e7e7e7}.navbar-default .navbar-nav > .disabled > a,
.navbar-default .navbar-nav > .disabled > a:hover,
.navbar-default .navbar-nav>.disabled>a:focus{color:#ccc;background-color:transparent}.navbar-default .navbar-toggle{border-color:#ddd}.navbar-default .navbar-toggle:hover,
.navbar-default .navbar-toggle:focus{background-color:#ddd}.navbar-default .navbar-toggle .icon-bar{background-color:#888}.navbar-default .navbar-collapse,
.navbar-default .navbar-form{border-color:#e7e7e7}.navbar-default .navbar-nav > .open > a,
.navbar-default .navbar-nav > .open > a:hover,
.navbar-default .navbar-nav>.open>a:focus{color:#555;background-color:#e7e7e7}@media (max-width: 767px){.navbar-default .navbar-nav .open .dropdown-menu>li>a{color:#777}.navbar-default .navbar-nav .open .dropdown-menu > li > a:hover,
.navbar-default .navbar-nav .open .dropdown-menu>li>a:focus{color:#333;background-color:transparent}.navbar-default .navbar-nav .open .dropdown-menu > .active > a,
.navbar-default .navbar-nav .open .dropdown-menu > .active > a:hover,
.navbar-default .navbar-nav .open .dropdown-menu>.active>a:focus{color:#555;background-color:#e7e7e7}.navbar-default .navbar-nav .open .dropdown-menu > .disabled > a,
.navbar-default .navbar-nav .open .dropdown-menu > .disabled > a:hover,
.navbar-default .navbar-nav .open .dropdown-menu>.disabled>a:focus{color:#ccc;background-color:transparent}}.navbar-default .navbar-link{color:#777}.navbar-default .navbar-link:hover{color:#333}.navbar-default .btn-link{color:#777}.navbar-default .btn-link:hover,
.navbar-default .btn-link:focus{color:#333}.navbar-default .btn-link[disabled]:hover,
fieldset[disabled] .navbar-default .btn-link:hover,
.navbar-default .btn-link[disabled]:focus,
fieldset[disabled] .navbar-default .btn-link:focus{color:#ccc}.navbar-inverse{background-color:#222;border-color:#080808}.navbar-inverse .navbar-brand{color:#777}.navbar-inverse .navbar-brand:hover,
.navbar-inverse .navbar-brand:focus{color:#fff;background-color:transparent}.navbar-inverse .navbar-text{color:#777}.navbar-inverse .navbar-nav>li>a{color:#777}.navbar-inverse .navbar-nav > li > a:hover,
.navbar-inverse .navbar-nav>li>a:focus{color:#fff;background-color:transparent}.navbar-inverse .navbar-nav > .active > a,
.navbar-inverse .navbar-nav > .active > a:hover,
.navbar-inverse .navbar-nav>.active>a:focus{color:#fff;background-color:#080808}.navbar-inverse .navbar-nav > .disabled > a,
.navbar-inverse .navbar-nav > .disabled > a:hover,
.navbar-inverse .navbar-nav>.disabled>a:focus{color:#444;background-color:transparent}.navbar-inverse .navbar-toggle{border-color:#333}.navbar-inverse .navbar-toggle:hover,
.navbar-inverse .navbar-toggle:focus{background-color:#333}.navbar-inverse .navbar-toggle .icon-bar{background-color:#fff}.navbar-inverse .navbar-collapse,
.navbar-inverse .navbar-form{border-color:#101010}.navbar-inverse .navbar-nav > .open > a,
.navbar-inverse .navbar-nav > .open > a:hover,
.navbar-inverse .navbar-nav>.open>a:focus{color:#fff;background-color:#080808}@media (max-width: 767px){.navbar-inverse .navbar-nav .open .dropdown-menu>.dropdown-header{border-color:#080808}.navbar-inverse .navbar-nav .open .dropdown-menu
.divider{background-color:#080808}.navbar-inverse .navbar-nav .open .dropdown-menu>li>a{color:#777}.navbar-inverse .navbar-nav .open .dropdown-menu > li > a:hover,
.navbar-inverse .navbar-nav .open .dropdown-menu>li>a:focus{color:#fff;background-color:transparent}.navbar-inverse .navbar-nav .open .dropdown-menu > .active > a,
.navbar-inverse .navbar-nav .open .dropdown-menu > .active > a:hover,
.navbar-inverse .navbar-nav .open .dropdown-menu>.active>a:focus{color:#fff;background-color:#080808}.navbar-inverse .navbar-nav .open .dropdown-menu > .disabled > a,
.navbar-inverse .navbar-nav .open .dropdown-menu > .disabled > a:hover,
.navbar-inverse .navbar-nav .open .dropdown-menu>.disabled>a:focus{color:#444;background-color:transparent}}.navbar-inverse .navbar-link{color:#777}.navbar-inverse .navbar-link:hover{color:#fff}.navbar-inverse .btn-link{color:#777}.navbar-inverse .btn-link:hover,
.navbar-inverse .btn-link:focus{color:#fff}.navbar-inverse .btn-link[disabled]:hover,
fieldset[disabled] .navbar-inverse .btn-link:hover,
.navbar-inverse .btn-link[disabled]:focus,
fieldset[disabled] .navbar-inverse .btn-link:focus{color:#444}.breadcrumb{padding:8px
15px;margin-bottom:20px;list-style:none;background-color:#f5f5f5;border-radius:4px}.breadcrumb>li{display:inline-block}.breadcrumb>li+li:before{padding:0
5px;color:#ccc;content:"/\00a0"}.breadcrumb>.active{color:#777}.pagination{display:inline-block;padding-left:0;margin:20px
0;border-radius:4px}.pagination>li{display:inline}.pagination>li>a,.pagination>li>span{position:relative;float:left;padding:6px
12px;margin-left: -1px;line-height:1.42857143;color:#428bca;text-decoration:none;background-color:#fff;border:1px
solid #ddd}.pagination>li:first-child>a,.pagination>li:first-child>span{margin-left:0;border-top-left-radius:4px;border-bottom-left-radius:4px}.pagination>li:last-child>a,.pagination>li:last-child>span{border-top-right-radius:4px;border-bottom-right-radius:4px}.pagination>li>a:hover,.pagination>li>span:hover,.pagination>li>a:focus,.pagination>li>span:focus{color:#2a6496;background-color:#eee;border-color:#ddd}.pagination>.active>a,.pagination>.active>span,.pagination>.active>a:hover,.pagination>.active>span:hover,.pagination>.active>a:focus,.pagination>.active>span:focus{z-index:2;color:#fff;cursor:default;background-color:#428bca;border-color:#428bca}.pagination>.disabled>span,.pagination>.disabled>span:hover,.pagination>.disabled>span:focus,.pagination>.disabled>a,.pagination>.disabled>a:hover,.pagination>.disabled>a:focus{color:#777;cursor:not-allowed;background-color:#fff;border-color:#ddd}.pagination-lg>li>a,.pagination-lg>li>span{padding:10px
16px;font-size:18px}.pagination-lg>li:first-child>a,.pagination-lg>li:first-child>span{border-top-left-radius:6px;border-bottom-left-radius:6px}.pagination-lg>li:last-child>a,.pagination-lg>li:last-child>span{border-top-right-radius:6px;border-bottom-right-radius:6px}.pagination-sm>li>a,.pagination-sm>li>span{padding:5px
10px;font-size:12px}.pagination-sm>li:first-child>a,.pagination-sm>li:first-child>span{border-top-left-radius:3px;border-bottom-left-radius:3px}.pagination-sm>li:last-child>a,.pagination-sm>li:last-child>span{border-top-right-radius:3px;border-bottom-right-radius:3px}.pager{padding-left:0;margin:20px
0;text-align:center;list-style:none}.pager
li{display:inline}.pager li > a,
.pager li>span{display:inline-block;padding:5px
14px;background-color:#fff;border:1px
solid #ddd;border-radius:15px}.pager li > a:hover,
.pager li>a:focus{text-decoration:none;background-color:#eee}.pager .next > a,
.pager .next>span{float:right}.pager .previous > a,
.pager .previous>span{float:left}.pager .disabled > a,
.pager .disabled > a:hover,
.pager .disabled > a:focus,
.pager .disabled>span{color:#777;cursor:not-allowed;background-color:#fff}.label{display:inline;padding: .2em .6em .3em;font-size:75%;font-weight:bold;line-height:1;color:#fff;text-align:center;white-space:nowrap;vertical-align:baseline;border-radius: .25em}a.label:hover,a.label:focus{color:#fff;text-decoration:none;cursor:pointer}.label:empty{display:none}.btn
.label{position:relative;top: -1px}.label-default{background-color:#777}.label-default[href]:hover,.label-default[href]:focus{background-color:#5e5e5e}.label-primary{background-color:#428bca}.label-primary[href]:hover,.label-primary[href]:focus{background-color:#3071a9}.label-success{background-color:#5cb85c}.label-success[href]:hover,.label-success[href]:focus{background-color:#449d44}.label-info{background-color:#5bc0de}.label-info[href]:hover,.label-info[href]:focus{background-color:#31b0d5}.label-warning{background-color:#f0ad4e}.label-warning[href]:hover,.label-warning[href]:focus{background-color:#ec971f}.label-danger{background-color:#d9534f}.label-danger[href]:hover,.label-danger[href]:focus{background-color:#c9302c}.badge{display:inline-block;min-width:10px;padding:3px
7px;font-size:12px;font-weight:bold;line-height:1;color:#fff;text-align:center;white-space:nowrap;vertical-align:baseline;background-color:#777;border-radius:10px}.badge:empty{display:none}.btn
.badge{position:relative;top: -1px}.btn-xs
.badge{top:0;padding:1px
5px}a.badge:hover,a.badge:focus{color:#fff;text-decoration:none;cursor:pointer}a.list-group-item.active>.badge,.nav-pills>.active>a>.badge{color:#428bca;background-color:#fff}.nav-pills>li>a>.badge{margin-left:3px}.jumbotron{padding:30px;margin-bottom:30px;color:inherit;background-color:#eee}.jumbotron h1,
.jumbotron
.h1{color:inherit}.jumbotron
p{margin-bottom:15px;font-size:21px;font-weight:200}.jumbotron>hr{border-top-color:#d5d5d5}.container
.jumbotron{border-radius:6px}.jumbotron
.container{max-width:100%}@media screen and (min-width: 768px){.jumbotron{padding-top:48px;padding-bottom:48px}.container
.jumbotron{padding-right:60px;padding-left:60px}.jumbotron h1,
.jumbotron
.h1{font-size:63px}}.thumbnail{display:block;padding:4px;margin-bottom:20px;line-height:1.42857143;background-color:#fff;border:1px
solid #ddd;border-radius:4px;-webkit-transition:all .2s ease-in-out;-o-transition:all .2s ease-in-out;transition:all .2s ease-in-out}.thumbnail > img,
.thumbnail a>img{margin-right:auto;margin-left:auto}a.thumbnail:hover,a.thumbnail:focus,a.thumbnail.active{border-color:#428bca}.thumbnail
.caption{padding:9px;color:#333}.alert{padding:15px;margin-bottom:20px;border:1px
solid transparent;border-radius:4px}.alert
h4{margin-top:0;color:inherit}.alert .alert-link{font-weight:bold}.alert>p,.alert>ul{margin-bottom:0}.alert>p+p{margin-top:5px}.alert-dismissable,.alert-dismissible{padding-right:35px}.alert-dismissable .close,
.alert-dismissible
.close{position:relative;top: -2px;right: -21px;color:inherit}.alert-success{color:#3c763d;background-color:#dff0d8;border-color:#d6e9c6}.alert-success
hr{border-top-color:#c9e2b3}.alert-success .alert-link{color:#2b542c}.alert-info{color:#31708f;background-color:#d9edf7;border-color:#bce8f1}.alert-info
hr{border-top-color:#a6e1ec}.alert-info .alert-link{color:#245269}.alert-warning{color:#8a6d3b;background-color:#fcf8e3;border-color:#faebcc}.alert-warning
hr{border-top-color:#f7e1b5}.alert-warning .alert-link{color:#66512c}.alert-danger{color:#a94442;background-color:#f2dede;border-color:#ebccd1}.alert-danger
hr{border-top-color:#e4b9c0}.alert-danger .alert-link{color:#843534}@-webkit-keyframes progress-bar-stripes{from{background-position:40px 0}to{background-position:0 0}}@-o-keyframes progress-bar-stripes{from{background-position:40px 0}to{background-position:0 0}}@keyframes progress-bar-stripes{from{background-position:40px 0}to{background-position:0 0}}.progress{height:20px;margin-bottom:20px;overflow:hidden;background-color:#f5f5f5;border-radius:4px;-webkit-box-shadow:inset 0 1px 2px rgba(0, 0, 0, .1);box-shadow:inset 0 1px 2px rgba(0,0,0,.1)}.progress-bar{float:left;width:0;height:100%;font-size:12px;line-height:20px;color:#fff;text-align:center;background-color:#428bca;-webkit-box-shadow:inset 0 -1px 0 rgba(0, 0, 0, .15);box-shadow:inset 0 -1px 0 rgba(0, 0, 0, .15);-webkit-transition:width .6s ease;-o-transition:width .6s ease;transition:width .6s ease}.progress-striped .progress-bar,.progress-bar-striped{background-image: -webkit-linear-gradient(45deg, rgba(255, 255, 255, .15) 25%, transparent 25%, transparent 50%, rgba(255, 255, 255, .15) 50%, rgba(255, 255, 255, .15) 75%, transparent 75%, transparent);background-image:      -o-linear-gradient(45deg, rgba(255, 255, 255, .15) 25%, transparent 25%, transparent 50%, rgba(255, 255, 255, .15) 50%, rgba(255, 255, 255, .15) 75%, transparent 75%, transparent);background-image:linear-gradient(45deg, rgba(255, 255, 255, .15) 25%, transparent 25%, transparent 50%, rgba(255, 255, 255, .15) 50%, rgba(255, 255, 255, .15) 75%, transparent 75%, transparent);-webkit-background-size:40px 40px;background-size:40px 40px}.progress.active .progress-bar,.progress-bar.active{-webkit-animation:progress-bar-stripes 2s linear infinite;-o-animation:progress-bar-stripes 2s linear infinite;animation:progress-bar-stripes 2s linear infinite}.progress-bar[aria-valuenow="1"],.progress-bar[aria-valuenow="2"]{min-width:30px}.progress-bar[aria-valuenow="0"]{min-width:30px;color:#777;background-color:transparent;background-image:none;-webkit-box-shadow:none;box-shadow:none}.progress-bar-success{background-color:#5cb85c}.progress-striped .progress-bar-success{background-image: -webkit-linear-gradient(45deg, rgba(255, 255, 255, .15) 25%, transparent 25%, transparent 50%, rgba(255, 255, 255, .15) 50%, rgba(255, 255, 255, .15) 75%, transparent 75%, transparent);background-image:      -o-linear-gradient(45deg, rgba(255, 255, 255, .15) 25%, transparent 25%, transparent 50%, rgba(255, 255, 255, .15) 50%, rgba(255, 255, 255, .15) 75%, transparent 75%, transparent);background-image:linear-gradient(45deg, rgba(255, 255, 255, .15) 25%, transparent 25%, transparent 50%, rgba(255, 255, 255, .15) 50%, rgba(255, 255, 255, .15) 75%, transparent 75%,transparent)}.progress-bar-info{background-color:#5bc0de}.progress-striped .progress-bar-info{background-image: -webkit-linear-gradient(45deg, rgba(255, 255, 255, .15) 25%, transparent 25%, transparent 50%, rgba(255, 255, 255, .15) 50%, rgba(255, 255, 255, .15) 75%, transparent 75%, transparent);background-image:      -o-linear-gradient(45deg, rgba(255, 255, 255, .15) 25%, transparent 25%, transparent 50%, rgba(255, 255, 255, .15) 50%, rgba(255, 255, 255, .15) 75%, transparent 75%, transparent);background-image:linear-gradient(45deg, rgba(255, 255, 255, .15) 25%, transparent 25%, transparent 50%, rgba(255, 255, 255, .15) 50%, rgba(255, 255, 255, .15) 75%, transparent 75%,transparent)}.progress-bar-warning{background-color:#f0ad4e}.progress-striped .progress-bar-warning{background-image: -webkit-linear-gradient(45deg, rgba(255, 255, 255, .15) 25%, transparent 25%, transparent 50%, rgba(255, 255, 255, .15) 50%, rgba(255, 255, 255, .15) 75%, transparent 75%, transparent);background-image:      -o-linear-gradient(45deg, rgba(255, 255, 255, .15) 25%, transparent 25%, transparent 50%, rgba(255, 255, 255, .15) 50%, rgba(255, 255, 255, .15) 75%, transparent 75%, transparent);background-image:linear-gradient(45deg, rgba(255, 255, 255, .15) 25%, transparent 25%, transparent 50%, rgba(255, 255, 255, .15) 50%, rgba(255, 255, 255, .15) 75%, transparent 75%,transparent)}.progress-bar-danger{background-color:#d9534f}.progress-striped .progress-bar-danger{background-image: -webkit-linear-gradient(45deg, rgba(255, 255, 255, .15) 25%, transparent 25%, transparent 50%, rgba(255, 255, 255, .15) 50%, rgba(255, 255, 255, .15) 75%, transparent 75%, transparent);background-image:      -o-linear-gradient(45deg, rgba(255, 255, 255, .15) 25%, transparent 25%, transparent 50%, rgba(255, 255, 255, .15) 50%, rgba(255, 255, 255, .15) 75%, transparent 75%, transparent);background-image:linear-gradient(45deg, rgba(255, 255, 255, .15) 25%, transparent 25%, transparent 50%, rgba(255, 255, 255, .15) 50%, rgba(255, 255, 255, .15) 75%, transparent 75%,transparent)}.media,.media-body{overflow:hidden;zoom:1}.media,
.media
.media{margin-top:15px}.media:first-child{margin-top:0}.media-object{display:block}.media-heading{margin:0
0 5px}.media>.pull-left{margin-right:10px}.media>.pull-right{margin-left:10px}.media-list{padding-left:0;list-style:none}.list-group{padding-left:0;margin-bottom:20px}.list-group-item{position:relative;display:block;padding:10px
15px;margin-bottom: -1px;background-color:#fff;border:1px
solid #ddd}.list-group-item:first-child{border-top-left-radius:4px;border-top-right-radius:4px}.list-group-item:last-child{margin-bottom:0;border-bottom-right-radius:4px;border-bottom-left-radius:4px}.list-group-item>.badge{float:right}.list-group-item>.badge+.badge{margin-right:5px}a.list-group-item{color:#555}a.list-group-item .list-group-item-heading{color:#333}a.list-group-item:hover,a.list-group-item:focus{color:#555;text-decoration:none;background-color:#f5f5f5}.list-group-item.disabled,.list-group-item.disabled:hover,.list-group-item.disabled:focus{color:#777;background-color:#eee}.list-group-item.disabled .list-group-item-heading,
.list-group-item.disabled:hover .list-group-item-heading,
.list-group-item.disabled:focus .list-group-item-heading{color:inherit}.list-group-item.disabled .list-group-item-text,
.list-group-item.disabled:hover .list-group-item-text,
.list-group-item.disabled:focus .list-group-item-text{color:#777}.list-group-item.active,.list-group-item.active:hover,.list-group-item.active:focus{z-index:2;color:#fff;background-color:#428bca;border-color:#428bca}.list-group-item.active .list-group-item-heading,
.list-group-item.active:hover .list-group-item-heading,
.list-group-item.active:focus .list-group-item-heading,
.list-group-item.active .list-group-item-heading > small,
.list-group-item.active:hover .list-group-item-heading > small,
.list-group-item.active:focus .list-group-item-heading > small,
.list-group-item.active .list-group-item-heading > .small,
.list-group-item.active:hover .list-group-item-heading > .small,
.list-group-item.active:focus .list-group-item-heading>.small{color:inherit}.list-group-item.active .list-group-item-text,
.list-group-item.active:hover .list-group-item-text,
.list-group-item.active:focus .list-group-item-text{color:#e1edf7}.list-group-item-success{color:#3c763d;background-color:#dff0d8}a.list-group-item-success{color:#3c763d}a.list-group-item-success .list-group-item-heading{color:inherit}a.list-group-item-success:hover,a.list-group-item-success:focus{color:#3c763d;background-color:#d0e9c6}a.list-group-item-success.active,a.list-group-item-success.active:hover,a.list-group-item-success.active:focus{color:#fff;background-color:#3c763d;border-color:#3c763d}.list-group-item-info{color:#31708f;background-color:#d9edf7}a.list-group-item-info{color:#31708f}a.list-group-item-info .list-group-item-heading{color:inherit}a.list-group-item-info:hover,a.list-group-item-info:focus{color:#31708f;background-color:#c4e3f3}a.list-group-item-info.active,a.list-group-item-info.active:hover,a.list-group-item-info.active:focus{color:#fff;background-color:#31708f;border-color:#31708f}.list-group-item-warning{color:#8a6d3b;background-color:#fcf8e3}a.list-group-item-warning{color:#8a6d3b}a.list-group-item-warning .list-group-item-heading{color:inherit}a.list-group-item-warning:hover,a.list-group-item-warning:focus{color:#8a6d3b;background-color:#faf2cc}a.list-group-item-warning.active,a.list-group-item-warning.active:hover,a.list-group-item-warning.active:focus{color:#fff;background-color:#8a6d3b;border-color:#8a6d3b}.list-group-item-danger{color:#a94442;background-color:#f2dede}a.list-group-item-danger{color:#a94442}a.list-group-item-danger .list-group-item-heading{color:inherit}a.list-group-item-danger:hover,a.list-group-item-danger:focus{color:#a94442;background-color:#ebcccc}a.list-group-item-danger.active,a.list-group-item-danger.active:hover,a.list-group-item-danger.active:focus{color:#fff;background-color:#a94442;border-color:#a94442}.list-group-item-heading{margin-top:0;margin-bottom:5px}.list-group-item-text{margin-bottom:0;line-height:1.3}.panel{margin-bottom:20px;background-color:#fff;border:1px
solid transparent;border-radius:4px;-webkit-box-shadow:0 1px 1px rgba(0, 0, 0, .05);box-shadow:0 1px 1px rgba(0,0,0,.05)}.panel-body{padding:15px}.panel-heading{padding:10px
15px;border-bottom:1px solid transparent;border-top-left-radius:3px;border-top-right-radius:3px}.panel-heading > .dropdown .dropdown-toggle{color:inherit}.panel-title{margin-top:0;margin-bottom:0;font-size:16px;color:inherit}.panel-title>a{color:inherit}.panel-footer{padding:10px
15px;background-color:#f5f5f5;border-top:1px solid #ddd;border-bottom-right-radius:3px;border-bottom-left-radius:3px}.panel>.list-group{margin-bottom:0}.panel > .list-group .list-group-item{border-width:1px 0;border-radius:0}.panel > .list-group:first-child .list-group-item:first-child{border-top:0;border-top-left-radius:3px;border-top-right-radius:3px}.panel > .list-group:last-child .list-group-item:last-child{border-bottom:0;border-bottom-right-radius:3px;border-bottom-left-radius:3px}.panel-heading + .list-group .list-group-item:first-child{border-top-width:0}.list-group+.panel-footer{border-top-width:0}.panel>.table,.panel>.table-responsive>.table,.panel>.panel-collapse>.table{margin-bottom:0}.panel>.table:first-child,.panel>.table-responsive:first-child>.table:first-child{border-top-left-radius:3px;border-top-right-radius:3px}.panel > .table:first-child > thead:first-child > tr:first-child td:first-child,
.panel > .table-responsive:first-child > .table:first-child > thead:first-child > tr:first-child td:first-child,
.panel > .table:first-child > tbody:first-child > tr:first-child td:first-child,
.panel > .table-responsive:first-child > .table:first-child > tbody:first-child > tr:first-child td:first-child,
.panel > .table:first-child > thead:first-child > tr:first-child th:first-child,
.panel > .table-responsive:first-child > .table:first-child > thead:first-child > tr:first-child th:first-child,
.panel > .table:first-child > tbody:first-child > tr:first-child th:first-child,
.panel > .table-responsive:first-child > .table:first-child > tbody:first-child > tr:first-child th:first-child{border-top-left-radius:3px}.panel > .table:first-child > thead:first-child > tr:first-child td:last-child,
.panel > .table-responsive:first-child > .table:first-child > thead:first-child > tr:first-child td:last-child,
.panel > .table:first-child > tbody:first-child > tr:first-child td:last-child,
.panel > .table-responsive:first-child > .table:first-child > tbody:first-child > tr:first-child td:last-child,
.panel > .table:first-child > thead:first-child > tr:first-child th:last-child,
.panel > .table-responsive:first-child > .table:first-child > thead:first-child > tr:first-child th:last-child,
.panel > .table:first-child > tbody:first-child > tr:first-child th:last-child,
.panel > .table-responsive:first-child > .table:first-child > tbody:first-child > tr:first-child th:last-child{border-top-right-radius:3px}.panel>.table:last-child,.panel>.table-responsive:last-child>.table:last-child{border-bottom-right-radius:3px;border-bottom-left-radius:3px}.panel > .table:last-child > tbody:last-child > tr:last-child td:first-child,
.panel > .table-responsive:last-child > .table:last-child > tbody:last-child > tr:last-child td:first-child,
.panel > .table:last-child > tfoot:last-child > tr:last-child td:first-child,
.panel > .table-responsive:last-child > .table:last-child > tfoot:last-child > tr:last-child td:first-child,
.panel > .table:last-child > tbody:last-child > tr:last-child th:first-child,
.panel > .table-responsive:last-child > .table:last-child > tbody:last-child > tr:last-child th:first-child,
.panel > .table:last-child > tfoot:last-child > tr:last-child th:first-child,
.panel > .table-responsive:last-child > .table:last-child > tfoot:last-child > tr:last-child th:first-child{border-bottom-left-radius:3px}.panel > .table:last-child > tbody:last-child > tr:last-child td:last-child,
.panel > .table-responsive:last-child > .table:last-child > tbody:last-child > tr:last-child td:last-child,
.panel > .table:last-child > tfoot:last-child > tr:last-child td:last-child,
.panel > .table-responsive:last-child > .table:last-child > tfoot:last-child > tr:last-child td:last-child,
.panel > .table:last-child > tbody:last-child > tr:last-child th:last-child,
.panel > .table-responsive:last-child > .table:last-child > tbody:last-child > tr:last-child th:last-child,
.panel > .table:last-child > tfoot:last-child > tr:last-child th:last-child,
.panel > .table-responsive:last-child > .table:last-child > tfoot:last-child > tr:last-child th:last-child{border-bottom-right-radius:3px}.panel>.panel-body+.table,.panel>.panel-body+.table-responsive{border-top:1px solid #ddd}.panel > .table > tbody:first-child > tr:first-child th,
.panel > .table > tbody:first-child > tr:first-child
td{border-top:0}.panel>.table-bordered,.panel>.table-responsive>.table-bordered{border:0}.panel>.table-bordered>thead>tr>th:first-child,.panel>.table-responsive>.table-bordered>thead>tr>th:first-child,.panel>.table-bordered>tbody>tr>th:first-child,.panel>.table-responsive>.table-bordered>tbody>tr>th:first-child,.panel>.table-bordered>tfoot>tr>th:first-child,.panel>.table-responsive>.table-bordered>tfoot>tr>th:first-child,.panel>.table-bordered>thead>tr>td:first-child,.panel>.table-responsive>.table-bordered>thead>tr>td:first-child,.panel>.table-bordered>tbody>tr>td:first-child,.panel>.table-responsive>.table-bordered>tbody>tr>td:first-child,.panel>.table-bordered>tfoot>tr>td:first-child,.panel>.table-responsive>.table-bordered>tfoot>tr>td:first-child{border-left:0}.panel>.table-bordered>thead>tr>th:last-child,.panel>.table-responsive>.table-bordered>thead>tr>th:last-child,.panel>.table-bordered>tbody>tr>th:last-child,.panel>.table-responsive>.table-bordered>tbody>tr>th:last-child,.panel>.table-bordered>tfoot>tr>th:last-child,.panel>.table-responsive>.table-bordered>tfoot>tr>th:last-child,.panel>.table-bordered>thead>tr>td:last-child,.panel>.table-responsive>.table-bordered>thead>tr>td:last-child,.panel>.table-bordered>tbody>tr>td:last-child,.panel>.table-responsive>.table-bordered>tbody>tr>td:last-child,.panel>.table-bordered>tfoot>tr>td:last-child,.panel>.table-responsive>.table-bordered>tfoot>tr>td:last-child{border-right:0}.panel>.table-bordered>thead>tr:first-child>td,.panel>.table-responsive>.table-bordered>thead>tr:first-child>td,.panel>.table-bordered>tbody>tr:first-child>td,.panel>.table-responsive>.table-bordered>tbody>tr:first-child>td,.panel>.table-bordered>thead>tr:first-child>th,.panel>.table-responsive>.table-bordered>thead>tr:first-child>th,.panel>.table-bordered>tbody>tr:first-child>th,.panel>.table-responsive>.table-bordered>tbody>tr:first-child>th{border-bottom:0}.panel>.table-bordered>tbody>tr:last-child>td,.panel>.table-responsive>.table-bordered>tbody>tr:last-child>td,.panel>.table-bordered>tfoot>tr:last-child>td,.panel>.table-responsive>.table-bordered>tfoot>tr:last-child>td,.panel>.table-bordered>tbody>tr:last-child>th,.panel>.table-responsive>.table-bordered>tbody>tr:last-child>th,.panel>.table-bordered>tfoot>tr:last-child>th,.panel>.table-responsive>.table-bordered>tfoot>tr:last-child>th{border-bottom:0}.panel>.table-responsive{margin-bottom:0;border:0}.panel-group{margin-bottom:20px}.panel-group
.panel{margin-bottom:0;border-radius:4px}.panel-group .panel+.panel{margin-top:5px}.panel-group .panel-heading{border-bottom:0}.panel-group .panel-heading+.panel-collapse>.panel-body{border-top:1px solid #ddd}.panel-group .panel-footer{border-top:0}.panel-group .panel-footer + .panel-collapse .panel-body{border-bottom:1px solid #ddd}.panel-default{border-color:#ddd}.panel-default>.panel-heading{color:#333;background-color:#f5f5f5;border-color:#ddd}.panel-default>.panel-heading+.panel-collapse>.panel-body{border-top-color:#ddd}.panel-default > .panel-heading
.badge{color:#f5f5f5;background-color:#333}.panel-default>.panel-footer+.panel-collapse>.panel-body{border-bottom-color:#ddd}.panel-primary{border-color:#428bca}.panel-primary>.panel-heading{color:#fff;background-color:#428bca;border-color:#428bca}.panel-primary>.panel-heading+.panel-collapse>.panel-body{border-top-color:#428bca}.panel-primary > .panel-heading
.badge{color:#428bca;background-color:#fff}.panel-primary>.panel-footer+.panel-collapse>.panel-body{border-bottom-color:#428bca}.panel-success{border-color:#d6e9c6}.panel-success>.panel-heading{color:#3c763d;background-color:#dff0d8;border-color:#d6e9c6}.panel-success>.panel-heading+.panel-collapse>.panel-body{border-top-color:#d6e9c6}.panel-success > .panel-heading
.badge{color:#dff0d8;background-color:#3c763d}.panel-success>.panel-footer+.panel-collapse>.panel-body{border-bottom-color:#d6e9c6}.panel-info{border-color:#bce8f1}.panel-info>.panel-heading{color:#31708f;background-color:#d9edf7;border-color:#bce8f1}.panel-info>.panel-heading+.panel-collapse>.panel-body{border-top-color:#bce8f1}.panel-info > .panel-heading
.badge{color:#d9edf7;background-color:#31708f}.panel-info>.panel-footer+.panel-collapse>.panel-body{border-bottom-color:#bce8f1}.panel-warning{border-color:#faebcc}.panel-warning>.panel-heading{color:#8a6d3b;background-color:#fcf8e3;border-color:#faebcc}.panel-warning>.panel-heading+.panel-collapse>.panel-body{border-top-color:#faebcc}.panel-warning > .panel-heading
.badge{color:#fcf8e3;background-color:#8a6d3b}.panel-warning>.panel-footer+.panel-collapse>.panel-body{border-bottom-color:#faebcc}.panel-danger{border-color:#ebccd1}.panel-danger>.panel-heading{color:#a94442;background-color:#f2dede;border-color:#ebccd1}.panel-danger>.panel-heading+.panel-collapse>.panel-body{border-top-color:#ebccd1}.panel-danger > .panel-heading
.badge{color:#f2dede;background-color:#a94442}.panel-danger>.panel-footer+.panel-collapse>.panel-body{border-bottom-color:#ebccd1}.embed-responsive{position:relative;display:block;height:0;padding:0;overflow:hidden}.embed-responsive .embed-responsive-item,
.embed-responsive iframe,
.embed-responsive embed,
.embed-responsive
object{position:absolute;top:0;bottom:0;left:0;width:100%;height:100%;border:0}.embed-responsive.embed-responsive-16by9{padding-bottom:56.25%}.embed-responsive.embed-responsive-4by3{padding-bottom:75%}/*.well{min-height:20px;padding:19px;margin-bottom:20px;background-color:#f5f5f5;border:1px
solid #e3e3e3;border-radius:4px;-webkit-box-shadow:inset 0 1px 1px rgba(0, 0, 0, .05);box-shadow:inset 0 1px 1px rgba(0, 0, 0, .05)}*/.well
blockquote{border-color:#ddd;border-color:rgba(0,0,0,.15)}.well-lg{padding:24px;border-radius:6px}.well-sm{padding:9px;border-radius:3px}.close{float:right;font-size:21px;font-weight:bold;line-height:1;color:#000;text-shadow:0 1px 0 #fff;filter:alpha(opacity=20);opacity: .2}.close:hover,.close:focus{color:#000;text-decoration:none;cursor:pointer;filter:alpha(opacity=50);opacity: .5}button.close{-webkit-appearance:none;padding:0;cursor:pointer;background:transparent;border:0}.modal-open{overflow:hidden}.modal{position:fixed;top:0;right:0;bottom:0;left:0;z-index:1050;display:none;overflow:hidden;-webkit-overflow-scrolling:touch;outline:0}.modal.fade .modal-dialog{-webkit-transition: -webkit-transform .3s ease-out;-o-transition:      -o-transform .3s ease-out;transition:transform .3s ease-out;-webkit-transform:translate3d(0, -25%, 0);-o-transform:translate3d(0, -25%, 0);transform:translate3d(0, -25%, 0)}.modal.in .modal-dialog{-webkit-transform:translate3d(0, 0, 0);-o-transform:translate3d(0, 0, 0);transform:translate3d(0, 0, 0)}.modal-open
.modal{overflow-x:hidden;overflow-y:auto}.modal-dialog{position:relative;width:auto;margin:10px}.modal-content{position:relative;background-color:#fff;-webkit-background-clip:padding-box;background-clip:padding-box;border:1px
solid #999;border:1px
solid rgba(0, 0, 0, .2);border-radius:6px;outline:0;-webkit-box-shadow:0 3px 9px rgba(0, 0, 0, .5);box-shadow:0 3px 9px rgba(0,0,0,.5)}.modal-backdrop{position:fixed;top:0;right:0;bottom:0;left:0;z-index:1040;background-color:#000}.modal-backdrop.fade{filter:alpha(opacity=0);opacity:0}.modal-backdrop.in{filter:alpha(opacity=50);opacity: .5}.modal-header{min-height:16.42857143px;padding:15px;border-bottom:1px solid #e5e5e5}.modal-header
.close{margin-top: -2px}.modal-title{margin:0;line-height:1.42857143}.modal-body{position:relative;padding:15px}.modal-footer{padding:15px;text-align:right;border-top:1px solid #e5e5e5}.modal-footer .btn+.btn{margin-bottom:0;margin-left:5px}.modal-footer .btn-group .btn+.btn{margin-left: -1px}.modal-footer .btn-block+.btn-block{margin-left:0}.modal-scrollbar-measure{position:absolute;top: -9999px;width:50px;height:50px;overflow:scroll}@media (min-width: 768px){.modal-dialog{width:600px;margin:30px
auto}.modal-content{-webkit-box-shadow:0 5px 15px rgba(0, 0, 0, .5);box-shadow:0 5px 15px rgba(0,0,0,.5)}.modal-sm{width:300px}}@media (min-width: 992px){.modal-lg{width:900px}}.tooltip{position:absolute;z-index:1070;display:block;font-size:12px;line-height:1.4;visibility:visible;filter:alpha(opacity=0);opacity:0}.tooltip.in{filter:alpha(opacity=90);opacity: .9}.tooltip.top{padding:5px
0;margin-top: -3px}.tooltip.right{padding:0
5px;margin-left:3px}.tooltip.bottom{padding:5px
0;margin-top:3px}.tooltip.left{padding:0
5px;margin-left: -3px}.tooltip-inner{max-width:200px;padding:3px
8px;color:#fff;text-align:center;text-decoration:none;background-color:#000;border-radius:4px}.tooltip-arrow{position:absolute;width:0;height:0;border-color:transparent;border-style:solid}.tooltip.top .tooltip-arrow{bottom:0;left:50%;margin-left: -5px;border-width:5px 5px 0;border-top-color:#000}.tooltip.top-left .tooltip-arrow{bottom:0;left:5px;border-width:5px 5px 0;border-top-color:#000}.tooltip.top-right .tooltip-arrow{right:5px;bottom:0;border-width:5px 5px 0;border-top-color:#000}.tooltip.right .tooltip-arrow{top:50%;left:0;margin-top: -5px;border-width:5px 5px 5px 0;border-right-color:#000}.tooltip.left .tooltip-arrow{top:50%;right:0;margin-top: -5px;border-width:5px 0 5px 5px;border-left-color:#000}.tooltip.bottom .tooltip-arrow{top:0;left:50%;margin-left: -5px;border-width:0 5px 5px;border-bottom-color:#000}.tooltip.bottom-left .tooltip-arrow{top:0;left:5px;border-width:0 5px 5px;border-bottom-color:#000}.tooltip.bottom-right .tooltip-arrow{top:0;right:5px;border-width:0 5px 5px;border-bottom-color:#000}.popover{position:absolute;top:0;left:0;z-index:1060;display:none;max-width:276px;padding:1px;text-align:left;white-space:normal;background-color:#fff;-webkit-background-clip:padding-box;background-clip:padding-box;border:1px
solid #ccc;border:1px
solid rgba(0, 0, 0, .2);border-radius:6px;-webkit-box-shadow:0 5px 10px rgba(0, 0, 0, .2);box-shadow:0 5px 10px rgba(0,0,0,.2)}.popover.top{margin-top: -10px}.popover.right{margin-left:10px}.popover.bottom{margin-top:10px}.popover.left{margin-left: -10px}.popover-title{padding:8px
14px;margin:0;font-size:14px;font-weight:normal;line-height:18px;background-color:#f7f7f7;border-bottom:1px solid #ebebeb;border-radius:5px 5px 0 0}.popover-content{padding:9px
14px}.popover>.arrow,.popover>.arrow:after{position:absolute;display:block;width:0;height:0;border-color:transparent;border-style:solid}.popover>.arrow{border-width:11px}.popover>.arrow:after{content:"";border-width:10px}.popover.top>.arrow{bottom: -11px;left:50%;margin-left: -11px;border-top-color:#999;border-top-color:rgba(0,0,0,.25);border-bottom-width:0}.popover.top>.arrow:after{bottom:1px;margin-left: -10px;content:" ";border-top-color:#fff;border-bottom-width:0}.popover.right>.arrow{top:50%;left: -11px;margin-top: -11px;border-right-color:#999;border-right-color:rgba(0,0,0,.25);border-left-width:0}.popover.right>.arrow:after{bottom: -10px;left:1px;content:" ";border-right-color:#fff;border-left-width:0}.popover.bottom>.arrow{top: -11px;left:50%;margin-left: -11px;border-top-width:0;border-bottom-color:#999;border-bottom-color:rgba(0,0,0,.25)}.popover.bottom>.arrow:after{top:1px;margin-left: -10px;content:" ";border-top-width:0;border-bottom-color:#fff}.popover.left>.arrow{top:50%;right: -11px;margin-top: -11px;border-right-width:0;border-left-color:#999;border-left-color:rgba(0,0,0,.25)}.popover.left>.arrow:after{right:1px;bottom: -10px;content:" ";border-right-width:0;border-left-color:#fff}.carousel{position:relative}.carousel-inner{position:relative;width:100%;overflow:hidden}.carousel-inner>.item{position:relative;display:none;-webkit-transition: .6s ease-in-out left;-o-transition: .6s ease-in-out left;transition: .6s ease-in-out left}.carousel-inner>.item>img,.carousel-inner>.item>a>img{line-height:1}.carousel-inner>.active,.carousel-inner>.next,.carousel-inner>.prev{display:block}.carousel-inner>.active{left:0}.carousel-inner>.next,.carousel-inner>.prev{position:absolute;top:0;width:100%}.carousel-inner>.next{left:100%}.carousel-inner>.prev{left: -100%}.carousel-inner>.next.left,.carousel-inner>.prev.right{left:0}.carousel-inner>.active.left{left: -100%}.carousel-inner>.active.right{left:100%}.carousel-control{position:absolute;top:0;bottom:0;left:0;width:15%;font-size:20px;color:#fff;text-align:center;text-shadow:0 1px 2px rgba(0, 0, 0, .6);filter:alpha(opacity=50);opacity: .5}.carousel-control.left{background-image: -webkit-linear-gradient(left, rgba(0, 0, 0, .5) 0%, rgba(0, 0, 0, .0001) 100%);background-image:      -o-linear-gradient(left, rgba(0, 0, 0, .5) 0%, rgba(0, 0, 0, .0001) 100%);background-image: -webkit-gradient(linear, left top, right top, from(rgba(0, 0, 0, .5)), to(rgba(0, 0, 0, .0001)));background-image:linear-gradient(to right, rgba(0, 0, 0, .5) 0%, rgba(0, 0, 0, .0001) 100%);filter:progid:DXImageTransform.Microsoft.gradient(startColorstr='#80000000',endColorstr='#00000000',GradientType=1);background-repeat:repeat-x}.carousel-control.right{right:0;left:auto;background-image: -webkit-linear-gradient(left, rgba(0, 0, 0, .0001) 0%, rgba(0, 0, 0, .5) 100%);background-image:      -o-linear-gradient(left, rgba(0, 0, 0, .0001) 0%, rgba(0, 0, 0, .5) 100%);background-image: -webkit-gradient(linear, left top, right top, from(rgba(0, 0, 0, .0001)), to(rgba(0, 0, 0, .5)));background-image:linear-gradient(to right, rgba(0, 0, 0, .0001) 0%, rgba(0, 0, 0, .5) 100%);filter:progid:DXImageTransform.Microsoft.gradient(startColorstr='#00000000',endColorstr='#80000000',GradientType=1);background-repeat:repeat-x}.carousel-control:hover,.carousel-control:focus{color:#fff;text-decoration:none;filter:alpha(opacity=90);outline:0;opacity: .9}.carousel-control .icon-prev,
.carousel-control .icon-next,
.carousel-control .glyphicon-chevron-left,
.carousel-control .glyphicon-chevron-right{position:absolute;top:50%;z-index:5;display:inline-block}.carousel-control .icon-prev,
.carousel-control .glyphicon-chevron-left{left:50%;margin-left: -10px}.carousel-control .icon-next,
.carousel-control .glyphicon-chevron-right{right:50%;margin-right: -10px}.carousel-control .icon-prev,
.carousel-control .icon-next{width:20px;height:20px;margin-top: -10px;font-family:serif}.carousel-control .icon-prev:before{content:'\2039'}.carousel-control .icon-next:before{content:'\203a'}.carousel-indicators{position:absolute;bottom:10px;left:50%;z-index:15;width:60%;padding-left:0;margin-left: -30%;text-align:center;list-style:none}.carousel-indicators
li{display:inline-block;width:10px;height:10px;margin:1px;text-indent: -999px;cursor:pointer;background-color:#000 \9;background-color:rgba(0, 0, 0, 0);border:1px
solid #fff;border-radius:10px}.carousel-indicators
.active{width:12px;height:12px;margin:0;background-color:#fff}.carousel-caption{position:absolute;right:15%;bottom:20px;left:15%;z-index:10;padding-top:20px;padding-bottom:20px;color:#fff;text-align:center;text-shadow:0 1px 2px rgba(0, 0, 0, .6)}.carousel-caption
.btn{text-shadow:none}@media screen and (min-width: 768px){.carousel-control .glyphicon-chevron-left,
.carousel-control .glyphicon-chevron-right,
.carousel-control .icon-prev,
.carousel-control .icon-next{width:30px;height:30px;margin-top: -15px;font-size:30px}.carousel-control .glyphicon-chevron-left,
.carousel-control .icon-prev{margin-left: -15px}.carousel-control .glyphicon-chevron-right,
.carousel-control .icon-next{margin-right: -15px}.carousel-caption{right:20%;left:20%;padding-bottom:30px}.carousel-indicators{bottom:20px}}.clearfix:before,
.clearfix:after,
.dl-horizontal dd:before,
.dl-horizontal dd:after,
.container:before,
.container:after,
.container-fluid:before,
.container-fluid:after,
.row:before,
.row:after,
.form-horizontal .form-group:before,
.form-horizontal .form-group:after,.btn-toolbar:before,.btn-toolbar:after,.btn-group-vertical>.btn-group:before,.btn-group-vertical>.btn-group:after,.nav:before,.nav:after,.navbar:before,.navbar:after,.navbar-header:before,.navbar-header:after,.navbar-collapse:before,.navbar-collapse:after,.pager:before,.pager:after,.panel-body:before,.panel-body:after,.modal-footer:before,.modal-footer:after{display:table;content:" "}.clearfix:after,
.dl-horizontal dd:after,
.container:after,
.container-fluid:after,
.row:after,
.form-horizontal .form-group:after,.btn-toolbar:after,.btn-group-vertical>.btn-group:after,.nav:after,.navbar:after,.navbar-header:after,.navbar-collapse:after,.pager:after,.panel-body:after,.modal-footer:after{clear:both}.center-block{display:block;margin-right:auto;margin-left:auto}.pull-right{float:right !important}.pull-left{float:left !important}.hide{display:none !important}.show{display:block !important}.invisible{visibility:hidden}.text-hide{font:0/0 a;color:transparent;text-shadow:none;background-color:transparent;border:0}.hidden{display:none !important;visibility:hidden !important}.affix{position:fixed;-webkit-transform:translate3d(0,0,0);-o-transform:translate3d(0,0,0);transform:translate3d(0,0,0)}@-ms-viewport{width:device-width}.visible-xs,.visible-sm,.visible-md,.visible-lg{display:none !important}.visible-xs-block,.visible-xs-inline,.visible-xs-inline-block,.visible-sm-block,.visible-sm-inline,.visible-sm-inline-block,.visible-md-block,.visible-md-inline,.visible-md-inline-block,.visible-lg-block,.visible-lg-inline,.visible-lg-inline-block{display:none !important}@media (max-width: 767px){.visible-xs{display:block !important}table.visible-xs{display:table}tr.visible-xs{display:table-row !important}th.visible-xs,td.visible-xs{display:table-cell !important}}@media (max-width: 767px){.visible-xs-block{display:block !important}}@media (max-width: 767px){.visible-xs-inline{display:inline !important}}@media (max-width: 767px){.visible-xs-inline-block{display:inline-block !important}}@media (min-width: 768px) and (max-width: 991px){.visible-sm{display:block !important}table.visible-sm{display:table}tr.visible-sm{display:table-row !important}th.visible-sm,td.visible-sm{display:table-cell !important}}@media (min-width: 768px) and (max-width: 991px){.visible-sm-block{display:block !important}}@media (min-width: 768px) and (max-width: 991px){.visible-sm-inline{display:inline !important}}@media (min-width: 768px) and (max-width: 991px){.visible-sm-inline-block{display:inline-block !important}}@media (min-width: 992px) and (max-width: 1199px){.visible-md{display:block !important}table.visible-md{display:table}tr.visible-md{display:table-row !important}th.visible-md,td.visible-md{display:table-cell !important}}@media (min-width: 992px) and (max-width: 1199px){.visible-md-block{display:block !important}}@media (min-width: 992px) and (max-width: 1199px){.visible-md-inline{display:inline !important}}@media (min-width: 992px) and (max-width: 1199px){.visible-md-inline-block{display:inline-block !important}}@media (min-width: 1200px){.visible-lg{display:block !important}table.visible-lg{display:table}tr.visible-lg{display:table-row !important}th.visible-lg,td.visible-lg{display:table-cell !important}}@media (min-width: 1200px){.visible-lg-block{display:block !important}}@media (min-width: 1200px){.visible-lg-inline{display:inline !important}}@media (min-width: 1200px){.visible-lg-inline-block{display:inline-block !important}}@media (max-width: 767px){.hidden-xs{display:none !important}}@media (min-width: 768px) and (max-width: 991px){.hidden-sm{display:none !important}}@media (min-width: 992px) and (max-width: 1199px){.hidden-md{display:none !important}}@media (min-width: 1200px){.hidden-lg{display:none !important}}.visible-print{display:none !important}@media
print{.visible-print{display:block !important}table.visible-print{display:table}tr.visible-print{display:table-row !important}th.visible-print,td.visible-print{display:table-cell !important}}.visible-print-block{display:none !important}@media
print{.visible-print-block{display:block !important}}.visible-print-inline{display:none !important}@media
print{.visible-print-inline{display:inline !important}}.visible-print-inline-block{display:none !important}@media
print{.visible-print-inline-block{display:inline-block !important}}@media
print{.hidden-print{display:none !important}}

html,body,div,span,object,iframe,h1,h2,h3,h4,h5,h6,p,blockquote,pre,a,abbr,acronym,address,code,del,dfn,em,img,q,dl,dt,dd,ol,ul,li,fieldset,form,label,legend,table,caption,tbody,tfoot,thead,tr,th,td{margin:0;padding:0;border:0;font-weight:inherit;font-style:inherit;font-size:100%;font-family:inherit;vertical-align:baseline}body{line-height:1.5}table{border-collapse:separate;border-spacing:0}caption,td,th{font-weight:400;text-align:left}table,td,th{vertical-align:middle}blockquote:after,blockquote:before,q:after,q:before{content:""}blockquote,q{quotes:"" ""}a
img{border:none}html{font-size:100.01%}body{background:#fff;color:#222;font-family:"Helvetica Neue",Arial,Helvetica,sans-serif;font-size:75%}h1,h2,h3,h4,h5,h6{color:#111;font-weight:400}h1{font-size:3em;line-height:1;margin-bottom:.5em}h2{font-size:2em;margin-bottom:.75em}h3{font-size:1.5em;line-height:1;margin-bottom:1em}h4{font-size:1.2em;line-height:1.25;margin-bottom:1.25em}h5{font-size:1em;font-weight:700;margin-bottom:1.5em}h6{font-size:1em;font-weight:700}h1 img,h2 img,h3 img,h4 img,h5 img,h6
img{margin:0}p{margin:0
0 1.5em}p
img.left{float:left;margin:1.5em 1.5em 1.5em 0;padding:0}p
img.right{float:right;margin:1.5em 0 1.5em 1.5em}a:focus,a:hover{color:#000}a{color:#009;text-decoration:underline}blockquote{color:#666;font-style:italic;margin:1.5em}strong{font-weight:700}dfn,em{font-style:italic}dfn{font-weight:700}sub,sup{line-height:0}abbr,acronym{border-bottom:1px dotted #666}address{font-style:italic;margin:0
0 1.5em}del{color:#666}pre{margin:1.5em 0;white-space:pre}code,pre,tt{font:1em/1.5 "andale mono","lucida console",monospace}li ol,li
ul{margin:0
1.5em}ol,ul{margin:0
1.5em 1.5em}ul{list-style-type:disc}ol{list-style-type:decimal}dl{margin:0
0 1.5em}dl
dt{font-weight:700}dd{margin-left:1.5em}table{margin-bottom:1.4em;width:100%}th{font-weight:700}thead
th{background:#c3d9ff}caption,td,th{padding:4px
10px 4px 5px}tr.even
td{background:#e5ecf9}tfoot{font-style:italic}caption{background:#eee}.small{font-size:.8em;line-height:1.875em;margin-bottom:1.875em}.large{font-size:1.2em;line-height:2.5em;margin-bottom:1.25em}.hide{display:block}.quiet{color:#666}.loud{color:#000}.highlight{background:#ff0}.added{background:#060;color:#fff}.removed{background:#900;color:#fff}.first{margin-left:0;padding-left:0}.last{padding-right:0}.top{margin-top:0;padding-top:0}.bottom{margin-bottom:0;padding-bottom:0}label{font-weight:700}fieldset{border:1px
solid #ccc;margin:0
0 1.5em;padding:1.4em}legend{font-size:1.2em;font-weight:700}input.text,input.title,input[type=text],input[type=password],select,textarea{background-color:#fff;border:1px
solid #bbb}input.text:focus,input.title:focus,input[type=text]:focus,input[type=password]:focus,select:focus,textarea:focus{border-color:#666}input.text,input.title,input[type=text],input[type=password],select,textarea{margin:.5em 0}input.text,input.title{padding:5px;width:300px}input.title{font-size:1.5em}textarea{height:250px;padding:5px;width:390px}input.checkbox,input.radio,input[type=checkbox],input[type=radio]{position:relative;top:.25em}form.inline{line-height:3}form.inline
p{margin-bottom:0}.error,.notice,.success{border:2px
solid #ddd;margin-bottom:1em;padding:.8em}.error{background:#fbe3e4;border-color:#fbc2c4;color:#8a1f11}.notice{background:#fff6bf;border-color:#ffd324;color:#514721}.success{background:#e6efc2;border-color:#c6d880;color:#264409}.error
a{color:#8a1f11}.notice
a{color:#514721}.success
a{color:#264409}.container{margin:0
auto;width:1170px}.showgrid{background:url(src/grid.png)}.column,div.span-1,div.span-10,div.span-11,div.span-12,div.span-13,div.span-14,div.span-15,div.span-16,div.span-17,div.span-18,div.span-19,div.span-2,div.span-20,div.span-21,div.span-22,div.span-23,div.span-24,div.span-3,div.span-4,div.span-5,div.span-6,div.span-7,div.span-8,div.span-9{float:left;margin-right:0;padding-right:0}.last,div.last{margin-right:0}.span-1{width:25px}.span-2{width:165px}.span-3{width:205px}.span-4{width:245px}.span-5{width:185px}.span-6{width:335px}.span-7{width:340px}.span-8{width:310px}.span-9{width:440px}.span-10{width:600px;float:right!important}.span-11{width:425px}.span-12{width:465px}.span-13{width:505px}.span-14{width:545px}.span-15{width:585px}.span-16{width:785px;float:right!important}.span-17{width:665px}.span-18{width:705px}.span-19{width:745px}.span-20{width:785px}.span-21{width:825px}.span-22{width:865px}.span-23{width:905px}.span-24,div.span-24{margin:0;width:1135px}input.span-1,input.span-10,input.span-11,input.span-12,input.span-13,input.span-14,input.span-15,input.span-16,input.span-17,input.span-18,input.span-19,input.span-2,input.span-20,input.span-21,input.span-22,input.span-23,input.span-24,input.span-3,input.span-4,input.span-5,input.span-6,input.span-7,input.span-8,input.span-9,textarea.span-1,textarea.span-10,textarea.span-11,textarea.span-12,textarea.span-13,textarea.span-14,textarea.span-15,textarea.span-16,textarea.span-17,textarea.span-18,textarea.span-19,textarea.span-2,textarea.span-20,textarea.span-21,textarea.span-22,textarea.span-23,textarea.span-24,textarea.span-3,textarea.span-4,textarea.span-5,textarea.span-6,textarea.span-7,textarea.span-8,textarea.span-9{border-left-width:1px!important;border-right-width:1px!important;padding-left:5px!important;padding-right:5px!important}input.span-1,select.span-1,textarea.span-1{width:25px!important}input.span-2,select.span-2,textarea.span-2{width:40px!important}input.span-3,select.span-3,textarea.span-3{width:80px!important}input.span-4,select.span-4,textarea.span-4{width:120px!important}input.span-5,select.span-5,textarea.span-5{width:160px!important}input.span-6,select.span-6,textarea.span-6{width:200px!important;float:right}input.span-7,select.span-7,textarea.span-7{width:240px!important}input.span-8,select.span-8,textarea.span-8{width:280px!important}input.span-9,select.span-9,textarea.span-9{width:320px!important}input.span-10,select.span-10,textarea.span-10{width:360px!important}input.span-11,select.span-11,textarea.span-11{width:400px!important}input.span-12,select.span-12,textarea.span-12{width:440px!important}input.span-13,select.span-13,textarea.span-13{width:480px!important}input.span-14,select.span-14,textarea.span-14{width:520px!important}input.span-15,select.span-15,textarea.span-15{width:560px!important}input.span-16,select.span-16,textarea.span-16{width:600px!important}input.span-17,select.span-17,textarea.span-17{width:640px!important}input.span-18,select.span-18,textarea.span-18{width:680px!important}input.span-19,select.span-19,textarea.span-19{width:720px!important}input.span-20,select.span-20,textarea.span-20{width:760px!important}input.span-21,select.span-21,textarea.span-21{width:800px!important}input.span-22,select.span-22,textarea.span-22{width:840px!important}input.span-23,select.span-23,textarea.span-23{width:880px!important}input.span-24,select.span-24,textarea.span-24{width:935px!important}.append-1{padding-right:40px}.append-2{padding-right:80px}.append-3{padding-right:120px}.append-4{padding-right:160px}.append-5{padding-right:200px}.append-6{padding-right:240px}.append-7{padding-right:280px}.append-8{padding-right:320px}.append-9{padding-right:360px}.append-10{padding-right:400px}.append-11{padding-right:440px}.append-12{padding-right:480px}.append-13{padding-right:520px}.append-14{padding-right:560px}.append-15{padding-right:600px}.append-16{padding-right:640px}.append-17{padding-right:680px}.append-18{padding-right:720px}.append-19{padding-right:760px}.append-20{padding-right:800px}.append-21{padding-right:840px}.append-22{padding-right:880px}.append-23{padding-right:920px}.prepend-1{padding-left:40px}.prepend-2{padding-left:80px}.prepend-3{padding-left:120px}.prepend-4{padding-left:160px}.prepend-5{padding-left:200px}.prepend-6{padding-left:240px}.prepend-7{padding-left:280px}.prepend-8{padding-left:320px}.prepend-9{padding-left:360px}.prepend-10{padding-left:400px}.prepend-11{padding-left:440px}.prepend-12{padding-left:480px}.prepend-13{padding-left:520px}.prepend-14{padding-left:560px}.prepend-15{padding-left:600px}.prepend-16{padding-left:640px}.prepend-17{padding-left:680px}.prepend-18{padding-left:720px}.prepend-19{padding-left:760px}.prepend-20{padding-left:800px}.prepend-21{padding-left:840px}.prepend-22{padding-left:880px}.prepend-23{padding-left:920px}div.border{border-right:1px solid #eee;margin-right:5px;padding-right:4px}div.colborder{border-right:1px solid #eee;margin-right:25px;padding-right:24px}.pull-1{margin-left:-40px}.pull-2{margin-left:-80px}.pull-3{margin-left:-120px}.pull-4{margin-left:-160px}.pull-5{margin-left:-200px}.pull-6{margin-left:-240px}.pull-7{margin-left:-280px}.pull-8{margin-left:-320px}.pull-9{margin-left:-360px}.pull-10{margin-left:-400px}.pull-11{margin-left:-440px}.pull-12{margin-left:-480px}.pull-13{margin-left:-520px}.pull-14{margin-left:-560px}.pull-15{margin-left:-600px}.pull-16{margin-left:-640px}.pull-17{margin-left:-680px}.pull-18{margin-left:-720px}.pull-19{margin-left:-760px}.pull-20{margin-left:-800px}.pull-21{margin-left:-840px}.pull-22{margin-left:-880px}.pull-23{margin-left:-920px}.pull-24{margin-left:-960px}.pull-1,.pull-10,.pull-11,.pull-12,.pull-13,.pull-14,.pull-15,.pull-16,.pull-17,.pull-18,.pull-19,.pull-2,.pull-20,.pull-21,.pull-22,.pull-23,.pull-24,.pull-3,.pull-4,.pull-5,.pull-6,.pull-7,.pull-8,.pull-9{float:left;position:relative}.push-1{margin:0
-40px 1.5em 40px}.push-2{margin:0
-80px 1.5em 80px}.push-3{margin:0
-120px 1.5em 120px}.push-4{margin:0
-160px 1.5em 160px}.push-5{margin:0
-200px 1.5em 200px}.push-6{margin:0
-240px 1.5em 240px}.push-7{margin:0
-280px 1.5em 280px}.push-8{margin:0
-320px 1.5em 320px}.push-9{margin:0
-360px 1.5em 360px}.push-10{margin:0
-400px 1.5em 400px}.push-11{margin:0
-440px 1.5em 440px}.push-12{margin:0
-480px 1.5em 480px}.push-13{margin:0
-520px 1.5em 520px}.push-14{margin:0
-560px 1.5em 560px}.push-15{margin:0
-600px 1.5em 600px}.push-16{margin:0
-640px 1.5em 640px}.push-17{margin:0
-680px 1.5em 680px}.push-18{margin:0
-720px 1.5em 720px}.push-19{margin:0
-760px 1.5em 760px}.push-20{margin:0
-800px 1.5em 800px}.push-21{margin:0
-840px 1.5em 840px}.push-22{margin:0
-880px 1.5em 880px}.push-23{margin:0
-920px 1.5em 920px}.push-24{margin:0
-960px 1.5em 960px}.push-1,.push-10,.push-11,.push-12,.push-13,.push-14,.push-15,.push-16,.push-17,.push-18,.push-19,.push-2,.push-20,.push-21,.push-22,.push-23,.push-24,.push-3,.push-4,.push-5,.push-6,.push-7,.push-8,.push-9{float:right;position:relative}.prepend-top{margin-top:1.5em}.append-bottom{margin-bottom:1.5em}.box{background:#e5ecf9;margin-bottom:1.5em;padding:1.5em}hr{background:#ddd;border:none;clear:both;color:#ddd;float:none;height:.1em;margin:0
0 1.45em;width:100%}hr.space{background:#fff;color:#fff;visibility:hidden}.clearfix:after,.container:after{clear:both;content:" ";display:block;height:0;overflow:hidden;visibility:hidden}.clearfix,.container{display:block}.clear{clear:both}

@verdana:Verdana, Arial, Helvetica, sans-serif;@arial:Arial, Helvetica, 'Lucida Grande', 'MS Sans Serif', sans-serif;@georgia:Georgia, Times, "Times New Roman", times-roman, serif;@lucida:"lucida grande",tahoma,verdana,arial,sans-serif;@tahoma: tahoma,verdana,arial,sans-serif;@adobe-arabic: "Adobe Arabic";@home:#d54400;@pakistan:#949c27;@business:#367c86;@world:#3a9bc9;@sports:#EDB630;@life-style:#ee8360;@multimedia:#ce4e92;@opinion:#a58162;@blogs:#8080b4;@classifieds:#222;@magazine:#633;.roundborder(@radius:5px){-moz-border-radius:@radius;-webkit-border-radius:@radius;border-radius:@radius}.opacity(@opacity:1){@opacity_ie = @opacity * 100;opacity: @opacity;-ms-filter:"progid:DXImageTransform.Microsoft.Alpha(Opacity=@opacity_ie)";filter:alpha(opacity=@opacity_ie);-khtml-opacity: @opacity;-moz-opacity: @opacity}@ltbordercolor : #dededc;@bordercolor : #858585;@normalborder:1px
solid @bordercolor;@dottedborder:1px
dotted @bordercolor;@small-font-size:1.5em;.dotbg(@left:312.5px){background:url('../img/dot.gif') repeat-y @left top transparent;display:inline-block}.split-4{.dotbg(152.5px)}.split-8{.dotbg(312.5px)}.split-12{.dotbg(472.5px)}.userselectnone{-moz-user-select:none;-webkit-user-select:none;user-select:none}.live-icon-div{background-color:#de0000;display:inline-block;padding:0
14px;border-radius:5px;position:absolute;margin-top:10px;margin-right:10px}#text-live{color:#fff;font-size:16px;text-transform:uppercase;font-weight:600}a.image.live-text{position:relative}.live-icon-div{-webkit-animation:flickerAnimation 2s infinite;-moz-animation:flickerAnimation 2s infinite;-o-animation:flickerAnimation 2s infinite;animation:flickerAnimation 2s infinite}@keyframes
flickerAnimation{0%{opacity:1}50%{opacity:0}100%{opacity:1}}@-o-keyframes
flickerAnimation{0%{opacity:1}50%{opacity:0}100%{opacity:1}}@-moz-keyframes
flickerAnimation{0%{opacity:1}50%{opacity:0}100%{opacity:1}}@-webkit-keyframes
flickerAnimation{0%{opacity:1}50%{opacity:0}100%{opacity:1}}.featured .author-box
h1.title{text-align:right;float:right;width:100%}.primary.featured .mobile-story-image-container{display:none}.primary.featured
.embed{text-align:center}.primary.featured
.caption{display:none}section.featured-excerpt-title span.author
a{display:inline-block;padding-right:10px}section#featured-bg-image
img{width:100%}.span-24.featured{max-width:850px;margin:0
auto;float:initial}section.featured-excerpt-title h1.title
a{color:#033256}section.featured-excerpt-title
h1.title{text-align:center;margin-bottom:10px;font-size:2.2em}section.featured-excerpt-title
.excerpt{text-align:center;border-top:1px solid #dcd6d6;padding-top:10px;border-bottom:1px solid #dcd6d6;padding-bottom:10px;margin-bottom:2px}section.featured-excerpt-title
.meta{text-align:center;position:relative;line-height:50px}section.featured-excerpt-title
span.timestamp{padding-right:20px}section.featured-excerpt-title{margin-top: -94px;background:white;float:left;position:absolute;z-index:99;max-width:850px;padding-top:25px;padding-bottom:15px;width:100%}section.featured-excerpt-title span.author
img{height:50px;width:50px;border-radius:50%}section.featured-excerpt-title span.img-author-pic{position:absolute}.roundborder{border-radius:5px}.opacity{opacity:1}.dotbg{background:url("../img/dot.gif") repeat-y scroll 312.5px top transparent;display:inline-block}.split-4{background:url("../img/dot.gif") repeat-y scroll 152.5px top transparent;display:inline-block}.split-8{background:url("../img/dot.gif") repeat-y scroll 312.5px top transparent;display:inline-block}.split-12{background:url("../img/dot.gif") repeat-y scroll 472.5px top transparent;display:inline-block}.userselectnone{-moz-user-select:none}@font-face{font-family:"NafeesWebNaskhRegular";font-style:normal;font-weight:normal;src:url("../fonts/nafees_web_naskhshipped.eot?#iefix") format("embedded-opentype"), url("../fonts/nafees_web_naskhshipped.woff") format("woff"), url("../fonts/nafees_web_naskhshipped.ttf") format("truetype"), url("../fonts/nafees_web_naskhshipped.svg#NafeesWebNaskhRegular") format("svg")}.classname{font:21px bold italic Arial}body{background:none repeat scroll 0 0 #f3f3f3 !important;color:#333;font-family:"Jameel Noori Nastaleeq",NafeesWebNaskhRegular;font-size:19px;line-height:160%}h1,h2,h3,h4,h5,h6,input{}a:hover{color:#1c76c1;text-decoration:none}a:visited{color:#669}a:active,a:focus{color:#d54400}a{color:#014373;outline:medium none;text-decoration:none}ol{margin:0
0 10px 20px}ul{direction:rtl}p,li,label,input{font-size:19px;line-height:180%;text-align:right}p{margin-bottom:5px;margin-top:5px}.select{padding:0
0 0 2px}.container{background:none repeat scroll 0 0 #fff;border-left:1px solid #ddd;border-right:1px solid #ddd;padding:0
0.833em;position:relative}blockquote{font-style:italic}blockquote:before{content:open-quote;font-weight:bold}blockquote:after{content:close-quote;font-weight:bold}.form-submit:hover{border-color:#e5e2d4;color:#000}.form-submit{-moz-user-select:none;background:none repeat scroll 0 0 #fff;border:1px
solid #c2c1b6;border-radius:3px;color:#004276;cursor:pointer;font-weight:bold;outline:medium none;padding:3px
5px;text-align:center;width:auto}#content{display:inline-block}.content{position:relative}#top-bar{border-bottom:1px solid #858585;padding:3px
0}ul#menu-top-menu
li{border-color:#dededc;border-left:1px solid #dededc;float:right;font-size:21px;line-height:23px;margin-left:5px;padding-left:5px}ul#menu-top-menu
li.date{border-left:medium none;color:#633;margin-left:15px}ul#menu-top-menu
li.beta{background:none repeat scroll 0 0 #ae943d;border:medium none;border-radius:3px;color:#fff;font-size:10px;margin-top:2px;padding:0
5px;text-align:center;text-transform:uppercase}ul#menu-top-menu li.last, ul#menu-top-menu li:last-child{border:0
none}ul#menu-top-menu{float:right;font-size:15px;list-style:outside none none;margin:0;overflow:hidden}#header
.logo{margin:0
auto;padding-bottom:7px;padding-top:15px;text-align:center;width:300px}#header{font-size:27px}#navigation
a{color:#333;display:block;margin:0;padding:4px
8px 0}#navigation{background:url("../img/gradient.jpg") no-repeat scroll center -2px rgba(0, 0, 0, 0);border-top:2px solid black;margin:0
0 7px}#navigation ul li
a{font-size:21px;margin:0}#navigation ul
li{display:inline;float:right;margin:0;padding:0}#navigation
ul{font-size:1.5em;list-style-type:none;margin:0;padding:0;text-transform:uppercase}#navigation ul#menu-main-menu li
a{color:#aaa;transition:0.2s ease all}#navigation ul#menu-main-menu
li{border-right:1px solid #ddd}#navigation ul#menu-main-menu
li.current.last{border-left:medium none}#navigation ul#menu-main-menu li.current a:hover{color:#d54400}#navigation ul#menu-main-menu li.current
a{color:#000 !important}#navigation ul#menu-main-menu .categoryli:hover, #navigation ul#menu-main-menu .categoryli:focus{}#navigation ul#menu-main-menu li.home a:hover{color:#d54400}#navigation ul#menu-main-menu li.home a:focus{color:#d54400}#navigation ul#menu-main-menu li.pakistan a:hover{color:#949c27}#navigation ul#menu-main-menu li.pakistan a:focus{color:#949c27}#navigation ul#menu-main-menu li.business a:hover{color:#367c86}#navigation ul#menu-main-menu li.business a:focus{color:#367c86}#navigation ul#menu-main-menu li.world a:hover{color:#3a9bc9}#navigation ul#menu-main-menu li.world a:focus{color:#3a9bc9}#navigation ul#menu-main-menu li.sports a:hover{color:#edb630}#navigation ul#menu-main-menu li.sports a:focus{color:#edb630}#navigation ul#menu-main-menu li.style a:hover{color:#ee8360}#navigation ul#menu-main-menu li.style a:focus{color:#ee8360}#navigation ul#menu-main-menu li.society a:hover{color:#367c86}#navigation ul#menu-main-menu li.society a:focus{color:#367c86}#navigation ul#menu-main-menu li.multimedia a:hover, #navigation ul#menu-main-menu li.videos a:hover, #navigation ul#menu-main-menu li.slideshows a:hover{color:#ce4e92}#navigation ul#menu-main-menu li.multimedia a:focus, #navigation ul#menu-main-menu li.videos a:focus, #navigation ul#menu-main-menu li.slideshows a:focus{color:#ce4e92}#navigation ul#menu-main-menu li.opinion a:hover{color:#a58162}#navigation ul#menu-main-menu li.opinion a:focus{color:#a58162}#navigation ul#menu-main-menu li.blogs a:hover{color:#8080b4}#navigation ul#menu-main-menu li.blogs a:focus{color:#8080b4}#navigation ul#menu-main-menu li.magazine a:hover{color:#633}#navigation ul#menu-main-menu li.magazine a:focus{color:#633}#navigation ul#menu-main-menu{font-weight:bold}#navigation ul.subcategory li
a{border-left:1px solid #dddacd;border-radius:3px;color:#fff;font-size:16px;line-height:100%;margin:3px
0;padding:3px
10px;text-transform:uppercase}#navigation ul.subcategory .current
a{border-left:1px solid #dddacd}#navigation ul.subcategory .current a, #navigation ul.subcategory a:hover{color:#000}#navigation ul.subcategory li.last
a{border-left:0 none}#navigation
ul.subcategory{border-top:1px solid #000;height:auto}#navigation ul.home .current
a{background:none repeat scroll 0 0 #d54400}#navigation ul.pakistan .current
a{background:none repeat scroll 0 0 #949c27}#navigation ul.business .current
a{background:none repeat scroll 0 0 #367c86}#navigation ul.world .current
a{background:none repeat scroll 0 0 #3a9bc9}#navigation ul.sports .current
a{background:none repeat scroll 0 0 #edb630}#navigation ul.style .current
a{background:none repeat scroll 0 0 #ee8360}#navigation ul.multimedia .current a, #navigation ul.videos .current a, #navigation ul.slideshows .current
a{background:none repeat scroll 0 0 #ce4e92}#navigation ul.opinion .current
a{background:none repeat scroll 0 0 #a58162}#navigation ul.blogs .current
a{background:none repeat scroll 0 0 #8080b4}#sub-nav form.search
input.text{border:0
none !important;color:#777;float:left;font:11px/20px Verdana,Arial,Helvetica,sans-serif;height:20px;margin:0
5px 0 0;outline:medium none;padding:0
!important;width:150px}#sub-nav form.search
.image{background:none repeat scroll 0 0 #fff;border-left:1px solid #858585 !important;float:left;margin:1px
0;opacity:0.5;outline:medium none;padding:2px
2px 1px;width:auto}#sub-nav form.search:hover .image, #sub-nav form.search .image:focus, #sub-nav form.search input.text:focus+.image{opacity:0.8}#sub-nav
form.search{background:none repeat scroll 0 0 #fff;border:1px
solid #858585;display:inline-block;outline:medium none;padding-left:5px}#sub-nav{float:right;padding-top:4px;position:relative}#tickerbox{float:right;width:880px}#tickerbox
.label{background:none repeat scroll 0 0 black;color:white;float:right;margin:0;padding:10px
5px 14px 5px;text-transform:uppercase;width:75px;border-radius:0}#tickerbox .text
a{color:inherit;font-size:19px;letter-spacing:1px;right:0}.controls{display:inline-block;float:left;margin:0px;width:60px;position:absolute;left:10px;top:7px;z-index:999}.controls
img{background:none repeat scroll 0 0 #dedede;border:1px
solid #aeaeae;border-radius:12px;cursor:pointer;padding:5px
6px;vertical-align:middle}#tickerbox{background:none repeat scroll 0 0 #f3f3f3;border:1px
solid #999;font-size:23px;margin:0
0 10px;overflow:hidden;position:relative}.primary
.maingroup{background:none repeat scroll 0 0 #eee;border-top:3px solid #d0d0d0}.primary
.columnarstorey{}a.post-edit-link{color:#ff9921;display:none;font-size:0.8em;font-weight:normal}.error404 .error-img{display:block;margin:10px
auto 25px}.error404
h2{margin-bottom:0.25em}.error404 .content
p{line-height:1.25}.error404 .content
.label{cursor:pointer}.error404 .content
.text{background-position:5px center;padding:3px
5px}.error404
.content{background-color:#f8f8f8;padding:15px}.error404{text-align:right}#cse-search-results
iframe{width:100%}.carousel-pagination{direction:ltr}.carousel-parent .carousel-pagination{float:left;height:auto;padding:0}.carousel-parent
.carousel{overflow-x:auto}.group h4, .group
h3{border-bottom:1px solid #a6a6a6;font-weight:bold;margin:0
0 0.25em;text-align:right}.group
h3{font-size:22px;padding:5px
10px 5px 0}.group
h4{font-size:19px;padding:0
10px 0 0}.group h3.group-title
a{color:#333}.group
.last{border-bottom:0 none;margin-bottom:0}.group
div.clear{padding:0
0 10px}.group
div.clr{margin:10px
0 0}.group .more-story h3, .group .featured-story
h3{text-align:center}.group .more-story .odd, .group .featured-story
.odd{background-color:#eee}.group .more-story .last, .group .featured-story
.last{border-bottom:0 none}.group .more-story, .group .featured-story{background:none repeat scroll 0 0 #f4f4f4;border-bottom:1px solid #c6c6c6;border-top:3px solid #cfcfcf}.group .sub-cat-stories{margin:10px
0 0}.group .carousel-parent .carousel-pagination{margin-top:5px}.group .pagination
span{background-color:#fffeff;border:1px
solid #858585;color:#d54400;padding:0
6px}.group .pagination
a{padding:0
5px}.group
.pagination{border:0
none;float:left;margin-bottom:0;margin-left:10px;margin-top:0}.group{clear:both;margin:0
0 15px}.story .meta, .post
.meta{font-size:18px;letter-spacing: -0.5px;padding:0
0 5px}.story .image, .post
.image{float:right !important;margin:0
0 0 10px;padding-bottom:5px;width:100%}.story .image
img{width:100%;height:auto}.author .story .image
img{width:auto}.story .author a, .post .author
a{font:inherit}.story .author, .post
.author{border-left:1px solid #ccc;margin:0;padding-left:5px}.story .timestamp, .post
.timestamp{color:#676662}.story .story-image-container, .post .story-image-container{line-height:0}.story h1, .story h2, .post h1, .post
h2{font-weight:bold}.story h2, .post
h2{font-size:24px;line-height:140%;margin-bottom:0.5em}.story h1.title, .post
h1.title{font-size:26px;line-height:160%;margin-bottom:10px;margin-top:10px}abbr[title],abbr[data-original-title]{display:none}.story a.title, .post
a.title{border-bottom:0 none;padding:0}.story .excerpt, .post
.excerpt{color:#333136;line-height:28px}.story p, .post
p{margin-bottom:0.3em}.story .social .email-link, .story .social .addthis_button, .story .social .print-link, .story .social .comments, .story .social .posts, .post .social .email-link, .post .social .addthis_button, .post .social .print-link, .post .social .comments, .post .social
.posts{background-position:right center;background-repeat:no-repeat;display:block;font-size:11px;padding:0
17px 0 0}.story .social .email-link, .post .social .email-link{background-image:url("../img/email-friend-11.gif")}.story .social .addthis_button, .post .social
.addthis_button{background-image:url("../img/share-11.gif")}.story .social .print-link, .post .social .print-link{background-image:url("../img/printer-friendly-16.gif")}.story .social .comments, .post .social
.comments{background-image:url("../img/comment-11.gif");background-position:right 12px;padding:0
20px 0 0}.story .social .posts, .post .social
.posts{background-image:url("../img/posts.gif")}.story .social, .post
.social{display:block;margin:0
auto;padding-bottom:10px}.story:hover a.post-edit-link, .post:hover a.post-edit-link{display:inline}.story .content-container, .post .content-container{display:table}.story,.post{direction:rtl;margin:0
0 10px}.special-story
h1{margin:10px
5px 10px 0}.special-story
p.excerpt{margin-top:0}.special-story
.content{background:none repeat scroll 0 0 #faf9dc;padding:5px}.special-story
.image{display:table-cell;float:right;padding-bottom:0;text-align:center}.special-story
.timestamp{border-left:medium none}.special-story
.comment{color:#872023;font-size:11px;padding-left:4px}.special-story ul.related-stories
li{background:none repeat scroll 0 0 rgba(0, 0, 0, 0);border-top:1px dotted #d2d0c2;margin:0;padding-left:0;padding-right:0;padding-top:5px}.special-story ul.related-stories{font-size:12px;list-style:outside none none;margin-top:5px;padding-top:3px}.special-story .breaking-text{background:none repeat scroll 0 0 #d54400;color:white;float:left;font-size:15px;font-weight:bold;margin:5px
10px 0 0;padding:2px
2px 0;text-transform:uppercase}.special-story{background:none repeat scroll 0 0 #faf9dc;border-bottom:0 none;border-top:3px solid #d54400;margin:0
0 15px}.picture-story
.title{margin-bottom:0.25em}.picture-story .image, .picture-story
object{display:block;float:none;margin:0;padding:0}.picture-story{border-bottom-style:solid}.long-story
.title{border-bottom:0 none;padding:5px
0}.long-story
p.excerpt{margin-bottom:0}.long-story
.image{margin-left:0;padding-bottom:5px}.long-story{border-bottom:medium none;margin-bottom:0}.text-story{border-bottom:1px dotted #cfcfcf;margin-bottom:0;padding:10px}.author-story
h3{border:0
none;margin:inherit;padding:inherit}.author-story
.author{border-right:0 none;margin-right:0;padding-right:0}.author-story{border-bottom:0 none}ul.links li:hover a.post-edit-link{display:inline}ul.links
li{color:#999;list-style-type:disc;margin:0
5px 0 0;padding:5px
0}ul.links{clear:both;margin:0
10px;padding:0}.columnarstorey,.primary .main .span-12
.story{border-bottom-style:solid}.primary .main .span-12{border-top:3px solid #cfcfcf}.columnarstorey{border-top:3px solid #581D0A;}.primary
.featured{border-top:3px solid #cfcfcf}.primary .catfix
h3{border-bottom-color:#999}.primary .catfix h4
a{}.primary .catfix:hover h3.group-title
a{}.primary
.catfix{border-top:3px solid #d54400}.primary .pakistan
h3{border-bottom-color:#999}.primary .pakistan h4
a{color:#949c27}.primary .pakistan:hover h3.group-title
a{color:#949c27}.primary .pakistan
h4{border-bottom:0 none}.primary
.pakistan{border-top:3px solid #949c27;margin-top:10px}.primary .business
h3{border-bottom-color:#999}.primary .business h4
a{color:#367c86}.primary .business:hover h3.group-title
a{color:#367c86}.primary
.business{border-top:3px solid #367c86}.primary .world
h3{border-bottom-color:#999}.primary .world h4
a{color:#3a9bc9}.primary .world:hover h3.group-title
a{color:#3a9bc9}.primary
.world{border-top:3px solid #3a9bc9}.primary .sports
h3{border-bottom-color:#999}.primary .sports h4
a{color:#edb630}.primary .sports:hover h3.group-title
a{color:#edb630}.primary
.sports{border-top:3px solid #edb630}.primary .style h3, .primary .saqafat
h3{border-bottom-color:#999}.primary .style h4
a{color:#ee8360}.primary .style *:hover h3.group-title
a{color:#ee8360}.primary .style h4, .primary .saqafat
h4{border-bottom:0 none}.primary .style, .primary
.saqafat{border-top:3px solid purple}.primary .society
h3{border-bottom-color:#999}.primary .society h4
a{color:#367c86}.primary .society:hover h3.group-title
a{color:#367c86}.primary
.society{border-top:3px solid #367c86}.primary .opinion
h3{border-bottom-color:#999}.primary .opinion h4
a{color:#a58162}.primary .opinion:hover h3.group-title
a{color:#a58162}.primary
.opinion{border-top:3px solid #a58162}.primary .weird-news{border-top:3px solid #ee8360;margin-top:5px}.primary
.science{border-top:3px solid #367c86}.primary
.business{border-top:3px solid #d54400}.primary
.health{border-top:2px solid #193C10}.primary .saqafat:hover h3.group-title
a{color:purple}.primary .weird-news:hover h3.group-title
a{color:#ee8360}.primary .science:hover h3.group-title
a{color:#367c86}.primary .health:hover h3.group-title
a{color:#193C10}.primary .videos h3.group-title, .primary .slideshows h3.group-title{margin-bottom:0;background:#E9E9E9}.primary .videos, .primary .slideshows, .primary .videos-inner{border-top:3px solid rgba(90, 88, 87, 0.99);//background: rgba(90, 88, 87, 0.99);background-image:url(/wp-content/themes/express-v5/img/background-video.jpg)}.primary .videos h3, .primary .slideshows h3,.primary .videos-inner
h3{border-bottom-color:#999}.primary .videos h4 a, .primary .slideshows h4 a,.primary .videos-inner h4
a{color:#ce4e92}.primary .videos:hover h3.group-title a, .primary .slideshows:hover h3.group-title a,.primary .videos-inner:hover h3.group-title
a{color:#ce4e92}.primary .videos .content, .primary .slideshows
.content{}.primary .videos .item a, .primary .slideshows .item a,.primary .videos-inner .item
a{color:#89878a;font-size:17px}.primary .videos .item a.image, .primary .slideshows .item a.image, .primary .videos-inner .item
a.image{border:1px
solid #cfcfcf;display:block;height:107px;width:143px}.primary .videos .item p, .primary .slideshows .item p,.primary .videos-inner .item
p{padding-top:5px;text-align:center;width:143px}.primary .videos .item:hover a.post-edit-link, .primary .slideshows .item:hover a.post-edit-link{display:inline}.primary .videos .item, .primary .slideshows
.item{float:right;margin:10px
10px 0 0;min-height:100px}.primary .videos .current a, .primary .videos .item:hover a, .primary .slideshows .current a, .primary .slideshows .item:hover
a{color:#222}.primary .videos .current a.image, .primary .videos .item:hover a.image, .primary .slideshows .current a.image, .primary .slideshows .item:hover
a.image{border-color:#333}.primary .bx-wrapper{max-width:765px !important;margin-bottom:2% !important;padding:0
0 0 10px}.primary .bx-wrapper ul#bxslider,#bxslider-pager{margin:0}.slider1
img{height:auto}.primary
div.slide{height:210px;overflow:hidden}.videos-inner
div.slide{width:30%;float:left;margin:10px
12px 0;position:relative}.videos-inner div.slide
img{width:100%;height:auto}.primary .videos div.slide a,.primary .videos-inner div.slide
a{color:#f5f5f5;overflow:hidden;height:135px;display:block}.primary .videos div.slide a:before,.primary .videos-inner div.slide a:before{content:"";width:72px;height:72px;position:absolute;filter:grayscale(100%);-webkit-filter:grayscale(100%);background:url("../img/arrow.png") no-repeat;background-size:200%;right:35%;top:15%}.primary .videos div.slide a:hover:before,.primary .videos-inner div.slide a:hover:before{filter:grayscale(0%);-webkit-filter:grayscale(0%)}.primary div.slide
a{color:#f5f5f5}.page .primary .videos .first, .page .primary .slideshows
.first{margin-right:0}#picture-gallery .carousel .items
.item{margin-left:0}#picture-gallery .carousel .carousel-pagination
a{background:url("../img/slideshow-carousel-page.gif") no-repeat scroll 0 0 rgba(0, 0, 0, 0);float:none}#picture-gallery .carousel .carousel-pagination a.carousel-current-page, #picture-gallery .carousel .carousel-pagination a:hover, #picture-gallery .carousel .carousel-pagination a:focus{background:url("../img/slideshow-carousel-current-page.gif") no-repeat scroll 0 0 rgba(0, 0, 0, 0)}#picture-gallery .carousel .carousel-pagination{text-align:center}#picture-gallery
.carousel{background:none repeat scroll 0 0 rgba(0, 0, 0, 0);padding-bottom:0}.widget
.widgettitle{background:none repeat scroll 0 0 #f5f5f5;border-bottom:1px solid #a6a6a6;border-top:3px solid #cfcfcf;margin-bottom:10px;padding:5px
10px 5px 0;text-align:right}.widget .content .couplet
.image{float:right;padding:0
0 0 10px}.widget .content .couplet
h3{font-weight:bold;margin-bottom:0.25em}.widget .content .couplet .title:hover a.post-edit-link{display:inline}.widget .content .couplet
.title{clear:left}.widget .content .couplet .meta
.timestamp{display:block}.widget .content
.couplet{border-bottom:1px dotted #a6a6a6;clear:both;direction:rtl;margin:0
0 10px;padding:0
0 10px}.widget .content
.first{border-top-width:0;padding-top:0}.widget .content
.last{border-bottom-width:0}.widget
.content{padding:0
10px}.widget .carousel-parent .carousel-pagination{margin-top:10px}.widget{clear:both;margin-bottom:15px}.secondary .widget .content
.last{padding-bottom:0}.secondary > div:last-child, .secondary
.last{margin-bottom:0}.widget_recently_popular ul
li{background:url("../img/bullet-disc.gif") no-repeat scroll right center rgba(0, 0, 0, 0);list-style-type:none;margin:0;padding:0
15px 0 0}.widget_recently_popular ul
.couplet{border-bottom:1px dotted #a6a6a6;clear:both;direction:rtl;margin:0
0 10px;padding:0
0 10px}.widget_recently_popular ul
.first{border-top-width:0;padding-top:0}.widget_recently_popular ul
.last{border-bottom-width:0}.widget_recently_popular
ul{clear:both;margin:0;padding:0
10px}.widget_recent_comments .content .story
h2{font-size:13px;line-height:110%;margin-bottom:0.5em;margin-top:6px}.widget_recent_comments .content .story .social
.comments{color:#666;display:inline-block;font:italic 11px Georgia,Times,"Times New Roman",times-roman,serif}.widget_recent_comments .content .story
.social{padding-bottom:5px}.widget_recent_comments .content .story
p{margin:0
0 0.3em;white-space:pre-wrap;word-wrap:break-word}.widget_recent_comments .content
.story{border-bottom:1px dotted #858585;margin-bottom:10px;padding-bottom:5px}.widget_recent_comments .content
.last{border-bottom:0 none;margin-bottom:0;padding-bottom:0}.widget_recent_comments
.content{height:450px;overflow-x:hidden;overflow-y:scroll}#weather-widget .weather-details a.weather-link{border-right:1px solid #858585;margin-right:10px;padding-right:10px}#weather-widget .weather-details
select{border:1px
solid #858585;color:#777;float:left;font-size:15px;margin:0
5px 0 0}#weather-widget .weather-details
a{float:left;margin-right:10px}#weather-widget .weather-details{float:left;margin:0
0 0 15px;text-align:right;width:165px}#weather-widget .temperature div .max-temp{color:#e44}#weather-widget .temperature div .min-temp{color:#44e}#weather-widget .temperature
div{float:left;margin-right:20px}#weather-widget .temperature
div.last{margin-right:0}#weather-widget
.temperature{float:left}#weather-widget{color:#888;font-size:22px;line-height:25px;margin:0}#ad-header-right,#ad-header-left{height:90px;width:180px}#ad-header-right{float:right}#ad-header-left{float:left}.ad-box-container{background:none repeat scroll 0 0 #cfcfcf;border:0
none;padding:0;width:300px}.ad-loader{display:none;left: -1000px;position:absolute;top: -1000px}.ad-box{background:none repeat scroll 0 0 #eee;height:250px;width:300px}#ad-box-right-btf{background:none repeat scroll 0 0 rgba(0,0,0,0)}.ad-banner{height:60px;width:468px}.ad-leaderboard-container .ad-leaderboard{background-color:#f5f5f5;height:90px;margin:0
auto;width:728px}.ad-leaderboard-container{border-bottom:1px solid #858585;padding:5px
0}.ad-fullbanner-btf-container .ad-fullbanner-btf{height:60px;margin:0
auto;width:468px}.ad-fullbanner-btf-container{margin:0
0 20px}.widget_banner_ad_widget{border-bottom:0 none}.widget_tabbed_stories_widget
h1.widgettitle{border-bottom:0 none;margin-bottom:0}.widget_tabbed_stories_widget .content .story a.title, .widget_tabbed_stories_widget .content .post
a.title{font-size:22px;padding:0
0 7px}.widget_tabbed_stories_widget .content .story .social, .widget_tabbed_stories_widget .content .post
.social{padding-bottom:0}.widget_tabbed_stories_widget .content .story, .widget_tabbed_stories_widget .content
.post{border-bottom:1px dotted #858585;margin:0
0 5px}.widget_tabbed_stories_widget .content
ol.links{margin-bottom:0;margin-left:0;margin-right:20px}.widget_tabbed_stories_widget .content
.last{border-bottom:0 none}.widget_tabbed_stories_widget
.content{padding:20px
5px 0}.widget_tabbed_stories_widget
.note{color:#888;float:left;margin-left:10px;margin-top:10px}.widget_tabbed_stories_widget{background-color:#fff}.widget_polls-widget .wp-polls
.couplet{border-bottom:1px dotted #a6a6a6;clear:both;direction:rtl;margin:0
0 10px;padding:0
0 10px}.widget_polls-widget .wp-polls
.first{border-top-width:0;padding-top:0}.widget_polls-widget .wp-polls
.last{border-bottom-width:0}.widget_polls-widget .wp-polls label, .widget_polls-widget .wp-polls .wp-polls-ans .wp-polls-ul li
label{font-weight:normal !important}.widget_polls-widget .wp-polls .Buttons:hover{border-color:#e5e2d4;color:#000}.widget_polls-widget .wp-polls
.Buttons{border:1px
solid #c2c1b6;cursor:pointer;float:right;font-weight:bold;outline:medium none;padding:0
1px;text-align:center;width:auto}.widget_polls-widget .wp-polls .wp-polls ul li, .widget_polls-widget .wp-polls wp-polls-ul li, .widget_polls-widget .wp-polls .wp-polls-ans ul
li{text-align:right}.widget_polls-widget .wp-polls .wp-polls-ul li
input{float:right;margin:9px
0 0 10px}.widget_polls-widget .wp-polls .wp-polls-ul li
label{font-weight:normal}.widget_polls-widget .wp-polls .wp-polls-ul{margin:10px
0 15px}.widget_polls-widget .wp-polls .wp-polls-ans
p{display:inline !important;float:right}.widget_polls-widget .wp-polls
span{margin-right:10px}.widget_polls-widget .wp-polls
small{color:#999}.widget_polls-widget .wp-polls
strong{color:#0183ba}.widget_polls-widget .wp-polls{padding:0
10px}.widget_polls-widget .wp-polls-loading{left:50px;position:absolute;top:50px}.widget_polls-widget{position:relative}.widget_express_facebook_likebox .fb-like-box
iframe{margin: -1px -1px -1px -2px}.widget_express_facebook_likebox .fb-like-box{overflow:hidden}.widget_express_facebook_likebox{background:none repeat scroll 0 0 transparent;border:1px
solid #c3c3c3;padding:0}.widget_letters_to_editors_widget .carousel
.story{border:medium none;float:left;margin:0;padding:0
6px;width:130px}.widget_letters_to_editors_widget
.carousel{border-bottom:1px dotted #c9c9c9;padding-bottom:10px}.widget_letters_to_editors_widget .letters-info
h2{margin:0;text-align:right}.widget_letters_to_editors_widget .letters-info
p{line-height:25px}.widget_letters_to_editors_widget .letters-info
img{float:right;margin:0
0 5px 5px}.widget_letters_to_editors_widget .letters-info{margin-top:10px}.widget_express_videos_widget .carousel
.couplet{width:285px}.widget_express_slideshows_widget
.widgettitle{margin-bottom:0}.widget_express_slideshows_widget .widgettitle
a{z-index:1;position:relative;color:#000}.widget_express_slideshows_widget .content .carousel
.item{margin:0
10px 0 9px;width:133px}.widget_express_slideshows_widget
.content{padding:0}.widget_network_services_links_widget ul li a
img{border:1px
solid #ebe7dc;border-radius:3px;float:right;margin:0
0 0 10px;padding:2px}.widget_network_services_links_widget ul li a:hover
img{border-color:#c9c5ba}.widget_network_services_links_widget ul li
a{}.widget_network_services_links_widget ul
li{margin-bottom:10px}.widget_network_services_links_widget
ul{float:left;list-style-type:none;margin:0;width:50%}.widget_network_services_links_widget
ul.last{float:right}.single .primary .story
.title{margin-bottom:0.25em}.single .primary .story
.meta{margin:0
0 15px;padding:0}.single .primary .story .social a, .single .primary .story .social
div{font-size:19px}.single .primary .story .social
a{margin:5px
0 0;padding:0
28px 0 0}.single .primary .story .social .email-link{background-image:url("../img/email-friend-16.gif")}.single .primary .story .social
.addthis_button{background-image:url("../img/share-16.gif")}.single .primary .story .social
.comments{background-image:url("../img/comment-16.gif");background-position:right 5px !important;color:#014373 !important}.single .primary .story .social a:hover{color:#024177}.single .primary .story .social .fb-link{height:21px;margin:10px
0 0}.single .primary .story .social .fb-like{height:21px}.single .primary .story .social #twitter-link
iframe{width:100% !important}.single .primary .story .social #twitter-link{float:right;margin:10px
0 0;width:100px}.single .primary .story .social .google-plusone{float:left;margin-left:30px;margin-top:10px}.single .primary .story
.social{margin:10px
0 15px;overflow:hidden}.single .primary .story .story-content .story-image .caption, .single .primary .story .story-content .story-video
.caption{border-bottom:1px solid #a6a6a6;color:#666;font-size:16px;margin:0;overflow:hidden;padding:10px
0}.single .primary .story .story-content .story-image, .single .primary .story .story-content .story-video{margin-bottom:0}.single .primary .story .story-content .story-image img, .single .primary .story .story-content .story-video
img{width:100%;height:auto}.single .primary .story .story-content
p{margin-top:12px}.single .primary .story .story-content .carousel
img.item{border-color:#a6a6a6;border-style:solid;border-width:1px;margin:0
5px 0 0;opacity:0.7}.single .primary .story .story-content .carousel img:hover, .single .primary .story .story-content .carousel
img.current{border-color:#d54400;opacity:1}.single .primary .story .story-content .carousel
img.last{margin-right:0}.single .primary .story .story-content .carousel .carousel-pagination
a{float:left}.single .primary .story .story-content
.carousel{background:none repeat scroll 0 0 #f5f5f5;border-bottom:1px solid #a6a6a6;margin:0;overflow-x:auto;overflow-y:hidden}.author .primary
h1.title{border-bottom:5px solid #858585;color:#333;font-weight:bold;margin:0
0 15px;padding:0
10px 10px;text-align:right}.author .primary
h2.title{margin-bottom:0.25em}.author .primary .rss-icon{float:left;margin-top:8px}.author .primary
.last{border-bottom:0 none}.page-weather
.title{font-weight:bold;margin-bottom:10px;text-align:right}.page-weather .section-sub-title
.updated{border-right:1px solid #a6a6a6;font-weight:normal;margin-right:10px;padding-right:15px}.page-weather .section-sub-title{border-bottom:1px solid #a6a6a6;border-top:1px solid #a6a6a6;color:#444;font-size:1.8em;font-weight:bold;margin:10px
0;padding:7px
0;text-align:right}.page-weather .temperature-condition{border-bottom:1px solid #a6a6a6;color:#444;font-size:1.2em;font-weight:bold;margin-bottom:5px;padding:2px
0 5px}.page-weather .weather-info
dt{float:right}.page-weather .weather-info dt, .page-weather .weather-info
dd{width:52px}.page-weather .weather-info .max-temp{color:#e44}.page-weather .weather-info .min-temp{color:#44e}.page-weather .weather-info{font-size:18px;text-align:right}.page-weather .weather-detail
dt{float:right;width:69px}.page-weather .weather-detail
dd{width:60px}.page-weather .weather-detail{border-right:1px solid #a6a6a6;float:left;font-size:18px;margin-bottom:0;margin-right:7px;padding-right:7px}.page-weather dt, .page-weather
dd{float:left;margin:0
0 5px;text-align:right}.page-weather
dd{clear:left}.page-weather
.dated{background-color:#f5f5f5;clear:both;font-size:22px;line-height:44px;margin:5px
0 10px;padding-right:10px;text-align:right}.attachment .primary .story .social a.addthis_button, .attachment .primary .story .social div.fb-link, .attachment .primary .story .social #twitter-link, .attachment .primary .story .social .google-plusone, .single-slideshow .primary .story .social a.addthis_button, .single-slideshow .primary .story .social div.fb-link, .single-slideshow .primary .story .social #twitter-link, .single-slideshow .primary .story .social .google-plusone{border:0
none;float:right;margin:0
0 0 10px}.attachment .primary .story .social a.addthis_button:hover, .single-slideshow .primary .story .social a.addthis_button:hover{border-color:#ddab37}.attachment .primary .story .social a.addthis_button, .single-slideshow .primary .story .social
a.addthis_button{margin-left:20px;padding:2px
20px 1px 1px}.attachment .primary .story .social div.fb-link, .attachment .primary .story .social #twitter-link, .attachment .primary .story .social .google-plusone, .single-slideshow .primary .story .social div.fb-link, .single-slideshow .primary .story .social #twitter-link, .single-slideshow .primary .story .social .google-plusone{margin-top:5px}.attachment .primary .story .social #twitter-link, .single-slideshow .primary .story .social #twitter-link{width:110px}.attachment .primary .story .social div.fb-link, .single-slideshow .primary .story .social div.fb-link{padding:0}.attachment .primary .story .social .google-plusone, .single-slideshow .primary .story .social .google-plusone{clear:none}.attachment .primary .story .social, .single-slideshow .primary .story
.social{clear:both;padding:13px
0 0}.pagination .page-numbers{padding:0
2px}.pagination
.current{font-size:1em;font-weight:bold}.pagination
.prev{float:right}.pagination
.next{float:left}.pagination .explainer, .pagination p.last-updated{color:#999;font-size:0.9em}.pagination{border-bottom:1px dotted #858585;border-top:1px dotted #858585;clear:both;font-size:16px;margin-bottom:0.5em;margin-top:10px;text-align:center;width:100%}.tabs-container .tabs
li{float:right;line-height:100%;list-style:outside none none;margin:0;padding:0}.tabs-container .tabs a:focus{outline:0
none}.tabs-container .tabs
a{background-color:#f7f7f7;border:1px
solid #858585;color:#b4b4bc;cursor:pointer;float:left;font-size:20px;padding:5px
10px;position:relative;text-transform:uppercase;top:1px}.tabs-container .tabs a.current, .tabs-container .tabs a:hover{background:none repeat scroll 0 0 #ddd;color:black}.tabs-container .tabs
a.current{border-bottom-color:#fff}.tabs-container .tabs li.first
a{border-left-width:0}.tabs-container .tabs li.last
a{border-right-width:0}.tabs-container .tabs li.first
a{border-right-width:1px}.tabs-container .tabs li.last
a{border-left-width:1px}.tabs-container
.tabs{margin:0
2px 0 0}.tabs-container .tabs-content-group .tabs-content{display:none;margin:0}.tabs-container .tabs-content-group .tabs-content-visible{display:block}.tabs-container .tabs-content-group{background:none repeat scroll 0 0 #fff;border-top:1px solid #858585;float:left;width:100%}.tabs-container{color:#999}#footer
ul{list-style-type:none;margin:0}#footer #menu-footer-menu li ul
li{font-size:18px;line-height:1}#footer #menu-footer-menu
li{float:right;margin-left:40px;padding:0;text-align:right}#footer #menu-footer-menu h5
a{font-weight:normal}#footer #menu-footer-menu
h5{font-weight:bold;margin:0.25em 0}#footer .footer-center
a{text-align:center}#footer .footer-center
p{float:left;line-height:30px}#footer .footer-center
span{float:right;margin-left:6px}#footer .footer-center
img{display:inline}#footer .footer-center #menu-footer-menu
li{margin-left:18px}#footer .footer-right{border-left:1px solid #ccc}#footer .footer-right
li{line-height:28px}#footer .footer-left{float:left !important}#footer .footer-left
li{text-align:left}#footer .footer-center{text-align:right;padding-left:25px;float:right}#footer .footer-social{width:100%;float:right;margin:10px
0;min-height:84px}#footer .footer-social li
a{width:35px;height:35px;display:block}#footer .footer-social li:hover{}#footer .footer-social
li{transition:0.2s ease all;float:right;width:35px;height:35px;margin-left:8px;cursor:pointer}#footer .footer-social
li.facebook{background:url(../img/social-footer.png) no-repeat 0px 0px}#footer .footer-social li.facebook:hover{background:url(../img/social-footer.png) no-repeat 0px -37px}#footer .footer-social
li.instagram{background:url(../img/expressinstagram.png) no-repeat}#footer .footer-social li.instagram:hover{background:url(../img/expressinstagram.png) no-repeat;transition:background .2s ease-in}#footer .footer-social
li.tweet{background:url(../img/social-footer.png) no-repeat -44px 0px}#footer .footer-social li.tweet:hover{background:url(../img/social-footer.png) no-repeat -44px -37px}#footer .footer-social
li.google{background:url(../img/social-footer.png) no-repeat -86px 0px}#footer .footer-social li.google:hover{background:url(../img/social-footer.png) no-repeat -86px -37px}#footer li
a{transition:0.5s ease all}#footer #footer-notice{border-top:1px solid #c3c3c3;clear:both;padding-top:1px}#footer{border-top:2px solid #000;margin:10px
0 0;padding:1px
0}.copyright-left
p{text-align:left;line-height:20px;font-size:12px;font-family:arial}.copyright-right{float:right !important}input.error-field,textarea.error-field{border-color:red !important}#twitter-link{float:left;margin-top:10px}#email-popup-page{width:auto}#wp-email-popup .top-story{border-bottom:0 none}#wp-email-popup #wp-email-content #wp-email-required{display:none}#wp-email-popup #wp-email-content form p, #wp-email-popup #wp-email-content form
div{clear:both;padding:0.35em 0}#wp-email-popup #wp-email-content form
label{color:#000;display:inline-block;width:150px}#wp-email-popup #wp-email-content form input, #wp-email-popup #wp-email-content form
textarea{margin:0}#wp-email-popup #wp-email-content form
input.TextField{height:19px;width:265px}#wp-email-popup #wp-email-content form
#yourremarks{height:80px;width:255px}#wp-email-popup #wp-email-content form
#imageverify{float:left;width:auto}#wp-email-popup #wp-email-content form
br{display:none}#wp-email-popup #wp-email-content #wp-email-button #wp-email-submit:hover{background:none repeat scroll 0 0 #222}#wp-email-popup #wp-email-content #wp-email-button #wp-email-submit{-moz-user-select:none;background:none repeat scroll 0 0 #555;border:medium none;border-radius:3px;color:#fff;cursor:pointer;font-weight:bold;outline:medium none;padding:4px
10px;text-align:center;width:auto}#wp-email-popup #wp-email-content #wp-email-button{margin-top:1.25em}#wp-email-popup{border-top:1px solid #e3e4e5;margin-top:1em}.catfix .widget .widgettitle, .catfix .primary .main .span-12, .catfix .more-story, .catfix .featured-story, .catfix
.featured{}.home .widget
.widgettitle{border-top:3px solid rgba(90, 88, 87, 0.99);font-size:25px}.home .primary .main .span-12{border-top-color:#cfcfcf}.home .more-story{border-top-color:#cfcfcf}.home .featured-story{border-top-color:#cfcfcf}.home
.featured{border-top-color:#cfcfcf}.home
.world{margin-bottom:0}.category-business .featured, .category-business .featured-story, .category-business .more-story, .category-business .maingroup, .category-business .columnarstorey, .category-business .widget .widgettitle, .category-business .primary .main .span-12, .category-business .single .primary .story .social, .category-business .story-image-container{border-top-color:#367c86}#navigation ul#menu-main-menu .business.current
a{color:#367c86}.category-business .featured, .category-business .featured-story, .category-business .more-story, .category-business .maingroup, .category-business .columnarstorey, .category-business .widget .widgettitle, .category-business .primary .main .span-12, .category-business .single .primary .story .social, .category-business .story-image-container{border-top-color:#367c86}#navigation ul#menu-main-menu .business.current
a{color:#367c86}.category-world .featured, .category-world .featured-story, .category-world .more-story, .category-world .maingroup, .category-world .columnarstorey, .category-world .widget .widgettitle, .category-world .primary .main .span-12, .category-world .single .primary .story .social, .category-world .story-image-container{border-top-color:#3a9bc9}#navigation ul#menu-main-menu .world.current
a{color:#3a9bc9}.category-sports .featured, .category-sports .featured-story, .category-sports .more-story, .category-sports .maingroup, .category-sports .columnarstorey, .category-sports .widget .widgettitle, .category-sports .primary .main .span-12, .category-sports .single .primary .story .social, .category-sports .story-image-container{border-top-color:#edb630}#navigation ul#menu-main-menu .sports.current
a{color:#edb630}.category-saqafat .featured, .category-saqafat .featured-story, .category-saqafat .more-story, .category-saqafat .maingroup, .category-saqafat .columnarstorey, .category-saqafat .widget .widgettitle, .category-saqafat .primary .main .span-12, .category-saqafat .single .primary .story .social, .category-saqafat .story-image-container{border-top-color:#ee8360}#navigation ul#menu-main-menu .style .current
a{color:#ee8360}#umrp-6 .widgettitle, .category-opinion .featured, .category-opinion .featured-story, .category-opinion .more-story, .category-opinion .maingroup, .category-opinion .columnarstorey, .category-opinion .widget .widgettitle, .category-opinion .primary .main .span-12, .category-opinion .single .primary .story .social, .category-opinion .story-image-container{border-bottom-color:#a58162 !important;border-top-color:#a58162 !important}#navigation ul#menu-main-menu .opinion.current
a{color:#a58162}.category-magazine .featured, .category-magazine .featured-story, .category-magazine .more-story, .category-magazine .maingroup, .category-magazine .columnarstorey, .category-magazine .widget .widgettitle, .category-magazine .primary .main .span-12, .category-magazine .single .primary .story .social, .category-magazine .story-image-container{border-top-color:#633}#navigation ul#menu-main-menu .magazine.current
a{color:#633}#polls-widget-11 .widgettitle, #network_services_links_widget-2
.widgettitle{border-color:#900 !important}#express_slideshows_widget-3 .widgettitle, .category-slideshows .featured, .category-slideshows .featured-story, .category-slideshows .more-story, .category-slideshows .maingroup, .category-slideshows .columnarstorey, .category-slideshows .widget .widgettitle, .category-slideshows .primary .main .span-12, .category-slideshows .single .primary .story .social, .category-slideshows .story-image-container{border-top-color:#ce4e92 !important}#navigation ul#menu-main-menu .slideshows.current
a{color:#ce4e92}#umrp-2 .widgettitle, .category-pakistan .featured, .category-pakistan .featured-story, .category-pakistan .more-story, .category-pakistan .maingroup, .category-pakistan .columnarstorey, .category-pakistan .widget .widgettitle, .category-pakistan .primary .main .span-12{border-bottom-color:#949c27 !important;border-top-color:#949c27 !important}#navigation ul#menu-main-menu .pakistan.current
a{color:#949c27}.widget_network_services_links_widget .widgettitle, .category-multimedia .widget .widgettitle, .page-videos .widget
.widgettitle{border-bottom-color:#ce4e92 !important;border-top-color:#ce4e92 !important}.category-multimedia .primary .main .span-12, .page-videos .primary .main .span-12, .category-multimedia .single .primary .story .social, .category-multimedia .story-image-container{border-top-color:#ce4e92}.category-multimedia .more-story, .page-videos .more-story{border-top-color:#ce4e92}.category-multimedia .featured-story, .page-videos .featured-story, .page-videos .single .primary .story .social, .page-videos .story-image-container{border-top-color:#ce4e92}.category-multimedia .featured, .page-videos
.featured{border-top-color:#ce4e92}#navigation ul#menu-main-menu .videos.current
a{color:#ce4e92}.category-blogs .widget
.widgettitle{border-top-color:#8080b4}.category-blogs .primary .main .span-12{border-top-color:#8080b4}.category-blogs .more-story{border-top-color:#8080b4}.category-blogs .featured-story{border-top-color:#8080b4}.category-blogs
.featured{border-top-color:#8080b4}.display-none{display:none}#cse-search-box{position:absolute;top: -30px}.group-title{background:none repeat scroll 0 0 #f3f3f3}#network_services_links_widget-2{border-top-color:#d54500}#navigation ul#menu-main-menu
li.current{}.layout_edit_img{width:auto !important}.columnarstorey{overflow:hidden}.cstoreyitem{float:right;margin-left:12px;min-height:190px;text-align:right;width:180px;margin-bottom:15px}.cstoreyitem
img{width:100%;height:auto}.columnarstorey .cstoreyitem
a{direction:rtl;display:block;font-size:17px;min-height:60px}.cd-fa-wrap{overflow:hidden;text-align:center}.widget
ul{margin:0;overflow:hidden}.widget
li{border-bottom:1px dotted #ddd;list-style:outside none none;margin:0
10px 5px 0;overflow:hidden;padding-bottom:5px}#most-popular-content
li{list-style:inherit;overflow:inherit}.widget ul li:last-child{border:medium none}.widget_polls-widget{overflow:hidden;padding-bottom:15px;position:relative}.more-stories .content .carousel
.item{margin-left:12px;padding-left:12px;text-align:right;width:185px}.more-stories .content .carousel
.item.current{border:medium none;margin:0;padding:0}.cd-fa-wrap .avatar-wrap{float:right;font-size:16px;margin-left:10px;overflow:hidden}.cd-fa-wrap{border-bottom:1px dotted #ddd;margin-bottom:10px;overflow:hidden;text-align:center}.avatar-wrap
img{display:block;width:60px}.recent-posts-thumb{float:right;height:auto;margin-bottom:10px;margin-left:10px;margin-top:10px;width:100px}.comment-form{text-align:right}.story .video
.image{display:block;float:none;text-align:right}.story
.video{float:left;margin-left:20px;width:130px}.story
.widget_express_related_videos_widget{border-bottom:medium none;overflow:hidden}#commentform textarea, #commentform
input{font-family:"Jameel Noori Nastaleeq",NafeesWebNaskhRegular;text-align:right}.rss_categories li
a{background:url("../img/feed_icon.gif") no-repeat scroll right center rgba(0, 0, 0, 0);padding:0
20px 0 0}.rss_categories
li{border-bottom:1px dotted #cdcdcd;list-style:outside none none;margin:0
0 8px;padding:8px
6px}.rss_subcategories
li{border-bottom:medium none;float:right;margin-left:10px}.primary .maingroup
h3{background:none repeat scroll 0 0 #f5f5f5}.primary .widget
.content{padding:0}.primary
.date{font-size:15px}.related-stories-widget{background:none repeat scroll 0 0 #f8f8f8}.related-stories
images{float:right;margin-left:10px;width:55px}.related-stories
.date{margin-right:10px}.single_social_links
div{float:right;margin-left:10px;text-align:right}.single_social_links div
a{font-size:17px}.single_social_links .fb-link{border:medium none !important;margin:0
!important;padding-top:11px !important}#top-bar .rss
a{background:url("../img/rss.jpg") no-repeat scroll right center rgba(0, 0, 0, 0);margin-right:5px;padding-right:25px}.story-image-container
images{opacity:1 !important}.single .primary .story .social .fb-link
.fb_edge_widget_with_comment{position:relative;right: -46px}#commentform
label{float:left}#commentform
input{float:right}#commentform
p{overflow:hidden}.commentlist
.timestamp{}.commentlist
.comment{border-bottom:1px solid #f3f3f3;padding-top:5px}.commentlist{list-style:outside none none;margin:4px
0}.umrp-container
.author{color:#000;display:block}#tickertext{float:right;height:34px;overflow:hidden;position:relative;width:85%;text-align:right;padding-top:5px}#tickertext
li{list-style:outside none none;margin:0;padding:0}.tribuneurl{font-family:arial;font-size:15px;font-weight:normal}.columnarstorey .author
a{color:#666;padding:0}.columnarstorey
.story{margin:0
!important}#tickerbox
.label{background-color:#900 !important}.story .author a, .post .author a, .social .redd
a{color:#900 !important;font-size:17px !important}.widget_polls-widget{background:#EDE7E1}.widget_polls-widget
a{color:#481602}.widget_polls-widget .wp-polls .wp-polls-ul{margin:0
!important}.single .primary .story .story-content p, .story .excerpt, .post .excerpt, .columnarstorey .cstoreyitem
a{line-height:28px !important}.single .primary .story .story-content .story-image .caption, .single .primary .story .story-content .story-video
.caption{font-size:15px !important}.span-6 .comments, .last .comments,.comments{color:#900 !important}.ecom{}.ecom
p{direction:rtl;font-size:14px;font-weight:bold;text-align:right}.entfild{float:right;font-size:20px;margin-right:10px;margin-top:15px;text-align:right}.entfild
input{margin:0
!important;text-align:right !important}.com-left{border-left:3px solid #c6dfec;direction:rtl;padding-right:10px;text-align:right}.beta{height:21px}#menu-item-555,#menu-item-554{display:none}.split-new-4{background:url("../img/dot.gif") repeat-y scroll 160.5px top transparent;display:inline-block}.split-new-8{background:url("../img/dot.gif") repeat-y scroll 317.5px top transparent;display:inline-block}.split-new-12{background:url("../img/dot.gif") repeat-y scroll 472.5px top transparent;display:inline-block}.cstoreyitem
a{direction:rtl;display:block}.widget_tabbed_stories_widget
.comments{font-size:18px !important}#most-popular-content
li{list-style:outside none circle}#urdufont{position:absolute;right:10px;top:30px}.featured
.cstoreyitem{margin-bottom:20px}.elections2013-banner{background:none repeat scroll 0 0 transparent;border:medium none;margin:auto auto 10px;padding:0;text-align:center}.elections2013-banner
a{border-bottom:3px solid #900;border-top:3px solid #900;display:block;margin:auto;width:965px}.elections2013-banner a
img{padding:5px
0}.adufonebg{background:url("/wp-content/uploads/ads/adufonebg.jpg") repeat-x fixed center top #fff !important}div.topArea{width:100%;position:relative;background:#b92533;margin-bottom:3px;float:left}div.topArea
div.top{background:url(../img/top-topArea.png) repeat;padding:4px
4px 8px 4px;width:100%;min-height:30px}div.topArea div.top div.social-links{float:left;padding-top:2px}div.topArea div.top div.social-links
ul{list-style:none;margin:0;padding:0}div.topArea div.top div.social-links
li{float:left;width:25px;margin:0;padding:0}div.topArea div.top div.social-links li
a{display:block}div.topArea div.top div.social-links li:hover{opacity: .5;-webkit-transition:all 0.5s ease-out;-moz-transition:all 0.5s ease-out;-ms-transition:all 0.5s ease-out;-o-transition:all 0.5s ease-out;transition:all 0.5s ease-out}.brands-bar{background-color:#fff;color:#c5c5c5;margin:0;width:100%;padding:0
18%}.brands-bar .brands-container{background-color:#737373;margin:0
auto;overflow:hidden;padding:0;width:980px}.brands-bar .brands-container .left-links{float:left;height:30px}.brands-bar .brands-container .right-links{float:right;height:30px}.brands-bar .brands-container .right-links
.date{color:#ffefba}.brands-bar
ul{font-family:Arial,Helvetica,"Lucida Grande","MS Sans Serif",sans-serif;font-size:11px;list-style-type:none;margin:0;overflow:hidden;padding:5px
0;text-transform:uppercase}.brands-bar ul li
a{color:#c5c5c5;font-size:11px;text-transform:uppercase;font-weight:600;transition:0.2s ease all}.brands-bar li a:focus{text-decoration:none}.brands-bar li a:hover{color:#333;text-decoration:none}.brands-bar
li{float:left;border:none;padding:0
1%;margin:0;line-height:30px}.brands-bar .brands-container ul li
a{color:#fff;text-decoration:none}.brands-bar .brands-container ul li a
span{background-color:#d80d2b;padding:4px}.brands-bar .brands-container ul
.first{padding-left:0}.brands-bar .brands-container ul
.last{border:0
none;padding-right:0}.brands-bar .brands-container ul
.date{background:none repeat scroll 0 0 rgba(0,0,0,0)}.ui-widget-overlay{display:none}#commentform
textarea{width:100% !important}#navigation{background:none;border-top:none;margin:0px}#navigation ul#menu-main-menu
li{border-right:none}#navigation .current
a{background:none !important}ul#menu-top-menu{margin-right:15px}ul#menu-top-menu
li.date{color:#fff}ul#menu-top-menu
li.beta{color:#fff !important}ul#menu-top-menu li
a{color:#FC0}.controls{top:5px}#socialshare a,#socialshare a:hover, #socialshare a:visited{color:#fff;text-decoration:none}a.ss-button
span.ma{padding:5px
15px 11px 11px;background:url('../img/socialshare.png') no-repeat -364px 3px}a.ss-button
span.fb{padding:2px
20px 0px 10px;margin-left:10px;background:url('../img/socialshare.png') no-repeat -35px 3px}a.ss-button
span.tw{padding:2px
20px 0px 10px;margin-left:10px;background:url('../img/socialshare.png') no-repeat -273px 3px}a.share
span.cm{padding:2px
20px 0px 10px;margin-left:10px;background:url('../img/socialshare.png') no-repeat -335px 3px}#socialshare .more.share a.addthis_button:before{background:url('../img/socialshare.png') no-repeat -425px 3px;content:'';position:absolute;width:30px;height:30px;right:0px;top:0}#socialshare .ss-button.facebook{background-color:#476e9e;color:#fff;transition:0.3s ease all}#socialshare .share:hover{opacity:0.8}#socialshare .ss-button.twitter{background-color:#2daae1;transition:0.3s ease all}#socialshare .ss-button.twitter:hover{background-color:#26b8f0}#socialshare
.comment.share{background-color:#646464;transition:0.3s ease all}#socialshare
.whatsapp.share{background-color:#25d366;transition:0.3s ease all}#socialshare .comment.share:hover{background-color:#525252}#socialshare .more.share
a.addthis_button{background:none;position:relative;font-size:25px;padding-right:40px}#socialshare
.more.share{background:#ff6550;transition:0.3s ease all}#socialshare .more.share:hover{background:#ff635e}#socialshare{width:100%;float:left}#socialshare
.share{display:block;padding:5px
0px;margin:0
0 5px 0;font-size:25px}.sticky{display:none}.sticky
#socialshare{width:100%;margin:12px
0 0}.sticky #socialshare
a{width:45%;float:right;margin-right:10px}.sticky
h1.title{float:right;width:72%}.sticky.sticky-title{position:fixed;top: -10px;left:0;z-index:999;background:#fff;padding:0.3% 1% 0;width:100%;-webkit-box-shadow:0px 0px 8px 2px rgba(0, 0, 0, 0.4);-moz-box-shadow:0px 0px 8px 2px rgba(0, 0, 0, 0.4);box-shadow:0px 0px 8px 2px rgba(0,0,0,0.4)}.social-specs{float:right !important}.page-videos .social-specs{display:none}#socialshare
.share.specs{margin:0
0 5px 10px;width:20%;float:right;min-height:45px}.story-cont{border-top:3px solid #949c27 !important;padding:10px
0;width:100% !important;position:relative}.story-content.last{float:right}.story-cont
.story_side_ad{float:right;margin-top: -25px;padding:0
3%}.full-cont{text-align:center;width:100%;display:block;background:rgba(255,255,255,0.8);padding-top:50px;position:absolute;bottom:38%;min-height:112px;display:none}.full-link{background:#fff;border:1px
solid #ccc;padding:5px
10px}.connect-btn-facebook,.connect-btn-twitter{border-radius:0;box-shadow:none;box-sizing:border-box;color:#fff;display:block;font-size:25px;font-weight:400;padding:10px
20px;text-decoration:none;width:48%;float:left;margin-left:9px}.connect-btn-facebook:hover,.connect-btn-facebook:visited,.connect-btn-twitter:hover,.connect-btn-twitter:visited{color:#fff !important;text-decoration:none !important;outline:none}.connect-btn-facebook{background:none repeat scroll 0 0 #3b5998}.connect-btn-facebook:hover{background:none repeat scroll 0 0 #344e86;color:#fff}.connect-btn-twitter{background:none repeat scroll 0 0 #00aced}.connect-btn-twitter:hover{background:none repeat scroll 0 0 #0099d3;color:#fff}.connect-btn-facebook
span.fb{background:url("../img/fbtw_sprite.png") no-repeat scroll -74px -6px rgba(0, 0, 0, 0);padding:8px
20px 8px 11px;margin-left:20px}.connect-btn-twitter
span.tw{background:url("../img/fbtw_sprite.png") no-repeat scroll -12px -6px rgba(0, 0, 0, 0);padding:8px
20px 8px 11px;margin-left:20px}span.eng-link{float:left;direction:ltr}span.eng-link a:focus,span.eng-link a:visted,span.eng-link:hover a,span.eng-link:active{outline:none !important;color:#900;text-decoration:none !important}.copyright{z-index:9999;position:relative}.copyright
a{color:#222}.home-ad{float:right;margin-bottom:10px}.single_bottom_ad{padding:0
25% 2%;float:left;width:100%}.primary.span-16.last,.main-content{border-left:1px solid #3a3636;padding-left:10px !important}.contact-title{text-align:right;font-size:1.7em;padding:4px;height:39px;background:none repeat scroll 0 0 #F3F0E7!important;direction:rtl;width:97%;float:right}.about-title{text-align:left;font-size:1.2em;padding:4px;background:none repeat scroll 0 0 #F3F0E7!important;width:98%;margin-left:10px;float:left}ul.facts{float:left;width:100%;direction:ltr}ul.facts
li{text-align:left;font-size:14px}.videowrapper{position:relative;padding-bottom:56.25%;padding-top:30px;height:0;overflow:hidden}.videowrapper iframe,
.videowrapper object,
.videowrapper
embed{position:absolute;top:0;left:0;width:100%;height:100%}.border-right{border-left:1px solid #666;padding-left:5px !important}.main{float:right}.story
h3{margin-left:10px !important}#footer{position:relative;z-index:99}#news{padding-right:10px }a.slider-left{width:20px;height:20px;display:block;top:-20px;left:-10px;position:absolute}a.slider-right{width:20px;height:20px;display:block;top:-20px;left:15px;position:absolute}.ajust-title{margin-left:5px !important;border-top:3px solid #ccc}.primary .span-8{width:410px}.carousel-parent1{position:relative}img.top-area-ad{display:block;margin:10px
auto 5px}.ad-left{width:220px;float:left;margin:10px
0}.ad-right{width:220px;float:right;margin:10px
0}div.topArea{width:100%;min-height:140px;position:relative;background:#b92533;margin-bottom:3px}div.topArea
div.top{background:url(../img/top-topArea.png) repeat;padding:4px
4px 8px 4px;width:100%;min-height:30px}div.topArea div.top div.social-links{float:left;padding-top:2px}div.topArea div.top div.social-links
ul{list-style:none;margin:0;padding:0}div.topArea div.top div.social-links
li{float:left;width:25px;margin:0;padding:0}div.topArea div.top div.social-links li
a{display:block}div.topArea div.top div.social-links li:hover{opacity:.5;-webkit-transition:all 0.5s ease-out;-moz-transition:all 0.5s ease-out;-ms-transition:all 0.5s ease-out;-o-transition:all 0.5s ease-out;transition:all 0.5s ease-out}div.logo{width:149px;height:64px;margin:0
auto;position:relative;margin-top:5px}.ad-left{padding-left:5px;float:left}.ad-right{padding-right:5px}#tickerbox{float:right}.live-express-logo{float:left}#footer{background:#b92533;color:#fff;padding:10px}#footer
a{color:#fff}#footer a:hover{color:#FC3}ul#menu-footer-menu{padding-bottom:7px}.primary
.radWrapper{float:right;margin-bottom:15px}#rcjsload_48744e{clear:both}.copyright .span-8{width:445px}div.topArea .brands-bar{padding:0
7.5%;min-height:40px;background:#fff}ul#menu-brand-bar{margin:0;overflow:hidden}ul#menu-brand-bar
li{float:left;border:none;padding:0
28px;display:inline}ul#menu-brand-bar li
a{color:#c5c5c5;font-size:11px;font-family:arial;text-transform:uppercase;font-weight:600;transition:0.2s ease all}.ads-sticky{position:fixed;width:1420px;top:30px;left:0;right:0;margin:auto}.ads-sticky>div{width:160px;height:100px}.ad-sticky-left{float:left}.ad-sticky-right{float:right}.cat-arch{text-align:center;display:block;width:200px;margin:0px
23% 40px;padding:10px
0;float:left;border:1px
solid #ccc;box-shadow:5px 8px 8px 0px #ccc}.cat-arch:focus{text-decoration:none}.sidebar{overflow:hidden}.bawmrp{padding:20px
0}.bawmrp
h3{margin-bottom:5px}.bawmrp
a{color:#000}#div-gpt-lb-1{display:table}.fb_iframe_widget_fluid_desktop
iframe{min-width:100% !important;position:relative}.span-16.first.mobile-social-share{width:100%;float:right !important;border-bottom:3px solid #949c27 !important}@media (min-width:992px){.content_gap_bar{width:1165px;margin:0px
auto;background:white;padding:6px
0px}}#navigation>.span-24,div.span-24{margin:0;overflow-x:hidden}ul > li
ul{display:none}ul.sub-menu li
a{color:#fff}#socialshare
.share{display:block;padding:5px
0px;margin:0
0 5px 0;font-size:25px;width:25%;float:right}.single .primary .story .social
a{margin:0px;padding:0
28px 0 0}.span-16.first.mobile-social-share+.span-16,.span-16.first.mobile-social-share+.span-16+.span-16{width:100%}.story-cont
p.caption{margin-bottom:10px !important}@media only screen and (max-width:767px){ul > li
ul{display:block}#sub-menu{display:none}.sub-menu{color:#fff !important}#navigation ul#menu-main-menu li ul li
a{color:#fff !important;padding-right:25px}#div-gpt-mrec-1{text-align:center;margin:0
auto}#div-gpt-mrec-2{text-align:center;margin:0
auto}}@media only screen and (max-width: 640px){ul.sub-menu.show-sub-menu{display:block !important}#navigation ul#menu-main-menu ul.sub-menu li
a{color:#fff !important;font-size:18px}.nav-icon{top:37px}.closed
.vertical{transition:all 0.5s ease-in-out;transform:rotate(-90deg)}.closed
.horizontal{transition:all 0.5s ease-in-out;transform:rotate(-90deg);opacity:1}.opened{opacity:1}.opened
.vertical{transition:all 0.5s ease-in-out;transform:rotate(90deg)}.opened
.horizontal{transition:all 0.5s ease-in-out;transform:rotate(90deg);opacity:0}.circle-plus{height:4em;*/
width: 4em;font-size:1em;opacity: .7;display:inline-block;float:left;right:4px;top:0px;margin-top: -34px;margin-left:10px}.circle-plus
.circle{position:relative;width:1.60em;height:1.60em;border-radius:100%}.horizontal{position:absolute;background-color:#DFDAD7;background-color:#fff;width:16px;height:4px;left:50%;margin-left: -8.0px;top:50%;margin-top: -3.2px}.circle-plus .circle
.vertical{position:absolute;background-color:#fff;width:4px;height:16px;left:50%;margin-left: -2.1px;top:50%;margin-top: -9px}#navigation ul#menu-main-menu li.menu-item-has-children>a{}.sub-menu{display:none}.sub-menu>li>a{color:#fff !important}}// for iphone 5
@media only screen and (min-device-width: 320px) and (max-device-width: 568px)
and (-webkit-device-pixel-ratio: 2) and (device-aspect-ratio: 40/71){.single_bottom_ad{padding:7% 0 !important;width:100%;margin-left:15% !important;overflow:inherit !important}.container.home.blog{margin:0px
!important;padding:0px
!important}html,body{overflow-x:hidden}#content{padding:15px}#div-gpt-mrec-1{display:table-cell}#div-gpt-mrec-2{display:table-cell}.cat-arch{margin:0% 20% 20% 10%}}// for iphone 4
@media only screen and (min-device-width: 320px) and (max-device-width: 480px) and (-webkit-device-pixel-ratio: 2) and (device-aspect-ratio: 2/3){.single_bottom_ad{padding:7% 0 !important;width:100%;margin-left:15% !important;overflow:inherit !important}.container.home.blog{margin:0px
!important;padding:0px
!important}#content{padding:15px}#div-gpt-mrec-1{display:table-cell}#div-gpt-mrec-2{display:table-cell}.cat-arch{margin:0% 20% 20% 10%}}@media only screen and (min-device-width: 320px) and (max-device-width: 1192px){#tickerbox{width:100% !important}}@media only screen and (max-width:766px){.radWrapper{float:none !important}#div-gpt-small-lb1{text-align:center}#div-gpt-small-lb2{text-align:center}#div-gpt-small-lb3{text-align:center}}.primary .religion:hover h3.group-title
a{color:#8E44AD}.primary
.religion{border-top:3px solid #8E44AD}.primary .magazine:hover h3.group-title
a{color:#C0392B}.primary
.magazine{border-top:3px solid #C0392B}.primary .food:hover h3.group-title
a{color:#F1C40F}.primary
.food{border-top:3px solid #F1C40F}.primary .psl:hover h3.group-title
a{color:#283747}.primary
.psl{border-top:3px solid #283747}.asiacup-stories .story
h1.title{font-size:30px;margin-top:0}.sliderasiacup
a{color:#fff !important}.videos.clearfix.group.carousel-parent.asiacup-slider{background:rgba(90, 88, 87, 0.99)}.asiacup-head
img{width:100%}.asiacup-stories .ec2018-bb + .ec2018-bb .asiacup-top-head{float:left;width:57%}.asiacup-stories .ec2018-bb + .ec2018-bb .last.mobile-view-image{width:40%}.asiacup-stories .more.share
img{display:none}.asiacup-stories .ec2018-bb + .ec2018-bb .excerpt-box{float:left;width:58%}.asiacup-stories #socialshare a, .asiacup-stories #socialshare
.more.share{width:32px;float:left;height:32px}.asiacup-stories li.ac-left-list:hover{background:#f1f1f1}.asiacup-stories
.meta{width:30%;float:right}.asiacup-stories #socialshare a
span{padding:4px
17px 0px 10px}.asiacup-stories
.more.share{padding-top:2px !important}.asiacup-stories #socialshare .more.share a.addthis_button:before{background-position:  -425px 0px;content:'';position:absolute;width:34px;height:30px;right:0px;top:0}.asiacup-stories
.social.clearfix.catbdr{width:100px;float:left}.asiacup-stories
#socialshare{width:100px;float:left}.asiacup-stories span.as-team-f{color:#1d1e1f;font-size:initial;overflow:hidden;padding-right:10px;text-overflow:ellipsis;white-space:nowrap}.asiacup-stories li.ac-left-list .ac-dtime{color:#555;font-size:16px;line-height:1.4}.asiacup-stories .flag-match-team
img{float:right;width:20px}.asiacup-stories li.ac-left-list .ac-vanue{color:#656667;font-size:16px;line-height:1.4}.asiacup-stories #socialshare .more.share
a{height:30px}.asiacup-stories .flag-match-team+.flag-match-team{padding-top:2px}.asiacup-stories .flag-match-team{line-height:20.4px;padding-top:12px}.asiacup-stories li.ac-left-list{border-top:#dcdddf 1px solid;vertical-align:baseline;list-style:none;padding:15px}.asiacup-stories h1.ac-left-title
p{color:#6c6d6f;font-size:30px;line-height:30px}h1.ac-left-title{margin-bottom:10px}.asiacup-stories h1.ac-left-title
span{color:#a5a6a7;display:block;font-size:16px;font-style:italic;line-height:1.6;text-align:right}.asiacup-stories .primary.span-15.last.asiacup-stories{width:724px;margin-left:15px;margin-right:15px}.asiacup-stories .excerpt-box
p{line-height:150%}.asiacup-stories
span.timestamp{padding-right:10px;color:#900 !important}.asiacup-stories .ec2018-bb + .ec2018-bb .story
h1.title{font-size:22px;line-height:160%;margin-bottom:10px;margin-top:10px;font-weight:normal}.asiacup-stories .ec2018-bb{border-bottom:1px solid #ebe7dc;padding-bottom:15px;border-radius:10px;box-shadow:0 1px 4px rgba(0,0,0,0.16);margin:0
16px;position:relative;padding:15px
10px 0px 10px;margin-bottom:15px;margin-top:5px;background:#f1f1f1}.asiacup-stories .primary.span-16.last, .asiacup-stories .main-content{border-left:1px solid #3a3636;padding-left:10px !important;border-right:1px solid #3a3636;margin-left:10px;padding-right:10px;margin-right:10px;float:left !important}.asiacup-stories img.img-top-b-2018{width:100%}.asiacup-stories a.cat-arch{margin:0
auto;text-align:center;float:initial}.primary.span-15.last.asiacup-stories{width:690px}.asiacup-stories .excerpt-box{display: -webkit-inline-box;width:100%}.sidebar.asiacup-stories .span-3.secondary.sidebar{width:100%;text-align:center;margin-top:15px}.sidebar.asiacup-stories div#div-gpt-ad-1530620764606-0{margin:0
auto}@media (max-width: 1188px) and (min-width: 1021px){.asiacup-stories .span-16.last{width:620px}}@media only screen and (max-width: 1020px){.sidebar.asiacup-stories{display:none}.asiacup-stories .ec2018-bb + .ec2018-bb .asiacup-top-head{float:left;width:100%}.asiacup-stories .ec2018-bb + .ec2018-bb .last.mobile-view-image{width:100%}.asiacup-stories .ec2018-bb + .ec2018-bb .excerpt-box{float:left;width:100%}.primary.span-15.last.asiacup-stories{width:100%}.asiacup-stories .span-3.secondary.sidebar.left-fixure{display:block;max-height:200px;overflow: -webkit-paged-y}.asiacup-stories
.meta{width:40%;float:right}.asiacup-stories .mobile-social-share{display:flow-root !important;width:100% !important}.asiacup-stories .primary.span-15.last.asiacup-stories{width:100%;margin-left:0px;margin-right:0px}.asiacup-stories .span-3.secondary.sidebar{display:none}.asiacup-stories .primary.span-16.last, .asiacup-stories .main-content{border:0px;margin-left:0}.asiacup-stories .top-elec-2018{height:61px}}.container-fluid.video-content.span-24.asiacupvideo{margin-top:20px}.fixture-team-inner{border-bottom:1px solid #dfdfdf;padding:35px
40px}.fixture-team-inner
.status{font-weight:400;margin-top:10px}.fixture-team-inner
h4{margin-top:40px;font-size:18px}.fixture-team-inner .pull-left{margin-right:10px}.fixture-team-inner .pull-right{margin-left:10px}.fixture-team-inner:hover{background:#f5f5f5}.igc-textual-entry.psl-team-osd{margin-top:50px}.igc-textual-entry.psl-team-osd
ul{padding:40px;background-color:#1a326ddb;border:6px
solid #232e4c;margin:0;margin-bottom:50px}

.carousel{overflow:hidden;position:relative;width:100%}.carousel-horizontal{overflow-x:auto}.carousel-vertical{overflow-y:auto}.carousel
.items{width:2000%}.carousel .items
.item{float:left;cursor:pointer}.carousel .items
.last{margin-right:auto}.carousel a.prev,
.carousel
a.next{background-repeat:no-repeat;background-attachment:scroll;background-color:transparent;background-position:0 top;height:100%;overflow:hidden;width:24px;cursor:pointer;float:left;position:absolute;top:0;z-index:1}.carousel
a.prev{background-image:url("../img/gallery-carousel-prev.png");left:0}.carousel
a.next{background-image:url("../img/gallery-carousel-next.png");right:0px}.carousel .items .current,
.carousel img.disabled, .carousel
a.disabled{cursor:default}.carousel-pagination{text-align:right;height:20px;padding-bottom:5px}.carousel-pagination
a{-moz-user-select:none;-webkit-user-select:none;user-select:none;border:0px
none;display:inline-block;width:10px;height:10px;margin:5px;background:url('../img/carousel-page.gif') no-repeat;outline:none}.carousel-pagination a:focus,
.carousel-pagination a:hover,
.carousel-pagination a:active{outline:none}.carousel-pagination a.carousel-current-page,
.carousel-pagination a:hover,
.carousel-pagination a:focus{background:url('../img/carousel-current-page.gif') no-repeat}

@media (max-width:1188px) and (min-width:1021px){#socialshare
.share.specs{width:25%}#content{width:100%}#content{width:100%}.container{margin:0
auto;width:1004px;position:relative}.brands-bar{padding:0
12%}div#navigation ul.nav li
a{padding:0
12px !important}#tickerbox{width:80%}#footer{width:100%}#footer .footer-center{width:50%}.copyright{width:100% !important}.copyright>div{width:50%}.span-16.last{width:635px}.span-7.last{width:40%}.cstoreyitem{width:140px}.story-content.last{width:72%}.span-6{width:320px}.primary .span-8{width:350px}#rcjsload_48744e{clear:both}}@media (max-width:1020px) and (min-width:768px){#socialshare
.share.specs{width:22%}.story-content.last{width:75%}#content{background:none repeat scroll 0 0 rgba(0,0,0,0)}.container{margin:0
auto;width:750px;position:relative}.primary.span-16.last,.main-content{border:none;padding-left:0px}.span-7.last{width:48%}.sidebar{width:100%}.brands-bar{display:none}#footer .footer-left, #footer .footer-right,.copyright-left{display:none}.copyright,.copyright-right{width:100% !important}.copyright
p{text-align:center}#top-bar{width:715px !important;margin:0
auto;height:35px}#top-bar .span-12{width:350px}#header{width:700px}div#navigation{width:715px !important;margin:0
auto}#content .span-16{width:100%}#content{width:715px !important;margin:0
auto}.border-right{border-left:none !important;padding-left:0px}#content
.main{width:715px;margin:0
auto}#footer{width:715px !important;margin:0
auto;float:left}.cstoreyitem{float:right;margin-left:15px;min-height:190px;text-align:right;width:160px}.cstoreyitem
img{width:100%;height:100%}.score-wc{width:300px;height:130px;position:relative}.spacer-ipad{height:130px;width:100px}#tickerbox{width:550px;float:right}.primary .span-8{width:350px}#rcjsload_48744e{clear:both}}@media (max-width: 767px){.sticky
h1.title{width:100%}section.featured-excerpt-title{margin-top:0}div.logo{width:94px;height:auto;position:absolute;left:15px;z-index:9999;top:40px}section.featured-excerpt-title
h1.title{font-size:2.0em}.full-cont{display:block;bottom:30%}.dpnone{display:none}#socialshare
.share.specs{margin:0
0 5px 0;width:104%;float:right;min-height:45px}.primary.span-16.last,.main-content{border:none;padding-left:0!important}.story .span-16.story-cont{float:left !important}#content{background:none repeat scroll 0 0 rgba(0,0,0,0)}.container{width:auto;padding:0
0.2em}.span-24,div.span-24{width:100% !important;float:none}.span-12{float:none;margin:0;width:100% !important;padding:0
!important}.span-16{float:none !important;width:100% !important}.span-8{float:none !important;width:auto !important;margin:0
auto !important;text-align:center !important}.border-right{border-left:none;padding-left:none}.span-12{float:none !important;width:auto}.live-express-logo{margin:0
auto;width:250px;margin-bottom:20px;float:none}#header
.logo{margin:0
auto;padding-bottom:7px;padding-top:15px;text-align:center;width:200px}#footer .span-17{width:100%}#footer{float:left}#footer .footer-left, #footer .footer-right, #tickerbox, #tickerbox .controls, .copyright-left, .footer-center .footer-logo,.footer-center>p,.live-express-logo,img.top-area-ad{display:none}#footer .footer-center{float:right;padding:0;width:100%}.copyright-right{width:100%}#footer-notice{text-align:center}#div-gpt-ad-1415864646404-0, #div-gpt-ad-1415864646404-0
iframe{width:100% !important}.widget_network_services_links_widget
ul.last{float:none}#top-bar{width:100%}.content{width:100%}.mobile-right{width:120px;float:right !important;margin-left:20px}.mobile-right
img{width:120px;height:100px}.mobile-left{width:70%;float:right !important}.cstoreyitem{margin-bottom:25px;border-bottom:none;padding-bottom:15px;margin-left:10px;width:23%;min-height:50px}.cstoreyitem
img{float:right;margin-bottom:10px}.cstoreyitem:last-child{border-bottom:none}.columnarstorey .cstoreyitem
a{min-height:0px}h3.group-title{margin-bottom:15px !important}.clearfix{width:auto !important}a.slider-left{width:20px;height:20px;display:block;top:-33px;left:-17px;position:absolute}a.slider-right{width:20px;height:20px;display:block;top:-10px;left:-17px;position:absolute}.ajust-title{margin-left:0px !important;width:100%}.ad-left{width:100%;float:none;margin:0
auto 10px}.ad-right{width:100%;float:none;margin:0
auto 10px}.ad-left img, .ad-right
img{margin:0
auto}.mobile-story-content{width:100% !important}.mobile-story-content .mobile-story-image-container{width:auto !important;height:auto !important}.mobile-story-content .mobile-story-img{width:100% !important;max-width:100%;height:auto}#tickerbox{width:100% !important;float:right}#tickerbox
div.label{display:none !important}.live-express-logo{display:none}#tickerbox
.controls{display:none}div.topArea
div.top{margin-bottom:10px}div.topArea{width:100%;min-height:100px;height:100px}img.top-area-ad{display:none}#tickerbox{display:none}.connect-btn-facebook,.connect-btn-twitter{float:left;width:100%;margin-bottom:10px}.single_bottom_ad{padding:2% 25%}.page-videos
.single_bottom_ad{display:none}.bx-has-pager{display:none}.brands-bar{display:none}span.eng-link{padding:0
17%}.span-7.last{width:41%}.sidebar{width:100%}#footer .footer-social{min-height:auto}.connect-button{width:auto;float:right}#map
img{width:100%}}@media (max-width: 767px) and (orientation: landscape){span.eng-link{padding:0
!important}.primary .span-8{width:55% !important;float:right !important}#rcjsload_48744e{clear:both}.connect-button{width:100%;float:right}.connect-btn-facebook,.connect-btn-twitter{float:right;width:48%;margin-bottom:10px}}@media (max-width: 600px) and (orientation: landscape){#socialshare
.share.specs{margin:0
0 5px 0;width:104%;float:right;min-height:45px}.cstoreyitem{width:23%}.rc-g-dl .rc-g-dl-5>div{width:25% !important}#rcjsload_48744e{clear:both}.connect-button{width:100%;float:right}.connect-btn-facebook,.connect-btn-twitter{float:right !important;width:48% !important;margin-bottom:10px !important;margin-left:10px !important}}@media (max-width: 590px){.full-cont{bottom:80%}.span-7.last,.story-content.last.full{max-height:690px;overflow:hidden}.span-7.last,.story-content.last{width:auto}#content{background:none repeat scroll 0 0 rgba(0,0,0,0)}.mobile-view-image{width:100%;float:none;margin:0
auto;display:block}.mobile-view-image  .full-width-image{width:100% !important;max-width:100%;display:block !important;height:auto}.mobile-view-image  .full-width-link{width:100% !important;max-width:100%;display:block !important;height:auto}#footer #menu-footer-menu
li{float:right;margin-left:17px;padding:0;text-align:right;width:auto}#content .main  .span-8, #content .main  .span-6{float:right;width:100%}#content .pakistan  .span-8, #content .pakistan  .span-6{float:right;width:100%}#content .world  .span-8, #content .world  .span-6{float:right;width:100%}#content .sports  .span-8, #content .sports  .span-6{float:right;width:100%}#content .saqafat .span-8, #content .saqafat .span-6{float:right;width:100%}#content .weird-news .span-8, #content .weird-news .span-6{float:right;width:100%}#content .science .span-8, #content .science .span-6{float:right;width:100%}#content .business .span-8, #content .business .span-6{float:right;width:100%}#content .weird-news .span-8, #content .weird-news .span-6{float:right;width:100%;display:block}.container  .span-8 , .container  .span-6{float:none;width:100%}#tickertext{width:100%;height:auto;overflow:visible}#tickertext
ul{margin:0;min-height:50px}#tickertext
li{background:none repeat scroll 0 0 #f3f3f3;border:1px
solid #999;padding:0
10px}#tickerbox .text
a{font-size:13px;word-wrap:break-word;letter-spacing:0}#tickertext .carousel-inner{width:90%;line-height:15px}#tickerbox{background:none repeat scroll 0 0 rgba(0, 0, 0, 0) !important;;border:medium none !important;overflow:visible}#tickerbox
.row{margin-left:0px;margin-right:0px}#tickerbox .row .col-xs-2{padding:0}#tickerbox
.label{float:right}#commentform
textarea{height:200px !important}.story
img{width:100%;height:auto}.connect-btn-facebook,.connect-btn-twitter{float:left;width:100%;margin-bottom:10px;margin-left:0}.single_bottom_ad{padding:2% 25%}.brands-bar{display:none}span.eng-link{padding:2% 20%}.cstoreyitem{width:auto;margin-left:0px}.cstoreyitem
img{float:right;margin-bottom:10px;margin-left:15px;width:auto}.span-7.last,.sidebar{width:auto;float:right}.story-cont{float:left !important}.rc-g-dl .rc-g-dl-5>div{width:50% !important}}@media (max-width: 500px){#socialshare .share a, #socialshare
a{color:transparent !important}#socialshare
.share{height:40px}.sticky #socialshare
a{width:12%;float:left;margin-right:10px;padding-right:6px}.full-cont{bottom:83%}.single_bottom_ad{padding:2% 5%}#rcjsload_48744e{clear:both}span.eng-link{padding:0%}}@media (max-width: 400px){.full-cont{bottom:82%}#content{background:none repeat scroll 0 0 rgba(0, 0, 0, 0)}.mobile-top-story-image
img{width:100% !important;max-width:100%;height:auto}#footer #menu-footer-menu
li{float:right;margin-left:16px;padding:0;text-align:right;width:auto}#footer-notice{font-size:15px}#footer #menu-footer-menu li
a{font-size:15px}.main{width:auto !important;float:none !important}ul#menu-top-menu
.date{font-size:16px}#footer .footer-social{width:60%;margin:10px
25%;min-height:auto}ul#menu-footer-menu{float:left;width:90%;padding:0
5%}.single_bottom_ad{padding:2% 0;overflow:hidden;width:100%}span.eng-link{padding:2% 25%}}@media (max-width:320px){.full-cont{bottom:81%}span.eng-link{padding:2% 22%}#footer .footer-social{width:60%;margin:10px
20%;min-height:auto}ul#menu-footer-menu{float:left;width:90%;padding:0
5%}.cstoreyitem
a{width:50%;float:right}.cstoreyitem
img{width:90%;height:auto}}@media (max-width:1170px){.story-content.last{width:100%}.sticky
h1.title{float:right;width:100% !important}}.post-meta li:first-child{padding-left:0}@media (min-width:768px){.fix-l-r{padding-left:20px}p{font-size:22px}.single .primary .story .story-content p, .story .excerpt, .post .excerpt, .columnarstorey .cstoreyitem
a{line-height:31px !important}.single .primary .story .story-content
p{font-size:22px}}@media (max-width:1171px){.span-2.first.mobile-social-share{display:none}}@media (max-width:767px){.fix-l-r{padding-left:10px;padding-right:10px !important}}#socialshare.left-socialiocns
.share{width:100%}span.instap{padding:2px
20px 0px 10px;margin-left:10px;background:url(../img/expressinstagram-w.png) no-repeat 0px}#socialshare
.instaapp.share{background-color:#cd287f;transition:0.3s ease all}#socialshare
.whatsapp.share{background-color:#25d366;transition:0.3s ease all}p.jwp{position:relative;padding-bottom:53.25%;padding-top:25px;height:0}.jwp
iframe{position:absolute;top:0;left:0;width:100%;height:100%}.sticky
h2.title{font-size:26px;line-height:160%;margin-bottom:10px;margin-top:10px;font-weight:bold;float:right;width:72%}#socialshare
a.mail_to.share{background-color:#383737;transition:0.3s ease all}

div#navigation{width:100%;margin:0
auto}.nav-sticky{width:100% !important;margin:0
auto !important;left:0;position:fixed;background:#b92533 !important;top:0;z-index:999;padding:0
8% !important;-webkit-box-shadow:0px 0px 8px 2px rgba(0, 0, 0, 0.4);-moz-box-shadow:0px 0px 8px 2px rgba(0, 0, 0, 0.4);box-shadow:0px 0px 8px 2px rgba(0, 0, 0, 0.4)}div#navigation
.navbar{width:auto;margin:0
auto;padding:0px
0 0 0;background:none;border:0;min-height:40px}div#navigation .navbar-collapse{padding:0px}div#navigation  .navbar-brand{display:none}div#navigation  .navbar
.nav{margin-top:13px}div#navigation  ul.nav
li{background:url(../img/sepearator.png) no-repeat 0 80%}div#navigation  ul.nav li:last-child{background:none}div#navigation  ul.nav li
a{color:#fff !important;display:block;margin:0;font-size:22px;margin:0;padding:0
10px}div#navigation  ul.nav li a:hover{color:#000 !important;background:none !important}div#navigation .navbar-default .navbar-nav > .active > a, div#navigation .navbar-default .navbar-nav > .active > a:hover, div#navigation  .navbar-default .navbar-nav>.active>a:focus{color:#fff;text-shadow:none;background:#fff !important}div#navigation div.left-nav  .navbar-brand{display:none}@media (max-width:999px) and (min-width:801px){div#navigation  ul.nav li
a{font-size:20px;padding:0
10px}}@media (max-width:800px) and (min-width:768px){div#navigation  ul.nav li
a{font-size:20px;padding:0
10px}}@media (max-width: 767px){div#navigation{padding-bottom:10px;background:none}div#navigation{position:relative !important;margin-top:10px}div#navigation
.navbar{margin-left:0px;margin-right:0px;width:auto;padding:0px
0 0 0;background:#027102;border:0;position:relative}div#navigation
li{margin:0
0 5px 0 !important;border-right:medium none !important}div#navigation{border-top:none !important;margin:0}div#navigation .navbar-brand{display:none;color:#fff !important;padding-top:10px !important}div#navigation
.navbar{z-index:999;width:auto;position:relative;float:none;background:none;margin-left:10px;margin-right:10px}div#navigation .navbar-brand{color:#333;display:block;font-weight:600;padding-top:15px !important;padding-left:15px}div#navigation
ul.nav{padding-top:10px}div#navigation ul.nav
li{float:none}div#navigation ul.nav li
a{float:none;display:block;color:#fff;display:block;margin:0;padding:6px
8px 6px;font-size:20px;margin:0}div#navigation ul.nav li a:hover{font-size:20px;color:#FC0 !important;text-decoration:none;opacity:1;padding:6px
8px 6px;background:#fff}div#navigation .navbar-default .navbar-nav > .active > a, div#navigation .navbar-default .navbar-nav > .active > a:hover, div#navigation .navbar-default .navbar-nav>.active>a:focus{color:#FC0;font-weight:bold;text-decoration:none;background:#fff;text-shadow:0;box-shadow:0;padding:0px;font-weight:normal;padding:6px
8px 6px}div#navigation div.left-nav  .navbar-brand{display:block;color:#fff;text-align:right}div#navigation div.left-nav  .navbar-brand{width:100px;float:right}div#navigation .navbar-collapse{padding-bottom:15px}div#navigation .pull-right{float:none !important}a.navbar-brand{width:70px;height:20px;float:right;text-align:right}div#navigation 	.navbar-toggle{background:none;border:0;color:#fff}div#navigation .icon-bar{color:#fff !important;background:#fff;width:15px !important}div#navigation .navbar-toggle{width:120px;position:relative;right:-20px;top:-10px}div#navigation .navbar-toggle
img{border:1px
solid #d65763;padding:3px
6px}div#navigation .navbar-collapse{background:#333;position:relative;top:-15px}}.banner
iframe{width:100%}@media (max-width: 400px){div#navigation .navbar-brand{display:none }}

.bx-wrapper{direction:ltr;position:relative;margin:20px
auto 0px;padding:0;*zoom:1}.carousel-parent1 .bx-wrapper{position:relative;margin:0px
auto 0px;padding:0;*zoom:1}.bx-wrapper
img{max-width:100%;display:block}.bx-wrapper .bx-viewport{left: -5px}.bx-wrapper
img{width:100%}.bx-wrapper .bx-pager,
.bx-wrapper .bx-controls-auto{position:absolute;top: -61px;width:100%;text-align:left !important;width:100%;left:0}.carousel-parent1 .bx-wrapper .bx-pager,
.carousel-parent1 .bx-wrapper .bx-controls-auto{position:absolute;top: -65px;left:0px;width:100%;text-align:left}.bx-wrapper .bx-loading{min-height:50px;background:url(images/bx_loader.gif) center center no-repeat #fff;height:100%;width:100%;position:absolute;top:0;left:0;z-index:2000}.bx-wrapper .bx-pager{text-align:center;font-size: .85em;font-family:Arial;font-weight:bold;color:#666;padding-top:20px}.bx-wrapper .bx-pager .bx-pager-item,
.bx-wrapper .bx-controls-auto .bx-controls-auto-item{display:inline-block;*zoom:1;*display:inline}.bx-wrapper .bx-pager.bx-default-pager
a{background:#fff;text-indent: -9999px;display:block;width:12px;height:12px;margin:0
5px;outline:0;-moz-border-radius:5px;-webkit-border-radius:5px;border-radius:5px;border:1px
solid #ccc}.bx-wrapper .bx-pager.bx-default-pager a:hover,
.bx-wrapper .bx-pager.bx-default-pager
a.active{background:#ff9b1c}.bx-wrapper .bx-prev{left:10px;background:url(images/controls.png) no-repeat 0 -32px}.bx-wrapper .bx-next{right:10px;background:url(images/controls.png) no-repeat -43px -32px}.bx-wrapper .bx-prev:hover{background-position:0 0}.bx-wrapper .bx-next:hover{background-position: -43px 0}.bx-wrapper .bx-controls-direction
a{position:absolute;top:50%;margin-top: -16px;outline:0;width:32px;height:32px;text-indent: -9999px;z-index:9999}.bx-wrapper .bx-controls-direction
a.disabled{display:none}.bx-wrapper .bx-controls-auto{text-align:center}.bx-wrapper .bx-controls-auto .bx-start{display:block;text-indent: -9999px;width:10px;height:11px;outline:0;background:url(images/controls.png) -86px -11px no-repeat;margin:0
3px}.bx-wrapper .bx-controls-auto .bx-start:hover,
.bx-wrapper .bx-controls-auto .bx-start.active{background-position: -86px 0}.bx-wrapper .bx-controls-auto .bx-stop{display:block;text-indent: -9999px;width:9px;height:11px;outline:0;background:url(images/controls.png) -86px -44px no-repeat;margin:0
3px}.bx-wrapper .bx-controls-auto .bx-stop:hover,
.bx-wrapper .bx-controls-auto .bx-stop.active{background-position: -86px -33px}.bx-wrapper .bx-controls.bx-has-controls-auto.bx-has-pager .bx-pager{text-align:left;width:80%}.bx-wrapper .bx-controls.bx-has-controls-auto.bx-has-pager .bx-controls-auto{right:0;width:35px}.bx-wrapper .bx-caption{position:absolute;bottom:0;left:0;background:#666\9;background:rgba(80, 80, 80, 0.75);width:100%}.bx-wrapper .bx-caption
span{color:#fff;font-family:Arial;display:block;font-size: .85em;padding:10px}

