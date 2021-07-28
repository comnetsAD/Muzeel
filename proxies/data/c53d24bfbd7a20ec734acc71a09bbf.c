(function(){/* 
 
 Copyright The Closure Library Authors. 
 SPDX-License-Identifier: Apache-2.0 
*/ 
'use strict';var l=this||self;function aa(){}function ba(a,b,c){return a.call.apply(a.bind,arguments)}function ca(a,b,c){if(!a)throw Error();if(2<arguments.length){var d=Array.prototype.slice.call(arguments,2);return function(){var e=Array.prototype.slice.call(arguments);Array.prototype.unshift.apply(e,d);return a.apply(b,e)}}return function(){return a.apply(b,arguments)}} 
function n(a,b,c){Function.prototype.bind&&-1!=Function.prototype.bind.toString().indexOf("native code")?n=ba:n=ca;return n.apply(null,arguments)}function da(a,b){function c(){}c.prototype=b.prototype;a.G=b.prototype;a.prototype=new c;a.prototype.constructor=a;a.I=function(d,e,h){for(var g=Array(arguments.length-2),f=2;f<arguments.length;f++)g[f-2]=arguments[f];return b.prototype[e].apply(d,g)}};function ea(a){let b=!1,c;return function(){b||(c=a(),b=!0);return c}};function p(a,b){Array.prototype.forEach.call(a,b,void 0)};var t=class{constructor(a,b){this.g=b===r?a:""}};t.prototype.i=!0;t.prototype.h=function(){return this.g.toString()};t.prototype.toString=function(){return this.g.toString()};function fa(a){return a instanceof t&&a.constructor===t?a.g:"type_error:SafeUrl"}var ja=/^(?:(?:https?|mailto|ftp):|[^:/?#]*(?:[/?#]|$))/i,r={};function u(a){u[" "](a);return a}u[" "]=aa;var ka={},v=null;var la="function"===typeof Uint8Array;function ma(a,b,c){return"object"===typeof a?la&&!Array.isArray(a)&&a instanceof Uint8Array?c(a):na(a,b,c):b(a)}function na(a,b,c){if(Array.isArray(a)){var d=Array(a.length);for(var e=0;e<a.length;e++){var h=a[e];null!=h&&(d[e]=ma(h,b,c))}Array.isArray(a)&&a[oa]&&y(d);return d}d={};for(e in a)h=a[e],null!=h&&(d[e]=ma(h,b,c));return d} 
function pa(a){return na(a,b=>"number"===typeof b?isFinite(b)?b:String(b):b,b=>{var c;void 0===c&&(c=0);if(!v){v={};for(var d="ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789".split(""),e=["+/=","+/","-_=","-_.","-_"],h=0;5>h;h++){var g=d.concat(e[h].split(""));ka[h]=g;for(var f=0;f<g.length;f++){var k=g[f];void 0===v[k]&&(v[k]=f)}}}c=ka[c];d=Array(Math.floor(b.length/3));e=c[64]||"";for(h=g=0;g<b.length-2;g+=3){var m=b[g],q=b[g+1];k=b[g+2];f=c[m>>2];m=c[(m&3)<<4|q>>4];q=c[(q&15)<< 
2|k>>6];k=c[k&63];d[h++]=f+m+q+k}f=0;k=e;switch(b.length-g){case 2:f=b[g+1],k=c[(f&15)<<2]||e;case 1:b=b[g],d[h]=c[b>>2]+c[(b&3)<<4|f>>4]+k+e}return d.join("")})}const oa=Symbol("IS_REPEATED_FIELD");function y(a){Array.isArray(a)&&!Object.isFrozen(a)&&(a[oa]=!0);return a};function z(){}let B;function qa(a,b,c){a.g=null;B&&(b||(b=B),B=null);var d=a.constructor.J;b||(b=d?[d]:[]);a.j=d?0:-1;a.h=b;a:{if(b=a.h.length)if(--b,d=a.h[b],!(null===d||"object"!=typeof d||Array.isArray(d)||la&&d instanceof Uint8Array)){a.l=b-a.j;a.i=d;break a}a.l=Number.MAX_VALUE}a.o={};if(c)for(b=0;b<c.length;b++)if(d=c[b],d<a.l){d+=a.j;var e=a.h[d];e?y(e):a.h[d]=C}else e=a.l+a.j,a.h[e]||(a.i=a.h[e]={}),(e=a.i[d])?y(e):a.i[d]=C}const C=Object.freeze(y([])); 
function D(a,b){if(b<a.l){b+=a.j;var c=a.h[b];return c!==C?c:a.h[b]=y([])}if(a.i)return c=a.i[b],c!==C?c:a.i[b]=y([])}function E(a,b,c){a=D(a,b);return null==a?c:a}function F(a,b){a=D(a,b);a=null==a?a:!!a;return null==a?!1:a}function ra(a){var b=sa;a.g||(a.g={});if(!a.g[1]){let c=D(a,1);c&&(a.g[1]=new b(c))}return a.g[1]}function ta(a){var b=ua;a.g||(a.g={});if(!a.g[1]){var c=D(a,1);let d=[];for(let e=0;e<c.length;e++)d[e]=new b(c[e]);a.g[1]=d}b=a.g[1];b==C&&(b=a.g[1]=[]);return b} 
function va(a){if(a.g)for(var b in a.g){var c=a.g[b];if(Array.isArray(c))for(var d=0;d<c.length;d++)c[d]&&wa(c[d]);else c&&wa(c)}}function wa(a){va(a);return a.h}z.prototype.toString=function(){return wa(this).toString()};var sa=class extends z{constructor(a){super();qa(this,a,xa)}},ua=class extends z{constructor(a){super();qa(this,a,null)}},xa=[1];var ya=class extends z{constructor(a){super();qa(this,a,null)}};var za={};var Aa=class{};class Ba extends Aa{constructor(a){super();if(za!==za)throw Error("Bad secret");this.g=a}toString(){return this.g}}var Ca=new Ba("about:invalid#zTSz");function Da(a){if(a instanceof Aa)if(a instanceof Ba)a=a.g;else throw Error("wrong type");else a=fa(a);return a};var Ea={capture:!0},Fa={passive:!0},Ga=ea(function(){let a=!1;try{const b=Object.defineProperty({},"passive",{get:function(){a=!0}});l.addEventListener("test",null,b)}catch(b){}return a});function H(a,b,c,d){if(a.addEventListener){var e=a.addEventListener;d=d?d.passive&&Ga()?d:d.capture||!1:!1;e.call(a,b,c,d)}};function Ha(a,b,c){if(Array.isArray(b))for(var d=0;d<b.length;d++)Ha(a,String(b[d]),c);else null!=b&&c.push(a+(""===b?"":"="+encodeURIComponent(String(b))))};function Ia(){var a=I;try{var b;if(b=!!a&&null!=a.location.href)a:{try{u(a.foo);b=!0;break a}catch(c){}b=!1}return b}catch(c){return!1}}let J=[];const Ja=()=>{const a=J;J=[];for(const b of a)try{b()}catch(c){}};var Ka=a=>{var b=K;"complete"===b.readyState||"interactive"===b.readyState?(J.push(a),1==J.length&&(window.Promise?Promise.resolve().then(Ja):window.setImmediate?setImmediate(Ja):setTimeout(Ja,0))):b.addEventListener("DOMContentLoaded",a)};function La(a=null){return a&&"23"===a.getAttribute("data-jc")?a:document.querySelector('[data-jc="23"]')} 
function Ma(){if(!(.01<Math.random())){var a=La(document.currentScript);a=`https://${"pagead2.googlesyndication.com"}/pagead/gen_204?id=jca&jc=${23}&version=${a&&a.getAttribute("data-jc-version")||"unknown"}&sample=${.01}`;var b=window,c;if(c=b.navigator)c=b.navigator.userAgent,c=/Chrome/.test(c)&&!/Edge/.test(c)?!0:!1;c&&b.navigator.sendBeacon?b.navigator.sendBeacon(a):(b.google_image_requests||(b.google_image_requests=[]),c=b.document.createElement("img"),c.src=a,b.google_image_requests.push(c))}} 
;var K=document,L=window;class Na{constructor(a){this.F=a}}function M(a){return new Na(b=>b.substr(0,a.length+1).toLowerCase()===a+":")}const Oa=new Na(a=>/^[^:]*([/?#]|$)/.test(a));var Pa=M("http"),Qa=M("https"),Ra=M("ftp"),Sa=M("mailto");const Ta=[M("data"),Pa,Qa,Sa,Ra,Oa];function Ua(a=Ta){for(let b=0;b<a.length;++b){const c=a[b];if(c instanceof Na&&c.F("#"))return new Ba("#")}}function Va(a=Ta){return Ua(a)||Ca};const Wa=[Pa,Qa,Sa,Ra,Oa,M("market"),M("itms"),M("intent"),M("itms-appss")]; 
var Xa=()=>{var a=`${"http:"===L.location.protocol?"http:":"https:"}//${"pagead2.googlesyndication.com"}/pagead/gen_204`;return b=>{b={id:"unsafeurl",ctx:625,url:b};var c=[];for(d in b)Ha(d,b[d],c);var d=c.join("&");if(d){b=a.indexOf("#");0>b&&(b=a.length);c=a.indexOf("?");if(0>c||c>b){c=b;var e=""}else e=a.substring(c+1,b);b=[a.substr(0,c),e,a.substr(b)];c=b[1];b[1]=d?c?c+"&"+d:d:c;d=b[0]+(b[1]?"?"+b[1]:"")+b[2]}else d=a;navigator.sendBeacon&&navigator.sendBeacon(d,"")}};var Ya=(a,b)=>{if(a)for(let c in a)Object.prototype.hasOwnProperty.call(a,c)&&b.call(void 0,a[c],c,a)},Za=!!window.google_async_iframe_id;let I=Za&&window.parent||window;var $a=()=>{var a=K;try{return a.querySelectorAll("*[data-ifc]")}catch(b){return[]}},ab=(a,b)=>{a&&Ya(b,(c,d)=>{a.style[d]=c})},bb=a=>{var b=K.body;const c=document.createDocumentFragment(),d=a.length;for(let e=0;e<d;++e)c.appendChild(a[e]);b.appendChild(c)};var cb=(a=[])=>{l.google_logging_queue||(l.google_logging_queue=[]);l.google_logging_queue.push([12,a])};let N=null;var db=()=>{const a=l.performance;return a&&a.now&&a.timing?Math.floor(a.now()+a.timing.navigationStart):Date.now()},eb=()=>{const a=l.performance;return a&&a.now?a.now():null};class fb{constructor(a,b){var c=eb()||db();this.label=a;this.type=b;this.value=c;this.duration=0;this.uniqueId=Math.random();this.slotId=void 0}};const O=l.performance,gb=!!(O&&O.mark&&O.measure&&O.clearMarks),P=ea(()=>{var a;if(a=gb){var b;if(null===N){N="";try{a="";try{a=l.top.location.hash}catch(c){a=l.location.hash}a&&(N=(b=a.match(/\bdeid=([\d,]+)/))?b[1]:"")}catch(c){}}b=N;a=!!b.indexOf&&0<=b.indexOf("1337")}return a});function hb(a){a&&O&&P()&&(O.clearMarks(`goog_${a.label}_${a.uniqueId}_start`),O.clearMarks(`goog_${a.label}_${a.uniqueId}_end`))} 
class ib{constructor(){var a=Q;this.g=[];this.i=a||l;let b=null;a&&(a.google_js_reporting_queue=a.google_js_reporting_queue||[],this.g=a.google_js_reporting_queue,b=a.google_measure_js_timing);this.h=P()||(null!=b?b:1>Math.random())}start(a,b){if(!this.h)return null;a=new fb(a,b);b=`goog_${a.label}_${a.uniqueId}_start`;O&&P()&&O.mark(b);return a}end(a){if(this.h&&"number"===typeof a.value){a.duration=(eb()||db())-a.value;var b=`goog_${a.label}_${a.uniqueId}_end`;O&&P()&&O.mark(b);!this.h||2048<this.g.length|| 
this.g.push(a)}}};if(Za&&!Ia()){let a="."+K.domain;try{for(;2<a.split(".").length&&!Ia();)K.domain=a=a.substr(a.indexOf(".")+1),I=window.parent}catch(b){}Ia()||(I=window)}const Q=I,R=new ib;var jb=()=>{Q.google_measure_js_timing||(R.h=!1,R.g!=R.i.google_js_reporting_queue&&(P()&&p(R.g,hb),R.g.length=0))};"number"!==typeof Q.google_srt&&(Q.google_srt=Math.random());"complete"==Q.document.readyState?jb():R.h&&H(Q,"load",()=>{jb()});var kb=a=>{H(L,"message",b=>{let c;try{c=JSON.parse(b.data)}catch(d){return}!c||"ig"!==c.googMsgType||a(c,b)})};function W(){this.h=this.h;this.i=this.i}W.prototype.h=!1;function lb(a){a.h||(a.h=!0,a.j())}W.prototype.j=function(){if(this.i)for(;this.i.length;)this.i.shift()()};function X(a,b,c){W.call(this);this.l=a;this.B=b||0;this.o=c;this.u=n(this.A,this)}da(X,W);X.prototype.g=0;X.prototype.j=function(){X.G.j.call(this);0!=this.g&&l.clearTimeout(this.g);this.g=0;delete this.l;delete this.o}; 
X.prototype.start=function(a){0!=this.g&&l.clearTimeout(this.g);this.g=0;var b=this.u;a=void 0!==a?a:this.B;if("function"!==typeof b)if(b&&"function"==typeof b.handleEvent)b=n(b.handleEvent,b);else throw Error("Invalid listener argument");this.g=2147483647<Number(a)?-1:l.setTimeout(b,a||0)};X.prototype.A=function(){this.g=0;this.l&&this.l.call(this.o)};const mb={display:"inline-block",position:"absolute"},nb={display:"none",width:"100%",height:"100%",top:"0",left:"0"},Y=(a,b)=>{a&&(a.style.display=b?"inline-block":"none")};function ob(a=""){const b={top:0,right:0,bottom:0,left:0};a&&(a=a.split(","),4===a.length&&a.reduce((c,d)=>c&&!isNaN(+d),!0)&&([b.top,b.right,b.bottom,b.left]=a.map(c=>+c)));return b} 
function pb(a,b,c=2147483647){const d=K.createElement("div");ab(d,Object.assign(Object.assign(Object.assign({},mb),{"z-index":String(c)}),b));F(a.data,10)&&H(d,"click",aa);if(F(a.data,11)){a=b=K.createElement("a");c=Xa();const e=Va(Wa);e===Ca&&c("#");c=new t(Da(e),r);c instanceof t||c instanceof t||(c="object"==typeof c&&c.i?c.h():String(c),ja.test(c)||(c="about:invalid#zClosurez"),c=new t(c,r));a.href=fa(c);b.appendChild(d);return b}return d} 
function qb(a,b){var c,d,e,h,g=window;switch(E(b.m,5,1)){case 2:null===(d=null===(c=g.AFMA_Communicator)||void 0===c?void 0:c.addEventListener)||void 0===d?void 0:d.call(c,"onshow",()=>{Z(a,b)});break;case 10:H(L,"i-creative-view",()=>{Z(a,b)});break;case 4:H(K,"DOMContentLoaded",()=>{Z(a,b)});break;case 8:kb(f=>{f.rr&&Z(a,b)});break;case 9:"IntersectionObserver"in L&&(g=new IntersectionObserver(f=>{for(const k of f)if(0<k.intersectionRatio){Z(a,b);break}}),g.observe(K.body),a.H.push(g));break;case 11:null=== 
(h=null===(e=g.AFMA_Communicator)||void 0===e?void 0:e.addEventListener)||void 0===h?void 0:h.call(e,"onAdVisibilityChanged",()=>{Z(a,b)})}}function rb(a,b){b=ob(b);const c=E(a.data,9,0);a.i=[{width:"100%",height:b.top+c+"px",top:-c+"px",left:"0"},{width:b.right+c+"px",height:"100%",top:"0",right:-c+"px"},{width:"100%",height:b.bottom+c+"px",bottom:-c+"px",left:"0"},{width:b.left+c+"px",height:"100%",top:"0",left:-c+"px"}].map(d=>pb(a,d,9019))} 
function sb(a){var b=0;for(const d of a.B){const e=d.m,h=a.u[E(e,5,1)];d.s||void 0===h||(b=Math.max(b,h+E(e,2,0)))}a.j&&lb(a.j);b-=Date.now();const c=a.g;0<b?(Y(c,!0),a.j=new X(()=>{Y(c,!1)},b),a.j.start()):Y(c,!1)}function Z(a,b){if(!b.s){var c=E(b.m,5,1);a.u[c]=Date.now();F(b.m,9)&&(a.B.push(b),sb(a))}};window.googqscp=new class{constructor(){this.i=[];this.j=this.g=null;this.B=[];this.data=null;this.A=[];this.h=[];this.o=[];this.u={};this.H=[];this.l=null}init(a){cb([a]);this.data=new ya(a);a=ra(this.data);p(ta(a),e=>{this.o.push({C:0,s:!1,D:0,m:e,v:-1})});this.h=$a();let b=!1;a=this.h.length;for(let e=0;e<a;++e){var c=new sa(JSON.parse(this.h[e].getAttribute("data-ifc")||"[]"));p(ta(c),h=>{this.o.push({C:0,s:!1,D:0,m:h,v:e});1===E(h,4,1)&&(b=!0)})}a=!1;for(var d of this.o)c=d.m,0<E(c,2,0)&&0<E(c, 
5,1)?(!this.g&&F(c,9)&&(this.g=pb(this,nb)),qb(this,d)):E(c,1,"")&&F(c,9)&&rb(this,E(c,1,"")),E(c,1,"")&&(a=!0);d=[];this.g&&d.push(this.g);!b&&d.push(...this.i);K.body&&bb(d);F(this.data,13)&&Ka(()=>{const e=K.body.querySelectorAll(".amp-fcp, .amp-bcp");for(let g=0;g<e.length;++g){var h=(h=e[g])?L.getComputedStyle(h).getPropertyValue("position"):void 0;"absolute"===h&&Y(e[g],!1)}});H(K,"click",e=>{if(!1===e.isTrusted&&F(this.data,15))e.preventDefault?e.preventDefault():e.returnValue=!1,e.stopImmediatePropagation(), 
Ma();else{var h=-1,g=[];for(const w of this.o){var f=w.v,k=-1!==f;if(!(E(w.m,3,0)<=h||w.s||k&&!1===g[f])){var m=!k||g[f]||this.h[f].contains(e.target);k&&m&&(g[f]=!0);if(f=m)if(f=e,m=w,k=m.m,0<E(k,2,0)&&0<E(k,5,1))f=this.u[E(k,5,1)],f=void 0!==f&&Date.now()<f+E(k,2,0);else if(E(k,1,"")){{k=(0<=m.v?this.h[m.v]:K.body).getBoundingClientRect();var q=Number;var A=(A=K.body)?L.getComputedStyle(A).getPropertyValue("zoom"):void 0;q=q(A||"1");const [tb,ub]=[f.clientX,f.clientY],[S,T,ha,ia]=[tb/q-k.left,ub/ 
q-k.top,k.width,k.height];if(!(0<ha&&0<ia)||isNaN(S)||isNaN(T)||0>S||0>T)f=!1;else{m=ob(E(m.m,1,""));A=!(S>=m.left&&ha-S>m.right&&T>=m.top&&ia-T>m.bottom);if(this.l&&F(this.data,12)&&300>f.timeStamp-this.l.timeStamp){f=this.l.changedTouches[0];const [U,V]=[f.clientX/q-k.left,f.clientY/q-k.top];!isNaN(U)&&!isNaN(V)&&0<=U&&0<=V&&(A=A||!(U>=m.left&&ha-U>m.right&&V>=m.top&&ia-V>m.bottom))}f=A}}}else f=!0;if(f){var x=w;h=E(w.m,3,0)}}}if(x)switch(h=x.m,E(h,4,1)){case 2:case 3:e.preventDefault?e.preventDefault(): 
e.returnValue=!1;g=Date.now();500<g-x.D&&(x.D=g,++x.C);g=x.m;if(E(g,8,0)&&x.C>=E(g,8,0))if(x.s=!0,this.g&&0<E(g,2,0))sb(this);else if(0<this.i.length&&E(g,1,""))for(var G of this.i)Y(G,!1);Ma();G=h;va(G);G=pa(G.h);for(const w of this.A)w(e,G)}}},Ea);a&&F(this.data,12)&&H(K,"touchend",e=>{this.l=e},Fa)}registerCallback(a){this.A.push(a)}};}).call(this);