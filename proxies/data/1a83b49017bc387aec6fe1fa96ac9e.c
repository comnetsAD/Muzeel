gapi.loaded_2(function(_){var window=this;
/*

 Copyright The Closure Library Authors.
 SPDX-License-Identifier: Apache-2.0
*/
var hs;hs=function(a){return(a=a.exec(_.Xb))?a[1]:""};_.is=function(){if(_.Zg)return hs(/Firefox\/([0-9.]+)/);if(_.xc||_.yc||_.wc)return _.Rc;if(_.ch)return _.sc()?hs(/CriOS\/([0-9.]+)/):hs(/Chrome\/([0-9.]+)/);if(_.dh&&!_.sc())return hs(/Version\/([0-9.]+)/);if(_.$g||_.ah){var a=/Version\/(\S+).*Mobile\/(\S+)/.exec(_.Xb);if(a)return a[1]+"."+a[2]}else if(_.bh)return(a=hs(/Android\s+([0-9.]+)/))?a:hs(/Version\/([0-9.]+)/);return""}();

/*

 Copyright The Closure Library Authors.
 SPDX-License-Identifier: Apache-2.0
*/
var ms;_.js=function(a,b,c,d){this.left=a;this.top=b;this.width=c;this.height=d};_.h=_.js.prototype;_.h.clone=function(){return new _.js(this.left,this.top,this.width,this.height)};_.h.YA=_.fa(26);_.h.intersects=function(a){return this.left<=a.left+a.width&&a.left<=this.left+this.width&&this.top<=a.top+a.height&&a.top<=this.top+this.height};
_.h.contains=function(a){return a instanceof _.Wq?a.x>=this.left&&a.x<=this.left+this.width&&a.y>=this.top&&a.y<=this.top+this.height:this.left<=a.left&&this.left+this.width>=a.left+a.width&&this.top<=a.top&&this.top+this.height>=a.top+a.height};_.h.distance=function(a){var b=a.x<this.left?this.left-a.x:Math.max(a.x-(this.left+this.width),0);a=a.y<this.top?this.top-a.y:Math.max(a.y-(this.top+this.height),0);return Math.sqrt(b*b+a*a)};_.h.xn=function(){return new _.Xq(this.width,this.height)};
_.h.getCenter=function(){return new _.Wq(this.left+this.width/2,this.top+this.height/2)};_.h.ceil=function(){this.left=Math.ceil(this.left);this.top=Math.ceil(this.top);this.width=Math.ceil(this.width);this.height=Math.ceil(this.height);return this};_.h.floor=function(){this.left=Math.floor(this.left);this.top=Math.floor(this.top);this.width=Math.floor(this.width);this.height=Math.floor(this.height);return this};
_.h.round=function(){this.left=Math.round(this.left);this.top=Math.round(this.top);this.width=Math.round(this.width);this.height=Math.round(this.height);return this};_.h.translate=function(a,b){a instanceof _.Wq?(this.left+=a.x,this.top+=a.y):(this.left+=a,"number"===typeof b&&(this.top+=b));return this};_.h.scale=function(a,b){b="number"===typeof b?b:a;this.left*=a;this.width*=a;this.top*=b;this.height*=b;return this};_.ks=function(a){return _.Or(a,"position")};
_.ls=function(a,b){a=a.style;"opacity"in a?a.opacity=b:"MozOpacity"in a?a.MozOpacity=b:"filter"in a&&(a.filter=""===b?"":"alpha(opacity="+100*Number(b)+")")};ms=function(a,b){return(b=_.Nr(a,b))?_.es(a,b):0};_.ns=function(a,b){if(_.xc){var c=ms(a,b+"Left"),d=ms(a,b+"Right"),e=ms(a,b+"Top");a=ms(a,b+"Bottom");return new _.Ir(e,d,a,c)}c=_.Mr(a,b+"Left");d=_.Mr(a,b+"Right");e=_.Mr(a,b+"Top");a=_.Mr(a,b+"Bottom");return new _.Ir(parseFloat(e),parseFloat(d),parseFloat(a),parseFloat(c))};
_.os=function(){if(_.Ec){var a=/Windows NT ([0-9.]+)/;return(a=a.exec(_.Xb))?a[1]:"0"}return _.Dc?(a=/1[0|1][_.][0-9_.]+/,(a=a.exec(_.Xb))?a[0].replace(/_/g,"."):"10"):_.Hc?(a=/Android\s+([^\);]+)(\)|;)/,(a=a.exec(_.Xb))?a[1]:""):_.Ic||_.Jc||_.Kc?(a=/(?:iPhone|CPU)\s+OS\s+(\S+)/,(a=a.exec(_.Xb))?a[1].replace(/_/g,"."):""):""}();

/*

 Copyright The Closure Library Authors.
 SPDX-License-Identifier: Apache-2.0
*/
var ps,qs,ts;_.js.prototype.YA=_.Yc(26,function(a){var b=Math.max(this.left,a.left),c=Math.min(this.left+this.width,a.left+a.width);if(b<=c){var d=Math.max(this.top,a.top);a=Math.min(this.top+this.height,a.top+a.height);d<=a&&(this.left=b,this.top=d,this.width=c-b,this.height=a-d)}});ps=function(a,b){return new _.Wq(a.x-b.x,a.y-b.y)};
qs=function(a){if(_.xc&&!_.Md(8))return a.offsetParent;var b=_.Td(a),c=_.Or(a,"position"),d="fixed"==c||"absolute"==c;for(a=a.parentNode;a&&a!=b;a=a.parentNode)if(11==a.nodeType&&a.host&&(a=a.host),c=_.Or(a,"position"),d=d&&"static"==c&&a!=b.documentElement&&a!=b.body,!d&&(a.scrollWidth>a.clientWidth||a.scrollHeight>a.clientHeight||"fixed"==c||"absolute"==c||"relative"==c))return a;return null};
_.rs=function(a){for(var b=new _.Ir(0,Infinity,Infinity,0),c=_.Ud(a),d=c.rb().body,e=c.rb().documentElement,f=_.br(c.ob);a=qs(a);)if(!(_.xc&&0==a.clientWidth||_.Bc&&0==a.clientHeight&&a==d)&&a!=d&&a!=e&&"visible"!=_.Or(a,"overflow")){var g=_.Sr(a),k=new _.Wq(a.clientLeft,a.clientTop);g.x+=k.x;g.y+=k.y;b.top=Math.max(b.top,g.y);b.right=Math.min(b.right,g.x+a.clientWidth);b.bottom=Math.min(b.bottom,g.y+a.clientHeight);b.left=Math.max(b.left,g.x)}d=f.scrollLeft;f=f.scrollTop;b.left=Math.max(b.left,d);
b.top=Math.max(b.top,f);c=_.ar(c.wb());b.right=Math.min(b.right,d+c.width);b.bottom=Math.min(b.bottom,f+c.height);return 0<=b.top&&0<=b.left&&b.bottom>b.top&&b.right>b.left?b:null};_.ss=function(a){var b=_.Sr(a);a=_.Zr(a);return new _.js(b.x,b.y,a.width,a.height)};ts=function(a,b){return(b&8&&_.cs(a)?b^4:b)&-9};
_.us=function(a,b,c,d,e,f,g,k,l){var m;if(m=c.offsetParent){var n="HTML"==m.tagName||"BODY"==m.tagName;if(!n||"static"!=_.ks(m)){var q=_.Sr(m);if(!n){n=_.cs(m);var t;if(t=n){t=_.dh&&0<=_.Lb(_.is,10);var r=_.Lc&&0<=_.Lb(_.os,10),v=_.ch&&0<=_.Lb(_.is,85);t=_.Ac||t||r||v}n=t?-m.scrollLeft:!n||_.zc&&_.Uc("8")||"visible"==_.Or(m,"overflowX")?m.scrollLeft:m.scrollWidth-m.clientWidth-m.scrollLeft;q=ps(q,new _.Wq(n,m.scrollTop))}}}m=q||new _.Wq;q=_.ss(a);(n=_.rs(a))&&q.YA(new _.js(n.left,n.top,n.right-n.left,
n.bottom-n.top));n=_.Ud(a);r=_.Ud(c);n.rb()!=r.rb()&&(t=n.rb().body,r=_.Xr(t,r.wb()),r=ps(r,_.Sr(t)),!_.xc||_.Md(9)||_.Zq(n.ob)||(r=ps(r,_.cr(n.ob))),q.left+=r.x,q.top+=r.y);a=ts(a,b);b=q.left;a&4?b+=q.width:a&2&&(b+=q.width/2);b=new _.Wq(b,q.top+(a&1?q.height:0));b=ps(b,m);e&&(b.x+=(a&4?-1:1)*e.x,b.y+=(a&1?-1:1)*e.y);if(g)if(l)var u=l;else if(u=_.rs(c))u.top-=m.y,u.right-=m.x,u.bottom-=m.y,u.left-=m.x;e=u;l=b.clone();u=ts(c,d);d=_.Zr(c);a=k?k.clone():d.clone();k=l;l=a;k=k.clone();l=l.clone();a=0;
if(f||0!=u)u&4?k.x-=l.width+(f?f.right:0):u&2?k.x-=l.width/2:f&&(k.x+=f.left),u&1?k.y-=l.height+(f?f.bottom:0):f&&(k.y+=f.top);g&&(e?(f=k,u=l,a=0,65==(g&65)&&(f.x<e.left||f.x>=e.right)&&(g&=-2),132==(g&132)&&(f.y<e.top||f.y>=e.bottom)&&(g&=-5),f.x<e.left&&g&1&&(f.x=e.left,a|=1),g&16&&(b=f.x,f.x<e.left&&(f.x=e.left,a|=4),f.x+u.width>e.right&&(u.width=Math.min(e.right-f.x,b+u.width-e.left),u.width=Math.max(u.width,0),a|=4)),f.x+u.width>e.right&&g&1&&(f.x=Math.max(e.right-u.width,e.left),a|=1),g&2&&
(a|=(f.x<e.left?16:0)|(f.x+u.width>e.right?32:0)),f.y<e.top&&g&4&&(f.y=e.top,a|=2),g&32&&(b=f.y,f.y<e.top&&(f.y=e.top,a|=8),f.y+u.height>e.bottom&&(u.height=Math.min(e.bottom-f.y,b+u.height-e.top),u.height=Math.max(u.height,0),a|=8)),f.y+u.height>e.bottom&&g&4&&(f.y=Math.max(e.bottom-u.height,e.top),a|=2),g&8&&(a|=(f.y<e.top?64:0)|(f.y+u.height>e.bottom?128:0)),g=a):g=256,a=g);f=new _.js(0,0,0,0);f.left=k.x;f.top=k.y;f.width=l.width;f.height=l.height;g=a;g&496||(_.Qr(c,new _.Wq(f.left,f.top)),a=f.xn(),
d==a||d&&a&&d.width==a.width&&d.height==a.height||(f=a,d=_.Zq(_.Ud(_.Td(c)).ob),!_.xc||_.Uc("10")||d&&_.Uc("8")?(c=c.style,_.Ac?c.MozBoxSizing="border-box":_.Bc?c.WebkitBoxSizing="border-box":c.boxSizing="border-box",c.width=Math.max(f.width,0)+"px",c.height=Math.max(f.height,0)+"px"):(k=c.style,d?(d=_.ns(c,"padding"),c=_.Tr(c),k.pixelWidth=f.width-c.left-d.left-d.right-c.right,k.pixelHeight=f.height-c.top-d.top-d.bottom-c.bottom):(k.pixelWidth=f.width,k.pixelHeight=f.height))));return g};

/*

 Copyright The Closure Library Authors.
 SPDX-License-Identifier: Apache-2.0
*/
var Es;Es=function(a,b){a&&(a=a.parentNode);for(var c=0;a;){if(b(a))return a;a=a.parentNode;c++}return null};_.Fs=function(a){if(1==a.nodeType)return _.Wr(a);a=a.changedTouches?a.changedTouches[0]:a;return new _.Wq(a.clientX,a.clientY)};
_.Gs=function(a){this.ha=a;this.ta=a.Xb()};_.Gs.prototype.Xq=function(){Hs(this)};var Hs=function(a){var b=a.ha.Lc();if(a.ta.anchorBox&&b&&b.Ma())b=_.Sr(b.Ma()),a.ta.anchorBox.left+=b.x,a.ta.anchorBox.top+=b.y;else{b=a.ta.anchor;if("_default"!=b&&"_iframe"!=b){var c=_.Vd(document,b);if(c)a.ta.anchorBox=_.ss(c);else{_.Df("Anchor not found in DOM: "+b+'. Falling back to "_default".');a.ta.anchor="_default";return}}"_iframe"==b&&(b=_.ar(),a.ta.anchorBox=new _.js(0,0,b.width,b.height))}a.ta.anchor=""};
_.Gs.prototype.onBeforeParentOpen=_.Gs.prototype.Xq;
_.Is=function(a){_.Gs.call(this,a)};_.T(_.Is,_.Gs);_.h=_.Is.prototype;_.h.open=function(){var a=this.ta,b=document.createElement("ins");document.getElementById(a.container).appendChild(b);b.style.display="block";_.Kr(b,a.containerCss);this.ha.Lf(b);this.ha.hg(b)};_.h.sd=function(){document.getElementById(this.ha.id).style.height=this.ha.height+"px"};_.h.close=function(){_.ge(this.ha.Ab());_.ge(this.rg);this.rg=null};_.h.Dw=_.fa(24);
_.h.wh=function(){if(this.rg)return this.rg;var a=this.ta;!a.anchorBox&&a.anchor&&Hs(this);var b=this.ha.Lc();if("_default"==a.anchor&&b){var c=_.ss(_.Vd(document,b.Ab()));a.anchorBox=c}if(!a.anchorBox)return _.Df("No anchor box defined."),null;a=new _.Wq(a.anchorBox.left,a.anchorBox.top);b&&(b=_.Xr(b.Ma(),window),this.Xl=new _.Wq,this.Xl.x=b.x,this.Xl.y=b.y,a.x+=b.x,a.y+=b.y,_.Js(a));this.Rx=a;b=_.Ks(this,!0);this.rg=document.createElement("ins");this.rg.style.cssText=b;document.body.appendChild(this.rg);
return this.rg};_.Ks=function(a,b){var c=a.ta;return"position: absolute !important;background-color: transparent !important;left: "+a.Rx.x+"px !important;top: "+a.Rx.y+"px !important;width: "+c.anchorBox.width+"px !important;height: "+c.anchorBox.height+"px !important;z-index: -10000 !important;display: "+(b?"block":"none")+" !important;"};
_.Ls=function(a,b){var c=0,d=0;if(b.pageX||b.pageY)c=b.pageX,d=b.pageY;else if(b.clientX||b.clientY)c=b.target?b.target:b.srcElement,d=c.ownerDocument&&c.ownerDocument.parentWindow?c.ownerDocument.parentWindow:window,_.xc?(c=d.document.documentElement.scrollLeft,d=d.document.documentElement.scrollTop):(c=d.pageXOffset,d=d.pageYOffset),c=b.clientX+c,d=b.clientY+d;b=new _.Wq(c,d);a=_.ss(a);return a=new _.Ir(a.top,a.left+a.width,a.top+a.height,a.left),a.contains(b)};
_.Js=function(a){var b=window,c=document.body,d=_.Sr(c);b=c.currentStyle||b.getComputedStyle(c,"");b.position&&"static"!=b.position&&(a.x-=d.x,a.y-=d.y)};_.Ms=function(a){var b=a.ha.Lc()&&a.ha.Lc().Ab();b=b&&b.style.zIndex?parseInt(b.style.zIndex,10)+1:0;return Math.min(2147483647,Math.max(2E9,a.ta.zIndex||b))};
var Ns,Os,Zs;Ns={"bottom-center":1,"bottom-end":13,"bottom-left":1,"bottom-right":5,"bottom-start":9,"left-bottom":1,"left-center":0,"left-top":0,"right-bottom":5,"right-center":4,"right-top":4,"top-center":0,"top-end":12,"top-left":0,"top-right":4,"top-start":8};Os={"bottom-center":!0,"top-center":!0};Zs={"left-center":!0,"right-center":!0};
_.$s=function(a,b,c,d,e){e=e||{x:0,y:0};if(Os[b]){var f=_.Zr(a).width/2;e.x="top-right"==d||"bottom-right"==d?e.x+f:e.x-f}Os[d]&&(f=_.Zr(c).width/2,e.x+=f);Zs[b]&&(f=_.Zr(a).height/2,e.y="right-bottom"==d||"left-bottom"==d?e.y+f:e.y-f);Zs[d]&&(e.y+=_.Zr(c).height/2);_.us(c,Ns[d],a,Ns[b],new _.Wq(e.x,e.y));d=Es(a,function(g){if(g==document)return!1;g=_.ks(g);return!!g&&"static"!=g});c=b=0;d&&(c=_.Sr(d),b=-c.x,c=-c.y);a=a.style;parseInt(a.left,10)<b&&(a.left=b+"px");parseInt(a.top,10)<c&&(a.top=c+"px")};
_.at=function(a){_.Gs.call(this,a.ha);this.jg=a;this.sy=[]};_.T(_.at,_.Is);_.h=_.at.prototype;_.h.Xq=function(){this.jg.Xq()};_.h.open=function(){this.jg.open();(this.ta.closeClickDetection||this.ta.hideClickDetection)&&bt(this)};_.h.sd=function(a){this.jg.sd(a)};_.h.IK=function(a){this.jg.onRenderStart&&this.jg.onRenderStart(a)};_.h.close=function(){if(this.ta.closeClickDetection||this.ta.hideClickDetection)_.qb(this.sy,function(a){_.Zi(a)}),this.sy=[];this.jg.close()};
var bt=function(a){_.qb(["click","touchstart"],(0,_.Q)(function(b){this.sy.push(_.Ri(document,b,(0,_.Q)(this.VQ,this),!0))},a))};_.at.prototype.VQ=function(a){_.Ls(this.ha.Ab(),a)||(this.ta.hideClickDetection&&this.jg.show?this.jg.show(!1):this.close())};_.at.prototype.onBeforeParentOpen=_.at.prototype.Xq;_.at.prototype.open=_.at.prototype.open;_.at.prototype.onready=_.at.prototype.sd;_.at.prototype.onRenderStart=_.at.prototype.IK;_.at.prototype.close=_.at.prototype.close;

var vX,wX,xX;for(_.uX=function(a){return{Xb:function(){return a},Lc:function(){return a.openerIframe}}},vX=function(a){(new _.Gs(_.uX(a))).Xq()},wX="bubble circlepicker float hover hover-menu slide-menu".split(" "),xX=0;xX<wX.length;xX++)_.Nm[wX[xX]]=vX;

_.vq=function(a){this.N=a};_.h=_.vq.prototype;_.h.YC=function(a){this.N.anchor=a;return this};_.h.wh=function(){return this.N.anchor};_.h.Dw=_.fa(25);_.h.ej=function(a){this.N.height=a;return this};_.h.Qd=function(){return this.N.height};_.h.wm=function(a){this.N.width=a;return this};_.h.Ac=function(){return this.N.width};_.wq=function(a){a.N.closeClickDetection=!0};_.xq=function(a){a.N.show=!0;return a};_.yq=function(a,b){a.N.where=b;return a};_.zq=function(a){a.N.connectWithQueryParams=!0;return a};
_.Aq=function(){_.Rk.apply(this,arguments)};_.T(_.Aq,_.Rk);

_.vq.prototype.Dw=_.Yc(25,function(a){this.N.anchorPosition=a});_.Is.prototype.Dw=_.Yc(24,function(a){this.Rx=a;this.rg.style.cssText=_.Ks(this,!0)});
var st=function(a){var b=a.ha.Lc();if(!b||!a.Xl)return!1;var c=a.ta;c=new _.Wq(c.anchorBox.left,c.anchorBox.top);b=_.Xr(b.Ma(),window);if(b.x==a.Xl.x&&b.y==a.Xl.y)return!1;a.Xl.x=b.x;a.Xl.y=b.y;c.x+=b.x;c.y+=b.y;_.Js(c);a.Dw(c);return!0},tt=function(a,b,c,d){if(null!=a)for(a=a.firstChild;a;){if(b(a)&&(c.push(a),d)||tt(a,b,c,d))return!0;a=a.nextSibling}return!1},ut=function(a,b){var c=[];return tt(a,b,c,!0)?c[0]:void 0};
var zt,yt;
try{_.bs(_.Wb(_.Gb(".gc-bubbleDefault{table-layout:auto!important}.gc-bubbleDefault,.gc-reset{background-color:transparent!important;text-align:left;padding:0!important;margin:0!important;border:0!important}.pls-bubbleTop{border-bottom:1px solid #ccc!important}.pls-contentLeft,.pls-topTail,.pls-vertShimLeft{background-image:url(//ssl.gstatic.com/s2/oz/images/stars/po/bubblev1/border_3.gif)!important}.pls-topTail{background-repeat:repeat-x!important;background-position:bottom!important}.pls-vertShim{background-color:#fff!important;text-align:right}.tbl-grey .pls-vertShim{background-color:#f5f5f5!important}.pls-vertShimLeft{background-repeat:repeat-y!important;background-position:100%!important;height:4px}.pls-vertShimRight{height:4px}.pls-confirm-container .pls-vertShim{background-color:#fff3c2!important}.pls-contentWrap{background-color:#fff!important;position:relative!important;vertical-align:top}.pls-contentLeft{background-repeat:repeat-y;background-position:100%;vertical-align:top}.pls-dropRight{background-image:url(//ssl.gstatic.com/s2/oz/images/stars/po/bubblev1/bubbleDropR_3.png)!important;background-repeat:repeat-y!important}.pls-dropBL,.pls-dropBottom,.pls-dropRight,.pls-dropTR .pls-dropBR,.pls-tailleft,.pls-vert,.pls-vert img{vertical-align:top}.pls-dropBottom{background-image:url(//ssl.gstatic.com/s2/oz/images/stars/po/bubblev1/bubbleDropB_3.png)!important;background-repeat:repeat-x!important;width:100%}.pls-topLeft{text-align:right}.pls-topLeft,.pls-topRight{background:inherit!important;vertical-align:bottom}.pls-topRight{text-align:left}.pls-bottomLeft{background:inherit!important;text-align:right}.pls-bottomRight{background:inherit!important;text-align:left;vertical-align:top}.pls-tailbottom,.pls-tailleft,.pls-tailright,.pls-tailtop{display:none;position:relative}.pls-dropBL,.pls-dropBR,.pls-dropTR,.pls-tailbottom,.pls-tailleft,.pls-tailright,.pls-tailtop{background-image:url(//ssl.gstatic.com/s2/oz/images/stars/po/bubblev1/bubbleSprite_3.png)!important;background-repeat:no-repeat}.tbl-grey .pls-dropBL,.tbl-grey .pls-dropBR,.tbl-grey .pls-dropTR,.tbl-grey .pls-tailbottom,.tbl-grey .pls-tailleft,.tbl-grey .pls-tailright,.tbl-grey .pls-tailtop{background-image:url(//ssl.gstatic.com/s2/oz/images/stars/po/bubblev1/bubbleSprite-grey.png)!important}.pls-tailbottom{background-position:-23px 0}.pls-confirm-container .pls-tailbottom{background-position:-23px -10px}.pls-tailtop{background-position:-19px -20px}.pls-tailright{background-position:0 0}.pls-tailleft{background-position:-10px 0}.pls-tailtop{vertical-align:top}.gc-bubbleDefault td{line-height:0;font-size:0}.pls-tailbottom,.pls-topLeft img,.pls-topRight img{vertical-align:bottom}.bubbleDropTR,.pls-bottomLeft,.pls-bottomLeft img,.pls-dropBottom img,.pls-dropBottomL img,.pls-dropBottomR img{vertical-align:top}.pls-dropTR{background-position:0 -22px}.pls-dropBR{background-position:0 -27px}.pls-dropBL{background-position:0 -16px}.pls-spacerbottom,.pls-spacerleft,.pls-spacerright,.pls-spacertop{position:static!important}.pls-spinner{bottom:0;position:absolute;left:0;margin:auto;right:0;top:0}")))}catch(a){_.Df("Failed to install bubble styles: "+a),
_.C.setTimeout(function(){_.p.aK(a)},0)}_.vt=function(a){_.Gs.call(this,a);this.ua=new _.Bs(this)};_.T(_.vt,_.Is);var wt=function(a,b){return ut(a,function(c){c=c.className;c="string"===typeof c&&c.match(/\S+/g)||[];return _.$a(c,b)})};
_.vt.prototype.resize=function(a){+a.width&&(this.ha.width=a.width);+a.height&&(this.ha.height=a.height);+a.contentWidth?this.ha.contentWidth=a.contentWidth:+a.width&&(this.ha.contentWidth=a.width);+a.contentHeight?this.ha.contentHeight=a.contentHeight:+a.height&&(this.ha.contentHeight=a.height);this.position(!1,a.noreposition);return!0};
var xt=function(a,b,c,d,e,f){return['<img class="',d?d+" ":"",f?'"':'gc-reset"',' style="width:',a,"px !important; height:",b,"px !important; max-width: ",a,"px !important; max-height: ",b,'px !important;" src="',e?"":"https://ssl.gstatic.com/s2/oz/images/stars/po/bubblev1/",c,'"/>'].join("")};_.vt.prototype.close=function(){yt(this);_.Is.prototype.close.call(this)};zt=function(a){a.hp||(a.hp=window.setInterval((0,_.Q)(a.XR,a),1E3))};yt=function(a){a.hp&&(window.clearInterval(a.hp),a.hp=null)};
_.At=function(a){var b=document.createElement("div"),c=Number(a.ta.width)||100,d=c+6,e={display:"block",visibility:"hidden",position:"absolute",width:d+"px",left:"-1000px",top:"-1000px"};a.ta.height&&(e.height=+a.ta.height+2+"px");_.Kr(b,e);a.Sr=!!a.ta.showSpinner;a.MB=!!a.ta.noPadding;a.xF=!!a.ta.anchorToOpener;a.ED=0!=a.ta.show;d=(d=String(d))?d+"px":"100%";var f=a.Sr;e=a.MB;var g="";f&&(g=xt(_.V("iframes/bubble/spinnerwidth")||16,_.V("iframes/bubble/spinnerheight")||16,_.V("iframes/bubble/spinnerurl")||
"https://ssl.gstatic.com/docs/documents/share/images/spinner-1.gif","pls-spinner",!0,!0));g+='<div class="goog-bubble-content gc-reset"'+(f?' style="visibility:hidden;"':"")+"></div>";f="gc-bubbleDefault pls-container";a.ta.bubbleClass&&(f+=" tbl-"+a.ta.bubbleClass);d=_.kc(['<table cellpadding="0" cellspacing="0" dir="ltr" style="width:',d,';" frame="void" rules="none" class=" '+f+'">','<tr class="gc-reset"><td class="pls-topLeft gc-reset">',xt(1,1,"border_3.gif"),'</td><td class="pls-topTail gc-reset">',
xt(15,9,"spacer.gif","pls-tailbottom"),xt(1,1,"spacer.gif","pls-spacerbottom"),'</td><td class="pls-topRight gc-reset">',xt(1,1,"border_3.gif"),'</td></tr><tr class="gc-reset"><td class="pls-vertShimLeft gc-reset">',xt(1,4,"spacer.gif"),"</td>",e?'<td rowspan="2" class="pls-contentWrap gc-reset">'+g+"</td>":'<td class="pls-vertShim gc-reset">'+xt(1,4,"spacer.gif")+"</td>",'<td class="pls-vertShimRight gc-reset">',xt(5,4,"spacer.gif","pls-dropTR"),'</td></tr><tr class="gc-reset"><td class="pls-contentLeft gc-reset">',
xt(9,15,"spacer.gif","pls-tailright"),xt(1,1,"spacer.gif","pls-spacerright"),"</td>",e?"":'<td class="pls-contentWrap gc-reset">'+g+"</td>",'<td class="pls-dropRight gc-reset">',xt(12,19,"spacer.gif","pls-tailleft"),xt(1,1,"spacer.gif","pls-spacerleft"),'</td></tr><tr class="gc-reset"><td class="pls-bottomLeft gc-reset">',xt(1,1,"border_3.gif"),'</td><td class="gc-reset"><table cellpadding="0" cellspacing="0" style="width:100%" class="gc-reset"><tr class="gc-reset"><td class="pls-vert gc-reset">',
xt(4,5,"spacer.gif","pls-dropBL"),'</td><td class="pls-dropBottom gc-reset">',xt(19,13,"spacer.gif","pls-tailtop"),xt(1,1,"spacer.gif","pls-spacertop"),'</td></tr></table></td><td class="pls-vert gc-reset">',xt(5,5,"spacer.gif","pls-dropBR"),"</td></tr></table>"].join(""),null);_.Ed(b,d);a.xF?(d=a.ha.Lc().Ab(),d.style.position="relative"):d=document.body;d.appendChild(b);a.lg=b.firstChild;a.ta.bubbleType&&a.wd(a.ta.bubbleType);a.Aq=wt(a.lg,"goog-bubble-content");a.ta.where=a.Aq;a.ta.div=b;a.ta.attributes=
a.ta.attributes||{};_.ue({style:"margin:0px;position:absolute;z-index:1;border-style:none;outline:none;width:"+c+"px;"},a.ta.attributes)};_.vt.prototype.Kv=function(){Bt(this);Ct(this,this.ta.maxExpectedSize);this.ha.Lf(this.ta.div);this.Sr&&(this.position(!1),this.OI=!0);this.ED&&this.ta.startVisible&&(this.ha.Ab().style.visibility="visible",zt(this),Dt(this));this.ua.W(this.lg,"mouseout",this.SB);this.ua.W(this.lg,"mouseover",this.TB)};
_.vt.prototype.open=function(){_.At(this);var a=this.ha;a.Xc("resize",(0,_.Q)(this.resize,this));a.Ig("setHideOnLeave",(0,_.Q)(this.Gr,this));a.Ig("setBubbleType",(0,_.Q)(this.wd,this));a.Ig("show",(0,_.Q)(this.show,this));a.Ig("showSpinner",(0,_.Q)(this.VM,this));a.Ig("clearHideOnLeaveTimeout",(0,_.Q)(this.lt,this));a.methods.closeOrHideThisBubble=(0,_.Q)(this.xy,this);var b=a.Ab();b?this.Aq.appendChild(b):a.hg(this.Aq||null,this.ta.attributes);this.Kv()};
_.vt.prototype.XR=function(){var a=this.ha.Lc();if(a&&this.rg){a=a.Ab();var b=a.currentStyle||window.getComputedStyle(a,"");0===a.offsetWidth&&0===a.offsetHeight||"none"==b.display||"hidden"==b.visibility?this.ha.close():st(this)&&this.position(!0)}else yt(this)};var Ct=function(a,b){if(b=(b||{}).height)a.ha.maxExpectedSize||(a.ha.maxExpectedSize={}),a.ha.maxExpectedSize.height=b};
_.vt.prototype.yA=function(a){this.$d=!0;a=a||{};var b=a.height;b&&(this.ha.height=b);var c=a.width;c&&(this.ha.width=c);c=a.contentWidth||c;+c&&(this.ha.contentWidth=c);b=a.contentHeight||b;+b&&(this.ha.contentHeight=b);Ct(this,a.maxExpectedSize);this.OI&&Et(this,!1);this.ED&&!this.JN&&this.show(!0)};_.vt.prototype.sd=function(a){this.yA(a)};_.vt.prototype.IK=function(a){this.ZV||this.yA(a)};_.vt.prototype.VM=function(a){a&&(this.OI=!1,this.ZV=!0);Et(this,a)};
var Et=function(a,b){a.Sr=b;var c=_.zr("pls-spinner",a.ha.Ab());c&&(c.style.visibility=b?"":"hidden");if(a=_.zr("goog-bubble-content",a.ha.Ab()))a.style.visibility=b?"hidden":""};
_.vt.prototype.position=function(a,b){var c=this.ha.ka(),d=_.Vd(document,c);if(d){d.style.height=(this.ha.contentHeight||+this.ta.contentHeight||this.ha.height||+this.ta.height)+"px";c=this.ha.contentWidth||+this.ta.contentWidth||+this.ta.width;d.style.width=c?c+"px":"100%";c=this.ha.width||+this.ta.width;d=this.ha.height||+this.ta.height;_.Kr(this.Aq,{width:c+"px",height:d+"px"});var e=c+2+4,f=(this.MB?Math.max(d,4):d+4)+2+4;this.lg.style.width=e+"px";d=this.ha.Ab();d.style.width=e+"px";c=this.wh();
this.rg.style.cssText=_.Ks(this,!0);var g=_.Fs(c),k=_.ss(d),l=_.ss(c);var m=_.ar(window);if(!this.uk||a){this.uk=!0;var n=this.ha.maxExpectedSize;a=k.clone();n&&n.height&&(a.height=n.height);a:{n=this.ta.expandTo;k=[Ft.og,Ft.Rf,Ft.vj,Ft.uj];if(n){n=k=n.concat(k);for(var q={},t=0,r=0;r<n.length;){var v=n[r++];q[v]||(q[v]=!0,n[t++]=v)}n.length=t}for(n=0;n<k.length;++n)switch(k[n]){case Ft.og:if(g.y+l.height+a.height<=m.height){a=Ft.og;break a}break;case Ft.Rf:if(0<=g.y-a.height){a=Ft.Rf;break a}break;
case Ft.uj:if(0<=g.x-a.width){a=Ft.uj;break a}break;case Ft.vj:if(g.x+a.width+l.width<=m.width){a=Ft.vj;break a}}a=k[0]}this.zd=a;this.fe=this.ta.anchorPosition;this.hf=this.ta.targetPosition;this.zd==Ft.Rf||this.zd==Ft.og?_.bd(Gt,this.fe)&&_.bd(Gt,this.hf)||(this.hf=this.fe="left"):_.bd(Ht,this.fe)&&_.bd(Ht,this.hf)||(this.hf=this.fe="center");this.Bj=this.ta.arrowPosition;this.Bj?this.zd==Ft.Rf||this.zd==Ft.og?_.bd(Gt,this.Bj)||(this.Bj="center"):_.bd(Ht,this.Bj)||(this.Bj="center"):this.Bj="center";
a=this.zd;k=this.hf;n={};n.anchor=a+"-"+this.fe;n.target=It[a]+"-"+k;this.lG=n;wt(this.lg,"pls-spacer"+this.zd).style.display="none";for(var u in Ft)Ft.hasOwnProperty(u)&&(a=Ft[u],a!=this.zd&&(wt(this.lg,"pls-spacer"+a).style.display="block",wt(this.lg,"pls-tail"+a).style.display="none"));this.Ux=wt(this.lg,"pls-tail"+this.zd);this.Ux.style.display="inline"}switch(this.zd){case Ft.Rf:f+=8;break;case Ft.vj:e+=8;break;case Ft.og:f+=8;break;case Ft.uj:e+=7}_.Kr(this.lg,{width:e+"px",height:f+"px"});
_.Kr(d,{width:e+"px",height:f+"px"});e=k=_.ss(d);u={x:0,y:0};k=e.width;n=e.height;this.zd==Ft.Rf||this.zd==Ft.og?(f="right"==this.fe?l.width:"center"==this.fe?l.width/2:0,a="right"==this.hf?k:"center"==this.hf?k/2:0,g=Math.max(0,Math.min(g.x,m.width-f)),g+=f-a,"right"==this.hf&&(u.x+=4),g+k>m.width&&(m=g+k-m.width,u.x-=m,g-=m),0>g&&(u.x-=g)):(f="bottom"==this.fe?l.height:"center"==this.fe?l.height/2:0,a="bottom"==this.hf?n:"center"==this.hf?n/2:0,g=Math.max(0,Math.min(g.y,m.height-f)),g+=f-a,g+n>
m.height&&(m=g+n-m.height,u.y-=m,g-=m),0>g&&(u.y-=g));f=-u.x;m=-u.y;"right"==this.fe?u.x*=-1:"bottom"==this.fe&&(u.y*=-1);k=e.width-4;n=e.height-4;g=a=0;if("top"==this.zd||"bottom"==this.zd){switch(this.Bj){case "left":a-=7;break;case "right":a=l.width-7;break;default:a=l.width/2-7}"center"==this.hf?a+=k/2:"right"==this.hf&&(a+=k);"center"==this.fe?a-=l.width/2:"right"==this.fe&&(a-=l.width);"top"==this.zd&&(a-=4)}else{switch(this.Bj){case "top":g-=7;break;case "bottom":g+=l.height-7;break;default:g+=
l.height/2-7}"center"==this.hf?g+=n/2:"bottom"==this.hf&&(g+=n);"center"==this.fe?g-=l.height/2:"bottom"==this.fe&&(g-=l.height);g-=4}l=this.zd;l=l==Ft.vj||l==Ft.uj?0:Math.min(Math.max(6,f+a),e.width-6-15-8);f=this.zd;m=f==Ft.Rf||f==Ft.og?0:Math.min(Math.max(6,m+g),e.height-6-15-8);g=_.ss(this.Ux);e=_.ss(this.Aq);g=g.top+g.height>e.top+e.height;if(!b||this.zd===Ft.Rf||g)_.Kr(this.Ux,{left:l+"px",top:m+"px"}),c&&_.$s(d,this.lG.target,c,this.lG.anchor,u);this.rg.style.cssText=_.Ks(this,!1)}else _.Ef("Cannot resize already-closed iframe "+
c+".")};_.vt.prototype.wd=function(a){this.lg&&a in Jt&&(this.lg.className="gc-bubbleDefault "+Jt[a])};_.vt.prototype.show=function(a){if(!a||this.$d||this.Sr){var b=this.ha.Ab().style;a?(Bt(this),st(this),this.position(!0),Dt(this)):(b.left="-10000px",b.top="-10000px");this.JN=!a;b.visibility=a?"visible":"hidden";a?zt(this):yt(this);this.ha.nu?(b=this.ha.methods.onVisibilityChanged)&&b(a):!this.ha.xc()&&this.ha.no(a);this.lt()}else this.JN=!1};
var Bt=function(a){var b=a.ta.bubbleGroup||"",c=Kt[b];c!==a&&(c&&(c.ha.Xb().hideClickDetection&&c.show?c.show(!1):c.close()),Kt[b]=a)},Dt=function(a){var b=Math.max(_.Ms(a),Lt+1);_.Kr(a.ha.Ab(),{zIndex:b});Lt=b};_.h=_.vt.prototype;_.h.xy=function(){this.ta.hideClickDetection?this.show(!1):this.ha.close()};_.h.Gr=function(a){this.vq=a};_.h.TB=function(){this.lt()};_.h.SB=function(a){this.Hu||!this.vq||a.relatedTarget&&_.ke(this.lg,a.relatedTarget)||(this.Hu=_.C.setTimeout((0,_.Q)(this.xy,this),250))};
_.h.lt=function(){this.Hu&&(_.C.clearTimeout(this.Hu),this.Hu=null)};_.h.uk=!1;_.h.$d=!1;_.h.Sr=!1;_.h.MB=!1;_.h.hp=null;_.h.xF=!1;_.h.ED=!0;_.h.vq=!0;var Kt={},Lt=0,Ft={og:"bottom",uj:"left",vj:"right",Rf:"top"},It={};It[Ft.Rf]=Ft.og;It[Ft.og]=Ft.Rf;It[Ft.uj]=Ft.vj;It[Ft.vj]=Ft.uj;var Gt={CENTER:"center",uj:"left",vj:"right"},Ht={og:"bottom",CENTER:"center",Rf:"top"},Jt={"pls-default":"pls-container","pls-confirm":"pls-confirm-container"};

_.Mm.bubble=function(a){var b=new _.vt(_.uX(a)),c=new _.at(b);b.open=function(){};_.At(b);a.onClose=function(){b.close()};a.onRestyle=function(d){if(d){var e=!1;d.hasOwnProperty("setBubbleType")&&(b.wd(d.setBubbleType),e=!0);d.hasOwnProperty("show")&&(b.show(d.show),e=!0);d.hasOwnProperty("showSpinner")&&(b.VM(d.showSpinner),e=!0);d.hasOwnProperty("clearHideOnLeaveTimeout")&&(b.lt(),e=!0);d.hasOwnProperty("setHideOnLeave")&&(b.Gr(d.setHideOnLeave),e=!0);d.hasOwnProperty("setBubbleType")&&(b.wd(d.setBubbleType),
e=!0);e||b.resize(d)}};a.onCreate=function(d){d.Lc=function(){return this.ou("openerIframe")};d=c.ha=b.ha=d;d.register("_ready",(0,_.Q)(b.yA,b),_.om);d.register("closeOrHideThisBubble",(0,_.Q)(b.xy,b),_.om);b.Kv();c.open()}};

});
// Google Inc.
