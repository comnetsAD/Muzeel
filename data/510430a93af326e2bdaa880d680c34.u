(function(){/*

 Copyright The Closure Library Authors.
 SPDX-License-Identifier: Apache-2.0
*/
'use strict';var l;function ba(a){var b=0;return function(){return b<a.length?{done:!1,value:a[b++]}:{done:!0}}}
var ca="function"==typeof Object.defineProperties?Object.defineProperty:function(a,b,c){if(a==Array.prototype||a==Object.prototype)return a;a[b]=c.value;return a};
function da(a){a=["object"==typeof globalThis&&globalThis,a,"object"==typeof window&&window,"object"==typeof self&&self,"object"==typeof global&&global];for(var b=0;b<a.length;++b){var c=a[b];if(c&&c.Math==Math)return c}throw Error("Cannot find global object");}
var ea=da(this);function q(a,b){if(b)a:{var c=ea;a=a.split(".");for(var d=0;d<a.length-1;d++){var e=a[d];if(!(e in c))break a;c=c[e]}a=a[a.length-1];d=c[a];b=b(d);b!=d&&null!=b&&ca(c,a,{configurable:!0,writable:!0,value:b})}}
q("Symbol",function(a){function b(f){if(this instanceof b)throw new TypeError("Symbol is not a constructor");return new c(d+(f||"")+"_"+e++,f)}
function c(f,g){this.h=f;ca(this,"description",{configurable:!0,writable:!0,value:g})}
if(a)return a;c.prototype.toString=function(){return this.h};
var d="jscomp_symbol_"+(1E9*Math.random()>>>0)+"_",e=0;return b});
q("Symbol.iterator",function(a){if(a)return a;a=Symbol("Symbol.iterator");for(var b="Array Int8Array Uint8Array Uint8ClampedArray Int16Array Uint16Array Int32Array Uint32Array Float32Array Float64Array".split(" "),c=0;c<b.length;c++){var d=ea[b[c]];"function"===typeof d&&"function"!=typeof d.prototype[a]&&ca(d.prototype,a,{configurable:!0,writable:!0,value:function(){return fa(ba(this))}})}return a});
function fa(a){a={next:a};a[Symbol.iterator]=function(){return this};
return a}
function ia(a){return a.raw=a}
function r(a){var b="undefined"!=typeof Symbol&&Symbol.iterator&&a[Symbol.iterator];return b?b.call(a):{next:ba(a)}}
function ja(a){if(!(a instanceof Array)){a=r(a);for(var b,c=[];!(b=a.next()).done;)c.push(b.value);a=c}return a}
function ka(a,b){return Object.prototype.hasOwnProperty.call(a,b)}
var la="function"==typeof Object.assign?Object.assign:function(a,b){for(var c=1;c<arguments.length;c++){var d=arguments[c];if(d)for(var e in d)ka(d,e)&&(a[e]=d[e])}return a};
q("Object.assign",function(a){return a||la});
var ma="function"==typeof Object.create?Object.create:function(a){function b(){}
b.prototype=a;return new b},na=function(){function a(){function c(){}
new c;Reflect.construct(c,[],function(){});
return new c instanceof c}
if("undefined"!=typeof Reflect&&Reflect.construct){if(a())return Reflect.construct;var b=Reflect.construct;return function(c,d,e){c=b(c,d);e&&Reflect.setPrototypeOf(c,e.prototype);return c}}return function(c,d,e){void 0===e&&(e=c);
e=ma(e.prototype||Object.prototype);return Function.prototype.apply.call(c,e,d)||e}}(),oa;
if("function"==typeof Object.setPrototypeOf)oa=Object.setPrototypeOf;else{var qa;a:{var sa={a:!0},ta={};try{ta.__proto__=sa;qa=ta.a;break a}catch(a){}qa=!1}oa=qa?function(a,b){a.__proto__=b;if(a.__proto__!==b)throw new TypeError(a+" is not extensible");return a}:null}var va=oa;
function u(a,b){a.prototype=ma(b.prototype);a.prototype.constructor=a;if(va)va(a,b);else for(var c in b)if("prototype"!=c)if(Object.defineProperties){var d=Object.getOwnPropertyDescriptor(b,c);d&&Object.defineProperty(a,c,d)}else a[c]=b[c];a.va=b.prototype}
function wa(){this.D=!1;this.l=null;this.i=void 0;this.h=1;this.m=this.s=0;this.v=this.j=null}
function xa(a){if(a.D)throw new TypeError("Generator is already running");a.D=!0}
wa.prototype.X=function(a){this.i=a};
function ya(a,b){a.j={od:b,xd:!0};a.h=a.s||a.m}
wa.prototype.return=function(a){this.j={return:a};this.h=this.m};
function w(a,b,c){a.h=c;return{value:b}}
wa.prototype.A=function(a){this.h=a};
function za(a,b,c){a.s=b;void 0!=c&&(a.m=c)}
function Aa(a,b){a.h=b;a.s=0}
function Ba(a){a.s=0;var b=a.j.od;a.j=null;return b}
function Ca(a){a.v=[a.j];a.s=0;a.m=0}
function Da(a){var b=a.v.splice(0)[0];(b=a.j=a.j||b)?b.xd?a.h=a.s||a.m:void 0!=b.A&&a.m<b.A?(a.h=b.A,a.j=null):a.h=a.m:a.h=0}
function Ea(a){this.h=new wa;this.i=a}
function Fa(a,b){xa(a.h);var c=a.h.l;if(c)return Ga(a,"return"in c?c["return"]:function(d){return{value:d,done:!0}},b,a.h.return);
a.h.return(b);return Ha(a)}
function Ga(a,b,c,d){try{var e=b.call(a.h.l,c);if(!(e instanceof Object))throw new TypeError("Iterator result "+e+" is not an object");if(!e.done)return a.h.D=!1,e;var f=e.value}catch(g){return a.h.l=null,ya(a.h,g),Ha(a)}a.h.l=null;d.call(a.h,f);return Ha(a)}
function Ha(a){for(;a.h.h;)try{var b=a.i(a.h);if(b)return a.h.D=!1,{value:b.value,done:!1}}catch(c){a.h.i=void 0,ya(a.h,c)}a.h.D=!1;if(a.h.j){b=a.h.j;a.h.j=null;if(b.xd)throw b.od;return{value:b.return,done:!0}}return{value:void 0,done:!0}}
function Ia(a){this.next=function(b){xa(a.h);a.h.l?b=Ga(a,a.h.l.next,b,a.h.X):(a.h.X(b),b=Ha(a));return b};
this.throw=function(b){xa(a.h);a.h.l?b=Ga(a,a.h.l["throw"],b,a.h.X):(ya(a.h,b),b=Ha(a));return b};
this.return=function(b){return Fa(a,b)};
this[Symbol.iterator]=function(){return this}}
function Ja(a){function b(d){return a.next(d)}
function c(d){return a.throw(d)}
return new Promise(function(d,e){function f(g){g.done?d(g.value):Promise.resolve(g.value).then(b,c).then(f,e)}
f(a.next())})}
function x(a){return Ja(new Ia(new Ea(a)))}
function Ka(){for(var a=Number(this),b=[],c=a;c<arguments.length;c++)b[c-a]=arguments[c];return b}
q("Reflect",function(a){return a?a:{}});
q("Reflect.construct",function(){return na});
q("Reflect.setPrototypeOf",function(a){return a?a:va?function(b,c){try{return va(b,c),!0}catch(d){return!1}}:null});
q("Promise",function(a){function b(g){this.h=0;this.j=void 0;this.i=[];this.D=!1;var h=this.l();try{g(h.resolve,h.reject)}catch(k){h.reject(k)}}
function c(){this.h=null}
function d(g){return g instanceof b?g:new b(function(h){h(g)})}
if(a)return a;c.prototype.i=function(g){if(null==this.h){this.h=[];var h=this;this.j(function(){h.m()})}this.h.push(g)};
var e=ea.setTimeout;c.prototype.j=function(g){e(g,0)};
c.prototype.m=function(){for(;this.h&&this.h.length;){var g=this.h;this.h=[];for(var h=0;h<g.length;++h){var k=g[h];g[h]=null;try{k()}catch(m){this.l(m)}}}this.h=null};
c.prototype.l=function(g){this.j(function(){throw g;})};
b.prototype.l=function(){function g(m){return function(n){k||(k=!0,m.call(h,n))}}
var h=this,k=!1;return{resolve:g(this.V),reject:g(this.m)}};
b.prototype.V=function(g){if(g===this)this.m(new TypeError("A Promise cannot resolve to itself"));else if(g instanceof b)this.aa(g);else{a:switch(typeof g){case "object":var h=null!=g;break a;case "function":h=!0;break a;default:h=!1}h?this.S(g):this.s(g)}};
b.prototype.S=function(g){var h=void 0;try{h=g.then}catch(k){this.m(k);return}"function"==typeof h?this.ia(h,g):this.s(g)};
b.prototype.m=function(g){this.X(2,g)};
b.prototype.s=function(g){this.X(1,g)};
b.prototype.X=function(g,h){if(0!=this.h)throw Error("Cannot settle("+g+", "+h+"): Promise already settled in state"+this.h);this.h=g;this.j=h;2===this.h&&this.Z();this.v()};
b.prototype.Z=function(){var g=this;e(function(){if(g.N()){var h=ea.console;"undefined"!==typeof h&&h.error(g.j)}},1)};
b.prototype.N=function(){if(this.D)return!1;var g=ea.CustomEvent,h=ea.Event,k=ea.dispatchEvent;if("undefined"===typeof k)return!0;"function"===typeof g?g=new g("unhandledrejection",{cancelable:!0}):"function"===typeof h?g=new h("unhandledrejection",{cancelable:!0}):(g=ea.document.createEvent("CustomEvent"),g.initCustomEvent("unhandledrejection",!1,!0,g));g.promise=this;g.reason=this.j;return k(g)};
b.prototype.v=function(){if(null!=this.i){for(var g=0;g<this.i.length;++g)f.i(this.i[g]);this.i=null}};
var f=new c;b.prototype.aa=function(g){var h=this.l();g.ec(h.resolve,h.reject)};
b.prototype.ia=function(g,h){var k=this.l();try{g.call(h,k.resolve,k.reject)}catch(m){k.reject(m)}};
b.prototype.then=function(g,h){function k(v,t){return"function"==typeof v?function(y){try{m(v(y))}catch(D){n(D)}}:t}
var m,n,p=new b(function(v,t){m=v;n=t});
this.ec(k(g,m),k(h,n));return p};
b.prototype.catch=function(g){return this.then(void 0,g)};
b.prototype.ec=function(g,h){function k(){switch(m.h){case 1:g(m.j);break;case 2:h(m.j);break;default:throw Error("Unexpected state: "+m.h);}}
var m=this;null==this.i?f.i(k):this.i.push(k);this.D=!0};
b.resolve=d;b.reject=function(g){return new b(function(h,k){k(g)})};
b.race=function(g){return new b(function(h,k){for(var m=r(g),n=m.next();!n.done;n=m.next())d(n.value).ec(h,k)})};
b.all=function(g){var h=r(g),k=h.next();return k.done?d([]):new b(function(m,n){function p(y){return function(D){v[y]=D;t--;0==t&&m(v)}}
var v=[],t=0;do v.push(void 0),t++,d(k.value).ec(p(v.length-1),n),k=h.next();while(!k.done)})};
return b});
q("WeakMap",function(a){function b(k){this.h=(h+=Math.random()+1).toString();if(k){k=r(k);for(var m;!(m=k.next()).done;)m=m.value,this.set(m[0],m[1])}}
function c(){}
function d(k){var m=typeof k;return"object"===m&&null!==k||"function"===m}
function e(k){if(!ka(k,g)){var m=new c;ca(k,g,{value:m})}}
function f(k){var m=Object[k];m&&(Object[k]=function(n){if(n instanceof c)return n;Object.isExtensible(n)&&e(n);return m(n)})}
if(function(){if(!a||!Object.seal)return!1;try{var k=Object.seal({}),m=Object.seal({}),n=new a([[k,2],[m,3]]);if(2!=n.get(k)||3!=n.get(m))return!1;n.delete(k);n.set(m,4);return!n.has(k)&&4==n.get(m)}catch(p){return!1}}())return a;
var g="$jscomp_hidden_"+Math.random();f("freeze");f("preventExtensions");f("seal");var h=0;b.prototype.set=function(k,m){if(!d(k))throw Error("Invalid WeakMap key");e(k);if(!ka(k,g))throw Error("WeakMap key fail: "+k);k[g][this.h]=m;return this};
b.prototype.get=function(k){return d(k)&&ka(k,g)?k[g][this.h]:void 0};
b.prototype.has=function(k){return d(k)&&ka(k,g)&&ka(k[g],this.h)};
b.prototype.delete=function(k){return d(k)&&ka(k,g)&&ka(k[g],this.h)?delete k[g][this.h]:!1};
return b});
q("Map",function(a){function b(){var h={};return h.previous=h.next=h.head=h}
function c(h,k){var m=h.h;return fa(function(){if(m){for(;m.head!=h.h;)m=m.previous;for(;m.next!=m.head;)return m=m.next,{done:!1,value:k(m)};m=null}return{done:!0,value:void 0}})}
function d(h,k){var m=k&&typeof k;"object"==m||"function"==m?f.has(k)?m=f.get(k):(m=""+ ++g,f.set(k,m)):m="p_"+k;var n=h.data_[m];if(n&&ka(h.data_,m))for(h=0;h<n.length;h++){var p=n[h];if(k!==k&&p.key!==p.key||k===p.key)return{id:m,list:n,index:h,entry:p}}return{id:m,list:n,index:-1,entry:void 0}}
function e(h){this.data_={};this.h=b();this.size=0;if(h){h=r(h);for(var k;!(k=h.next()).done;)k=k.value,this.set(k[0],k[1])}}
if(function(){if(!a||"function"!=typeof a||!a.prototype.entries||"function"!=typeof Object.seal)return!1;try{var h=Object.seal({x:4}),k=new a(r([[h,"s"]]));if("s"!=k.get(h)||1!=k.size||k.get({x:4})||k.set({x:4},"t")!=k||2!=k.size)return!1;var m=k.entries(),n=m.next();if(n.done||n.value[0]!=h||"s"!=n.value[1])return!1;n=m.next();return n.done||4!=n.value[0].x||"t"!=n.value[1]||!m.next().done?!1:!0}catch(p){return!1}}())return a;
var f=new WeakMap;e.prototype.set=function(h,k){h=0===h?0:h;var m=d(this,h);m.list||(m.list=this.data_[m.id]=[]);m.entry?m.entry.value=k:(m.entry={next:this.h,previous:this.h.previous,head:this.h,key:h,value:k},m.list.push(m.entry),this.h.previous.next=m.entry,this.h.previous=m.entry,this.size++);return this};
e.prototype.delete=function(h){h=d(this,h);return h.entry&&h.list?(h.list.splice(h.index,1),h.list.length||delete this.data_[h.id],h.entry.previous.next=h.entry.next,h.entry.next.previous=h.entry.previous,h.entry.head=null,this.size--,!0):!1};
e.prototype.clear=function(){this.data_={};this.h=this.h.previous=b();this.size=0};
e.prototype.has=function(h){return!!d(this,h).entry};
e.prototype.get=function(h){return(h=d(this,h).entry)&&h.value};
e.prototype.entries=function(){return c(this,function(h){return[h.key,h.value]})};
e.prototype.keys=function(){return c(this,function(h){return h.key})};
e.prototype.values=function(){return c(this,function(h){return h.value})};
e.prototype.forEach=function(h,k){for(var m=this.entries(),n;!(n=m.next()).done;)n=n.value,h.call(k,n[1],n[0],this)};
e.prototype[Symbol.iterator]=e.prototype.entries;var g=0;return e});
function La(a,b,c){if(null==a)throw new TypeError("The 'this' value for String.prototype."+c+" must not be null or undefined");if(b instanceof RegExp)throw new TypeError("First argument to String.prototype."+c+" must not be a regular expression");return a+""}
q("String.prototype.endsWith",function(a){return a?a:function(b,c){var d=La(this,b,"endsWith");b+="";void 0===c&&(c=d.length);c=Math.max(0,Math.min(c|0,d.length));for(var e=b.length;0<e&&0<c;)if(d[--c]!=b[--e])return!1;return 0>=e}});
q("Array.prototype.find",function(a){return a?a:function(b,c){a:{var d=this;d instanceof String&&(d=String(d));for(var e=d.length,f=0;f<e;f++){var g=d[f];if(b.call(c,g,f,d)){b=g;break a}}b=void 0}return b}});
q("String.prototype.startsWith",function(a){return a?a:function(b,c){var d=La(this,b,"startsWith");b+="";var e=d.length,f=b.length;c=Math.max(0,Math.min(c|0,d.length));for(var g=0;g<f&&c<e;)if(d[c++]!=b[g++])return!1;return g>=f}});
q("Number.isFinite",function(a){return a?a:function(b){return"number"!==typeof b?!1:!isNaN(b)&&Infinity!==b&&-Infinity!==b}});
q("Number.isInteger",function(a){return a?a:function(b){return Number.isFinite(b)?b===Math.floor(b):!1}});
q("Number.MAX_SAFE_INTEGER",function(){return 9007199254740991});
q("Number.isNaN",function(a){return a?a:function(b){return"number"===typeof b&&isNaN(b)}});
function Ma(a,b){a instanceof String&&(a+="");var c=0,d=!1,e={next:function(){if(!d&&c<a.length){var f=c++;return{value:b(f,a[f]),done:!1}}d=!0;return{done:!0,value:void 0}}};
e[Symbol.iterator]=function(){return e};
return e}
q("Array.prototype.entries",function(a){return a?a:function(){return Ma(this,function(b,c){return[b,c]})}});
q("Array.from",function(a){return a?a:function(b,c,d){c=null!=c?c:function(h){return h};
var e=[],f="undefined"!=typeof Symbol&&Symbol.iterator&&b[Symbol.iterator];if("function"==typeof f){b=f.call(b);for(var g=0;!(f=b.next()).done;)e.push(c.call(d,f.value,g++))}else for(f=b.length,g=0;g<f;g++)e.push(c.call(d,b[g],g));return e}});
q("Array.prototype.keys",function(a){return a?a:function(){return Ma(this,function(b){return b})}});
q("Array.prototype.values",function(a){return a?a:function(){return Ma(this,function(b,c){return c})}});
q("Array.prototype.fill",function(a){return a?a:function(b,c,d){var e=this.length||0;0>c&&(c=Math.max(0,e+c));if(null==d||d>e)d=e;d=Number(d);0>d&&(d=Math.max(0,e+d));for(c=Number(c||0);c<d;c++)this[c]=b;return this}});
function Na(a){return a?a:Array.prototype.fill}
q("Int8Array.prototype.fill",Na);q("Uint8Array.prototype.fill",Na);q("Uint8ClampedArray.prototype.fill",Na);q("Int16Array.prototype.fill",Na);q("Uint16Array.prototype.fill",Na);q("Int32Array.prototype.fill",Na);q("Uint32Array.prototype.fill",Na);q("Float32Array.prototype.fill",Na);q("Float64Array.prototype.fill",Na);q("Object.setPrototypeOf",function(a){return a||va});
q("Set",function(a){function b(c){this.h=new Map;if(c){c=r(c);for(var d;!(d=c.next()).done;)this.add(d.value)}this.size=this.h.size}
if(function(){if(!a||"function"!=typeof a||!a.prototype.entries||"function"!=typeof Object.seal)return!1;try{var c=Object.seal({x:4}),d=new a(r([c]));if(!d.has(c)||1!=d.size||d.add(c)!=d||1!=d.size||d.add({x:4})!=d||2!=d.size)return!1;var e=d.entries(),f=e.next();if(f.done||f.value[0]!=c||f.value[1]!=c)return!1;f=e.next();return f.done||f.value[0]==c||4!=f.value[0].x||f.value[1]!=f.value[0]?!1:e.next().done}catch(g){return!1}}())return a;
b.prototype.add=function(c){c=0===c?0:c;this.h.set(c,c);this.size=this.h.size;return this};
b.prototype.delete=function(c){c=this.h.delete(c);this.size=this.h.size;return c};
b.prototype.clear=function(){this.h.clear();this.size=0};
b.prototype.has=function(c){return this.h.has(c)};
b.prototype.entries=function(){return this.h.entries()};
b.prototype.values=function(){return this.h.values()};
b.prototype.keys=b.prototype.values;b.prototype[Symbol.iterator]=b.prototype.values;b.prototype.forEach=function(c,d){var e=this;this.h.forEach(function(f){return c.call(d,f,f,e)})};
return b});
q("Object.entries",function(a){return a?a:function(b){var c=[],d;for(d in b)ka(b,d)&&c.push([d,b[d]]);return c}});
q("Object.is",function(a){return a?a:function(b,c){return b===c?0!==b||1/b===1/c:b!==b&&c!==c}});
q("Array.prototype.includes",function(a){return a?a:function(b,c){var d=this;d instanceof String&&(d=String(d));var e=d.length;c=c||0;for(0>c&&(c=Math.max(c+e,0));c<e;c++){var f=d[c];if(f===b||Object.is(f,b))return!0}return!1}});
q("String.prototype.includes",function(a){return a?a:function(b,c){return-1!==La(this,b,"includes").indexOf(b,c||0)}});
q("globalThis",function(a){return a||ea});
q("Object.values",function(a){return a?a:function(b){var c=[],d;for(d in b)ka(b,d)&&c.push(b[d]);return c}});
var Oa=Oa||{},z=this||self;function A(a,b,c){a=a.split(".");c=c||z;a[0]in c||"undefined"==typeof c.execScript||c.execScript("var "+a[0]);for(var d;a.length&&(d=a.shift());)a.length||void 0===b?c[d]&&c[d]!==Object.prototype[d]?c=c[d]:c=c[d]={}:c[d]=b}
function B(a,b){a=a.split(".");b=b||z;for(var c=0;c<a.length;c++)if(b=b[a[c]],null==b)return null;return b}
function Pa(a){a.Gc=void 0;a.getInstance=function(){return a.Gc?a.Gc:a.Gc=new a}}
function Qa(a){var b=typeof a;return"object"!=b?b:a?Array.isArray(a)?"array":b:"null"}
function Ra(a){var b=Qa(a);return"array"==b||"object"==b&&"number"==typeof a.length}
function Sa(a){var b=typeof a;return"object"==b&&null!=a||"function"==b}
function Ta(a){return Object.prototype.hasOwnProperty.call(a,Ua)&&a[Ua]||(a[Ua]=++Va)}
var Ua="closure_uid_"+(1E9*Math.random()>>>0),Va=0;function Wa(a,b,c){return a.call.apply(a.bind,arguments)}
function Xa(a,b,c){if(!a)throw Error();if(2<arguments.length){var d=Array.prototype.slice.call(arguments,2);return function(){var e=Array.prototype.slice.call(arguments);Array.prototype.unshift.apply(e,d);return a.apply(b,e)}}return function(){return a.apply(b,arguments)}}
function Za(a,b,c){Function.prototype.bind&&-1!=Function.prototype.bind.toString().indexOf("native code")?Za=Wa:Za=Xa;return Za.apply(null,arguments)}
function $a(a,b){var c=Array.prototype.slice.call(arguments,1);return function(){var d=c.slice();d.push.apply(d,arguments);return a.apply(this,d)}}
function ab(a,b){function c(){}
c.prototype=b.prototype;a.va=b.prototype;a.prototype=new c;a.prototype.constructor=a;a.qt=function(d,e,f){for(var g=Array(arguments.length-2),h=2;h<arguments.length;h++)g[h-2]=arguments[h];return b.prototype[e].apply(d,g)}}
function bb(a){return a}
;function cb(a,b){if(Error.captureStackTrace)Error.captureStackTrace(this,cb);else{var c=Error().stack;c&&(this.stack=c)}a&&(this.message=String(a));void 0!==b&&(this.cause=b)}
ab(cb,Error);cb.prototype.name="CustomError";function db(a){a=a.url;var b=/[?&]dsh=1(&|$)/.test(a);this.j=!b&&/[?&]ae=1(&|$)/.test(a);this.l=!b&&/[?&]ae=2(&|$)/.test(a);if((this.h=/[?&]adurl=([^&]*)/.exec(a))&&this.h[1]){try{var c=decodeURIComponent(this.h[1])}catch(d){c=null}this.i=c}}
;function eb(){}
function fb(a){var b=!1,c;return function(){b||(c=a(),b=!0);return c}}
;var gb=Array.prototype.indexOf?function(a,b){return Array.prototype.indexOf.call(a,b,void 0)}:function(a,b){if("string"===typeof a)return"string"!==typeof b||1!=b.length?-1:a.indexOf(b,0);
for(var c=0;c<a.length;c++)if(c in a&&a[c]===b)return c;return-1},hb=Array.prototype.forEach?function(a,b,c){Array.prototype.forEach.call(a,b,c)}:function(a,b,c){for(var d=a.length,e="string"===typeof a?a.split(""):a,f=0;f<d;f++)f in e&&b.call(c,e[f],f,a)},ib=Array.prototype.filter?function(a,b){return Array.prototype.filter.call(a,b,void 0)}:function(a,b){for(var c=a.length,d=[],e=0,f="string"===typeof a?a.split(""):a,g=0;g<c;g++)if(g in f){var h=f[g];
b.call(void 0,h,g,a)&&(d[e++]=h)}return d},jb=Array.prototype.map?function(a,b){return Array.prototype.map.call(a,b,void 0)}:function(a,b){for(var c=a.length,d=Array(c),e="string"===typeof a?a.split(""):a,f=0;f<c;f++)f in e&&(d[f]=b.call(void 0,e[f],f,a));
return d},kb=Array.prototype.reduce?function(a,b,c){return Array.prototype.reduce.call(a,b,c)}:function(a,b,c){var d=c;
hb(a,function(e,f){d=b.call(void 0,d,e,f,a)});
return d};
function lb(a,b){a:{for(var c=a.length,d="string"===typeof a?a.split(""):a,e=0;e<c;e++)if(e in d&&b.call(void 0,d[e],e,a)){b=e;break a}b=-1}return 0>b?null:"string"===typeof a?a.charAt(b):a[b]}
function mb(a,b){b=gb(a,b);var c;(c=0<=b)&&Array.prototype.splice.call(a,b,1);return c}
function nb(a,b){for(var c=1;c<arguments.length;c++){var d=arguments[c];if(Ra(d)){var e=a.length||0,f=d.length||0;a.length=e+f;for(var g=0;g<f;g++)a[e+g]=d[g]}else a.push(d)}}
;function ob(a,b){for(var c in a)b.call(void 0,a[c],c,a)}
function pb(a){var b=qb,c;for(c in b)if(a.call(void 0,b[c],c,b))return c}
function rb(a){for(var b in a)return!1;return!0}
function sb(a,b){if(null!==a&&b in a)throw Error('The object already contains the key "'+b+'"');a[b]=!0}
function tb(a){return null!==a&&"privembed"in a?a.privembed:!1}
function ub(a,b){for(var c in a)if(!(c in b)||a[c]!==b[c])return!1;for(var d in b)if(!(d in a))return!1;return!0}
function vb(a){var b={},c;for(c in a)b[c]=a[c];return b}
function wb(a){if(!a||"object"!==typeof a)return a;if("function"===typeof a.clone)return a.clone();if("undefined"!==typeof Map&&a instanceof Map)return new Map(a);if("undefined"!==typeof Set&&a instanceof Set)return new Set(a);if(a instanceof Date)return new Date(a.getTime());var b=Array.isArray(a)?[]:"function"!==typeof ArrayBuffer||"function"!==typeof ArrayBuffer.isView||!ArrayBuffer.isView(a)||a instanceof DataView?{}:new a.constructor(a.length),c;for(c in a)b[c]=wb(a[c]);return b}
var yb="constructor hasOwnProperty isPrototypeOf propertyIsEnumerable toLocaleString toString valueOf".split(" ");function zb(a,b){for(var c,d,e=1;e<arguments.length;e++){d=arguments[e];for(c in d)a[c]=d[c];for(var f=0;f<yb.length;f++)c=yb[f],Object.prototype.hasOwnProperty.call(d,c)&&(a[c]=d[c])}}
;var Ab;function Bb(){if(void 0===Ab){var a=null,b=z.trustedTypes;if(b&&b.createPolicy){try{a=b.createPolicy("goog#html",{createHTML:bb,createScript:bb,createScriptURL:bb})}catch(c){z.console&&z.console.error(c.message)}Ab=a}else Ab=a}return Ab}
;function Cb(a,b){this.j=a===Db&&b||""}
Cb.prototype.i=!0;Cb.prototype.h=function(){return this.j};
function Eb(a){return new Cb(Db,a)}
var Db={};Eb("");var Fb={};function Gb(a,b){this.j=b===Fb?a:"";this.i=!0}
Gb.prototype.toString=function(){return this.j.toString()};
Gb.prototype.h=function(){return this.j.toString()};function Hb(a,b){this.j=b===Ib?a:""}
Hb.prototype.toString=function(){return this.j+""};
Hb.prototype.i=!0;Hb.prototype.h=function(){return this.j.toString()};
function Jb(a){if(a instanceof Hb&&a.constructor===Hb)return a.j;Qa(a);return"type_error:TrustedResourceUrl"}
var Ib={};function Kb(a){var b=Bb();a=b?b.createScriptURL(a):a;return new Hb(a,Ib)}
;var Lb=String.prototype.trim?function(a){return a.trim()}:function(a){return/^[\s\xa0]*([\s\S]*?)[\s\xa0]*$/.exec(a)[1]};
function Mb(a,b){return a<b?-1:a>b?1:0}
;function Nb(a,b){this.j=b===Ob?a:""}
Nb.prototype.toString=function(){return this.j.toString()};
Nb.prototype.i=!0;Nb.prototype.h=function(){return this.j.toString()};
function Pb(a){if(a instanceof Nb&&a.constructor===Nb)return a.j;Qa(a);return"type_error:SafeUrl"}
var Sb=/^(?:(?:https?|mailto|ftp):|[^:/?#]*(?:[/?#]|$))/i,Ob={},Tb=new Nb("about:invalid#zClosurez",Ob);function Ub(){var a=z.navigator;return a&&(a=a.userAgent)?a:""}
function C(a){return-1!=Ub().indexOf(a)}
;function Vb(){return C("Trident")||C("MSIE")}
function Wb(){return C("Firefox")||C("FxiOS")}
function Xb(){return C("Safari")&&!(Yb()||C("Coast")||C("Opera")||C("Edge")||C("Edg/")||C("OPR")||Wb()||C("Silk")||C("Android"))}
function Yb(){return(C("Chrome")||C("CriOS"))&&!C("Edge")||C("Silk")}
function Zb(){return C("Android")&&!(Yb()||Wb()||C("Opera")||C("Silk"))}
function $b(a){var b={};a.forEach(function(c){b[c[0]]=c[1]});
return function(c){return b[c.find(function(d){return d in b})]||""}}
function ac(a){var b=Ub();if("Internet Explorer"===a){if(Vb())if((a=/rv: *([\d\.]*)/.exec(b))&&a[1])b=a[1];else{a="";var c=/MSIE +([\d\.]+)/.exec(b);if(c&&c[1])if(b=/Trident\/(\d.\d)/.exec(b),"7.0"==c[1])if(b&&b[1])switch(b[1]){case "4.0":a="8.0";break;case "5.0":a="9.0";break;case "6.0":a="10.0";break;case "7.0":a="11.0"}else a="7.0";else a=c[1];b=a}else b="";return b}var d=RegExp("([A-Z][\\w ]+)/([^\\s]+)\\s*(?:\\((.*?)\\))?","g");c=[];for(var e;e=d.exec(b);)c.push([e[1],e[2],e[3]||void 0]);b=$b(c);
switch(a){case "Opera":if(C("Opera"))return b(["Version","Opera"]);if(C("OPR"))return b(["OPR"]);break;case "Microsoft Edge":if(C("Edge"))return b(["Edge"]);if(C("Edg/"))return b(["Edg"]);break;case "Chromium":if(Yb())return b(["Chrome","CriOS","HeadlessChrome"])}return"Firefox"===a&&Wb()||"Safari"===a&&Xb()||"Android Browser"===a&&Zb()||"Silk"===a&&C("Silk")?(b=c[2])&&b[1]||"":""}
function bc(a){a=ac(a);if(""===a)return NaN;a=a.split(".");return 0===a.length?NaN:Number(a[0])}
;var cc={};function dc(a){this.j=cc===cc?a:"";this.i=!0}
dc.prototype.h=function(){return this.j.toString()};
dc.prototype.toString=function(){return this.j.toString()};function ec(a,b){b instanceof Nb||b instanceof Nb||(b="object"==typeof b&&b.i?b.h():String(b),Sb.test(b)||(b="about:invalid#zClosurez"),b=new Nb(b,Ob));a.href=Pb(b)}
function fc(a,b){a.rel="stylesheet";a.href=Jb(b).toString();(b=gc('style[nonce],link[rel="stylesheet"][nonce]',a.ownerDocument&&a.ownerDocument.defaultView))&&a.setAttribute("nonce",b)}
function hc(){return gc("script[nonce]")}
var ic=/^[\w+/_-]+[=]{0,2}$/;function gc(a,b){b=(b||z).document;return b.querySelector?(a=b.querySelector(a))&&(a=a.nonce||a.getAttribute("nonce"))&&ic.test(a)?a:"":""}
;function jc(a){for(var b=0,c=0;c<a.length;++c)b=31*b+a.charCodeAt(c)>>>0;return b}
;var kc=RegExp("^(?:([^:/?#.]+):)?(?://(?:([^\\\\/?#]*)@)?([^\\\\/?#]*?)(?::([0-9]+))?(?=[\\\\/?#]|$))?([^?#]+)?(?:\\?([^#]*))?(?:#([\\s\\S]*))?$");function lc(a){return a?decodeURI(a):a}
function oc(a,b){return b.match(kc)[a]||null}
function pc(a){return lc(oc(3,a))}
function qc(a){var b=a.match(kc);a=b[5];var c=b[6];b=b[7];var d="";a&&(d+=a);c&&(d+="?"+c);b&&(d+="#"+b);return d}
function rc(a,b){if(!b)return a;var c=a.indexOf("#");0>c&&(c=a.length);var d=a.indexOf("?");if(0>d||d>c){d=c;var e=""}else e=a.substring(d+1,c);a=[a.slice(0,d),e,a.slice(c)];c=a[1];a[1]=b?c?c+"&"+b:b:c;return a[0]+(a[1]?"?"+a[1]:"")+a[2]}
function sc(a,b,c){if(Array.isArray(b))for(var d=0;d<b.length;d++)sc(a,String(b[d]),c);else null!=b&&c.push(a+(""===b?"":"="+encodeURIComponent(String(b))))}
function tc(a,b){var c=[];for(b=b||0;b<a.length;b+=2)sc(a[b],a[b+1],c);return c.join("&")}
function uc(a){var b=[],c;for(c in a)sc(c,a[c],b);return b.join("&")}
function vc(a,b){var c=2==arguments.length?tc(arguments[1],0):tc(arguments,1);return rc(a,c)}
function wc(a,b){b=uc(b);return rc(a,b)}
function xc(a,b,c){c=null!=c?"="+encodeURIComponent(String(c)):"";return rc(a,b+c)}
function yc(a,b,c,d){for(var e=c.length;0<=(b=a.indexOf(c,b))&&b<d;){var f=a.charCodeAt(b-1);if(38==f||63==f)if(f=a.charCodeAt(b+e),!f||61==f||38==f||35==f)return b;b+=e+1}return-1}
var zc=/#|$/,Ac=/[?&]($|#)/;function Bc(a,b){for(var c=a.search(zc),d=0,e,f=[];0<=(e=yc(a,d,b,c));)f.push(a.substring(d,e)),d=Math.min(a.indexOf("&",e)+1||c,c);f.push(a.slice(d));return f.join("").replace(Ac,"$1")}
;function Cc(a){z.setTimeout(function(){throw a;},0)}
;function Dc(){return C("iPhone")&&!C("iPod")&&!C("iPad")}
function Ec(){var a=Ub(),b="";C("Windows")?(b=/Windows (?:NT|Phone) ([0-9.]+)/,b=(a=b.exec(a))?a[1]:"0.0"):Dc()||C("iPad")||C("iPod")?(b=/(?:iPhone|iPod|iPad|CPU)\s+OS\s+(\S+)/,b=(a=b.exec(a))&&a[1].replace(/_/g,".")):C("Macintosh")?(b=/Mac OS X ([0-9_.]+)/,b=(a=b.exec(a))?a[1].replace(/_/g,"."):"10"):-1!=Ub().toLowerCase().indexOf("kaios")?(b=/(?:KaiOS)\/(\S+)/i,b=(a=b.exec(a))&&a[1]):C("Android")?(b=/Android\s+([^\);]+)(\)|;)/,b=(a=b.exec(a))&&a[1]):C("CrOS")&&(b=/(?:CrOS\s+(?:i686|x86_64)\s+([0-9.]+))/,
b=(a=b.exec(a))&&a[1]);a=0;b=Lb(String(b||"")).split(".");for(var c=Lb("12").split("."),d=Math.max(b.length,c.length),e=0;0==a&&e<d;e++){var f=b[e]||"",g=c[e]||"";do{f=/(\d*)(\D*)(.*)/.exec(f)||["","","",""];g=/(\d*)(\D*)(.*)/.exec(g)||["","","",""];if(0==f[0].length&&0==g[0].length)break;a=Mb(0==f[1].length?0:parseInt(f[1],10),0==g[1].length?0:parseInt(g[1],10))||Mb(0==f[2].length,0==g[2].length)||Mb(f[2],g[2]);f=f[3];g=g[3]}while(0==a)}}
;function Fc(a){Fc[" "](a);return a}
Fc[" "]=function(){};var Gc=C("Opera"),Hc=Vb(),Ic=C("Edge"),Jc=C("Gecko")&&!(-1!=Ub().toLowerCase().indexOf("webkit")&&!C("Edge"))&&!(C("Trident")||C("MSIE"))&&!C("Edge"),Kc=-1!=Ub().toLowerCase().indexOf("webkit")&&!C("Edge"),Lc=C("Android");function Mc(){var a=z.document;return a?a.documentMode:void 0}
var Nc;a:{var Oc="",Pc=function(){var a=Ub();if(Jc)return/rv:([^\);]+)(\)|;)/.exec(a);if(Ic)return/Edge\/([\d\.]+)/.exec(a);if(Hc)return/\b(?:MSIE|rv)[: ]([^\);]+)(\)|;)/.exec(a);if(Kc)return/WebKit\/(\S+)/.exec(a);if(Gc)return/(?:Version)[ \/]?(\S+)/.exec(a)}();
Pc&&(Oc=Pc?Pc[1]:"");if(Hc){var Tc=Mc();if(null!=Tc&&Tc>parseFloat(Oc)){Nc=String(Tc);break a}}Nc=Oc}var Uc=Nc,Vc;if(z.document&&Hc){var Wc=Mc();Vc=Wc?Wc:parseInt(Uc,10)||void 0}else Vc=void 0;var Xc=Vc;var Yc=Dc()||C("iPod"),Zc=C("iPad");Zb();Yb();var $c=Xb()&&!(Dc()||C("iPad")||C("iPod"));var ad={},bd=null;function cd(a,b){Ra(a);void 0===b&&(b=0);dd();b=ad[b];for(var c=Array(Math.floor(a.length/3)),d=b[64]||"",e=0,f=0;e<a.length-2;e+=3){var g=a[e],h=a[e+1],k=a[e+2],m=b[g>>2];g=b[(g&3)<<4|h>>4];h=b[(h&15)<<2|k>>6];k=b[k&63];c[f++]=""+m+g+h+k}m=0;k=d;switch(a.length-e){case 2:m=a[e+1],k=b[(m&15)<<2]||d;case 1:a=a[e],c[f]=""+b[a>>2]+b[(a&3)<<4|m>>4]+k+d}return c.join("")}
function ed(a){var b=a.length,c=3*b/4;c%3?c=Math.floor(c):-1!="=.".indexOf(a[b-1])&&(c=-1!="=.".indexOf(a[b-2])?c-2:c-1);var d=new Uint8Array(c),e=0;fd(a,function(f){d[e++]=f});
return e!==c?d.subarray(0,e):d}
function fd(a,b){function c(k){for(;d<a.length;){var m=a.charAt(d++),n=bd[m];if(null!=n)return n;if(!/^[\s\xa0]*$/.test(m))throw Error("Unknown base64 encoding at char: "+m);}return k}
dd();for(var d=0;;){var e=c(-1),f=c(0),g=c(64),h=c(64);if(64===h&&-1===e)break;b(e<<2|f>>4);64!=g&&(b(f<<4&240|g>>2),64!=h&&b(g<<6&192|h))}}
function dd(){if(!bd){bd={};for(var a="ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789".split(""),b=["+/=","+/","-_=","-_.","-_"],c=0;5>c;c++){var d=a.concat(b[c].split(""));ad[c]=d;for(var e=0;e<d.length;e++){var f=d[e];void 0===bd[f]&&(bd[f]=e)}}}}
;var gd="undefined"!==typeof Uint8Array;function hd(a){return gd&&null!=a&&a instanceof Uint8Array}
var id={};var jd;function kd(a){if(a!==id)throw Error("illegal external caller");}
function ld(a,b){kd(b);this.za=a;if(null!=a&&0===a.length)throw Error("ByteString should be constructed with non-empty values");}
function md(){return jd||(jd=new ld(null,id))}
ld.prototype.Kb=function(){return null==this.za};
ld.prototype.sizeBytes=function(){kd(id);var a=this.za;null==a||hd(a)||("string"===typeof a?a=ed(a):(Qa(a),a=null));return(a=null==a?a:this.za=a)?a.length:0};var nd="function"===typeof Symbol&&"symbol"===typeof Symbol()?Symbol():void 0;function od(a,b){if(nd)return a[nd]|=b;if(void 0!==a.Da)return a.Da|=b;Object.defineProperties(a,{Da:{value:b,configurable:!0,writable:!0,enumerable:!1}});return b}
function pd(a,b){var c=qd(a);(c&b)!==b&&(Object.isFrozen(a)&&(a=Array.prototype.slice.call(a)),rd(a,c|b));return a}
function sd(a,b){nd?a[nd]&&(a[nd]&=~b):void 0!==a.Da&&(a.Da&=~b)}
function qd(a){var b;nd?b=a[nd]:b=a.Da;return null==b?0:b}
function rd(a,b){nd?a[nd]=b:void 0!==a.Da?a.Da=b:Object.defineProperties(a,{Da:{value:b,configurable:!0,writable:!0,enumerable:!1}})}
function td(a){od(a,1);return a}
function ud(a){return!!(qd(a)&2)}
function vd(a){od(a,16);return a}
function wd(a,b){rd(b,(a|0)&-51)}
function xd(a,b){rd(b,(a|18)&-41)}
;var yd={};function zd(a){return null!==a&&"object"===typeof a&&!Array.isArray(a)&&a.constructor===Object}
var Ad,Bd,Cd=[];rd(Cd,23);Bd=Object.freeze(Cd);function Dd(a){if(ud(a.L))throw Error("Cannot mutate an immutable Message");}
function Ed(a){var b=a.length;(b=b?a[b-1]:void 0)&&zd(b)?b.g=1:(b={},a.push((b.g=1,b)))}
;var Fd;function Gd(a){return a.displayName||a.name||"unknown type name"}
function Hd(a,b){if(!(a instanceof b))throw Error("Expected instanceof "+Gd(b)+" but got "+(a&&Gd(a.constructor)));return a}
;function Id(a){switch(typeof a){case "number":return isFinite(a)?a:String(a);case "object":if(a)if(Array.isArray(a)){if(0!==(qd(a)&128))return a=Array.prototype.slice.call(a),Ed(a),a}else{if(hd(a))return cd(a);if(a instanceof ld){var b=a.za;return null==b?"":"string"===typeof b?b:a.za=cd(b)}}}return a}
;function Jd(a,b,c,d){if(null!=a){if(Array.isArray(a))a=Kd(a,b,c,void 0!==d);else if(zd(a)){var e={},f;for(f in a)e[f]=Jd(a[f],b,c,d);a=e}else a=b(a,d);return a}}
function Kd(a,b,c,d){var e=qd(a);d=d?!!(e&16):void 0;a=Array.prototype.slice.call(a);for(var f=0;f<a.length;f++)a[f]=Jd(a[f],b,c,d);c(e,a);return a}
function Ld(a){return a.nc===yd?a.toJSON():Id(a)}
function Md(a){if(!a)return a;if("object"===typeof a){if(hd(a))return new Uint8Array(a);if(a.nc===yd)return a.clone()}return a}
function Nd(a,b){a&128&&Ed(b)}
;function Sd(a){var b=a.j+a.fb;return a.ra||(a.ra=a.L[b]={})}
function Td(a,b,c){return-1===b?null:b>=a.j?a.ra?a.ra[b]:void 0:c&&a.ra&&(c=a.ra[b],null!=c)?c:a.L[b+a.fb]}
function F(a,b,c,d){Dd(a);return Ud(a,b,c,d)}
function Ud(a,b,c,d){a.l&&(a.l=void 0);if(b>=a.j||d)return Sd(a)[b]=c,a;a.L[b+a.fb]=c;(c=a.ra)&&b in c&&delete c[b];return a}
function Vd(a,b){a&&ud(b.L)&&ud(a.L);return a}
function Wd(a,b,c,d,e){var f=Td(a,b,d);Array.isArray(f)||(f=Bd);var g=qd(f);g&1||td(f);if(e)g&2||od(f,2),c&1||Object.freeze(f);else{e=!(c&2);var h=g&2;c&1||!h?e&&g&16&&!h&&sd(f,16):(f=td(Array.prototype.slice.call(f)),Ud(a,b,f,d))}return f}
function Xd(a,b,c,d){Dd(a);(c=Yd(a,c))&&c!==b&&null!=d&&Ud(a,c,void 0,!1);return Ud(a,b,d)}
function Yd(a,b){for(var c=0,d=0;d<b.length;d++){var e=b[d];null!=Td(a,e)&&(0!==c&&Ud(a,c,void 0,!1),c=e)}return c}
function Zd(a,b,c,d){var e=d=void 0===d?!1:d,f=Td(a,c,e);var g=!1;var h=null==f||"object"!==typeof f||(g=Array.isArray(f))||f.nc!==yd?g?new b(f):void 0:f;h!==f&&null!=h&&(Ud(a,c,h,e),od(h.L,qd(a.L)&18));b=Vd(h,a);if(null==b)return b;ud(a.L)||(e=$d(b),e!==b&&(b=e,Ud(a,c,b,d)));return Vd(b,a)}
function ae(a,b,c,d,e,f){a.h||(a.h={});var g=a.h[c],h=Wd(a,c,3,d,f);if(!g){var k=h;g=[];var m=!!(qd(a.L)&16);h=ud(k);var n=k;!f&&h&&(k=Array.prototype.slice.call(k));for(var p=h,v=0;v<k.length;v++){var t=k[v];var y=b,D=!1;D=void 0===D?!1:D;t=Array.isArray(t)?new y(t):D?new y:void 0;if(void 0!==t){y=t.L;var E=D=qd(y);h&&(E|=2);m&&(E|=16);E!=D&&rd(y,E);y=E;p=p||!!(2&y);g.push(t)}}a.h[c]=g;b=k;k=!p;m=qd(b);p=m|33;p=k?p|8:p&-9;m!=p&&(Object.isFrozen(b)&&(b=Array.prototype.slice.call(b)),rd(b,p));k=b;
n!==k&&Ud(a,c,k,d);(f||e&&h)&&od(g,2);e&&Object.freeze(g);return g}d=g;f||(Object.isFrozen(d)?e||(g=Array.prototype.slice.call(g),a.h[c]=g):e&&Object.freeze(d));return g}
function be(a,b,c,d){var e=ud(a.L);b=ae(a,b,c,d,e,e);a=Wd(a,c,3,d,e);if(!(e||qd(a)&8)){for(e=0;e<b.length;e++)c=b[e],d=$d(c),c!==d&&(b[e]=d,a[e]=d.L);od(a,8)}return b}
function G(a,b,c,d){Dd(a);null!=d?Hd(d,b):d=void 0;return Ud(a,c,d)}
function ce(a,b,c,d,e){Dd(a);null!=e?Hd(e,b):e=void 0;Xd(a,c,d,e)}
function de(a,b,c,d,e){Dd(a);var f=null==d?Bd:td([]);if(null!=d){for(var g=!1,h=0;h<d.length;h++){var k=d[h];Hd(k,b);g=g||ud(k.L);f[h]=k.L}f=pd(f,(g?0:8)|1);a.h||(a.h={});a.h[c]=d}else a.h&&(a.h[c]=void 0);return Ud(a,c,f,e)}
function ee(a,b,c,d){Dd(a);var e=ae(a,c,b,void 0,!1,!1);c=null!=d?Hd(d,c):new c;a=Wd(a,b,2,void 0,!1);e.push(c);a.push(c.L);ud(c.L)&&sd(a,8)}
function fe(a,b){return Td(a,b)}
function ge(a,b){return null==a?b:a}
;function he(a,b,c){c=void 0===c?xd:c;if(null!=a){if(gd&&a instanceof Uint8Array)return a.length?new ld(new Uint8Array(a),id):md();if(Array.isArray(a)){var d=qd(a);if(d&2)return a;if(b&&!(d&32)&&(d&16||0===d))return rd(a,d|2),a;a=Kd(a,he,d&4?xd:c,!0);b=qd(a);b&4&&b&2&&Object.freeze(a);return a}return a.nc===yd?ie(a):a}}
function je(a,b,c,d,e,f,g){(a=a.h&&a.h[c])?(d=0<a.length?a[0].constructor:void 0,f=qd(a),f&2||(a=jb(a,ie),xd(f,a),Object.freeze(a)),de(b,d,c,a,e)):F(b,c,he(d,f,g),e)}
function ie(a){if(ud(a.L))return a;a=ke(a,!0);od(a.L,2);return a}
function ke(a,b){var c=a.L,d=vd([]),e=a.constructor.h;e&&d.push(e);e=a.ra;if(e){d.length=c.length;d.fill(void 0,d.length,c.length);var f={};d[d.length-1]=f}0!==(qd(c)&128)&&Ed(d);b=b||ud(a.L)?xd:wd;var g=a.constructor;qd(d);Fd=d;d=new g(d);Fd=void 0;a.Jb&&(d.Jb=a.Jb.slice());g=!!(qd(c)&16);for(var h=e?c.length-1:c.length,k=0;k<h;k++)je(a,d,k-a.fb,c[k],!1,g,b);if(e)for(var m in e)c=e[m],h=+m,Number.isNaN(h)?f[h]=c:je(a,d,h,c,!0,g,b);return d}
function $d(a){if(!ud(a.L))return a;var b=ke(a,!1);b.l=a;return b}
;function H(a,b,c){null==a&&(a=Fd);Fd=void 0;var d=this.constructor.i||0,e=0<d,f=this.constructor.h,g=!1;if(null==a){a=f?[f]:[];var h=!0;rd(a,48)}else{if(!Array.isArray(a))throw Error();if(f&&f!==a[0])throw Error();var k=od(a,0),m=k;if(h=0!==(16&m))(g=0!==(32&m))||(m|=32);if(e)if(128&m)d=0;else{if(0<a.length){var n=a[a.length-1];if(zd(n)&&"g"in n){d=0;m|=128;delete n.g;var p=!0,v;for(v in n){p=!1;break}p&&a.pop()}}}else if(128&m)throw Error();k!==m&&rd(a,m)}this.fb=(f?0:-1)-d;this.h=void 0;this.L=
a;a:{f=this.L.length;d=f-1;if(f&&(f=this.L[d],zd(f))){this.ra=f;this.j=d-this.fb;break a}void 0!==b&&-1<b?(this.j=Math.max(b,d+1-this.fb),this.ra=void 0):this.j=Number.MAX_VALUE}if(!e&&this.ra&&"g"in this.ra)throw Error('Unexpected "g" flag in sparse object of message that is not a group type.');if(c){b=h&&!g&&!0;e=this.j;var t;for(h=0;h<c.length;h++)g=c[h],g<e?(g+=this.fb,(d=a[g])?le(d,b):a[g]=Bd):(t||(t=Sd(this)),(d=t[g])?le(d,b):t[g]=Bd)}}
H.prototype.toJSON=function(){var a=this.L,b;Ad?b=a:b=Kd(a,Ld,Nd);return b};
function me(a){Ad=!0;try{return JSON.stringify(a.toJSON(),ne)}finally{Ad=!1}}
H.prototype.clone=function(){var a=Kd(this.L,Md,wd);vd(a);Fd=a;a=new this.constructor(a);Fd=void 0;oe(a,this);return a};
function le(a,b){if(Array.isArray(a)){var c=qd(a),d=1;!b||c&2||(d|=16);(c&d)!==d&&rd(a,c|d)}}
H.prototype.nc=yd;H.prototype.toString=function(){return this.L.toString()};
function ne(a,b){return Id(b)}
function oe(a,b){b.Jb&&(a.Jb=b.Jb.slice());var c=b.h;if(c){b=b.ra;for(var d in c){var e=c[d];if(e){var f=!(!b||!b[d]),g=+d;if(Array.isArray(e)){if(e.length)for(f=be(a,e[0].constructor,g,f),g=0;g<Math.min(f.length,e.length);g++)oe(f[g],e[g])}else throw Error("unexpected object: type: "+Qa(e)+": "+e);}}}}
;function pe(a){var b=this.h,c=this.i;return this.isRepeated?be(a,b,c,!0):Zd(a,b,c,!0)}
;function qe(a){this.hd=a}
;function re(a,b,c){this.i=a;this.l=b;this.h=c||[];this.pb=new Map}
l=re.prototype;l.ae=function(a){var b=Ka.apply(1,arguments),c=this.Ac(b);c?c.push(new qe(a)):this.Kd(a,b)};
l.Kd=function(a){this.pb.set(this.qd(Ka.apply(1,arguments)),[new qe(a)])};
l.Ac=function(){var a=this.qd(Ka.apply(0,arguments));return this.pb.has(a)?this.pb.get(a):void 0};
l.re=function(){var a=this.Ac(Ka.apply(0,arguments));return a&&a.length?a[0]:void 0};
l.clear=function(){this.pb.clear()};
l.qd=function(){var a=Ka.apply(0,arguments);return a?a.join(","):"key"};function se(a,b){re.call(this,a,3,b)}
u(se,re);se.prototype.j=function(a){var b=Ka.apply(1,arguments),c=0,d=this.re(b);d&&(c=d.hd);this.Kd(c+a,b)};function te(a,b){re.call(this,a,2,b)}
u(te,re);te.prototype.j=function(a){this.ae(a,Ka.apply(1,arguments))};function ue(a){a&&"function"==typeof a.dispose&&a.dispose()}
;function ve(a){for(var b=0,c=arguments.length;b<c;++b){var d=arguments[b];Ra(d)?ve.apply(null,d):ue(d)}}
;function J(){this.X=this.X;this.D=this.D}
J.prototype.X=!1;J.prototype.h=function(){return this.X};
J.prototype.dispose=function(){this.X||(this.X=!0,this.M())};
function we(a,b){xe(a,$a(ue,b))}
function xe(a,b){a.X?b():(a.D||(a.D=[]),a.D.push(b))}
J.prototype.M=function(){if(this.D)for(;this.D.length;)this.D.shift()()};function ye(a,b){this.type=a;this.h=this.target=b;this.defaultPrevented=this.j=!1}
ye.prototype.stopPropagation=function(){this.j=!0};
ye.prototype.preventDefault=function(){this.defaultPrevented=!0};function ze(a){var b=B("window.location.href");null==a&&(a='Unknown Error of type "null/undefined"');if("string"===typeof a)return{message:a,name:"Unknown error",lineNumber:"Not available",fileName:b,stack:"Not available"};var c=!1;try{var d=a.lineNumber||a.line||"Not available"}catch(g){d="Not available",c=!0}try{var e=a.fileName||a.filename||a.sourceURL||z.$googDebugFname||b}catch(g){e="Not available",c=!0}b=Ae(a);if(!(!c&&a.lineNumber&&a.fileName&&a.stack&&a.message&&a.name)){c=a.message;if(null==
c){if(a.constructor&&a.constructor instanceof Function){if(a.constructor.name)c=a.constructor.name;else if(c=a.constructor,Be[c])c=Be[c];else{c=String(c);if(!Be[c]){var f=/function\s+([^\(]+)/m.exec(c);Be[c]=f?f[1]:"[Anonymous]"}c=Be[c]}c='Unknown Error of type "'+c+'"'}else c="Unknown Error of unknown type";"function"===typeof a.toString&&Object.prototype.toString!==a.toString&&(c+=": "+a.toString())}return{message:c,name:a.name||"UnknownError",lineNumber:d,fileName:e,stack:b||"Not available"}}a.stack=
b;return{message:a.message,name:a.name,lineNumber:a.lineNumber,fileName:a.fileName,stack:a.stack}}
function Ae(a,b){b||(b={});b[Ce(a)]=!0;var c=a.stack||"";(a=a.cause)&&!b[Ce(a)]&&(c+="\nCaused by: ",a.stack&&0==a.stack.indexOf(a.toString())||(c+="string"===typeof a?a:a.message+"\n"),c+=Ae(a,b));return c}
function Ce(a){var b="";"function"===typeof a.toString&&(b=""+a);return b+a.stack}
var Be={};var De=function(){if(!z.addEventListener||!Object.defineProperty)return!1;var a=!1,b=Object.defineProperty({},"passive",{get:function(){a=!0}});
try{z.addEventListener("test",function(){},b),z.removeEventListener("test",function(){},b)}catch(c){}return a}();function Ee(a,b){ye.call(this,a?a.type:"");this.relatedTarget=this.h=this.target=null;this.button=this.screenY=this.screenX=this.clientY=this.clientX=0;this.key="";this.charCode=this.keyCode=0;this.metaKey=this.shiftKey=this.altKey=this.ctrlKey=!1;this.state=null;this.pointerId=0;this.pointerType="";this.i=null;a&&this.init(a,b)}
ab(Ee,ye);var Fe={2:"touch",3:"pen",4:"mouse"};
Ee.prototype.init=function(a,b){var c=this.type=a.type,d=a.changedTouches&&a.changedTouches.length?a.changedTouches[0]:null;this.target=a.target||a.srcElement;this.h=b;if(b=a.relatedTarget){if(Jc){a:{try{Fc(b.nodeName);var e=!0;break a}catch(f){}e=!1}e||(b=null)}}else"mouseover"==c?b=a.fromElement:"mouseout"==c&&(b=a.toElement);this.relatedTarget=b;d?(this.clientX=void 0!==d.clientX?d.clientX:d.pageX,this.clientY=void 0!==d.clientY?d.clientY:d.pageY,this.screenX=d.screenX||0,this.screenY=d.screenY||
0):(this.clientX=void 0!==a.clientX?a.clientX:a.pageX,this.clientY=void 0!==a.clientY?a.clientY:a.pageY,this.screenX=a.screenX||0,this.screenY=a.screenY||0);this.button=a.button;this.keyCode=a.keyCode||0;this.key=a.key||"";this.charCode=a.charCode||("keypress"==c?a.keyCode:0);this.ctrlKey=a.ctrlKey;this.altKey=a.altKey;this.shiftKey=a.shiftKey;this.metaKey=a.metaKey;this.pointerId=a.pointerId||0;this.pointerType="string"===typeof a.pointerType?a.pointerType:Fe[a.pointerType]||"";this.state=a.state;
this.i=a;a.defaultPrevented&&Ee.va.preventDefault.call(this)};
Ee.prototype.stopPropagation=function(){Ee.va.stopPropagation.call(this);this.i.stopPropagation?this.i.stopPropagation():this.i.cancelBubble=!0};
Ee.prototype.preventDefault=function(){Ee.va.preventDefault.call(this);var a=this.i;a.preventDefault?a.preventDefault():a.returnValue=!1};var Ge="closure_listenable_"+(1E6*Math.random()|0);var He=0;function Ie(a,b,c,d,e){this.listener=a;this.proxy=null;this.src=b;this.type=c;this.capture=!!d;this.jc=e;this.key=++He;this.Ob=this.dc=!1}
function Je(a){a.Ob=!0;a.listener=null;a.proxy=null;a.src=null;a.jc=null}
;function Ke(a){this.src=a;this.listeners={};this.h=0}
Ke.prototype.add=function(a,b,c,d,e){var f=a.toString();a=this.listeners[f];a||(a=this.listeners[f]=[],this.h++);var g=Le(a,b,d,e);-1<g?(b=a[g],c||(b.dc=!1)):(b=new Ie(b,this.src,f,!!d,e),b.dc=c,a.push(b));return b};
Ke.prototype.remove=function(a,b,c,d){a=a.toString();if(!(a in this.listeners))return!1;var e=this.listeners[a];b=Le(e,b,c,d);return-1<b?(Je(e[b]),Array.prototype.splice.call(e,b,1),0==e.length&&(delete this.listeners[a],this.h--),!0):!1};
function Me(a,b){var c=b.type;c in a.listeners&&mb(a.listeners[c],b)&&(Je(b),0==a.listeners[c].length&&(delete a.listeners[c],a.h--))}
function Le(a,b,c,d){for(var e=0;e<a.length;++e){var f=a[e];if(!f.Ob&&f.listener==b&&f.capture==!!c&&f.jc==d)return e}return-1}
;var Ne="closure_lm_"+(1E6*Math.random()|0),Oe={},Pe=0;function Qe(a,b,c,d,e){if(d&&d.once)Re(a,b,c,d,e);else if(Array.isArray(b))for(var f=0;f<b.length;f++)Qe(a,b[f],c,d,e);else c=Se(c),a&&a[Ge]?a.Ma(b,c,Sa(d)?!!d.capture:!!d,e):Te(a,b,c,!1,d,e)}
function Te(a,b,c,d,e,f){if(!b)throw Error("Invalid event type");var g=Sa(e)?!!e.capture:!!e,h=Ue(a);h||(a[Ne]=h=new Ke(a));c=h.add(b,c,d,g,f);if(!c.proxy){d=Ve();c.proxy=d;d.src=a;d.listener=c;if(a.addEventListener)De||(e=g),void 0===e&&(e=!1),a.addEventListener(b.toString(),d,e);else if(a.attachEvent)a.attachEvent(We(b.toString()),d);else if(a.addListener&&a.removeListener)a.addListener(d);else throw Error("addEventListener and attachEvent are unavailable.");Pe++}}
function Ve(){function a(c){return b.call(a.src,a.listener,c)}
var b=Xe;return a}
function Re(a,b,c,d,e){if(Array.isArray(b))for(var f=0;f<b.length;f++)Re(a,b[f],c,d,e);else c=Se(c),a&&a[Ge]?a.l.add(String(b),c,!0,Sa(d)?!!d.capture:!!d,e):Te(a,b,c,!0,d,e)}
function Ye(a,b,c,d,e){if(Array.isArray(b))for(var f=0;f<b.length;f++)Ye(a,b[f],c,d,e);else(d=Sa(d)?!!d.capture:!!d,c=Se(c),a&&a[Ge])?a.l.remove(String(b),c,d,e):a&&(a=Ue(a))&&(b=a.listeners[b.toString()],a=-1,b&&(a=Le(b,c,d,e)),(c=-1<a?b[a]:null)&&Ze(c))}
function Ze(a){if("number"!==typeof a&&a&&!a.Ob){var b=a.src;if(b&&b[Ge])Me(b.l,a);else{var c=a.type,d=a.proxy;b.removeEventListener?b.removeEventListener(c,d,a.capture):b.detachEvent?b.detachEvent(We(c),d):b.addListener&&b.removeListener&&b.removeListener(d);Pe--;(c=Ue(b))?(Me(c,a),0==c.h&&(c.src=null,b[Ne]=null)):Je(a)}}}
function We(a){return a in Oe?Oe[a]:Oe[a]="on"+a}
function Xe(a,b){if(a.Ob)a=!0;else{b=new Ee(b,this);var c=a.listener,d=a.jc||a.src;a.dc&&Ze(a);a=c.call(d,b)}return a}
function Ue(a){a=a[Ne];return a instanceof Ke?a:null}
var $e="__closure_events_fn_"+(1E9*Math.random()>>>0);function Se(a){if("function"===typeof a)return a;a[$e]||(a[$e]=function(b){return a.handleEvent(b)});
return a[$e]}
;function af(){J.call(this);this.l=new Ke(this);this.Xd=this;this.Pa=null}
ab(af,J);af.prototype[Ge]=!0;af.prototype.addEventListener=function(a,b,c,d){Qe(this,a,b,c,d)};
af.prototype.removeEventListener=function(a,b,c,d){Ye(this,a,b,c,d)};
function bf(a,b){var c=a.Pa;if(c){var d=[];for(var e=1;c;c=c.Pa)d.push(c),++e}a=a.Xd;c=b.type||b;"string"===typeof b?b=new ye(b,a):b instanceof ye?b.target=b.target||a:(e=b,b=new ye(c,a),zb(b,e));e=!0;if(d)for(var f=d.length-1;!b.j&&0<=f;f--){var g=b.h=d[f];e=cf(g,c,!0,b)&&e}b.j||(g=b.h=a,e=cf(g,c,!0,b)&&e,b.j||(e=cf(g,c,!1,b)&&e));if(d)for(f=0;!b.j&&f<d.length;f++)g=b.h=d[f],e=cf(g,c,!1,b)&&e}
af.prototype.M=function(){af.va.M.call(this);if(this.l){var a=this.l,b=0,c;for(c in a.listeners){for(var d=a.listeners[c],e=0;e<d.length;e++)++b,Je(d[e]);delete a.listeners[c];a.h--}}this.Pa=null};
af.prototype.Ma=function(a,b,c,d){return this.l.add(String(a),b,!1,c,d)};
function cf(a,b,c,d){b=a.l.listeners[String(b)];if(!b)return!0;b=b.concat();for(var e=!0,f=0;f<b.length;++f){var g=b[f];if(g&&!g.Ob&&g.capture==c){var h=g.listener,k=g.jc||g.src;g.dc&&Me(a.l,g);e=!1!==h.call(k,d)&&e}}return e&&!d.defaultPrevented}
;function jf(a,b){this.j=a;this.l=b;this.i=0;this.h=null}
jf.prototype.get=function(){if(0<this.i){this.i--;var a=this.h;this.h=a.next;a.next=null}else a=this.j();return a};
function kf(a,b){a.l(b);100>a.i&&(a.i++,b.next=a.h,a.h=b)}
;function lf(a,b){return a+Math.random()*(b-a)}
;function mf(a,b){this.x=void 0!==a?a:0;this.y=void 0!==b?b:0}
l=mf.prototype;l.clone=function(){return new mf(this.x,this.y)};
l.equals=function(a){return a instanceof mf&&(this==a?!0:this&&a?this.x==a.x&&this.y==a.y:!1)};
l.ceil=function(){this.x=Math.ceil(this.x);this.y=Math.ceil(this.y);return this};
l.floor=function(){this.x=Math.floor(this.x);this.y=Math.floor(this.y);return this};
l.round=function(){this.x=Math.round(this.x);this.y=Math.round(this.y);return this};
l.scale=function(a,b){this.x*=a;this.y*="number"===typeof b?b:a;return this};function nf(a,b){this.width=a;this.height=b}
l=nf.prototype;l.clone=function(){return new nf(this.width,this.height)};
l.aspectRatio=function(){return this.width/this.height};
l.Kb=function(){return!(this.width*this.height)};
l.ceil=function(){this.width=Math.ceil(this.width);this.height=Math.ceil(this.height);return this};
l.floor=function(){this.width=Math.floor(this.width);this.height=Math.floor(this.height);return this};
l.round=function(){this.width=Math.round(this.width);this.height=Math.round(this.height);return this};
l.scale=function(a,b){this.width*=a;this.height*="number"===typeof b?b:a;return this};function of(a){var b=document;return"string"===typeof a?b.getElementById(a):a}
function pf(a){var b=document;a=String(a);"application/xhtml+xml"===b.contentType&&(a=a.toLowerCase());return b.createElement(a)}
function qf(a,b){for(var c=0;a;){if(b(a))return a;a=a.parentNode;c++}return null}
;var rf;function sf(){var a=z.MessageChannel;"undefined"===typeof a&&"undefined"!==typeof window&&window.postMessage&&window.addEventListener&&!C("Presto")&&(a=function(){var e=pf("IFRAME");e.style.display="none";document.documentElement.appendChild(e);var f=e.contentWindow;e=f.document;e.open();e.close();var g="callImmediate"+Math.random(),h="file:"==f.location.protocol?"*":f.location.protocol+"//"+f.location.host;e=Za(function(k){if(("*"==h||k.origin==h)&&k.data==g)this.port1.onmessage()},this);
f.addEventListener("message",e,!1);this.port1={};this.port2={postMessage:function(){f.postMessage(g,h)}}});
if("undefined"!==typeof a&&!Vb()){var b=new a,c={},d=c;b.port1.onmessage=function(){if(void 0!==c.next){c=c.next;var e=c.gd;c.gd=null;e()}};
return function(e){d.next={gd:e};d=d.next;b.port2.postMessage(0)}}return function(e){z.setTimeout(e,0)}}
;function tf(){this.i=this.h=null}
tf.prototype.add=function(a,b){var c=uf.get();c.set(a,b);this.i?this.i.next=c:this.h=c;this.i=c};
tf.prototype.remove=function(){var a=null;this.h&&(a=this.h,this.h=this.h.next,this.h||(this.i=null),a.next=null);return a};
var uf=new jf(function(){return new vf},function(a){return a.reset()});
function vf(){this.next=this.scope=this.h=null}
vf.prototype.set=function(a,b){this.h=a;this.scope=b;this.next=null};
vf.prototype.reset=function(){this.next=this.scope=this.h=null};var wf,xf=!1,yf=new tf;function zf(a,b){wf||Af();xf||(wf(),xf=!0);yf.add(a,b)}
function Af(){if(z.Promise&&z.Promise.resolve){var a=z.Promise.resolve(void 0);wf=function(){a.then(Bf)}}else wf=function(){var b=Bf;
"function"!==typeof z.setImmediate||z.Window&&z.Window.prototype&&!C("Edge")&&z.Window.prototype.setImmediate==z.setImmediate?(rf||(rf=sf()),rf(b)):z.setImmediate(b)}}
function Bf(){for(var a;a=yf.remove();){try{a.h.call(a.scope)}catch(b){Cc(b)}kf(uf,a)}xf=!1}
;function Cf(a){this.h=0;this.D=void 0;this.l=this.i=this.j=null;this.m=this.s=!1;if(a!=eb)try{var b=this;a.call(void 0,function(c){Df(b,2,c)},function(c){Df(b,3,c)})}catch(c){Df(this,3,c)}}
function Ef(){this.next=this.context=this.i=this.j=this.h=null;this.l=!1}
Ef.prototype.reset=function(){this.context=this.i=this.j=this.h=null;this.l=!1};
var Ff=new jf(function(){return new Ef},function(a){a.reset()});
function Gf(a,b,c){var d=Ff.get();d.j=a;d.i=b;d.context=c;return d}
function Hf(a){return new Cf(function(b,c){c(a)})}
Cf.prototype.then=function(a,b,c){return If(this,"function"===typeof a?a:null,"function"===typeof b?b:null,c)};
Cf.prototype.$goog_Thenable=!0;l=Cf.prototype;l.vc=function(a,b){return If(this,null,a,b)};
l.catch=Cf.prototype.vc;l.cancel=function(a){if(0==this.h){var b=new Jf(a);zf(function(){Kf(this,b)},this)}};
function Kf(a,b){if(0==a.h)if(a.j){var c=a.j;if(c.i){for(var d=0,e=null,f=null,g=c.i;g&&(g.l||(d++,g.h==a&&(e=g),!(e&&1<d)));g=g.next)e||(f=g);e&&(0==c.h&&1==d?Kf(c,b):(f?(d=f,d.next==c.l&&(c.l=d),d.next=d.next.next):Lf(c),Mf(c,e,3,b)))}a.j=null}else Df(a,3,b)}
function Nf(a,b){a.i||2!=a.h&&3!=a.h||Of(a);a.l?a.l.next=b:a.i=b;a.l=b}
function If(a,b,c,d){var e=Gf(null,null,null);e.h=new Cf(function(f,g){e.j=b?function(h){try{var k=b.call(d,h);f(k)}catch(m){g(m)}}:f;
e.i=c?function(h){try{var k=c.call(d,h);void 0===k&&h instanceof Jf?g(h):f(k)}catch(m){g(m)}}:g});
e.h.j=a;Nf(a,e);return e.h}
l.hf=function(a){this.h=0;Df(this,2,a)};
l.jf=function(a){this.h=0;Df(this,3,a)};
function Df(a,b,c){if(0==a.h){a===c&&(b=3,c=new TypeError("Promise cannot resolve to itself"));a.h=1;a:{var d=c,e=a.hf,f=a.jf;if(d instanceof Cf){Nf(d,Gf(e||eb,f||null,a));var g=!0}else{if(d)try{var h=!!d.$goog_Thenable}catch(m){h=!1}else h=!1;if(h)d.then(e,f,a),g=!0;else{if(Sa(d))try{var k=d.then;if("function"===typeof k){Pf(d,k,e,f,a);g=!0;break a}}catch(m){f.call(a,m);g=!0;break a}g=!1}}}g||(a.D=c,a.h=b,a.j=null,Of(a),3!=b||c instanceof Jf||Qf(a,c))}}
function Pf(a,b,c,d,e){function f(k){h||(h=!0,d.call(e,k))}
function g(k){h||(h=!0,c.call(e,k))}
var h=!1;try{b.call(a,g,f)}catch(k){f(k)}}
function Of(a){a.s||(a.s=!0,zf(a.me,a))}
function Lf(a){var b=null;a.i&&(b=a.i,a.i=b.next,b.next=null);a.i||(a.l=null);return b}
l.me=function(){for(var a;a=Lf(this);)Mf(this,a,this.h,this.D);this.s=!1};
function Mf(a,b,c,d){if(3==c&&b.i&&!b.l)for(;a&&a.m;a=a.j)a.m=!1;if(b.h)b.h.j=null,Rf(b,c,d);else try{b.l?b.j.call(b.context):Rf(b,c,d)}catch(e){Sf.call(null,e)}kf(Ff,b)}
function Rf(a,b,c){2==b?a.j.call(a.context,c):a.i&&a.i.call(a.context,c)}
function Qf(a,b){a.m=!0;zf(function(){a.m&&Sf.call(null,b)})}
var Sf=Cc;function Jf(a){cb.call(this,a)}
ab(Jf,cb);Jf.prototype.name="cancel";function Tf(a,b){af.call(this);this.j=a||1;this.i=b||z;this.m=Za(this.ff,this);this.s=Date.now()}
ab(Tf,af);l=Tf.prototype;l.enabled=!1;l.ya=null;function Uf(a,b){a.j=b;a.ya&&a.enabled?(a.stop(),a.start()):a.ya&&a.stop()}
l.ff=function(){if(this.enabled){var a=Date.now()-this.s;0<a&&a<.8*this.j?this.ya=this.i.setTimeout(this.m,this.j-a):(this.ya&&(this.i.clearTimeout(this.ya),this.ya=null),bf(this,"tick"),this.enabled&&(this.stop(),this.start()))}};
l.start=function(){this.enabled=!0;this.ya||(this.ya=this.i.setTimeout(this.m,this.j),this.s=Date.now())};
l.stop=function(){this.enabled=!1;this.ya&&(this.i.clearTimeout(this.ya),this.ya=null)};
l.M=function(){Tf.va.M.call(this);this.stop();delete this.i};
function Vf(a,b,c){if("function"===typeof a)c&&(a=Za(a,c));else if(a&&"function"==typeof a.handleEvent)a=Za(a.handleEvent,a);else throw Error("Invalid listener argument");return 2147483647<Number(b)?-1:z.setTimeout(a,b||0)}
;function Wf(a){this.D=a;this.h=new Map;this.s=new Set;this.j=0;this.l=100;this.flushInterval=3E4;this.i=new Tf(this.flushInterval);this.i.Ma("tick",this.xc,!1,this);this.m=!1}
l=Wf.prototype;l.sendIsolatedPayload=function(a){this.m=a;this.l=1};
function Xf(a){a.i.enabled||a.i.start();a.j++;a.j>=a.l&&a.xc()}
l.xc=function(){var a=this.h.values();a=[].concat(ja(a)).filter(function(b){return b.pb.size});
a.length&&this.D.flush(a,this.m);Yf(a);this.j=0;this.i.enabled&&this.i.stop()};
l.cd=function(a){var b=Ka.apply(1,arguments);this.h.has(a)||this.h.set(a,new se(a,b))};
l.dd=function(a){var b=Ka.apply(1,arguments);this.h.has(a)||this.h.set(a,new te(a,b))};
function Zf(a,b){return a.s.has(b)?void 0:a.h.get(b)}
l.Wb=function(a){this.Vd.apply(this,[a,1].concat(ja(Ka.apply(1,arguments))))};
l.Vd=function(a,b){var c=Ka.apply(2,arguments),d=Zf(this,a);d&&d instanceof se&&(d.j(b,c),Xf(this))};
l.wc=function(a,b){var c=Ka.apply(2,arguments),d=Zf(this,a);d&&d instanceof te&&(d.j(b,c),Xf(this))};
function Yf(a){for(var b=0;b<a.length;b++)a[b].clear()}
;function $f(a){this.h=a;this.h.cd("/client_streamz/bg/fiec",{Ib:3,Hb:"rk"},{Ib:2,Hb:"ec"})}
function ag(a){this.h=a;this.h.dd("/client_streamz/bg/fil",{Ib:3,Hb:"rk"})}
function bg(a){this.h=a;this.h.cd("/client_streamz/bg/fsc",{Ib:3,Hb:"rk"})}
function cg(a){this.h=a;this.h.dd("/client_streamz/bg/fsl",{Ib:3,Hb:"rk"})}
;var dg={toString:function(a){var b=[],c=0;a-=-2147483648;b[c++]="abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ".charAt(a%52);for(a=Math.floor(a/52);0<a;)b[c++]="abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789".charAt(a%62),a=Math.floor(a/62);return b.join("")}};function eg(a){function b(){c-=d;c-=e;c^=e>>>13;d-=e;d-=c;d^=c<<8;e-=c;e-=d;e^=d>>>13;c-=d;c-=e;c^=e>>>12;d-=e;d-=c;d^=c<<16;e-=c;e-=d;e^=d>>>5;c-=d;c-=e;c^=e>>>3;d-=e;d-=c;d^=c<<10;e-=c;e-=d;e^=d>>>15}
a=fg(a);for(var c=2654435769,d=2654435769,e=314159265,f=a.length,g=f,h=0;12<=g;g-=12,h+=12)c+=gg(a,h),d+=gg(a,h+4),e+=gg(a,h+8),b();e+=f;switch(g){case 11:e+=a[h+10]<<24;case 10:e+=a[h+9]<<16;case 9:e+=a[h+8]<<8;case 8:d+=a[h+7]<<24;case 7:d+=a[h+6]<<16;case 6:d+=a[h+5]<<8;case 5:d+=a[h+4];case 4:c+=a[h+3]<<24;case 3:c+=a[h+2]<<16;case 2:c+=a[h+1]<<8;case 1:c+=a[h+0]}b();return dg.toString(e)}
function fg(a){for(var b=[],c=0;c<a.length;c++)b.push(a.charCodeAt(c));return b}
function gg(a,b){return a[b+0]+(a[b+1]<<8)+(a[b+2]<<16)+(a[b+3]<<24)}
;function hg(a){H.call(this,a,-1,ig)}
u(hg,H);function jg(a){H.call(this,a,-1,kg)}
u(jg,H);function lg(a){H.call(this,a)}
u(lg,H);function mg(a){H.call(this,a)}
u(mg,H);var ig=[3,6,4],kg=[1],ng=[1,2,3],og=[1,2,3];function pg(a){H.call(this,a,-1,qg)}
u(pg,H);var qg=[1];function rg(a){if(!a)return"";if(/^about:(?:blank|srcdoc)$/.test(a))return window.origin||"";a=a.split("#")[0].split("?")[0];a=a.toLowerCase();0==a.indexOf("//")&&(a=window.location.protocol+a);/^[\w\-]*:\/\//.test(a)||(a=window.location.href);var b=a.substring(a.indexOf("://")+3),c=b.indexOf("/");-1!=c&&(b=b.substring(0,c));c=a.substring(0,a.indexOf("://"));if(!c)throw Error("URI is missing protocol: "+a);if("http"!==c&&"https"!==c&&"chrome-extension"!==c&&"moz-extension"!==c&&"file"!==c&&"android-app"!==
c&&"chrome-search"!==c&&"chrome-untrusted"!==c&&"chrome"!==c&&"app"!==c&&"devtools"!==c)throw Error("Invalid URI scheme in origin: "+c);a="";var d=b.indexOf(":");if(-1!=d){var e=b.substring(d+1);b=b.substring(0,d);if("http"===c&&"80"!==e||"https"===c&&"443"!==e)a=":"+e}return c+"://"+b+a}
;function sg(){function a(){e[0]=1732584193;e[1]=4023233417;e[2]=2562383102;e[3]=271733878;e[4]=3285377520;n=m=0}
function b(p){for(var v=g,t=0;64>t;t+=4)v[t/4]=p[t]<<24|p[t+1]<<16|p[t+2]<<8|p[t+3];for(t=16;80>t;t++)p=v[t-3]^v[t-8]^v[t-14]^v[t-16],v[t]=(p<<1|p>>>31)&4294967295;p=e[0];var y=e[1],D=e[2],E=e[3],O=e[4];for(t=0;80>t;t++){if(40>t)if(20>t){var N=E^y&(D^E);var S=1518500249}else N=y^D^E,S=1859775393;else 60>t?(N=y&D|E&(y|D),S=2400959708):(N=y^D^E,S=3395469782);N=((p<<5|p>>>27)&4294967295)+N+O+S+v[t]&4294967295;O=E;E=D;D=(y<<30|y>>>2)&4294967295;y=p;p=N}e[0]=e[0]+p&4294967295;e[1]=e[1]+y&4294967295;e[2]=
e[2]+D&4294967295;e[3]=e[3]+E&4294967295;e[4]=e[4]+O&4294967295}
function c(p,v){if("string"===typeof p){p=unescape(encodeURIComponent(p));for(var t=[],y=0,D=p.length;y<D;++y)t.push(p.charCodeAt(y));p=t}v||(v=p.length);t=0;if(0==m)for(;t+64<v;)b(p.slice(t,t+64)),t+=64,n+=64;for(;t<v;)if(f[m++]=p[t++],n++,64==m)for(m=0,b(f);t+64<v;)b(p.slice(t,t+64)),t+=64,n+=64}
function d(){var p=[],v=8*n;56>m?c(h,56-m):c(h,64-(m-56));for(var t=63;56<=t;t--)f[t]=v&255,v>>>=8;b(f);for(t=v=0;5>t;t++)for(var y=24;0<=y;y-=8)p[v++]=e[t]>>y&255;return p}
for(var e=[],f=[],g=[],h=[128],k=1;64>k;++k)h[k]=0;var m,n;a();return{reset:a,update:c,digest:d,ie:function(){for(var p=d(),v="",t=0;t<p.length;t++)v+="0123456789ABCDEF".charAt(Math.floor(p[t]/16))+"0123456789ABCDEF".charAt(p[t]%16);return v}}}
;function tg(a,b,c){var d=String(z.location.href);return d&&a&&b?[b,ug(rg(d),a,c||null)].join(" "):null}
function ug(a,b,c){var d=[],e=[];if(1==(Array.isArray(c)?2:1))return e=[b,a],hb(d,function(h){e.push(h)}),vg(e.join(" "));
var f=[],g=[];hb(c,function(h){g.push(h.key);f.push(h.value)});
c=Math.floor((new Date).getTime()/1E3);e=0==f.length?[c,b,a]:[f.join(":"),c,b,a];hb(d,function(h){e.push(h)});
a=vg(e.join(" "));a=[c,a];0==g.length||a.push(g.join(""));return a.join("_")}
function vg(a){var b=sg();b.update(a);return b.ie().toLowerCase()}
;var wg={};function xg(a){this.h=a||{cookie:""}}
l=xg.prototype;l.isEnabled=function(){if(!z.navigator.cookieEnabled)return!1;if(!this.Kb())return!0;this.set("TESTCOOKIESENABLED","1",{mc:60});if("1"!==this.get("TESTCOOKIESENABLED"))return!1;this.remove("TESTCOOKIESENABLED");return!0};
l.set=function(a,b,c){var d=!1;if("object"===typeof c){var e=c.Kt;d=c.secure||!1;var f=c.domain||void 0;var g=c.path||void 0;var h=c.mc}if(/[;=\s]/.test(a))throw Error('Invalid cookie name "'+a+'"');if(/[;\r\n]/.test(b))throw Error('Invalid cookie value "'+b+'"');void 0===h&&(h=-1);c=f?";domain="+f:"";g=g?";path="+g:"";d=d?";secure":"";h=0>h?"":0==h?";expires="+(new Date(1970,1,1)).toUTCString():";expires="+(new Date(Date.now()+1E3*h)).toUTCString();this.h.cookie=a+"="+b+c+g+h+d+(null!=e?";samesite="+
e:"")};
l.get=function(a,b){for(var c=a+"=",d=(this.h.cookie||"").split(";"),e=0,f;e<d.length;e++){f=Lb(d[e]);if(0==f.lastIndexOf(c,0))return f.slice(c.length);if(f==a)return""}return b};
l.remove=function(a,b,c){var d=void 0!==this.get(a);this.set(a,"",{mc:0,path:b,domain:c});return d};
l.Dc=function(){return yg(this).keys};
l.Kb=function(){return!this.h.cookie};
l.clear=function(){for(var a=yg(this).keys,b=a.length-1;0<=b;b--)this.remove(a[b])};
function yg(a){a=(a.h.cookie||"").split(";");for(var b=[],c=[],d,e,f=0;f<a.length;f++)e=Lb(a[f]),d=e.indexOf("="),-1==d?(b.push(""),c.push(e)):(b.push(e.substring(0,d)),c.push(e.substring(d+1)));return{keys:b,values:c}}
var zg=new xg("undefined"==typeof document?null:document);function Ag(a){return!!wg.FPA_SAMESITE_PHASE2_MOD||!(void 0===a||!a)}
function Bg(a){a=void 0===a?!1:a;var b=z.__SAPISID||z.__APISID||z.__3PSAPISID||z.__OVERRIDE_SID;Ag(a)&&(b=b||z.__1PSAPISID);if(b)return!0;var c=new xg(document);b=c.get("SAPISID")||c.get("APISID")||c.get("__Secure-3PAPISID")||c.get("SID");Ag(a)&&(b=b||c.get("__Secure-1PAPISID"));return!!b}
function Cg(a,b,c,d){(a=z[a])||(a=(new xg(document)).get(b));return a?tg(a,c,d):null}
function Dg(a,b){b=void 0===b?!1:b;var c=rg(String(z.location.href)),d=[];if(Bg(b)){c=0==c.indexOf("https:")||0==c.indexOf("chrome-extension:")||0==c.indexOf("moz-extension:");var e=c?z.__SAPISID:z.__APISID;e||(e=new xg(document),e=e.get(c?"SAPISID":"APISID")||e.get("__Secure-3PAPISID"));(e=e?tg(e,c?"SAPISIDHASH":"APISIDHASH",a):null)&&d.push(e);c&&Ag(b)&&((b=Cg("__1PSAPISID","__Secure-1PAPISID","SAPISID1PHASH",a))&&d.push(b),(a=Cg("__3PSAPISID","__Secure-3PAPISID","SAPISID3PHASH",a))&&d.push(a))}return 0==
d.length?null:d.join(" ")}
;function Eg(a){H.call(this,a,-1,Fg)}
u(Eg,H);var Fg=[2];function Gg(a){this.h=this.i=this.j=a}
Gg.prototype.reset=function(){this.h=this.i=this.j};
Gg.prototype.getValue=function(){return this.i};function Hg(a){var b=[];Ig(new Jg,a,b);return b.join("")}
function Jg(){}
function Ig(a,b,c){if(null==b)c.push("null");else{if("object"==typeof b){if(Array.isArray(b)){var d=b;b=d.length;c.push("[");for(var e="",f=0;f<b;f++)c.push(e),Ig(a,d[f],c),e=",";c.push("]");return}if(b instanceof String||b instanceof Number||b instanceof Boolean)b=b.valueOf();else{c.push("{");e="";for(d in b)Object.prototype.hasOwnProperty.call(b,d)&&(f=b[d],"function"!=typeof f&&(c.push(e),Kg(d,c),c.push(":"),Ig(a,f,c),e=","));c.push("}");return}}switch(typeof b){case "string":Kg(b,c);break;case "number":c.push(isFinite(b)&&
!isNaN(b)?String(b):"null");break;case "boolean":c.push(String(b));break;case "function":c.push("null");break;default:throw Error("Unknown type: "+typeof b);}}}
var Lg={'"':'\\"',"\\":"\\\\","/":"\\/","\b":"\\b","\f":"\\f","\n":"\\n","\r":"\\r","\t":"\\t","\v":"\\u000b"},Mg=/\uffff/.test("\uffff")?/[\\"\x00-\x1f\x7f-\uffff]/g:/[\\"\x00-\x1f\x7f-\xff]/g;function Kg(a,b){b.push('"',a.replace(Mg,function(c){var d=Lg[c];d||(d="\\u"+(c.charCodeAt(0)|65536).toString(16).slice(1),Lg[c]=d);return d}),'"')}
;function Ng(){}
Ng.prototype.h=null;Ng.prototype.getOptions=function(){var a;(a=this.h)||(a={},Og(this)&&(a[0]=!0,a[1]=!0),a=this.h=a);return a};var Pg;function Qg(){}
ab(Qg,Ng);function Rg(a){return(a=Og(a))?new ActiveXObject(a):new XMLHttpRequest}
function Og(a){if(!a.i&&"undefined"==typeof XMLHttpRequest&&"undefined"!=typeof ActiveXObject){for(var b=["MSXML2.XMLHTTP.6.0","MSXML2.XMLHTTP.3.0","MSXML2.XMLHTTP","Microsoft.XMLHTTP"],c=0;c<b.length;c++){var d=b[c];try{return new ActiveXObject(d),a.i=d}catch(e){}}throw Error("Could not create ActiveXObject. ActiveX might be disabled, or MSXML might not be installed");}return a.i}
Pg=new Qg;function Sg(a){af.call(this);this.headers=new Map;this.V=a||null;this.i=!1;this.S=this.G=null;this.m=this.ia="";this.j=this.aa=this.v=this.Z=!1;this.s=0;this.N=null;this.Aa="";this.oa=this.qa=!1}
ab(Sg,af);var Tg=/^https?$/i,Ug=["POST","PUT"],Vg=[];function Wg(a,b,c,d,e,f,g){var h=new Sg;Vg.push(h);b&&h.Ma("complete",b);h.l.add("ready",h.ge,!0,void 0,void 0);f&&(h.s=Math.max(0,f));g&&(h.qa=g);h.send(a,c,d,e)}
l=Sg.prototype;l.ge=function(){this.dispose();mb(Vg,this)};
l.send=function(a,b,c,d){if(this.G)throw Error("[goog.net.XhrIo] Object is active with another request="+this.ia+"; newUri="+a);b=b?b.toUpperCase():"GET";this.ia=a;this.m="";this.Z=!1;this.i=!0;this.G=this.V?Rg(this.V):Rg(Pg);this.S=this.V?this.V.getOptions():Pg.getOptions();this.G.onreadystatechange=Za(this.Bd,this);try{this.getStatus(),this.aa=!0,this.G.open(b,String(a),!0),this.aa=!1}catch(g){this.getStatus();Xg(this,g);return}a=c||"";c=new Map(this.headers);if(d)if(Object.getPrototypeOf(d)===
Object.prototype)for(var e in d)c.set(e,d[e]);else if("function"===typeof d.keys&&"function"===typeof d.get){e=r(d.keys());for(var f=e.next();!f.done;f=e.next())f=f.value,c.set(f,d.get(f))}else throw Error("Unknown input type for opt_headers: "+String(d));d=Array.from(c.keys()).find(function(g){return"content-type"==g.toLowerCase()});
e=z.FormData&&a instanceof z.FormData;!(0<=gb(Ug,b))||d||e||c.set("Content-Type","application/x-www-form-urlencoded;charset=utf-8");b=r(c);for(d=b.next();!d.done;d=b.next())c=r(d.value),d=c.next().value,c=c.next().value,this.G.setRequestHeader(d,c);this.Aa&&(this.G.responseType=this.Aa);"withCredentials"in this.G&&this.G.withCredentials!==this.qa&&(this.G.withCredentials=this.qa);try{Yg(this),0<this.s&&(this.oa=Zg(this.G),this.getStatus(),this.oa?(this.G.timeout=this.s,this.G.ontimeout=Za(this.Od,
this)):this.N=Vf(this.Od,this.s,this)),this.getStatus(),this.v=!0,this.G.send(a),this.v=!1}catch(g){this.getStatus(),Xg(this,g)}};
function Zg(a){return Hc&&"number"===typeof a.timeout&&void 0!==a.ontimeout}
l.Od=function(){"undefined"!=typeof Oa&&this.G&&(this.m="Timed out after "+this.s+"ms, aborting",this.getStatus(),bf(this,"timeout"),this.abort(8))};
function Xg(a,b){a.i=!1;a.G&&(a.j=!0,a.G.abort(),a.j=!1);a.m=b;$g(a);ah(a)}
function $g(a){a.Z||(a.Z=!0,bf(a,"complete"),bf(a,"error"))}
l.abort=function(){this.G&&this.i&&(this.getStatus(),this.i=!1,this.j=!0,this.G.abort(),this.j=!1,bf(this,"complete"),bf(this,"abort"),ah(this))};
l.M=function(){this.G&&(this.i&&(this.i=!1,this.j=!0,this.G.abort(),this.j=!1),ah(this,!0));Sg.va.M.call(this)};
l.Bd=function(){this.h()||(this.aa||this.v||this.j?bh(this):this.Je())};
l.Je=function(){bh(this)};
function bh(a){if(a.i&&"undefined"!=typeof Oa)if(a.S[1]&&4==ch(a)&&2==a.getStatus())a.getStatus();else if(a.v&&4==ch(a))Vf(a.Bd,0,a);else if(bf(a,"readystatechange"),a.isComplete()){a.getStatus();a.i=!1;try{if(dh(a))bf(a,"complete"),bf(a,"success");else{try{var b=2<ch(a)?a.G.statusText:""}catch(c){b=""}a.m=b+" ["+a.getStatus()+"]";$g(a)}}finally{ah(a)}}}
function ah(a,b){if(a.G){Yg(a);var c=a.G,d=a.S[0]?function(){}:null;
a.G=null;a.S=null;b||bf(a,"ready");try{c.onreadystatechange=d}catch(e){}}}
function Yg(a){a.G&&a.oa&&(a.G.ontimeout=null);a.N&&(z.clearTimeout(a.N),a.N=null)}
l.isActive=function(){return!!this.G};
l.isComplete=function(){return 4==ch(this)};
function dh(a){var b=a.getStatus();a:switch(b){case 200:case 201:case 202:case 204:case 206:case 304:case 1223:var c=!0;break a;default:c=!1}if(!c){if(b=0===b)a=oc(1,String(a.ia)),!a&&z.self&&z.self.location&&(a=z.self.location.protocol.slice(0,-1)),b=!Tg.test(a?a.toLowerCase():"");c=b}return c}
function ch(a){return a.G?a.G.readyState:0}
l.getStatus=function(){try{return 2<ch(this)?this.G.status:-1}catch(a){return-1}};
l.getLastError=function(){return"string"===typeof this.m?this.m:String(this.m)};function eh(a){H.call(this,a)}
u(eh,H);function fh(a){H.call(this,a,-1,gh)}
u(fh,H);var gh=[1];var hh=["platform","platformVersion","architecture","model","uaFullVersion"];new fh;function ih(a){H.call(this,a)}
u(ih,H);function jh(a){H.call(this,a,31,kh)}
u(jh,H);var kh=[3,20,27];function lh(a){H.call(this,a,17,mh)}
u(lh,H);var mh=[3,5];function nh(a){H.call(this,a,6,oh)}
u(nh,H);var oh=[5];function ph(a){H.call(this,a)}
u(ph,H);var qh;qh=new function(a,b,c){this.i=a;this.fieldName=b;this.h=c;this.isRepeated=0;this.j=pe}(175237375,{At:0},ph);function rh(a,b,c,d,e,f,g,h,k,m,n){af.call(this);var p=this;this.Z="";this.j=[];this.Zc="";this.bd=this.eb=-1;this.Yb=!1;this.S=this.m=null;this.N=0;this.Yd=1;this.timeoutMillis=0;this.Aa=!1;af.call(this);this.Zb=b||function(){};
this.v=new sh(a,f);this.Wd=d;this.Xb=n;this.Zd=$a(lf,0,1);this.ia=e||null;this.V=c||null;this.oa=g||!1;this.pageId=k||null;this.logger=null;this.withCredentials=!h;this.Cb=f||!1;!this.Cb&&(65<=bc("Chromium")||45<=bc("Firefox")||12<=bc("Safari")||(Dc()||C("iPad")||C("iPod"))&&Ec());a=F(new ih,1,1);th(this.v,a);this.s=new Gg(1E4);this.i=new Tf(this.s.getValue());we(this,this.i);m=uh(this,m);Qe(this.i,"tick",m,!1,this);this.aa=new Tf(6E5);we(this,this.aa);Qe(this.aa,"tick",m,!1,this);this.oa||this.aa.start();
this.Cb||(Qe(document,"visibilitychange",function(){"hidden"===document.visibilityState&&p.qa()}),Qe(document,"pagehide",this.qa,!1,this))}
u(rh,af);function uh(a,b){return b?function(){b().then(function(){a.flush()})}:function(){a.flush()}}
rh.prototype.M=function(){this.qa();af.prototype.M.call(this)};
function vh(a){a.ia||(a.ia=.01>a.Zd()?"https://www.google.com/log?format=json&hasfast=true":"https://play.google.com/log?format=json&hasfast=true");return a.ia}
function wh(a,b){a.s=new Gg(1>b?1:b);Uf(a.i,a.s.getValue())}
rh.prototype.log=function(a){a=a.clone();var b=this.Yd++;F(a,21,b);this.Z&&F(a,26,this.Z);if(!Td(a,1)){b=a;var c=Date.now().toString();F(b,1,c)}null==Td(a,15)&&F(a,15,60*(new Date).getTimezoneOffset());this.m&&(b=this.m.clone(),G(a,Eg,16,b));for(;1E3<=this.j.length;)this.j.shift(),++this.N;this.j.push(a);bf(this,new xh(a));this.oa||this.i.enabled||this.i.start()};
rh.prototype.flush=function(a,b){var c=this;if(0===this.j.length)a&&a();else if(this.Aa)yh(this);else{var d=Date.now();if(this.bd>d&&this.eb<d)b&&b("throttled");else{var e=Bh(this.v,this.j,this.N);d={};var f=this.Zb();f&&(d.Authorization=f);var g=vh(this);this.V&&(d["X-Goog-AuthUser"]=this.V,g=xc(g,"authuser",this.V));this.pageId&&(d["X-Goog-PageId"]=this.pageId,g=xc(g,"pageId",this.pageId));if(f&&this.Zc===f)b&&b("stale-auth-token");else{this.j=[];this.i.enabled&&this.i.stop();this.N=0;var h=me(e),
k;this.S&&this.S.isSupported(h.length)&&(k=this.S.compress(h));var m={url:g,body:h,de:1,Qc:d,requestType:"POST",withCredentials:this.withCredentials,timeoutMillis:this.timeoutMillis},n=function(t){c.s.reset();Uf(c.i,c.s.getValue());if(t){var y=null;try{var D=JSON.parse(t.replace(")]}'\n",""));y=new nh(D)}catch(E){}y&&(t=Number(ge(Td(y,1),"-1")),0<t&&(c.eb=Date.now(),c.bd=c.eb+t),y=qh.j(y))&&(y=Td(y,1),y=null==y?-1:y,-1!=y&&(c.Yb||wh(c,y)))}a&&a()},p=function(t,y){var D=be(e,jh,3),E=c.s;
E.h=Math.min(3E5,2*E.h);E.i=Math.min(3E5,E.h+Math.round(.2*(Math.random()-.5)*E.h));Uf(c.i,c.s.getValue());401===t&&f&&(c.Zc=f);void 0===y&&(y=500<=t&&600>t||401===t||0===t);y&&(c.j=D.concat(c.j),c.oa||c.i.enabled||c.i.start());b&&b("net-send-failed",t)},v=function(){c.Xb?c.Xb.send(m,n,p):c.Wd(m,n,p)};
k?k.then(function(t){m.Qc["Content-Encoding"]="gzip";m.Qc["Content-Type"]="application/binary";m.body=t;m.de=2;v()},function(){v()}):v()}}}};
rh.prototype.qa=function(){this.flush()};
function yh(a){Ch(a,function(b,c){b=xc(b,"format","json");b=window.navigator.sendBeacon(b,me(c));a.Aa&&!b&&(a.Aa=!1);return b})}
function Ch(a,b){if(0!==a.j.length){var c=Bc(vh(a),"format");c=vc(c,"auth",a.Zb(),"authuser",a.V||"0");for(var d=0;10>d&&a.j.length;++d){var e=a.j.slice(0,32),f=Bh(a.v,e,a.N);if(!b(c,f))break;a.N=0;a.j=a.j.slice(e.length)}a.i.enabled&&a.i.stop()}}
function xh(){ye.call(this,"event-logged",void 0)}
u(xh,ye);function sh(a,b){this.i=b=void 0===b?!1:b;this.uach=this.locale=null;this.h=new lh;F(this.h,2,a);b||(this.locale=document.documentElement.getAttribute("lang"));th(this,new ih)}
function th(a,b){G(a.h,ih,1,b);Td(b,1)||F(b,1,1);a.i||(b=Dh(a),Td(b,5)||F(b,5,a.locale));a.uach&&(b=Dh(a),Zd(b,fh,9)||G(b,fh,9,a.uach))}
function Eh(a,b){var c=void 0===c?hh:c;b(window,c).then(function(d){a.uach=d;d=Dh(a);G(d,fh,9,a.uach);return!0}).catch(function(){return!1})}
function Dh(a){a=Zd(a.h,ih,1);var b=Zd(a,eh,11);b||(b=new eh,G(a,eh,11,b));return b}
function Bh(a,b,c){c=void 0===c?0:c;a=a.h.clone();var d=Date.now().toString();a=F(a,4,d);b=de(a,jh,3,b);c&&F(b,14,c);return b}
;function Fh(a,b,c){Wg(a.url,function(d){d=d.target;if(dh(d)){try{var e=d.G?d.G.responseText:""}catch(f){e=""}b(e)}else c(d.getStatus())},a.requestType,a.body,a.Qc,a.timeoutMillis,a.withCredentials)}
;function Gh(){this.j="https://play.google.com/log?format=json&hasfast=true";this.v=!1;this.m=Fh;this.h=""}
;function Hh(){var a=void 0===a?"":a;var b=void 0===b?"":b;var c=new Gh;c.h="";""!=a&&(c.j=a);b&&(c.i=b);a=new rh(1828,c.S?c.S:Dg,"0",c.m,c.j,c.v,!1,c.aa,void 0,void 0,c.s?c.s:void 0);c.X&&th(a.v,c.X);if(c.i){b=c.i;var d=Dh(a.v);F(d,7,b)}c.l&&(a.S=c.l);c.h&&(a.Z=c.h);c.D&&((b=c.D)?(a.m||(a.m=new Eg),b=me(b),F(a.m,4,b)):a.m&&F(a.m,4,void 0,!1));c.V&&(d=c.V,a.m||(a.m=new Eg),b=a.m,d=null==d?Bd:pd(d,1),F(b,2,d));c.N&&(b=c.N,a.Yb=!0,wh(a,b));c.Z&&Eh(a.v,c.Z);this.h=a}
Hh.prototype.flush=function(a){var b=a||[];if(b.length){a=new pg;for(var c=[],d=0;d<b.length;d++){var e=b[d],f=e,g=new hg;var h=F(g,1,f.i);var k=f;g=[];for(var m=0;m<k.h.length;m++)g.push(k.h[m].Hb);if(null==g)g=F(h,3,Bd);else{k=qd(g);if(!(k&4)){if(k&2||Object.isFrozen(g))g=Array.prototype.slice.call(g);for(m=0;m<g.length;m++)g[m]=g[m];rd(g,k|5)}g=F(h,3,g)}h=[];k=[];m=r(f.pb.keys());for(var n=m.next();!n.done;n=m.next())k.push(n.value.split(","));for(m=0;m<k.length;m++){n=k[m];var p=f.l;for(var v=
f.Ac(n)||[],t=[],y=0;y<v.length;y++){var D=v[y],E=D&&D.hd;D=new mg;switch(p){case 3:Xd(D,1,og,Number(E));break;case 2:var O=D;E=Number(E);var N=og;if(null!=E&&"number"!==typeof E)throw Error("Value of double field must be a number|null|undefined, found "+typeof E+": "+E);Xd(O,2,N,E)}t.push(D)}p=t;for(v=0;v<p.length;v++){t=p[v];y=new jg;t=G(y,mg,2,t);y=n;D=[];O=f;E=[];for(N=0;N<O.h.length;N++)E.push(O.h[N].Ib);O=E;for(E=0;E<O.length;E++){N=O[E];var S=y[E],aa=new lg;switch(N){case 3:Xd(aa,1,ng,String(S));
break;case 2:Xd(aa,2,ng,Number(S));break;case 1:Xd(aa,3,ng,"true"==S)}D.push(aa)}de(t,lg,1,D);h.push(t)}}de(g,jg,4,h);c.push(g);e.clear()}de(a,hg,1,c);b=this.h;a instanceof jh?b.log(a):(c=new jh,a=me(a),a=F(c,8,a),b.log(a));this.h.flush()}};function Ih(a){this.D=Jh();this.m=new Hh;this.h=new Wf(this.m);this.s=new ag(this.h);this.j=new bg(this.h);this.l=new cg(this.h);this.i=new $f(this.h);this.Va=eg(a)}
function Jh(){var a,b,c;return null!=(c=null==(a=globalThis.performance)?void 0:null==(b=a.now)?void 0:b.call(a))?c:Date.now()}
;function Kh(){var a=this;this.promise=new Promise(function(b,c){a.resolve=b;a.reject=c})}
;function Lh(a){var b=this;this.i=!1;var c=a.program;var d=a.te;if(a.Ne){var e;this.Ha=null!=(e=a.Ha)?e:new Ih(d)}var f=new Kh;this.j=f.promise;if(!z[d]){var g;null!=(g=this.Ha)&&g.i.h.Wb("/client_streamz/bg/fiec",g.Va,1)}else if(!z[d].a){var h;null!=(h=this.Ha)&&h.i.h.Wb("/client_streamz/bg/fiec",h.Va,2)}this.l=r((0,z[d].a)(c,function(k,m){Promise.resolve().then(function(){var n;if(null!=(n=b.Ha)){var p=Jh()-n.D;n.s.h.wc("/client_streamz/bg/fil",p,n.Va)}f.resolve({be:k,bf:m})})},!0)).next().value;
this.af=f.promise.then(function(){})}
Lh.prototype.snapshot=function(a){var b=this;if(this.i)throw Error("Already disposed");var c=Jh(),d;null!=(d=this.Ha)&&d.j.h.Wb("/client_streamz/bg/fsc",d.Va);return this.j.then(function(e){var f=e.be;return new Promise(function(g){f(function(h){var k;if(null!=(k=b.Ha)){var m=Jh()-c;k.l.h.wc("/client_streamz/bg/fsl",m,k.Va)}g(h)},[a.kd,
a.cf])})})};
Lh.prototype.Ld=function(a){if(this.i)throw Error("Already disposed");var b=Jh(),c;null!=(c=this.Ha)&&c.j.h.Wb("/client_streamz/bg/fsc",c.Va);a=this.l([a.kd,a.cf]);null!=(c=this.Ha)&&(b=Jh()-b,c.l.h.wc("/client_streamz/bg/fsl",b,c.Va));return a};
Lh.prototype.dispose=function(){var a;null!=(a=this.Ha)&&a.h.xc();this.i=!0;this.j.then(function(b){(b=b.bf)&&b()})};
Lh.prototype.h=function(){return this.i};var Mh=window;Eb("csi.gstatic.com");Eb("googleads.g.doubleclick.net");Eb("partner.googleadservices.com");Eb("pubads.g.doubleclick.net");Eb("securepubads.g.doubleclick.net");Eb("tpc.googlesyndication.com");/*

 SPDX-License-Identifier: Apache-2.0
*/
var Nh;try{new URL("s://g"),Nh=!0}catch(a){Nh=!1}var Oh=Nh;var Ph={};function Qh(){}
function Rh(a){this.h=a}
u(Rh,Qh);Rh.prototype.toString=function(){return this.h};function Sh(a){var b="true".toString(),c=[new Rh(Th[0].toLowerCase(),Ph)];if(0===c.length)throw Error("No prefixes are provided");if(c.map(function(d){if(d instanceof Rh)d=d.h;else throw Error("");return d}).every(function(d){return 0!=="data-loaded".indexOf(d)}))throw Error('Attribute "data-loaded" does not match any of the allowed prefixes.');
a.setAttribute("data-loaded",b)}
;function Uh(a){var b,c,d=null==(c=(b=(a.ownerDocument&&a.ownerDocument.defaultView||window).document).querySelector)?void 0:c.call(b,"script[nonce]");(b=d?d.nonce||d.getAttribute("nonce")||"":"")&&a.setAttribute("nonce",b)}
function Vh(a,b){a.src=Jb(b);Uh(a)}
;function Wh(a){this.Be=a}
function Xh(a){return new Wh(function(b){return b.substr(0,a.length+1).toLowerCase()===a+":"})}
var Yh=[Xh("data"),Xh("http"),Xh("https"),Xh("mailto"),Xh("ftp"),new Wh(function(a){return/^[^:]*([/?#]|$)/.test(a)})];function Zh(a){var b=$h;if(b)for(var c in b)Object.prototype.hasOwnProperty.call(b,c)&&a(b[c],c,b)}
function ai(){var a=[];Zh(function(b){a.push(b)});
return a}
var $h={yf:"allow-forms",zf:"allow-modals",Af:"allow-orientation-lock",Bf:"allow-pointer-lock",Cf:"allow-popups",Df:"allow-popups-to-escape-sandbox",Ef:"allow-presentation",Ff:"allow-same-origin",Gf:"allow-scripts",Hf:"allow-top-navigation",If:"allow-top-navigation-by-user-activation"},bi=fb(function(){return ai()});
function ci(){var a=di(),b={};hb(bi(),function(c){a.sandbox&&a.sandbox.supports&&a.sandbox.supports(c)&&(b[c]=!0)});
return b}
function di(){var a=void 0===a?document:a;return a.createElement("iframe")}
;function ei(a){"number"==typeof a&&(a=Math.round(a)+"px");return a}
;var fi=(new Date).getTime();var gi="client_dev_domain client_dev_regex_map client_dev_root_url client_rollout_override expflag forcedCapability jsfeat jsmode mods".split(" ");ja(gi);"undefined"!==typeof TextDecoder&&new TextDecoder;var hi="undefined"!==typeof TextEncoder?new TextEncoder:null,ii=hi?function(a){return hi.encode(a)}:function(a){for(var b=[],c=0,d=0;d<a.length;d++){var e=a.charCodeAt(d);
128>e?b[c++]=e:(2048>e?b[c++]=e>>6|192:(55296==(e&64512)&&d+1<a.length&&56320==(a.charCodeAt(d+1)&64512)?(e=65536+((e&1023)<<10)+(a.charCodeAt(++d)&1023),b[c++]=e>>18|240,b[c++]=e>>12&63|128):b[c++]=e>>12|224,b[c++]=e>>6&63|128),b[c++]=e&63|128)}a=new Uint8Array(b.length);for(c=0;c<a.length;c++)a[c]=b[c];return a};function ji(a){af.call(this);var b=this;this.v=this.j=0;this.xa=null!=a?a:{fa:function(e,f){return setTimeout(e,f)},
Ca:function(e){clearTimeout(e)}};
var c,d;this.i=null!=(d=null==(c=window.navigator)?void 0:c.onLine)?d:!0;this.m=function(){return x(function(e){return w(e,ki(b),0)})};
window.addEventListener("offline",this.m);window.addEventListener("online",this.m);this.v||li(this)}
u(ji,af);function mi(){var a=ni;ji.h||(ji.h=new ji(a));return ji.h}
ji.prototype.dispose=function(){window.removeEventListener("offline",this.m);window.removeEventListener("online",this.m);this.xa.Ca(this.v);delete ji.h};
ji.prototype.ma=function(){return this.i};
function li(a){a.v=a.xa.fa(function(){var b;return x(function(c){if(1==c.h)return a.i?(null==(b=window.navigator)?0:b.onLine)?c.A(3):w(c,ki(a),3):w(c,ki(a),3);li(a);c.h=0})},3E4)}
function ki(a,b){return a.s?a.s:a.s=new Promise(function(c){var d,e,f,g;return x(function(h){switch(h.h){case 1:return d=window.AbortController?new window.AbortController:void 0,f=null==(e=d)?void 0:e.signal,g=!1,za(h,2,3),d&&(a.j=a.xa.fa(function(){d.abort()},b||2E4)),w(h,fetch("/generate_204",{method:"HEAD",
signal:f}),5);case 5:g=!0;case 3:Ca(h);a.s=void 0;a.j&&(a.xa.Ca(a.j),a.j=0);g!==a.i&&(a.i=g,a.i?bf(a,"networkstatus-online"):bf(a,"networkstatus-offline"));c(g);Da(h);break;case 2:Ba(h),g=!1,h.A(3)}})})}
;function oi(){this.data_=[];this.h=-1}
oi.prototype.set=function(a,b){b=void 0===b?!0:b;0<=a&&52>a&&Number.isInteger(a)&&this.data_[a]!==b&&(this.data_[a]=b,this.h=-1)};
oi.prototype.get=function(a){return!!this.data_[a]};
function pi(a){-1===a.h&&(a.h=kb(a.data_,function(b,c,d){return c?b+Math.pow(2,d):b},0));
return a.h}
;function qi(a,b){this.h=a[z.Symbol.iterator]();this.i=b}
qi.prototype[Symbol.iterator]=function(){return this};
qi.prototype.next=function(){var a=this.h.next();return{value:a.done?void 0:this.i.call(void 0,a.value),done:a.done}};
function ri(a,b){return new qi(a,b)}
;function si(){this.blockSize=-1}
;function ti(){this.blockSize=-1;this.blockSize=64;this.h=[];this.m=[];this.s=[];this.j=[];this.j[0]=128;for(var a=1;a<this.blockSize;++a)this.j[a]=0;this.l=this.i=0;this.reset()}
ab(ti,si);ti.prototype.reset=function(){this.h[0]=1732584193;this.h[1]=4023233417;this.h[2]=2562383102;this.h[3]=271733878;this.h[4]=3285377520;this.l=this.i=0};
function ui(a,b,c){c||(c=0);var d=a.s;if("string"===typeof b)for(var e=0;16>e;e++)d[e]=b.charCodeAt(c)<<24|b.charCodeAt(c+1)<<16|b.charCodeAt(c+2)<<8|b.charCodeAt(c+3),c+=4;else for(e=0;16>e;e++)d[e]=b[c]<<24|b[c+1]<<16|b[c+2]<<8|b[c+3],c+=4;for(e=16;80>e;e++){var f=d[e-3]^d[e-8]^d[e-14]^d[e-16];d[e]=(f<<1|f>>>31)&4294967295}b=a.h[0];c=a.h[1];var g=a.h[2],h=a.h[3],k=a.h[4];for(e=0;80>e;e++){if(40>e)if(20>e){f=h^c&(g^h);var m=1518500249}else f=c^g^h,m=1859775393;else 60>e?(f=c&g|h&(c|g),m=2400959708):
(f=c^g^h,m=3395469782);f=(b<<5|b>>>27)+f+k+m+d[e]&4294967295;k=h;h=g;g=(c<<30|c>>>2)&4294967295;c=b;b=f}a.h[0]=a.h[0]+b&4294967295;a.h[1]=a.h[1]+c&4294967295;a.h[2]=a.h[2]+g&4294967295;a.h[3]=a.h[3]+h&4294967295;a.h[4]=a.h[4]+k&4294967295}
ti.prototype.update=function(a,b){if(null!=a){void 0===b&&(b=a.length);for(var c=b-this.blockSize,d=0,e=this.m,f=this.i;d<b;){if(0==f)for(;d<=c;)ui(this,a,d),d+=this.blockSize;if("string"===typeof a)for(;d<b;){if(e[f]=a.charCodeAt(d),++f,++d,f==this.blockSize){ui(this,e);f=0;break}}else for(;d<b;)if(e[f]=a[d],++f,++d,f==this.blockSize){ui(this,e);f=0;break}}this.i=f;this.l+=b}};
ti.prototype.digest=function(){var a=[],b=8*this.l;56>this.i?this.update(this.j,56-this.i):this.update(this.j,this.blockSize-(this.i-56));for(var c=this.blockSize-1;56<=c;c--)this.m[c]=b&255,b/=256;ui(this,this.m);for(c=b=0;5>c;c++)for(var d=24;0<=d;d-=8)a[b]=this.h[c]>>d&255,++b;return a};function vi(a){return"string"==typeof a.className?a.className:a.getAttribute&&a.getAttribute("class")||""}
function wi(a,b){"string"==typeof a.className?a.className=b:a.setAttribute&&a.setAttribute("class",b)}
function xi(a,b){a.classList?b=a.classList.contains(b):(a=a.classList?a.classList:vi(a).match(/\S+/g)||[],b=0<=gb(a,b));return b}
function yi(){var a=document.body;a.classList?a.classList.remove("inverted-hdpi"):xi(a,"inverted-hdpi")&&wi(a,Array.prototype.filter.call(a.classList?a.classList:vi(a).match(/\S+/g)||[],function(b){return"inverted-hdpi"!=b}).join(" "))}
;function zi(){}
zi.prototype.next=function(){return Ai};
var Ai={done:!0,value:void 0};function Bi(a){return{value:a,done:!1}}
zi.prototype.Ba=function(){return this};function Ci(a){if(a instanceof Di||a instanceof Ei||a instanceof Fi)return a;if("function"==typeof a.next)return new Di(function(){return a});
if("function"==typeof a[Symbol.iterator])return new Di(function(){return a[Symbol.iterator]()});
if("function"==typeof a.Ba)return new Di(function(){return a.Ba()});
throw Error("Not an iterator or iterable.");}
function Di(a){this.i=a}
Di.prototype.Ba=function(){return new Ei(this.i())};
Di.prototype[Symbol.iterator]=function(){return new Fi(this.i())};
Di.prototype.h=function(){return new Fi(this.i())};
function Ei(a){this.i=a}
u(Ei,zi);Ei.prototype.next=function(){return this.i.next()};
Ei.prototype[Symbol.iterator]=function(){return new Fi(this.i)};
Ei.prototype.h=function(){return new Fi(this.i)};
function Fi(a){Di.call(this,function(){return a});
this.j=a}
u(Fi,Di);Fi.prototype.next=function(){return this.j.next()};function Gi(a,b){this.i={};this.h=[];this.Xa=this.size=0;var c=arguments.length;if(1<c){if(c%2)throw Error("Uneven number of arguments");for(var d=0;d<c;d+=2)this.set(arguments[d],arguments[d+1])}else if(a)if(a instanceof Gi)for(c=a.Dc(),d=0;d<c.length;d++)this.set(c[d],a.get(c[d]));else for(d in a)this.set(d,a[d])}
l=Gi.prototype;l.Dc=function(){Hi(this);return this.h.concat()};
l.has=function(a){return Ii(this.i,a)};
l.equals=function(a,b){if(this===a)return!0;if(this.size!=a.size)return!1;b=b||Ji;Hi(this);for(var c,d=0;c=this.h[d];d++)if(!b(this.get(c),a.get(c)))return!1;return!0};
function Ji(a,b){return a===b}
l.Kb=function(){return 0==this.size};
l.clear=function(){this.i={};this.Xa=this.size=this.h.length=0};
l.remove=function(a){return this.delete(a)};
l.delete=function(a){return Ii(this.i,a)?(delete this.i[a],--this.size,this.Xa++,this.h.length>2*this.size&&Hi(this),!0):!1};
function Hi(a){if(a.size!=a.h.length){for(var b=0,c=0;b<a.h.length;){var d=a.h[b];Ii(a.i,d)&&(a.h[c++]=d);b++}a.h.length=c}if(a.size!=a.h.length){var e={};for(c=b=0;b<a.h.length;)d=a.h[b],Ii(e,d)||(a.h[c++]=d,e[d]=1),b++;a.h.length=c}}
l.get=function(a,b){return Ii(this.i,a)?this.i[a]:b};
l.set=function(a,b){Ii(this.i,a)||(this.size+=1,this.h.push(a),this.Xa++);this.i[a]=b};
l.forEach=function(a,b){for(var c=this.Dc(),d=0;d<c.length;d++){var e=c[d],f=this.get(e);a.call(b,f,e,this)}};
l.clone=function(){return new Gi(this)};
l.keys=function(){return Ci(this.Ba(!0)).h()};
l.values=function(){return Ci(this.Ba(!1)).h()};
l.entries=function(){var a=this;return ri(this.keys(),function(b){return[b,a.get(b)]})};
l.Ba=function(a){Hi(this);var b=0,c=this.Xa,d=this,e=new zi;e.next=function(){if(c!=d.Xa)throw Error("The map has changed since the iterator was created");if(b>=d.h.length)return Ai;var f=d.h[b++];return Bi(a?f:d.i[f])};
return e};
function Ii(a,b){return Object.prototype.hasOwnProperty.call(a,b)}
;function Ki(a){J.call(this);this.s=1;this.l=[];this.m=0;this.i=[];this.j={};this.v=!!a}
ab(Ki,J);l=Ki.prototype;l.subscribe=function(a,b,c){var d=this.j[a];d||(d=this.j[a]=[]);var e=this.s;this.i[e]=a;this.i[e+1]=b;this.i[e+2]=c;this.s=e+3;d.push(e);return e};
function Li(a,b,c,d){if(b=a.j[b]){var e=a.i;(b=b.find(function(f){return e[f+1]==c&&e[f+2]==d}))&&a.Bb(b)}}
l.Bb=function(a){var b=this.i[a];if(b){var c=this.j[b];0!=this.m?(this.l.push(a),this.i[a+1]=function(){}):(c&&mb(c,a),delete this.i[a],delete this.i[a+1],delete this.i[a+2])}return!!b};
l.cb=function(a,b){var c=this.j[a];if(c){for(var d=Array(arguments.length-1),e=1,f=arguments.length;e<f;e++)d[e-1]=arguments[e];if(this.v)for(e=0;e<c.length;e++){var g=c[e];Mi(this.i[g+1],this.i[g+2],d)}else{this.m++;try{for(e=0,f=c.length;e<f&&!this.h();e++)g=c[e],this.i[g+1].apply(this.i[g+2],d)}finally{if(this.m--,0<this.l.length&&0==this.m)for(;c=this.l.pop();)this.Bb(c)}}return 0!=e}return!1};
function Mi(a,b,c){zf(function(){a.apply(b,c)})}
l.clear=function(a){if(a){var b=this.j[a];b&&(b.forEach(this.Bb,this),delete this.j[a])}else this.i.length=0,this.j={}};
l.M=function(){Ki.va.M.call(this);this.clear();this.l.length=0};function Ni(a){this.h=a}
Ni.prototype.set=function(a,b){void 0===b?this.h.remove(a):this.h.set(a,Hg(b))};
Ni.prototype.get=function(a){try{var b=this.h.get(a)}catch(c){return}if(null!==b)try{return JSON.parse(b)}catch(c){throw"Storage: Invalid value was encountered";}};
Ni.prototype.remove=function(a){this.h.remove(a)};function Oi(a){this.h=a}
ab(Oi,Ni);function Pi(a){this.data=a}
function Qi(a){return void 0===a||a instanceof Pi?a:new Pi(a)}
Oi.prototype.set=function(a,b){Oi.va.set.call(this,a,Qi(b))};
Oi.prototype.i=function(a){a=Oi.va.get.call(this,a);if(void 0===a||a instanceof Object)return a;throw"Storage: Invalid value was encountered";};
Oi.prototype.get=function(a){if(a=this.i(a)){if(a=a.data,void 0===a)throw"Storage: Invalid value was encountered";}else a=void 0;return a};function Ri(a){this.h=a}
ab(Ri,Oi);Ri.prototype.set=function(a,b,c){if(b=Qi(b)){if(c){if(c<Date.now()){Ri.prototype.remove.call(this,a);return}b.expiration=c}b.creation=Date.now()}Ri.va.set.call(this,a,b)};
Ri.prototype.i=function(a){var b=Ri.va.i.call(this,a);if(b){var c=b.creation,d=b.expiration;if(d&&d<Date.now()||c&&c>Date.now())Ri.prototype.remove.call(this,a);else return b}};function Si(){}
;function Ti(){}
ab(Ti,Si);Ti.prototype[Symbol.iterator]=function(){return Ci(this.Ba(!0)).h()};
Ti.prototype.clear=function(){var a=Array.from(this);a=r(a);for(var b=a.next();!b.done;b=a.next())this.remove(b.value)};function Ui(a){this.h=a}
ab(Ui,Ti);l=Ui.prototype;l.isAvailable=function(){if(!this.h)return!1;try{return this.h.setItem("__sak","1"),this.h.removeItem("__sak"),!0}catch(a){return!1}};
l.set=function(a,b){try{this.h.setItem(a,b)}catch(c){if(0==this.h.length)throw"Storage mechanism: Storage disabled";throw"Storage mechanism: Quota exceeded";}};
l.get=function(a){a=this.h.getItem(a);if("string"!==typeof a&&null!==a)throw"Storage mechanism: Invalid value was encountered";return a};
l.remove=function(a){this.h.removeItem(a)};
l.Ba=function(a){var b=0,c=this.h,d=new zi;d.next=function(){if(b>=c.length)return Ai;var e=c.key(b++);if(a)return Bi(e);e=c.getItem(e);if("string"!==typeof e)throw"Storage mechanism: Invalid value was encountered";return Bi(e)};
return d};
l.clear=function(){this.h.clear()};
l.key=function(a){return this.h.key(a)};function Vi(){var a=null;try{a=window.localStorage||null}catch(b){}this.h=a}
ab(Vi,Ui);function Wi(a,b){this.i=a;this.h=null;var c;if(c=Hc)c=!(9<=Number(Xc));if(c){Xi||(Xi=new Gi);this.h=Xi.get(a);this.h||(b?this.h=document.getElementById(b):(this.h=document.createElement("userdata"),this.h.addBehavior("#default#userData"),document.body.appendChild(this.h)),Xi.set(a,this.h));try{this.h.load(this.i)}catch(d){this.h=null}}}
ab(Wi,Ti);var Yi={".":".2E","!":".21","~":".7E","*":".2A","'":".27","(":".28",")":".29","%":"."},Xi=null;function Zi(a){return"_"+encodeURIComponent(a).replace(/[.!~*'()%]/g,function(b){return Yi[b]})}
l=Wi.prototype;l.isAvailable=function(){return!!this.h};
l.set=function(a,b){this.h.setAttribute(Zi(a),b);$i(this)};
l.get=function(a){a=this.h.getAttribute(Zi(a));if("string"!==typeof a&&null!==a)throw"Storage mechanism: Invalid value was encountered";return a};
l.remove=function(a){this.h.removeAttribute(Zi(a));$i(this)};
l.Ba=function(a){var b=0,c=this.h.XMLDocument.documentElement.attributes,d=new zi;d.next=function(){if(b>=c.length)return Ai;var e=c[b++];if(a)return Bi(decodeURIComponent(e.nodeName.replace(/\./g,"%")).slice(1));e=e.nodeValue;if("string"!==typeof e)throw"Storage mechanism: Invalid value was encountered";return Bi(e)};
return d};
l.clear=function(){for(var a=this.h.XMLDocument.documentElement,b=a.attributes.length;0<b;b--)a.removeAttribute(a.attributes[b-1].nodeName);$i(this)};
function $i(a){try{a.h.save(a.i)}catch(b){throw"Storage mechanism: Quota exceeded";}}
;function aj(a,b){this.i=a;this.h=b+"::"}
ab(aj,Ti);aj.prototype.set=function(a,b){this.i.set(this.h+a,b)};
aj.prototype.get=function(a){return this.i.get(this.h+a)};
aj.prototype.remove=function(a){this.i.remove(this.h+a)};
aj.prototype.Ba=function(a){var b=this.i[Symbol.iterator](),c=this,d=new zi;d.next=function(){var e=b.next();if(e.done)return e;for(e=e.value;e.slice(0,c.h.length)!=c.h;){e=b.next();if(e.done)return e;e=e.value}return Bi(a?e.slice(c.h.length):c.i.get(e))};
return d};/*

 (The MIT License)

 Copyright (C) 2014 by Vitaly Puzrin

 Permission is hereby granted, free of charge, to any person obtaining a copy
 of this software and associated documentation files (the "Software"), to deal
 in the Software without restriction, including without limitation the rights
 to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 copies of the Software, and to permit persons to whom the Software is
 furnished to do so, subject to the following conditions:

 The above copyright notice and this permission notice shall be included in
 all copies or substantial portions of the Software.

 THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 THE SOFTWARE.

 -----------------------------------------------------------------------------
 Ported from zlib, which is under the following license
 https://github.com/madler/zlib/blob/master/zlib.h

 zlib.h -- interface of the 'zlib' general purpose compression library
   version 1.2.8, April 28th, 2013
   Copyright (C) 1995-2013 Jean-loup Gailly and Mark Adler
   This software is provided 'as-is', without any express or implied
   warranty.  In no event will the authors be held liable for any damages
   arising from the use of this software.
   Permission is granted to anyone to use this software for any purpose,
   including commercial applications, and to alter it and redistribute it
   freely, subject to the following restrictions:
   1. The origin of this software must not be misrepresented; you must not
      claim that you wrote the original software. If you use this software
      in a product, an acknowledgment in the product documentation would be
      appreciated but is not required.
   2. Altered source versions must be plainly marked as such, and must not be
      misrepresented as being the original software.
   3. This notice may not be removed or altered from any source distribution.
   Jean-loup Gailly        Mark Adler
   jloup@gzip.org          madler@alumni.caltech.edu
   The data format used by the zlib library is described by RFCs (Request for
   Comments) 1950 to 1952 in the files http://tools.ietf.org/html/rfc1950
   (zlib format), rfc1951 (deflate format) and rfc1952 (gzip format).
*/
var K={},bj="undefined"!==typeof Uint8Array&&"undefined"!==typeof Uint16Array&&"undefined"!==typeof Int32Array;K.assign=function(a){for(var b=Array.prototype.slice.call(arguments,1);b.length;){var c=b.shift();if(c){if("object"!==typeof c)throw new TypeError(c+"must be non-object");for(var d in c)Object.prototype.hasOwnProperty.call(c,d)&&(a[d]=c[d])}}return a};
K.Tc=function(a,b){if(a.length===b)return a;if(a.subarray)return a.subarray(0,b);a.length=b;return a};
var cj={ob:function(a,b,c,d,e){if(b.subarray&&a.subarray)a.set(b.subarray(c,c+d),e);else for(var f=0;f<d;f++)a[e+f]=b[c+f]},
pd:function(a){var b,c;var d=c=0;for(b=a.length;d<b;d++)c+=a[d].length;var e=new Uint8Array(c);d=c=0;for(b=a.length;d<b;d++){var f=a[d];e.set(f,c);c+=f.length}return e}},dj={ob:function(a,b,c,d,e){for(var f=0;f<d;f++)a[e+f]=b[c+f]},
pd:function(a){return[].concat.apply([],a)}};
K.Ze=function(){bj?(K.bb=Uint8Array,K.Fa=Uint16Array,K.Ud=Int32Array,K.assign(K,cj)):(K.bb=Array,K.Fa=Array,K.Ud=Array,K.assign(K,dj))};
K.Ze();var ej=!0;try{new Uint8Array(1)}catch(a){ej=!1}for(var fj=new K.bb(256),gj=0;256>gj;gj++)fj[gj]=252<=gj?6:248<=gj?5:240<=gj?4:224<=gj?3:192<=gj?2:1;fj[254]=fj[254]=1;
function hj(a){var b,c,d=a.length,e=0;for(b=0;b<d;b++){var f=a.charCodeAt(b);if(55296===(f&64512)&&b+1<d){var g=a.charCodeAt(b+1);56320===(g&64512)&&(f=65536+(f-55296<<10)+(g-56320),b++)}e+=128>f?1:2048>f?2:65536>f?3:4}var h=new K.bb(e);for(b=c=0;c<e;b++)f=a.charCodeAt(b),55296===(f&64512)&&b+1<d&&(g=a.charCodeAt(b+1),56320===(g&64512)&&(f=65536+(f-55296<<10)+(g-56320),b++)),128>f?h[c++]=f:(2048>f?h[c++]=192|f>>>6:(65536>f?h[c++]=224|f>>>12:(h[c++]=240|f>>>18,h[c++]=128|f>>>12&63),h[c++]=128|f>>>
6&63),h[c++]=128|f&63);return h}
;var ij={};ij=function(a,b,c,d){var e=a&65535|0;a=a>>>16&65535|0;for(var f;0!==c;){f=2E3<c?2E3:c;c-=f;do e=e+b[d++]|0,a=a+e|0;while(--f);e%=65521;a%=65521}return e|a<<16|0};for(var jj={},kj,lj=[],mj=0;256>mj;mj++){kj=mj;for(var nj=0;8>nj;nj++)kj=kj&1?3988292384^kj>>>1:kj>>>1;lj[mj]=kj}jj=function(a,b,c,d){c=d+c;for(a^=-1;d<c;d++)a=a>>>8^lj[(a^b[d])&255];return a^-1};var oj={};oj={2:"need dictionary",1:"stream end",0:"","-1":"file error","-2":"stream error","-3":"data error","-4":"insufficient memory","-5":"buffer error","-6":"incompatible version"};function pj(a){for(var b=a.length;0<=--b;)a[b]=0}
var qj=[0,0,0,0,0,0,0,0,1,1,1,1,2,2,2,2,3,3,3,3,4,4,4,4,5,5,5,5,0],rj=[0,0,0,0,1,1,2,2,3,3,4,4,5,5,6,6,7,7,8,8,9,9,10,10,11,11,12,12,13,13],sj=[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,3,7],tj=[16,17,18,0,8,7,9,6,10,5,11,4,12,3,13,2,14,1,15],uj=Array(576);pj(uj);var vj=Array(60);pj(vj);var wj=Array(512);pj(wj);var xj=Array(256);pj(xj);var yj=Array(29);pj(yj);var zj=Array(30);pj(zj);function Aj(a,b,c,d,e){this.Md=a;this.oe=b;this.ne=c;this.je=d;this.Fe=e;this.td=a&&a.length}
var Bj,Cj,Dj;function Ej(a,b){this.nd=a;this.vb=0;this.Wa=b}
function Fj(a,b){a.T[a.pending++]=b&255;a.T[a.pending++]=b>>>8&255}
function Gj(a,b,c){a.ba>16-c?(a.ha|=b<<a.ba&65535,Fj(a,a.ha),a.ha=b>>16-a.ba,a.ba+=c-16):(a.ha|=b<<a.ba&65535,a.ba+=c)}
function Hj(a,b,c){Gj(a,c[2*b],c[2*b+1])}
function Ij(a,b){var c=0;do c|=a&1,a>>>=1,c<<=1;while(0<--b);return c>>>1}
function Jj(a,b,c){var d=Array(16),e=0,f;for(f=1;15>=f;f++)d[f]=e=e+c[f-1]<<1;for(c=0;c<=b;c++)e=a[2*c+1],0!==e&&(a[2*c]=Ij(d[e]++,e))}
function Kj(a){var b;for(b=0;286>b;b++)a.ja[2*b]=0;for(b=0;30>b;b++)a.gb[2*b]=0;for(b=0;19>b;b++)a.ca[2*b]=0;a.ja[512]=1;a.Na=a.yb=0;a.sa=a.matches=0}
function Lj(a){8<a.ba?Fj(a,a.ha):0<a.ba&&(a.T[a.pending++]=a.ha);a.ha=0;a.ba=0}
function Mj(a,b,c){Lj(a);Fj(a,c);Fj(a,~c);K.ob(a.T,a.window,b,c,a.pending);a.pending+=c}
function Nj(a,b,c,d){var e=2*b,f=2*c;return a[e]<a[f]||a[e]===a[f]&&d[b]<=d[c]}
function Oj(a,b,c){for(var d=a.U[c],e=c<<1;e<=a.Ka;){e<a.Ka&&Nj(b,a.U[e+1],a.U[e],a.depth)&&e++;if(Nj(b,d,a.U[e],a.depth))break;a.U[c]=a.U[e];c=e;e<<=1}a.U[c]=d}
function Pj(a,b,c){var d=0;if(0!==a.sa){do{var e=a.T[a.Eb+2*d]<<8|a.T[a.Eb+2*d+1];var f=a.T[a.Jc+d];d++;if(0===e)Hj(a,f,b);else{var g=xj[f];Hj(a,g+256+1,b);var h=qj[g];0!==h&&(f-=yj[g],Gj(a,f,h));e--;g=256>e?wj[e]:wj[256+(e>>>7)];Hj(a,g,c);h=rj[g];0!==h&&(e-=zj[g],Gj(a,e,h))}}while(d<a.sa)}Hj(a,256,b)}
function Qj(a,b){var c=b.nd,d=b.Wa.Md,e=b.Wa.td,f=b.Wa.je,g,h=-1;a.Ka=0;a.sb=573;for(g=0;g<f;g++)0!==c[2*g]?(a.U[++a.Ka]=h=g,a.depth[g]=0):c[2*g+1]=0;for(;2>a.Ka;){var k=a.U[++a.Ka]=2>h?++h:0;c[2*k]=1;a.depth[k]=0;a.Na--;e&&(a.yb-=d[2*k+1])}b.vb=h;for(g=a.Ka>>1;1<=g;g--)Oj(a,c,g);k=f;do g=a.U[1],a.U[1]=a.U[a.Ka--],Oj(a,c,1),d=a.U[1],a.U[--a.sb]=g,a.U[--a.sb]=d,c[2*k]=c[2*g]+c[2*d],a.depth[k]=(a.depth[g]>=a.depth[d]?a.depth[g]:a.depth[d])+1,c[2*g+1]=c[2*d+1]=k,a.U[1]=k++,Oj(a,c,1);while(2<=a.Ka);a.U[--a.sb]=
a.U[1];g=b.nd;k=b.vb;d=b.Wa.Md;e=b.Wa.td;f=b.Wa.oe;var m=b.Wa.ne,n=b.Wa.Fe,p,v=0;for(p=0;15>=p;p++)a.Ga[p]=0;g[2*a.U[a.sb]+1]=0;for(b=a.sb+1;573>b;b++){var t=a.U[b];p=g[2*g[2*t+1]+1]+1;p>n&&(p=n,v++);g[2*t+1]=p;if(!(t>k)){a.Ga[p]++;var y=0;t>=m&&(y=f[t-m]);var D=g[2*t];a.Na+=D*(p+y);e&&(a.yb+=D*(d[2*t+1]+y))}}if(0!==v){do{for(p=n-1;0===a.Ga[p];)p--;a.Ga[p]--;a.Ga[p+1]+=2;a.Ga[n]--;v-=2}while(0<v);for(p=n;0!==p;p--)for(t=a.Ga[p];0!==t;)d=a.U[--b],d>k||(g[2*d+1]!==p&&(a.Na+=(p-g[2*d+1])*g[2*d],g[2*
d+1]=p),t--)}Jj(c,h,a.Ga)}
function Rj(a,b,c){var d,e=-1,f=b[1],g=0,h=7,k=4;0===f&&(h=138,k=3);b[2*(c+1)+1]=65535;for(d=0;d<=c;d++){var m=f;f=b[2*(d+1)+1];++g<h&&m===f||(g<k?a.ca[2*m]+=g:0!==m?(m!==e&&a.ca[2*m]++,a.ca[32]++):10>=g?a.ca[34]++:a.ca[36]++,g=0,e=m,0===f?(h=138,k=3):m===f?(h=6,k=3):(h=7,k=4))}}
function Sj(a,b,c){var d,e=-1,f=b[1],g=0,h=7,k=4;0===f&&(h=138,k=3);for(d=0;d<=c;d++){var m=f;f=b[2*(d+1)+1];if(!(++g<h&&m===f)){if(g<k){do Hj(a,m,a.ca);while(0!==--g)}else 0!==m?(m!==e&&(Hj(a,m,a.ca),g--),Hj(a,16,a.ca),Gj(a,g-3,2)):10>=g?(Hj(a,17,a.ca),Gj(a,g-3,3)):(Hj(a,18,a.ca),Gj(a,g-11,7));g=0;e=m;0===f?(h=138,k=3):m===f?(h=6,k=3):(h=7,k=4)}}}
function Tj(a){var b=4093624447,c;for(c=0;31>=c;c++,b>>>=1)if(b&1&&0!==a.ja[2*c])return 0;if(0!==a.ja[18]||0!==a.ja[20]||0!==a.ja[26])return 1;for(c=32;256>c;c++)if(0!==a.ja[2*c])return 1;return 0}
var Uj=!1;function Vj(a,b,c){a.T[a.Eb+2*a.sa]=b>>>8&255;a.T[a.Eb+2*a.sa+1]=b&255;a.T[a.Jc+a.sa]=c&255;a.sa++;0===b?a.ja[2*c]++:(a.matches++,b--,a.ja[2*(xj[c]+256+1)]++,a.gb[2*(256>b?wj[b]:wj[256+(b>>>7)])]++);return a.sa===a.Lb-1}
;function Wj(a,b){a.msg=oj[b];return b}
function Xj(a){for(var b=a.length;0<=--b;)a[b]=0}
function Yj(a){var b=a.state,c=b.pending;c>a.I&&(c=a.I);0!==c&&(K.ob(a.Mb,b.T,b.Nb,c,a.wb),a.wb+=c,b.Nb+=c,a.Uc+=c,a.I-=c,b.pending-=c,0===b.pending&&(b.Nb=0))}
function Zj(a,b){var c=0<=a.la?a.la:-1,d=a.o-a.la,e=0;if(0<a.level){2===a.F.yc&&(a.F.yc=Tj(a));Qj(a,a.lc);Qj(a,a.hc);Rj(a,a.ja,a.lc.vb);Rj(a,a.gb,a.hc.vb);Qj(a,a.ed);for(e=18;3<=e&&0===a.ca[2*tj[e]+1];e--);a.Na+=3*(e+1)+14;var f=a.Na+3+7>>>3;var g=a.yb+3+7>>>3;g<=f&&(f=g)}else f=g=d+5;if(d+4<=f&&-1!==c)Gj(a,b?1:0,3),Mj(a,c,d);else if(4===a.strategy||g===f)Gj(a,2+(b?1:0),3),Pj(a,uj,vj);else{Gj(a,4+(b?1:0),3);c=a.lc.vb+1;d=a.hc.vb+1;e+=1;Gj(a,c-257,5);Gj(a,d-1,5);Gj(a,e-4,4);for(f=0;f<e;f++)Gj(a,a.ca[2*
tj[f]+1],3);Sj(a,a.ja,c-1);Sj(a,a.gb,d-1);Pj(a,a.ja,a.gb)}Kj(a);b&&Lj(a);a.la=a.o;Yj(a.F)}
function L(a,b){a.T[a.pending++]=b}
function ak(a,b){a.T[a.pending++]=b>>>8&255;a.T[a.pending++]=b&255}
function bk(a,b){var c=a.yd,d=a.o,e=a.na,f=a.Ad,g=a.o>a.ea-262?a.o-(a.ea-262):0,h=a.window,k=a.Ya,m=a.Ea,n=a.o+258,p=h[d+e-1],v=h[d+e];a.na>=a.sd&&(c>>=2);f>a.u&&(f=a.u);do{var t=b;if(h[t+e]===v&&h[t+e-1]===p&&h[t]===h[d]&&h[++t]===h[d+1]){d+=2;for(t++;h[++d]===h[++t]&&h[++d]===h[++t]&&h[++d]===h[++t]&&h[++d]===h[++t]&&h[++d]===h[++t]&&h[++d]===h[++t]&&h[++d]===h[++t]&&h[++d]===h[++t]&&d<n;);t=258-(n-d);d=n-258;if(t>e){a.ub=b;e=t;if(t>=f)break;p=h[d+e-1];v=h[d+e]}}}while((b=m[b&k])>g&&0!==--c);return e<=
a.u?e:a.u}
function ck(a){var b=a.ea,c;do{var d=a.Sd-a.u-a.o;if(a.o>=b+(b-262)){K.ob(a.window,a.window,b,b,0);a.ub-=b;a.o-=b;a.la-=b;var e=c=a.kc;do{var f=a.head[--e];a.head[e]=f>=b?f-b:0}while(--c);e=c=b;do f=a.Ea[--e],a.Ea[e]=f>=b?f-b:0;while(--c);d+=b}if(0===a.F.ga)break;e=a.F;c=a.window;f=a.o+a.u;var g=e.ga;g>d&&(g=d);0===g?c=0:(e.ga-=g,K.ob(c,e.input,e.jb,g,f),1===e.state.wrap?e.C=ij(e.C,c,g,f):2===e.state.wrap&&(e.C=jj(e.C,c,g,f)),e.jb+=g,e.mb+=g,c=g);a.u+=c;if(3<=a.u+a.ka)for(d=a.o-a.ka,a.H=a.window[d],
a.H=(a.H<<a.Ja^a.window[d+1])&a.Ia;a.ka&&!(a.H=(a.H<<a.Ja^a.window[d+3-1])&a.Ia,a.Ea[d&a.Ya]=a.head[a.H],a.head[a.H]=d,d++,a.ka--,3>a.u+a.ka););}while(262>a.u&&0!==a.F.ga)}
function dk(a,b){for(var c;;){if(262>a.u){ck(a);if(262>a.u&&0===b)return 1;if(0===a.u)break}c=0;3<=a.u&&(a.H=(a.H<<a.Ja^a.window[a.o+3-1])&a.Ia,c=a.Ea[a.o&a.Ya]=a.head[a.H],a.head[a.H]=a.o);0!==c&&a.o-c<=a.ea-262&&(a.J=bk(a,c));if(3<=a.J)if(c=Vj(a,a.o-a.ub,a.J-3),a.u-=a.J,a.J<=a.Kc&&3<=a.u){a.J--;do a.o++,a.H=(a.H<<a.Ja^a.window[a.o+3-1])&a.Ia,a.Ea[a.o&a.Ya]=a.head[a.H],a.head[a.H]=a.o;while(0!==--a.J);a.o++}else a.o+=a.J,a.J=0,a.H=a.window[a.o],a.H=(a.H<<a.Ja^a.window[a.o+1])&a.Ia;else c=Vj(a,0,
a.window[a.o]),a.u--,a.o++;if(c&&(Zj(a,!1),0===a.F.I))return 1}a.ka=2>a.o?a.o:2;return 4===b?(Zj(a,!0),0===a.F.I?3:4):a.sa&&(Zj(a,!1),0===a.F.I)?1:2}
function ek(a,b){for(var c,d;;){if(262>a.u){ck(a);if(262>a.u&&0===b)return 1;if(0===a.u)break}c=0;3<=a.u&&(a.H=(a.H<<a.Ja^a.window[a.o+3-1])&a.Ia,c=a.Ea[a.o&a.Ya]=a.head[a.H],a.head[a.H]=a.o);a.na=a.J;a.Dd=a.ub;a.J=2;0!==c&&a.na<a.Kc&&a.o-c<=a.ea-262&&(a.J=bk(a,c),5>=a.J&&(1===a.strategy||3===a.J&&4096<a.o-a.ub)&&(a.J=2));if(3<=a.na&&a.J<=a.na){d=a.o+a.u-3;c=Vj(a,a.o-1-a.Dd,a.na-3);a.u-=a.na-1;a.na-=2;do++a.o<=d&&(a.H=(a.H<<a.Ja^a.window[a.o+3-1])&a.Ia,a.Ea[a.o&a.Ya]=a.head[a.H],a.head[a.H]=a.o);
while(0!==--a.na);a.hb=0;a.J=2;a.o++;if(c&&(Zj(a,!1),0===a.F.I))return 1}else if(a.hb){if((c=Vj(a,0,a.window[a.o-1]))&&Zj(a,!1),a.o++,a.u--,0===a.F.I)return 1}else a.hb=1,a.o++,a.u--}a.hb&&(Vj(a,0,a.window[a.o-1]),a.hb=0);a.ka=2>a.o?a.o:2;return 4===b?(Zj(a,!0),0===a.F.I?3:4):a.sa&&(Zj(a,!1),0===a.F.I)?1:2}
function fk(a,b){for(var c,d,e,f=a.window;;){if(258>=a.u){ck(a);if(258>=a.u&&0===b)return 1;if(0===a.u)break}a.J=0;if(3<=a.u&&0<a.o&&(d=a.o-1,c=f[d],c===f[++d]&&c===f[++d]&&c===f[++d])){for(e=a.o+258;c===f[++d]&&c===f[++d]&&c===f[++d]&&c===f[++d]&&c===f[++d]&&c===f[++d]&&c===f[++d]&&c===f[++d]&&d<e;);a.J=258-(e-d);a.J>a.u&&(a.J=a.u)}3<=a.J?(c=Vj(a,1,a.J-3),a.u-=a.J,a.o+=a.J,a.J=0):(c=Vj(a,0,a.window[a.o]),a.u--,a.o++);if(c&&(Zj(a,!1),0===a.F.I))return 1}a.ka=0;return 4===b?(Zj(a,!0),0===a.F.I?3:4):
a.sa&&(Zj(a,!1),0===a.F.I)?1:2}
function gk(a,b){for(var c;;){if(0===a.u&&(ck(a),0===a.u)){if(0===b)return 1;break}a.J=0;c=Vj(a,0,a.window[a.o]);a.u--;a.o++;if(c&&(Zj(a,!1),0===a.F.I))return 1}a.ka=0;return 4===b?(Zj(a,!0),0===a.F.I?3:4):a.sa&&(Zj(a,!1),0===a.F.I)?1:2}
function hk(a,b,c,d,e){this.ue=a;this.Ee=b;this.Ie=c;this.De=d;this.qe=e}
var ik;ik=[new hk(0,0,0,0,function(a,b){var c=65535;for(c>a.ta-5&&(c=a.ta-5);;){if(1>=a.u){ck(a);if(0===a.u&&0===b)return 1;if(0===a.u)break}a.o+=a.u;a.u=0;var d=a.la+c;if(0===a.o||a.o>=d)if(a.u=a.o-d,a.o=d,Zj(a,!1),0===a.F.I)return 1;if(a.o-a.la>=a.ea-262&&(Zj(a,!1),0===a.F.I))return 1}a.ka=0;if(4===b)return Zj(a,!0),0===a.F.I?3:4;a.o>a.la&&Zj(a,!1);return 1}),
new hk(4,4,8,4,dk),new hk(4,5,16,8,dk),new hk(4,6,32,32,dk),new hk(4,4,16,16,ek),new hk(8,16,32,32,ek),new hk(8,16,128,128,ek),new hk(8,32,128,256,ek),new hk(32,128,258,1024,ek),new hk(32,258,258,4096,ek)];
function jk(){this.F=null;this.status=0;this.T=null;this.wrap=this.pending=this.Nb=this.ta=0;this.B=null;this.wa=0;this.method=8;this.tb=-1;this.Ya=this.Wc=this.ea=0;this.window=null;this.Sd=0;this.head=this.Ea=null;this.Ad=this.sd=this.strategy=this.level=this.Kc=this.yd=this.na=this.u=this.ub=this.o=this.hb=this.Dd=this.J=this.la=this.Ja=this.Ia=this.Ec=this.kc=this.H=0;this.ja=new K.Fa(1146);this.gb=new K.Fa(122);this.ca=new K.Fa(78);Xj(this.ja);Xj(this.gb);Xj(this.ca);this.ed=this.hc=this.lc=
null;this.Ga=new K.Fa(16);this.U=new K.Fa(573);Xj(this.U);this.sb=this.Ka=0;this.depth=new K.Fa(573);Xj(this.depth);this.ba=this.ha=this.ka=this.matches=this.yb=this.Na=this.Eb=this.sa=this.Lb=this.Jc=0}
function kk(a,b){if(!a||!a.state||5<b||0>b)return a?Wj(a,-2):-2;var c=a.state;if(!a.Mb||!a.input&&0!==a.ga||666===c.status&&4!==b)return Wj(a,0===a.I?-5:-2);c.F=a;var d=c.tb;c.tb=b;if(42===c.status)if(2===c.wrap)a.C=0,L(c,31),L(c,139),L(c,8),c.B?(L(c,(c.B.text?1:0)+(c.B.Sa?2:0)+(c.B.Ra?4:0)+(c.B.name?8:0)+(c.B.comment?16:0)),L(c,c.B.time&255),L(c,c.B.time>>8&255),L(c,c.B.time>>16&255),L(c,c.B.time>>24&255),L(c,9===c.level?2:2<=c.strategy||2>c.level?4:0),L(c,c.B.os&255),c.B.Ra&&c.B.Ra.length&&(L(c,
c.B.Ra.length&255),L(c,c.B.Ra.length>>8&255)),c.B.Sa&&(a.C=jj(a.C,c.T,c.pending,0)),c.wa=0,c.status=69):(L(c,0),L(c,0),L(c,0),L(c,0),L(c,0),L(c,9===c.level?2:2<=c.strategy||2>c.level?4:0),L(c,3),c.status=113);else{var e=8+(c.Wc-8<<4)<<8;e|=(2<=c.strategy||2>c.level?0:6>c.level?1:6===c.level?2:3)<<6;0!==c.o&&(e|=32);c.status=113;ak(c,e+(31-e%31));0!==c.o&&(ak(c,a.C>>>16),ak(c,a.C&65535));a.C=1}if(69===c.status)if(c.B.Ra){for(e=c.pending;c.wa<(c.B.Ra.length&65535)&&(c.pending!==c.ta||(c.B.Sa&&c.pending>
e&&(a.C=jj(a.C,c.T,c.pending-e,e)),Yj(a),e=c.pending,c.pending!==c.ta));)L(c,c.B.Ra[c.wa]&255),c.wa++;c.B.Sa&&c.pending>e&&(a.C=jj(a.C,c.T,c.pending-e,e));c.wa===c.B.Ra.length&&(c.wa=0,c.status=73)}else c.status=73;if(73===c.status)if(c.B.name){e=c.pending;do{if(c.pending===c.ta&&(c.B.Sa&&c.pending>e&&(a.C=jj(a.C,c.T,c.pending-e,e)),Yj(a),e=c.pending,c.pending===c.ta)){var f=1;break}f=c.wa<c.B.name.length?c.B.name.charCodeAt(c.wa++)&255:0;L(c,f)}while(0!==f);c.B.Sa&&c.pending>e&&(a.C=jj(a.C,c.T,c.pending-
e,e));0===f&&(c.wa=0,c.status=91)}else c.status=91;if(91===c.status)if(c.B.comment){e=c.pending;do{if(c.pending===c.ta&&(c.B.Sa&&c.pending>e&&(a.C=jj(a.C,c.T,c.pending-e,e)),Yj(a),e=c.pending,c.pending===c.ta)){f=1;break}f=c.wa<c.B.comment.length?c.B.comment.charCodeAt(c.wa++)&255:0;L(c,f)}while(0!==f);c.B.Sa&&c.pending>e&&(a.C=jj(a.C,c.T,c.pending-e,e));0===f&&(c.status=103)}else c.status=103;103===c.status&&(c.B.Sa?(c.pending+2>c.ta&&Yj(a),c.pending+2<=c.ta&&(L(c,a.C&255),L(c,a.C>>8&255),a.C=0,
c.status=113)):c.status=113);if(0!==c.pending){if(Yj(a),0===a.I)return c.tb=-1,0}else if(0===a.ga&&(b<<1)-(4<b?9:0)<=(d<<1)-(4<d?9:0)&&4!==b)return Wj(a,-5);if(666===c.status&&0!==a.ga)return Wj(a,-5);if(0!==a.ga||0!==c.u||0!==b&&666!==c.status){d=2===c.strategy?gk(c,b):3===c.strategy?fk(c,b):ik[c.level].qe(c,b);if(3===d||4===d)c.status=666;if(1===d||3===d)return 0===a.I&&(c.tb=-1),0;if(2===d&&(1===b?(Gj(c,2,3),Hj(c,256,uj),16===c.ba?(Fj(c,c.ha),c.ha=0,c.ba=0):8<=c.ba&&(c.T[c.pending++]=c.ha&255,
c.ha>>=8,c.ba-=8)):5!==b&&(Gj(c,0,3),Mj(c,0,0),3===b&&(Xj(c.head),0===c.u&&(c.o=0,c.la=0,c.ka=0))),Yj(a),0===a.I))return c.tb=-1,0}if(4!==b)return 0;if(0>=c.wrap)return 1;2===c.wrap?(L(c,a.C&255),L(c,a.C>>8&255),L(c,a.C>>16&255),L(c,a.C>>24&255),L(c,a.mb&255),L(c,a.mb>>8&255),L(c,a.mb>>16&255),L(c,a.mb>>24&255)):(ak(c,a.C>>>16),ak(c,a.C&65535));Yj(a);0<c.wrap&&(c.wrap=-c.wrap);return 0!==c.pending?0:1}
;var lk={};lk=function(){this.input=null;this.mb=this.ga=this.jb=0;this.Mb=null;this.Uc=this.I=this.wb=0;this.msg="";this.state=null;this.yc=2;this.C=0};var mk=Object.prototype.toString;
function nk(a){if(!(this instanceof nk))return new nk(a);a=this.options=K.assign({level:-1,method:8,chunkSize:16384,Za:15,Ge:8,strategy:0,K:""},a||{});a.raw&&0<a.Za?a.Za=-a.Za:a.we&&0<a.Za&&16>a.Za&&(a.Za+=16);this.err=0;this.msg="";this.ended=!1;this.chunks=[];this.F=new lk;this.F.I=0;var b=this.F;var c=a.level,d=a.method,e=a.Za,f=a.Ge,g=a.strategy;if(b){var h=1;-1===c&&(c=6);0>e?(h=0,e=-e):15<e&&(h=2,e-=16);if(1>f||9<f||8!==d||8>e||15<e||0>c||9<c||0>g||4<g)b=Wj(b,-2);else{8===e&&(e=9);var k=new jk;
b.state=k;k.F=b;k.wrap=h;k.B=null;k.Wc=e;k.ea=1<<k.Wc;k.Ya=k.ea-1;k.Ec=f+7;k.kc=1<<k.Ec;k.Ia=k.kc-1;k.Ja=~~((k.Ec+3-1)/3);k.window=new K.bb(2*k.ea);k.head=new K.Fa(k.kc);k.Ea=new K.Fa(k.ea);k.Lb=1<<f+6;k.ta=4*k.Lb;k.T=new K.bb(k.ta);k.Eb=1*k.Lb;k.Jc=3*k.Lb;k.level=c;k.strategy=g;k.method=d;if(b&&b.state){b.mb=b.Uc=0;b.yc=2;c=b.state;c.pending=0;c.Nb=0;0>c.wrap&&(c.wrap=-c.wrap);c.status=c.wrap?42:113;b.C=2===c.wrap?0:1;c.tb=0;if(!Uj){d=Array(16);for(f=g=0;28>f;f++)for(yj[f]=g,e=0;e<1<<qj[f];e++)xj[g++]=
f;xj[g-1]=f;for(f=g=0;16>f;f++)for(zj[f]=g,e=0;e<1<<rj[f];e++)wj[g++]=f;for(g>>=7;30>f;f++)for(zj[f]=g<<7,e=0;e<1<<rj[f]-7;e++)wj[256+g++]=f;for(e=0;15>=e;e++)d[e]=0;for(e=0;143>=e;)uj[2*e+1]=8,e++,d[8]++;for(;255>=e;)uj[2*e+1]=9,e++,d[9]++;for(;279>=e;)uj[2*e+1]=7,e++,d[7]++;for(;287>=e;)uj[2*e+1]=8,e++,d[8]++;Jj(uj,287,d);for(e=0;30>e;e++)vj[2*e+1]=5,vj[2*e]=Ij(e,5);Bj=new Aj(uj,qj,257,286,15);Cj=new Aj(vj,rj,0,30,15);Dj=new Aj([],sj,0,19,7);Uj=!0}c.lc=new Ej(c.ja,Bj);c.hc=new Ej(c.gb,Cj);c.ed=
new Ej(c.ca,Dj);c.ha=0;c.ba=0;Kj(c);c=0}else c=Wj(b,-2);0===c&&(b=b.state,b.Sd=2*b.ea,Xj(b.head),b.Kc=ik[b.level].Ee,b.sd=ik[b.level].ue,b.Ad=ik[b.level].Ie,b.yd=ik[b.level].De,b.o=0,b.la=0,b.u=0,b.ka=0,b.J=b.na=2,b.hb=0,b.H=0);b=c}}else b=-2;if(0!==b)throw Error(oj[b]);a.header&&(b=this.F)&&b.state&&2===b.state.wrap&&(b.state.B=a.header);if(a.Fb){var m;"string"===typeof a.Fb?m=hj(a.Fb):"[object ArrayBuffer]"===mk.call(a.Fb)?m=new Uint8Array(a.Fb):m=a.Fb;a=this.F;f=m;g=f.length;if(a&&a.state)if(m=
a.state,b=m.wrap,2===b||1===b&&42!==m.status||m.u)b=-2;else{1===b&&(a.C=ij(a.C,f,g,0));m.wrap=0;g>=m.ea&&(0===b&&(Xj(m.head),m.o=0,m.la=0,m.ka=0),c=new K.bb(m.ea),K.ob(c,f,g-m.ea,m.ea,0),f=c,g=m.ea);c=a.ga;d=a.jb;e=a.input;a.ga=g;a.jb=0;a.input=f;for(ck(m);3<=m.u;){f=m.o;g=m.u-2;do m.H=(m.H<<m.Ja^m.window[f+3-1])&m.Ia,m.Ea[f&m.Ya]=m.head[m.H],m.head[m.H]=f,f++;while(--g);m.o=f;m.u=2;ck(m)}m.o+=m.u;m.la=m.o;m.ka=m.u;m.u=0;m.J=m.na=2;m.hb=0;a.jb=d;a.input=e;a.ga=c;m.wrap=b;b=0}else b=-2;if(0!==b)throw Error(oj[b]);
this.nt=!0}}
nk.prototype.push=function(a,b){var c=this.F,d=this.options.chunkSize;if(this.ended)return!1;var e=b===~~b?b:!0===b?4:0;"string"===typeof a?c.input=hj(a):"[object ArrayBuffer]"===mk.call(a)?c.input=new Uint8Array(a):c.input=a;c.jb=0;c.ga=c.input.length;do{0===c.I&&(c.Mb=new K.bb(d),c.wb=0,c.I=d);a=kk(c,e);if(1!==a&&0!==a)return ok(this,a),this.ended=!0,!1;if(0===c.I||0===c.ga&&(4===e||2===e))if("string"===this.options.K){var f=K.Tc(c.Mb,c.wb);b=f;f=f.length;if(65537>f&&(b.subarray&&ej||!b.subarray))b=
String.fromCharCode.apply(null,K.Tc(b,f));else{for(var g="",h=0;h<f;h++)g+=String.fromCharCode(b[h]);b=g}this.chunks.push(b)}else b=K.Tc(c.Mb,c.wb),this.chunks.push(b)}while((0<c.ga||0===c.I)&&1!==a);if(4===e)return(c=this.F)&&c.state?(d=c.state.status,42!==d&&69!==d&&73!==d&&91!==d&&103!==d&&113!==d&&666!==d?a=Wj(c,-2):(c.state=null,a=113===d?Wj(c,-3):0)):a=-2,ok(this,a),this.ended=!0,0===a;2===e&&(ok(this,0),c.I=0);return!0};
function ok(a,b){0===b&&(a.result="string"===a.options.K?a.chunks.join(""):K.pd(a.chunks));a.chunks=[];a.err=b;a.msg=a.F.msg}
;function pk(a){return Kb(null===a?"null":void 0===a?"undefined":a)}
;function qk(a){this.name=a}
;var rk=new qk("rawColdConfigGroup");var sk=new qk("rawHotConfigGroup");function tk(a){H.call(this,a)}
u(tk,H);function uk(a){H.call(this,a)}
u(uk,H);uk.prototype.getKey=function(){return Td(this,1)};
uk.prototype.getValue=function(){return fe(this,2===Yd(this,vk)?2:-1)};
var vk=[2,3,4,5,6];function wk(a){H.call(this,a)}
u(wk,H);function xk(a){H.call(this,a)}
u(xk,H);function yk(a){H.call(this,a,-1,zk)}
u(yk,H);var zk=[2];function Ak(a){H.call(this,a,-1,Bk)}
u(Ak,H);Ak.prototype.getPlayerType=function(){return Td(this,36)};
Ak.prototype.setHomeGroupInfo=function(a){return G(this,yk,81,a)};
Ak.prototype.clearLocationPlayabilityToken=function(){return F(this,89,void 0,!1)};
var Bk=[9,66,24,32,86,100,101];function Ck(a){H.call(this,a,-1,Dk)}
u(Ck,H);var Dk=[15,26,28];function Ek(a){H.call(this,a,-1,Fk)}
u(Ek,H);var Fk=[5];function Gk(a){H.call(this,a)}
u(Gk,H);function Hk(a){H.call(this,a,-1,Ik)}
u(Hk,H);Hk.prototype.setSafetyMode=function(a){return F(this,5,a)};
var Ik=[12];function Jk(a){H.call(this,a,-1,Kk)}
u(Jk,H);Jk.prototype.i=function(a){return G(this,Ak,1,a)};
var Kk=[12];var Lk=new qk("continuationCommand");var Mk=new qk("webCommandMetadata");var Nk=new qk("signalServiceEndpoint");var Ok={dk:"EMBEDDED_PLAYER_MODE_UNKNOWN",ak:"EMBEDDED_PLAYER_MODE_DEFAULT",ck:"EMBEDDED_PLAYER_MODE_PFP",bk:"EMBEDDED_PLAYER_MODE_PFL"};var Pk=new qk("feedbackEndpoint");var Qk={Ps:"WEB_DISPLAY_MODE_UNKNOWN",Ls:"WEB_DISPLAY_MODE_BROWSER",Ns:"WEB_DISPLAY_MODE_MINIMAL_UI",Os:"WEB_DISPLAY_MODE_STANDALONE",Ms:"WEB_DISPLAY_MODE_FULLSCREEN"};function Rk(a){H.call(this,a,-1,Sk)}
u(Rk,H);function ml(a){H.call(this,a)}
u(ml,H);ml.prototype.getKey=function(){return ge(Td(this,1),"")};
ml.prototype.getValue=function(){return ge(Td(this,2),"")};
var Sk=[4,5];function nl(a){H.call(this,a)}
u(nl,H);function ol(a){H.call(this,a)}
u(ol,H);var pl=[2,3,4];function ql(a){H.call(this,a)}
u(ql,H);ql.prototype.getMessage=function(){return ge(Td(this,1),"")};function rl(a){H.call(this,a)}
u(rl,H);function sl(a){H.call(this,a)}
u(sl,H);function tl(a){H.call(this,a,-1,ul)}
u(tl,H);var ul=[10,17];function vl(a){H.call(this,a)}
u(vl,H);function wl(a){H.call(this,a)}
u(wl,H);function xl(a){H.call(this,a)}
u(xl,H);function yl(a){H.call(this,a)}
u(yl,H);function zl(a){H.call(this,a)}
u(zl,H);function Al(a){H.call(this,a,-1,Bl)}
u(Al,H);Al.prototype.getVideoData=function(){return Zd(this,zl,15)};
var Bl=[4];function Cl(a){H.call(this,a)}
u(Cl,H);function Dl(a,b){return G(a,xl,1,b)}
Cl.prototype.i=function(a){return F(this,2,a)};
function El(a){H.call(this,a)}
u(El,H);function Fl(a,b){G(a,xl,1,b)}
;function Gl(a){H.call(this,a,-1,Hl)}
u(Gl,H);Gl.prototype.i=function(a){return F(this,1,a)};
function Il(a,b){return G(a,xl,2,b)}
var Hl=[3];function Jl(a){H.call(this,a)}
u(Jl,H);Jl.prototype.i=function(a){return F(this,1,a)};function Kl(a){H.call(this,a)}
u(Kl,H);Kl.prototype.i=function(a){return F(this,1,a)};function Ll(a){H.call(this,a)}
u(Ll,H);Ll.prototype.i=function(a){return F(this,1,a)};function Ml(a){H.call(this,a)}
u(Ml,H);Ml.prototype.i=function(a){return F(this,1,a)};function Nl(a){H.call(this,a)}
u(Nl,H);function Ol(a){H.call(this,a)}
u(Ol,H);function Pl(a){H.call(this,a,-1,Ql)}
u(Pl,H);Pl.prototype.getPlayerType=function(){return ge(Td(this,7),0)};
Pl.prototype.setVideoId=function(a){return F(this,19,a)};
function Rl(a,b){ee(a,68,Sl,b)}
function Sl(a){H.call(this,a)}
u(Sl,H);Sl.prototype.getId=function(){return ge(Td(this,2),"")};
var Ql=[83,68];function Tl(a){H.call(this,a)}
u(Tl,H);function Ul(a){H.call(this,a)}
u(Ul,H);function Vl(a){H.call(this,a)}
u(Vl,H);function Wl(a){H.call(this,a,459)}
u(Wl,H);
var Xl=[23,24,11,6,7,5,2,3,13,20,21,22,28,32,37,229,241,45,59,225,288,72,73,78,208,156,202,215,74,76,79,80,111,85,91,97,100,102,105,119,126,127,136,146,148,151,157,158,159,163,164,168,444,176,222,383,177,178,179,458,411,184,188,189,190,191,193,194,195,196,197,198,199,200,201,402,320,203,204,205,206,258,259,260,261,327,209,219,226,227,232,233,234,240,244,247,248,249,251,256,257,266,254,255,270,272,278,291,293,300,304,308,309,310,311,313,314,319,321,323,324,328,330,331,332,334,337,338,340,344,348,350,
351,352,353,354,355,356,357,358,361,363,364,368,369,370,373,374,375,378,380,381,388,389,403,410,412,429,413,414,415,416,417,418,430,423,424,425,426,427,431,117,439,441,448];var Yl={fl:0,Ok:1,Uk:2,Vk:4,al:8,Wk:16,Xk:32,dl:64,bl:128,Qk:256,Sk:512,Zk:1024,Rk:2048,Tk:4096,Pk:8192,Yk:16384};function Zl(a){H.call(this,a)}
u(Zl,H);function $l(a){H.call(this,a)}
u($l,H);$l.prototype.setVideoId=function(a){return Xd(this,1,am,a)};
$l.prototype.getPlaylistId=function(){return fe(this,2===Yd(this,am)?2:-1)};
var am=[1,2];function bm(a){H.call(this,a,-1,cm)}
u(bm,H);var cm=[3];var dm=new qk("webPlayerShareEntityServiceEndpoint");var em=new qk("playlistEditEndpoint");var fm=new qk("modifyChannelNotificationPreferenceEndpoint");var gm=new qk("unsubscribeEndpoint");var hm=new qk("subscribeEndpoint");function im(a,b){1<b.length?a[b[0]]=b[1]:1===b.length&&Object.assign(a,b[0])}
;var jm=z.window,km,lm,mm=(null==jm?void 0:null==(km=jm.yt)?void 0:km.config_)||(null==jm?void 0:null==(lm=jm.ytcfg)?void 0:lm.data_)||{};A("yt.config_",mm);function nm(){im(mm,arguments)}
function M(a,b){return a in mm?mm[a]:b}
function om(){var a=mm.EXPERIMENT_FLAGS;return a?a.web_disable_gel_stp_ecatcher_killswitch:void 0}
;function P(a){a=pm(a);return"string"===typeof a&&"false"===a?!1:!!a}
function qm(a,b){a=pm(a);return void 0===a&&void 0!==b?b:Number(a||0)}
function rm(){return M("EXPERIMENTS_TOKEN","")}
function pm(a){var b=M("EXPERIMENTS_FORCED_FLAGS",{})||{};return void 0!==b[a]?b[a]:M("EXPERIMENT_FLAGS",{})[a]}
function sm(){for(var a=[],b=M("EXPERIMENTS_FORCED_FLAGS",{}),c=r(Object.keys(b)),d=c.next();!d.done;d=c.next())d=d.value,a.push({key:d,value:String(b[d])});c=M("EXPERIMENT_FLAGS",{});var e=r(Object.keys(c));for(d=e.next();!d.done;d=e.next())d=d.value,d.startsWith("force_")&&void 0===b[d]&&a.push({key:d,value:String(c[d])});return a}
;function tm(){var a=um;B("yt.ads.biscotti.getId_")||A("yt.ads.biscotti.getId_",a)}
function vm(a){A("yt.ads.biscotti.lastId_",a)}
;var wm=[];function xm(a){wm.forEach(function(b){return b(a)})}
function ym(a){return a&&window.yterr?function(){try{return a.apply(this,arguments)}catch(b){zm(b)}}:a}
function zm(a,b,c,d){var e=B("yt.logging.errors.log");e?e(a,"ERROR",b,c,d):(e=M("ERRORS",[]),e.push([a,"ERROR",b,c,d]),nm("ERRORS",e));xm(a)}
function Am(a,b,c,d){var e=B("yt.logging.errors.log");e?e(a,"WARNING",b,c,d):(e=M("ERRORS",[]),e.push([a,"WARNING",b,c,d]),nm("ERRORS",e))}
;var Bm=/^[\w.]*$/,Cm={q:!0,search_query:!0};function Dm(a,b){b=a.split(b);for(var c={},d=0,e=b.length;d<e;d++){var f=b[d].split("=");if(1==f.length&&f[0]||2==f.length)try{var g=Em(f[0]||""),h=Em(f[1]||"");g in c?Array.isArray(c[g])?nb(c[g],h):c[g]=[c[g],h]:c[g]=h}catch(p){var k=p,m=f[0],n=String(Dm);k.args=[{key:m,value:f[1],query:a,method:Fm==n?"unchanged":n}];Cm.hasOwnProperty(m)||Am(k)}}return c}
var Fm=String(Dm);function Gm(a){var b=[];ob(a,function(c,d){var e=encodeURIComponent(String(d)),f;Array.isArray(c)?f=c:f=[c];hb(f,function(g){""==g?b.push(e):b.push(e+"="+encodeURIComponent(String(g)))})});
return b.join("&")}
function Hm(a){"?"==a.charAt(0)&&(a=a.substr(1));return Dm(a,"&")}
function Im(a){return-1!=a.indexOf("?")?(a=(a||"").split("#")[0],a=a.split("?",2),Hm(1<a.length?a[1]:a[0])):{}}
function Jm(a,b,c){var d=a.split("#",2);a=d[0];d=1<d.length?"#"+d[1]:"";var e=a.split("?",2);a=e[0];e=Hm(e[1]||"");for(var f in b)!c&&null!==e&&f in e||(e[f]=b[f]);return wc(a,e)+d}
function Km(a){if(!b)var b=window.location.href;var c=oc(1,a),d=pc(a);c&&d?(a=a.match(kc),b=b.match(kc),a=a[3]==b[3]&&a[1]==b[1]&&a[4]==b[4]):a=d?pc(b)==d&&(Number(oc(4,b))||null)==(Number(oc(4,a))||null):!0;return a}
function Em(a){return a&&a.match(Bm)?a:decodeURIComponent(a.replace(/\+/g," "))}
;function Lm(a){var b=Mm;a=void 0===a?B("yt.ads.biscotti.lastId_")||"":a;var c=Object,d=c.assign,e={};e.dt=fi;e.flash="0";a:{try{var f=b.h.top.location.href}catch(ha){f=2;break a}f=f?f===b.i.location.href?0:1:2}e=(e.frm=f,e);try{e.u_tz=-(new Date).getTimezoneOffset();var g=void 0===g?Mh:g;try{var h=g.history.length}catch(ha){h=0}e.u_his=h;var k;e.u_h=null==(k=Mh.screen)?void 0:k.height;var m;e.u_w=null==(m=Mh.screen)?void 0:m.width;var n;e.u_ah=null==(n=Mh.screen)?void 0:n.availHeight;var p;e.u_aw=
null==(p=Mh.screen)?void 0:p.availWidth;var v;e.u_cd=null==(v=Mh.screen)?void 0:v.colorDepth}catch(ha){}h=b.h;try{var t=h.screenX;var y=h.screenY}catch(ha){}try{var D=h.outerWidth;var E=h.outerHeight}catch(ha){}try{var O=h.innerWidth;var N=h.innerHeight}catch(ha){}try{var S=h.screenLeft;var aa=h.screenTop}catch(ha){}try{O=h.innerWidth,N=h.innerHeight}catch(ha){}try{var W=h.screen.availWidth;var xb=h.screen.availTop}catch(ha){}t=[S,aa,t,y,W,xb,D,E,O,N];try{var Ya=(b.h.top||window).document,ra="CSS1Compat"==
Ya.compatMode?Ya.documentElement:Ya.body;var I=(new nf(ra.clientWidth,ra.clientHeight)).round()}catch(ha){I=new nf(-12245933,-12245933)}Ya=I;I={};var pa=void 0===pa?z:pa;ra=new oi;pa.SVGElement&&pa.document.createElementNS&&ra.set(0);y=ci();y["allow-top-navigation-by-user-activation"]&&ra.set(1);y["allow-popups-to-escape-sandbox"]&&ra.set(2);pa.crypto&&pa.crypto.subtle&&ra.set(3);pa.TextDecoder&&pa.TextEncoder&&ra.set(4);pa=pi(ra);I.bc=pa;I.bih=Ya.height;I.biw=Ya.width;I.brdim=t.join();b=b.i;b=(I.vis=
b.prerendering?3:{visible:1,hidden:2,prerender:3,preview:4,unloaded:5}[b.visibilityState||b.webkitVisibilityState||b.mozVisibilityState||""]||0,I.wgl=!!Mh.WebGLRenderingContext,I);c=d.call(c,e,b);c.ca_type="image";a&&(c.bid=a);return c}
var Mm=new function(){var a=window.document;this.h=window;this.i=a};
A("yt.ads_.signals_.getAdSignalsString",function(a){return Gm(Lm(a))});Date.now();var Nm="XMLHttpRequest"in z?function(){return new XMLHttpRequest}:null;
function Om(){if(!Nm)return null;var a=Nm();return"open"in a?a:null}
function Pm(a){switch(a&&"status"in a?a.status:-1){case 200:case 201:case 202:case 203:case 204:case 205:case 206:case 304:return!0;default:return!1}}
;function Qm(a,b){"function"===typeof a&&(a=ym(a));return window.setTimeout(a,b)}
;var Rm={Authorization:"AUTHORIZATION","X-Goog-EOM-Visitor-Id":"EOM_VISITOR_DATA","X-Goog-Visitor-Id":"SANDBOXED_VISITOR_ID","X-Youtube-Domain-Admin-State":"DOMAIN_ADMIN_STATE","X-Youtube-Chrome-Connected":"CHROME_CONNECTED_HEADER","X-YouTube-Client-Name":"INNERTUBE_CONTEXT_CLIENT_NAME","X-YouTube-Client-Version":"INNERTUBE_CONTEXT_CLIENT_VERSION","X-YouTube-Delegation-Context":"INNERTUBE_CONTEXT_SERIALIZED_DELEGATION_CONTEXT","X-YouTube-Device":"DEVICE","X-Youtube-Identity-Token":"ID_TOKEN","X-YouTube-Page-CL":"PAGE_CL",
"X-YouTube-Page-Label":"PAGE_BUILD_LABEL","X-YouTube-Variants-Checksum":"VARIANTS_CHECKSUM"},Sm="app debugcss debugjs expflag force_ad_params force_ad_encrypted force_viral_ad_response_params forced_experiments innertube_snapshots innertube_goldens internalcountrycode internalipoverride absolute_experiments conditional_experiments sbb sr_bns_address".split(" ").concat(ja(gi)),Tm=!1;
function Um(a,b){b=void 0===b?{}:b;var c=Km(a),d=P("web_ajax_ignore_global_headers_if_set"),e;for(e in Rm){var f=M(Rm[e]);"X-Goog-Visitor-Id"!==e||f||(f=M("VISITOR_DATA"));!f||!c&&pc(a)||d&&void 0!==b[e]||(b[e]=f)}"X-Goog-EOM-Visitor-Id"in b&&"X-Goog-Visitor-Id"in b&&delete b["X-Goog-Visitor-Id"];if(c||!pc(a))b["X-YouTube-Utc-Offset"]=String(-(new Date).getTimezoneOffset());if(c||!pc(a)){try{var g=(new Intl.DateTimeFormat).resolvedOptions().timeZone}catch(h){}g&&(b["X-YouTube-Time-Zone"]=g)}document.location.hostname.endsWith("youtubeeducation.com")||
!c&&pc(a)||(b["X-YouTube-Ad-Signals"]=Gm(Lm()));return b}
function Vm(a){var b=window.location.search,c=pc(a);P("debug_handle_relative_url_for_query_forward_killswitch")||!c&&Km(a)&&(c=document.location.hostname);var d=lc(oc(5,a));d=(c=c&&(c.endsWith("youtube.com")||c.endsWith("youtube-nocookie.com")))&&d&&d.startsWith("/api/");if(!c||d)return a;var e=Hm(b),f={};hb(Sm,function(g){e[g]&&(f[g]=e[g])});
return Jm(a,f||{},!1)}
function Wm(a,b){var c=b.format||"JSON";a=Xm(a,b);var d=Ym(a,b),e=!1,f=Zm(a,function(k){if(!e){e=!0;h&&window.clearTimeout(h);var m=Pm(k),n=null,p=400<=k.status&&500>k.status,v=500<=k.status&&600>k.status;if(m||p||v)n=$m(a,c,k,b.convertToSafeHtml);if(m)a:if(k&&204==k.status)m=!0;else{switch(c){case "XML":m=0==parseInt(n&&n.return_code,10);break a;case "RAW":m=!0;break a}m=!!n}n=n||{};p=b.context||z;m?b.onSuccess&&b.onSuccess.call(p,k,n):b.onError&&b.onError.call(p,k,n);b.onFinish&&b.onFinish.call(p,
k,n)}},b.method,d,b.headers,b.responseType,b.withCredentials);
d=b.timeout||0;if(b.onTimeout&&0<d){var g=b.onTimeout;var h=Qm(function(){e||(e=!0,f.abort(),window.clearTimeout(h),g.call(b.context||z,f))},d)}return f}
function Xm(a,b){b.includeDomain&&(a=document.location.protocol+"//"+document.location.hostname+(document.location.port?":"+document.location.port:"")+a);var c=M("XSRF_FIELD_NAME");if(b=b.urlParams)b[c]&&delete b[c],a=Jm(a,b||{},!0);return a}
function Ym(a,b){var c=M("XSRF_FIELD_NAME"),d=M("XSRF_TOKEN"),e=b.postBody||"",f=b.postParams,g=M("XSRF_FIELD_NAME"),h;b.headers&&(h=b.headers["Content-Type"]);b.excludeXsrf||pc(a)&&!b.withCredentials&&pc(a)!=document.location.hostname||"POST"!=b.method||h&&"application/x-www-form-urlencoded"!=h||b.postParams&&b.postParams[g]||(f||(f={}),f[c]=d);(P("ajax_parse_query_data_only_when_filled")&&f&&0<Object.keys(f).length||f)&&"string"===typeof e&&(e=Hm(e),zb(e,f),e=b.postBodyFormat&&"JSON"==b.postBodyFormat?
JSON.stringify(e):uc(e));f=e||f&&!rb(f);!Tm&&f&&"POST"!=b.method&&(Tm=!0,zm(Error("AJAX request with postData should use POST")));return e}
function $m(a,b,c,d){var e=null;switch(b){case "JSON":try{var f=c.responseText}catch(g){throw d=Error("Error reading responseText"),d.params=a,Am(d),g;}a=c.getResponseHeader("Content-Type")||"";f&&0<=a.indexOf("json")&&(")]}'\n"===f.substring(0,5)&&(f=f.substring(5)),e=JSON.parse(f));break;case "XML":if(a=(a=c.responseXML)?an(a):null)e={},hb(a.getElementsByTagName("*"),function(g){e[g.tagName]=bn(g)})}d&&cn(e);
return e}
function cn(a){if(Sa(a))for(var b in a){var c;(c="html_content"==b)||(c=b.length-5,c=0<=c&&b.indexOf("_html",c)==c);if(c){c=b;var d=a[b],e=Bb();d=e?e.createHTML(d):d;a[c]=new dc(d)}else cn(a[b])}}
function an(a){return a?(a=("responseXML"in a?a.responseXML:a).getElementsByTagName("root"))&&0<a.length?a[0]:null:null}
function bn(a){var b="";hb(a.childNodes,function(c){b+=c.nodeValue});
return b}
function dn(a,b){b.method="POST";b.postParams||(b.postParams={});return Wm(a,b)}
function Zm(a,b,c,d,e,f,g){function h(){4==(k&&"readyState"in k?k.readyState:0)&&b&&ym(b)(k)}
c=void 0===c?"GET":c;d=void 0===d?"":d;var k=Om();if(!k)return null;"onloadend"in k?k.addEventListener("loadend",h,!1):k.onreadystatechange=h;P("debug_forward_web_query_parameters")&&(a=Vm(a));k.open(c,a,!0);f&&(k.responseType=f);g&&(k.withCredentials=!0);c="POST"==c&&(void 0===window.FormData||!(d instanceof FormData));if(e=Um(a,e))for(var m in e)k.setRequestHeader(m,e[m]),"content-type"==m.toLowerCase()&&(c=!1);c&&k.setRequestHeader("Content-Type","application/x-www-form-urlencoded");k.send(d);
return k}
;var en=Yc||Zc;function fn(a){var b=Ub();return b?0<=b.toLowerCase().indexOf(a):!1}
;var gn=[{Lc:function(a){return"Cannot read property '"+a.key+"'"},
oc:{Error:[{regexp:/(Permission denied) to access property "([^']+)"/,groups:["reason","key"]}],TypeError:[{regexp:/Cannot read property '([^']+)' of (null|undefined)/,groups:["key","value"]},{regexp:/\u65e0\u6cd5\u83b7\u53d6\u672a\u5b9a\u4e49\u6216 (null|undefined) \u5f15\u7528\u7684\u5c5e\u6027\u201c([^\u201d]+)\u201d/,groups:["value","key"]},{regexp:/\uc815\uc758\ub418\uc9c0 \uc54a\uc74c \ub610\ub294 (null|undefined) \ucc38\uc870\uc778 '([^']+)' \uc18d\uc131\uc744 \uac00\uc838\uc62c \uc218 \uc5c6\uc2b5\ub2c8\ub2e4./,
groups:["value","key"]},{regexp:/No se puede obtener la propiedad '([^']+)' de referencia nula o sin definir/,groups:["key"]},{regexp:/Unable to get property '([^']+)' of (undefined or null) reference/,groups:["key","value"]},{regexp:/(null) is not an object \(evaluating '(?:([^.]+)\.)?([^']+)'\)/,groups:["value","base","key"]}]}},{Lc:function(a){return"Cannot call '"+a.key+"'"},
oc:{TypeError:[{regexp:/(?:([^ ]+)?\.)?([^ ]+) is not a function/,groups:["base","key"]},{regexp:/([^ ]+) called on (null or undefined)/,groups:["key","value"]},{regexp:/Object (.*) has no method '([^ ]+)'/,groups:["base","key"]},{regexp:/Object doesn't support property or method '([^ ]+)'/,groups:["key"]},{regexp:/\u30aa\u30d6\u30b8\u30a7\u30af\u30c8\u306f '([^']+)' \u30d7\u30ed\u30d1\u30c6\u30a3\u307e\u305f\u306f\u30e1\u30bd\u30c3\u30c9\u3092\u30b5\u30dd\u30fc\u30c8\u3057\u3066\u3044\u307e\u305b\u3093/,
groups:["key"]},{regexp:/\uac1c\uccb4\uac00 '([^']+)' \uc18d\uc131\uc774\ub098 \uba54\uc11c\ub4dc\ub97c \uc9c0\uc6d0\ud558\uc9c0 \uc54a\uc2b5\ub2c8\ub2e4./,groups:["key"]}]}},{Lc:function(a){return a.key+" is not defined"},
oc:{ReferenceError:[{regexp:/(.*) is not defined/,groups:["key"]},{regexp:/Can't find variable: (.*)/,groups:["key"]}]}}];var jn={Ua:[],Qa:[{callback:hn,weight:500}]};function hn(a){if("JavaException"===a.name)return!0;a=a.stack;return a.includes("chrome://")||a.includes("chrome-extension://")||a.includes("moz-extension://")}
;function kn(){this.Qa=[];this.Ua=[]}
var ln;function mn(){if(!ln){var a=ln=new kn;a.Ua.length=0;a.Qa.length=0;jn.Ua&&a.Ua.push.apply(a.Ua,jn.Ua);jn.Qa&&a.Qa.push.apply(a.Qa,jn.Qa)}return ln}
;var nn=new Ki;function on(a){function b(){return a.charCodeAt(d++)}
var c=a.length,d=0;do{var e=pn(b);if(Infinity===e)break;var f=e>>3;switch(e&7){case 0:e=pn(b);if(2===f)return e;break;case 1:if(2===f)return;d+=8;break;case 2:e=pn(b);if(2===f)return a.substr(d,e);d+=e;break;case 5:if(2===f)return;d+=4;break;default:return}}while(d<c)}
function pn(a){var b=a(),c=b&127;if(128>b)return c;b=a();c|=(b&127)<<7;if(128>b)return c;b=a();c|=(b&127)<<14;if(128>b)return c;b=a();return 128>b?c|(b&127)<<21:Infinity}
;function qn(a,b,c,d){if(a)if(Array.isArray(a)){var e=d;for(d=0;d<a.length&&!(a[d]&&(e+=rn(d,a[d],b,c),500<e));d++);d=e}else if("object"===typeof a)for(e in a){if(a[e]){var f=a[e];var g=b;var h=c;g="string"!==typeof f||"clickTrackingParams"!==e&&"trackingParams"!==e?0:(f=on(atob(f.replace(/-/g,"+").replace(/_/g,"/"))))?rn(e+".ve",f,g,h):0;d+=g;d+=rn(e,a[e],b,c);if(500<d)break}}else c[b]=sn(a),d+=c[b].length;else c[b]=sn(a),d+=c[b].length;return d}
function rn(a,b,c,d){c+="."+a;a=sn(b);d[c]=a;return c.length+a.length}
function sn(a){try{return("string"===typeof a?a:String(JSON.stringify(a))).substr(0,500)}catch(b){return"unable to serialize "+typeof a+" ("+b.message+")"}}
;function tn(a){var b=this;this.i=void 0;this.h=!1;a.addEventListener("beforeinstallprompt",function(c){c.preventDefault();b.i=c});
a.addEventListener("appinstalled",function(){b.h=!0},{once:!0})}
function un(){if(!z.matchMedia)return"WEB_DISPLAY_MODE_UNKNOWN";try{return z.matchMedia("(display-mode: standalone)").matches?"WEB_DISPLAY_MODE_STANDALONE":z.matchMedia("(display-mode: minimal-ui)").matches?"WEB_DISPLAY_MODE_MINIMAL_UI":z.matchMedia("(display-mode: fullscreen)").matches?"WEB_DISPLAY_MODE_FULLSCREEN":z.matchMedia("(display-mode: browser)").matches?"WEB_DISPLAY_MODE_BROWSER":"WEB_DISPLAY_MODE_UNKNOWN"}catch(a){return"WEB_DISPLAY_MODE_UNKNOWN"}}
;function vn(a,b,c,d,e){zg.set(""+a,b,{mc:c,path:"/",domain:void 0===d?"youtube.com":d,secure:void 0===e?!1:e})}
function wn(a,b,c){zg.remove(""+a,void 0===b?"/":b,void 0===c?"youtube.com":c)}
function xn(){if(!zg.isEnabled())return!1;if(!zg.Kb())return!0;zg.set("TESTCOOKIESENABLED","1",{mc:60});if("1"!==zg.get("TESTCOOKIESENABLED"))return!1;zg.remove("TESTCOOKIESENABLED");return!0}
;var yn=B("ytglobal.prefsUserPrefsPrefs_")||{};A("ytglobal.prefsUserPrefsPrefs_",yn);function zn(){this.h=M("ALT_PREF_COOKIE_NAME","PREF");this.i=M("ALT_PREF_COOKIE_DOMAIN","youtube.com");var a=zg.get(""+this.h,void 0);if(a){a=decodeURIComponent(a).split("&");for(var b=0;b<a.length;b++){var c=a[b].split("="),d=c[0];(c=c[1])&&(yn[d]=c.toString())}}}
zn.prototype.get=function(a,b){An(a);Bn(a);a=void 0!==yn[a]?yn[a].toString():null;return null!=a?a:b?b:""};
zn.prototype.set=function(a,b){An(a);Bn(a);if(null==b)throw Error("ExpectedNotNull");yn[a]=b.toString()};
function Cn(a){return!!((Dn("f"+(Math.floor(a/31)+1))||0)&1<<a%31)}
zn.prototype.remove=function(a){An(a);Bn(a);delete yn[a]};
zn.prototype.clear=function(){for(var a in yn)delete yn[a]};
function Bn(a){if(/^f([1-9][0-9]*)$/.test(a))throw Error("ExpectedRegexMatch: "+a);}
function An(a){if(!/^\w+$/.test(a))throw Error("ExpectedRegexMismatch: "+a);}
function Dn(a){a=void 0!==yn[a]?yn[a].toString():null;return null!=a&&/^[A-Fa-f0-9]+$/.test(a)?parseInt(a,16):null}
Pa(zn);var En={bluetooth:"CONN_DISCO",cellular:"CONN_CELLULAR_UNKNOWN",ethernet:"CONN_WIFI",none:"CONN_NONE",wifi:"CONN_WIFI",wimax:"CONN_CELLULAR_4G",other:"CONN_UNKNOWN",unknown:"CONN_UNKNOWN","slow-2g":"CONN_CELLULAR_2G","2g":"CONN_CELLULAR_2G","3g":"CONN_CELLULAR_3G","4g":"CONN_CELLULAR_4G"},Fn={CONN_DEFAULT:0,CONN_UNKNOWN:1,CONN_NONE:2,CONN_WIFI:3,CONN_CELLULAR_2G:4,CONN_CELLULAR_3G:5,CONN_CELLULAR_4G:6,CONN_CELLULAR_UNKNOWN:7,CONN_DISCO:8,CONN_CELLULAR_5G:9,CONN_WIFI_METERED:10,CONN_CELLULAR_5G_SA:11,
CONN_CELLULAR_5G_NSA:12,CONN_INVALID:31},Gn={EFFECTIVE_CONNECTION_TYPE_UNKNOWN:0,EFFECTIVE_CONNECTION_TYPE_OFFLINE:1,EFFECTIVE_CONNECTION_TYPE_SLOW_2G:2,EFFECTIVE_CONNECTION_TYPE_2G:3,EFFECTIVE_CONNECTION_TYPE_3G:4,EFFECTIVE_CONNECTION_TYPE_4G:5},Hn={"slow-2g":"EFFECTIVE_CONNECTION_TYPE_SLOW_2G","2g":"EFFECTIVE_CONNECTION_TYPE_2G","3g":"EFFECTIVE_CONNECTION_TYPE_3G","4g":"EFFECTIVE_CONNECTION_TYPE_4G"};function In(){var a=z.navigator;return a?a.connection:void 0}
function Jn(){var a=In();if(a){var b=En[a.type||"unknown"]||"CONN_UNKNOWN";a=En[a.effectiveType||"unknown"]||"CONN_UNKNOWN";"CONN_CELLULAR_UNKNOWN"===b&&"CONN_UNKNOWN"!==a&&(b=a);if("CONN_UNKNOWN"!==b)return b;if("CONN_UNKNOWN"!==a)return a}}
function Kn(){var a=In();if(null!=a&&a.effectiveType)return Hn.hasOwnProperty(a.effectiveType)?Hn[a.effectiveType]:"EFFECTIVE_CONNECTION_TYPE_UNKNOWN"}
;function Ln(){}
function Mn(a,b){return Nn(a,0,b)}
Ln.prototype.fa=function(a,b){return Nn(a,1,b)};
function On(a){var b=B("yt.scheduler.instance.addImmediateJob");b?b(a):a()}
;function Pn(){Ln.apply(this,arguments)}
u(Pn,Ln);function Qn(){Pn.h||(Pn.h=new Pn);return Pn.h}
function Nn(a,b,c){void 0!==c&&Number.isNaN(Number(c))&&(c=void 0);var d=B("yt.scheduler.instance.addJob");return d?d(a,b,c):void 0===c?(a(),NaN):Qm(a,c||0)}
Pn.prototype.Ca=function(a){if(void 0===a||!Number.isNaN(Number(a))){var b=B("yt.scheduler.instance.cancelJob");b?b(a):window.clearTimeout(a)}};
Pn.prototype.start=function(){var a=B("yt.scheduler.instance.start");a&&a()};
Pn.prototype.pause=function(){var a=B("yt.scheduler.instance.pause");a&&a()};
var ni=Qn();function Q(a){var b=Ka.apply(1,arguments);var c=Error.call(this,a);this.message=c.message;"stack"in c&&(this.stack=c.stack);this.args=[].concat(ja(b))}
u(Q,Error);function Rn(){try{return Sn(),!0}catch(a){return!1}}
function Sn(a){if(void 0!==M("DATASYNC_ID"))return M("DATASYNC_ID");throw new Q("Datasync ID not set",void 0===a?"unknown":a);}
;function Tn(a){var b=new Vi;(b=b.isAvailable()?a?new aj(b,a):b:null)||(a=new Wi(a||"UserDataSharedStore"),b=a.isAvailable()?a:null);this.h=(a=b)?new Ri(a):null;this.i=document.domain||window.location.hostname}
Tn.prototype.set=function(a,b,c,d){c=c||31104E3;this.remove(a);if(this.h)try{this.h.set(a,b,Date.now()+1E3*c);return}catch(f){}var e="";if(d)try{e=escape(Hg(b))}catch(f){return}else e=escape(b);vn(a,e,c,this.i)};
Tn.prototype.get=function(a,b){var c=void 0,d=!this.h;if(!d)try{c=this.h.get(a)}catch(e){d=!0}if(d&&(c=zg.get(""+a,void 0))&&(c=unescape(c),b))try{c=JSON.parse(c)}catch(e){this.remove(a),c=void 0}return c};
Tn.prototype.remove=function(a){this.h&&this.h.remove(a);wn(a,"/",this.i)};var Un=function(){var a;return function(){a||(a=new Tn("ytidb"));return a}}();
function Vn(){var a;return null==(a=Un())?void 0:a.get("LAST_RESULT_ENTRY_KEY",!0)}
;var Wn=[],Xn,Yn=!1;function Zn(){var a={};for(Xn=new $n(void 0===a.handleError?ao:a.handleError,void 0===a.logEvent?bo:a.logEvent);0<Wn.length;)switch(a=Wn.shift(),a.type){case "ERROR":Xn.handleError(a.payload);break;case "EVENT":Xn.logEvent(a.eventType,a.payload)}}
function co(a){Yn||(Xn?Xn.handleError(a):(Wn.push({type:"ERROR",payload:a}),10<Wn.length&&Wn.shift()))}
function eo(a,b){Yn||(Xn?Xn.logEvent(a,b):(Wn.push({type:"EVENT",eventType:a,payload:b}),10<Wn.length&&Wn.shift()))}
;function fo(a){if(0<=a.indexOf(":"))throw Error("Database name cannot contain ':'");}
function go(a){return a.substr(0,a.indexOf(":"))||a}
;var ho={},io=(ho.AUTH_INVALID="No user identifier specified.",ho.EXPLICIT_ABORT="Transaction was explicitly aborted.",ho.IDB_NOT_SUPPORTED="IndexedDB is not supported.",ho.MISSING_INDEX="Index not created.",ho.MISSING_OBJECT_STORES="Object stores not created.",ho.DB_DELETED_BY_MISSING_OBJECT_STORES="Database is deleted because expected object stores were not created.",ho.DB_REOPENED_BY_MISSING_OBJECT_STORES="Database is reopened because expected object stores were not created.",ho.UNKNOWN_ABORT="Transaction was aborted for unknown reasons.",
ho.QUOTA_EXCEEDED="The current transaction exceeded its quota limitations.",ho.QUOTA_MAYBE_EXCEEDED="The current transaction may have failed because of exceeding quota limitations.",ho.EXECUTE_TRANSACTION_ON_CLOSED_DB="Can't start a transaction on a closed database",ho.INCOMPATIBLE_DB_VERSION="The binary is incompatible with the database version",ho),jo={},ko=(jo.AUTH_INVALID="ERROR",jo.EXECUTE_TRANSACTION_ON_CLOSED_DB="WARNING",jo.EXPLICIT_ABORT="IGNORED",jo.IDB_NOT_SUPPORTED="ERROR",jo.MISSING_INDEX=
"WARNING",jo.MISSING_OBJECT_STORES="ERROR",jo.DB_DELETED_BY_MISSING_OBJECT_STORES="WARNING",jo.DB_REOPENED_BY_MISSING_OBJECT_STORES="WARNING",jo.QUOTA_EXCEEDED="WARNING",jo.QUOTA_MAYBE_EXCEEDED="WARNING",jo.UNKNOWN_ABORT="WARNING",jo.INCOMPATIBLE_DB_VERSION="WARNING",jo),lo={},mo=(lo.AUTH_INVALID=!1,lo.EXECUTE_TRANSACTION_ON_CLOSED_DB=!1,lo.EXPLICIT_ABORT=!1,lo.IDB_NOT_SUPPORTED=!1,lo.MISSING_INDEX=!1,lo.MISSING_OBJECT_STORES=!1,lo.DB_DELETED_BY_MISSING_OBJECT_STORES=!1,lo.DB_REOPENED_BY_MISSING_OBJECT_STORES=
!1,lo.QUOTA_EXCEEDED=!1,lo.QUOTA_MAYBE_EXCEEDED=!0,lo.UNKNOWN_ABORT=!0,lo.INCOMPATIBLE_DB_VERSION=!1,lo);function no(a,b,c,d,e){b=void 0===b?{}:b;c=void 0===c?io[a]:c;d=void 0===d?ko[a]:d;e=void 0===e?mo[a]:e;Q.call(this,c,Object.assign({},{name:"YtIdbKnownError",isSw:void 0===self.document,isIframe:self!==self.top,type:a},b));this.type=a;this.message=c;this.level=d;this.h=e;Object.setPrototypeOf(this,no.prototype)}
u(no,Q);function oo(a,b){no.call(this,"MISSING_OBJECT_STORES",{expectedObjectStores:b,foundObjectStores:a},io.MISSING_OBJECT_STORES);Object.setPrototypeOf(this,oo.prototype)}
u(oo,no);function po(a,b){var c=Error.call(this);this.message=c.message;"stack"in c&&(this.stack=c.stack);this.index=a;this.objectStore=b;Object.setPrototypeOf(this,po.prototype)}
u(po,Error);var qo=["The database connection is closing","Can't start a transaction on a closed database","A mutation operation was attempted on a database that did not allow mutations"];
function ro(a,b,c,d){b=go(b);var e=a instanceof Error?a:Error("Unexpected error: "+a);if(e instanceof no)return e;a={objectStoreNames:c,dbName:b,dbVersion:d};if("QuotaExceededError"===e.name)return new no("QUOTA_EXCEEDED",a);if($c&&"UnknownError"===e.name)return new no("QUOTA_MAYBE_EXCEEDED",a);if(e instanceof po)return new no("MISSING_INDEX",Object.assign({},a,{objectStore:e.objectStore,index:e.index}));if("InvalidStateError"===e.name&&qo.some(function(f){return e.message.includes(f)}))return new no("EXECUTE_TRANSACTION_ON_CLOSED_DB",
a);
if("AbortError"===e.name)return new no("UNKNOWN_ABORT",a,e.message);e.args=[Object.assign({},a,{name:"IdbError",Cd:e.name})];e.level="WARNING";return e}
function so(a,b,c){var d=Vn();return new no("IDB_NOT_SUPPORTED",{context:{caller:a,publicName:b,version:c,hasSucceededOnce:null==d?void 0:d.hasSucceededOnce}})}
;function to(a){if(!a)throw Error();throw a;}
function uo(a){return a}
function vo(a){this.h=a}
function wo(a){function b(e){if("PENDING"===d.state.status){d.state={status:"REJECTED",reason:e};e=r(d.i);for(var f=e.next();!f.done;f=e.next())f=f.value,f()}}
function c(e){if("PENDING"===d.state.status){d.state={status:"FULFILLED",value:e};e=r(d.h);for(var f=e.next();!f.done;f=e.next())f=f.value,f()}}
var d=this;this.state={status:"PENDING"};this.h=[];this.i=[];a=a.h;try{a(c,b)}catch(e){b(e)}}
wo.all=function(a){return new wo(new vo(function(b,c){var d=[],e=a.length;0===e&&b(d);for(var f={nb:0};f.nb<a.length;f={nb:f.nb},++f.nb)wo.resolve(a[f.nb]).then(function(g){return function(h){d[g.nb]=h;e--;0===e&&b(d)}}(f)).catch(function(g){c(g)})}))};
wo.resolve=function(a){return new wo(new vo(function(b,c){a instanceof wo?a.then(b,c):b(a)}))};
wo.reject=function(a){return new wo(new vo(function(b,c){c(a)}))};
wo.prototype.then=function(a,b){var c=this,d=null!=a?a:uo,e=null!=b?b:to;return new wo(new vo(function(f,g){"PENDING"===c.state.status?(c.h.push(function(){xo(c,c,d,f,g)}),c.i.push(function(){yo(c,c,e,f,g)})):"FULFILLED"===c.state.status?xo(c,c,d,f,g):"REJECTED"===c.state.status&&yo(c,c,e,f,g)}))};
wo.prototype.catch=function(a){return this.then(void 0,a)};
function xo(a,b,c,d,e){try{if("FULFILLED"!==a.state.status)throw Error("calling handleResolve before the promise is fulfilled.");var f=c(a.state.value);f instanceof wo?zo(a,b,f,d,e):d(f)}catch(g){e(g)}}
function yo(a,b,c,d,e){try{if("REJECTED"!==a.state.status)throw Error("calling handleReject before the promise is rejected.");var f=c(a.state.reason);f instanceof wo?zo(a,b,f,d,e):d(f)}catch(g){e(g)}}
function zo(a,b,c,d,e){b===c?e(new TypeError("Circular promise chain detected.")):c.then(function(f){f instanceof wo?zo(a,b,f,d,e):d(f)},function(f){e(f)})}
;function Ao(a,b,c){function d(){c(a.error);f()}
function e(){b(a.result);f()}
function f(){try{a.removeEventListener("success",e),a.removeEventListener("error",d)}catch(g){}}
a.addEventListener("success",e);a.addEventListener("error",d)}
function Bo(a){return new Promise(function(b,c){Ao(a,b,c)})}
function Co(a){return new wo(new vo(function(b,c){Ao(a,b,c)}))}
;function Do(a,b){return new wo(new vo(function(c,d){function e(){var f=a?b(a):null;f?f.then(function(g){a=g;e()},d):c()}
e()}))}
;var Eo=window,R=Eo.ytcsi&&Eo.ytcsi.now?Eo.ytcsi.now:Eo.performance&&Eo.performance.timing&&Eo.performance.now&&Eo.performance.timing.navigationStart?function(){return Eo.performance.timing.navigationStart+Eo.performance.now()}:function(){return(new Date).getTime()};function Fo(a,b){this.h=a;this.options=b;this.transactionCount=0;this.j=Math.round(R());this.i=!1}
l=Fo.prototype;l.add=function(a,b,c){return Go(this,[a],{mode:"readwrite",da:!0},function(d){return d.objectStore(a).add(b,c)})};
l.clear=function(a){return Go(this,[a],{mode:"readwrite",da:!0},function(b){return b.objectStore(a).clear()})};
l.close=function(){this.h.close();var a;(null==(a=this.options)?0:a.closed)&&this.options.closed()};
l.count=function(a,b){return Go(this,[a],{mode:"readonly",da:!0},function(c){return c.objectStore(a).count(b)})};
function Ho(a,b,c){a=a.h.createObjectStore(b,c);return new Io(a)}
l.delete=function(a,b){return Go(this,[a],{mode:"readwrite",da:!0},function(c){return c.objectStore(a).delete(b)})};
l.get=function(a,b){return Go(this,[a],{mode:"readonly",da:!0},function(c){return c.objectStore(a).get(b)})};
function Jo(a,b,c){return Go(a,[b],{mode:"readwrite",da:!0},function(d){d=d.objectStore(b);return Co(d.h.put(c,void 0))})}
l.objectStoreNames=function(){return Array.from(this.h.objectStoreNames)};
function Go(a,b,c,d){var e,f,g,h,k,m,n,p,v,t,y,D;return x(function(E){switch(E.h){case 1:var O={mode:"readonly",da:!1,tag:"IDB_TRANSACTION_TAG_UNKNOWN"};"string"===typeof c?O.mode=c:Object.assign(O,c);e=O;a.transactionCount++;f=e.da?3:1;g=0;case 2:if(h){E.A(3);break}g++;k=Math.round(R());za(E,4);m=a.h.transaction(b,e.mode);O=new Ko(m);O=Lo(O,d);return w(E,O,6);case 6:return n=E.i,p=Math.round(R()),Mo(a,k,p,g,void 0,b.join(),e),E.return(n);case 4:v=Ba(E);t=Math.round(R());y=ro(v,a.h.name,b.join(),
a.h.version);if((D=y instanceof no&&!y.h)||g>=f)Mo(a,k,t,g,y,b.join(),e),h=y;E.A(2);break;case 3:return E.return(Promise.reject(h))}})}
function Mo(a,b,c,d,e,f,g){b=c-b;e?(e instanceof no&&("QUOTA_EXCEEDED"===e.type||"QUOTA_MAYBE_EXCEEDED"===e.type)&&eo("QUOTA_EXCEEDED",{dbName:go(a.h.name),objectStoreNames:f,transactionCount:a.transactionCount,transactionMode:g.mode}),e instanceof no&&"UNKNOWN_ABORT"===e.type&&(c-=a.j,0>c&&c>=Math.pow(2,31)&&(c=0),eo("TRANSACTION_UNEXPECTEDLY_ABORTED",{objectStoreNames:f,transactionDuration:b,transactionCount:a.transactionCount,dbDuration:c}),a.i=!0),No(a,!1,d,f,b,g.tag),co(e)):No(a,!0,d,f,b,g.tag)}
function No(a,b,c,d,e,f){eo("TRANSACTION_ENDED",{objectStoreNames:d,connectionHasUnknownAbortedTransaction:a.i,duration:e,isSuccessful:b,tryCount:c,tag:void 0===f?"IDB_TRANSACTION_TAG_UNKNOWN":f})}
l.getName=function(){return this.h.name};
function Io(a){this.h=a}
l=Io.prototype;l.add=function(a,b){return Co(this.h.add(a,b))};
l.autoIncrement=function(){return this.h.autoIncrement};
l.clear=function(){return Co(this.h.clear()).then(function(){})};
function Oo(a,b,c){a.h.createIndex(b,c,{unique:!1})}
l.count=function(a){return Co(this.h.count(a))};
function Po(a,b){return Qo(a,{query:b},function(c){return c.delete().then(function(){return c.continue()})}).then(function(){})}
l.delete=function(a){return a instanceof IDBKeyRange?Po(this,a):Co(this.h.delete(a))};
l.get=function(a){return Co(this.h.get(a))};
l.index=function(a){try{return new Ro(this.h.index(a))}catch(b){if(b instanceof Error&&"NotFoundError"===b.name)throw new po(a,this.h.name);throw b;}};
l.getName=function(){return this.h.name};
l.keyPath=function(){return this.h.keyPath};
function Qo(a,b,c){a=a.h.openCursor(b.query,b.direction);return So(a).then(function(d){return Do(d,c)})}
function Ko(a){var b=this;this.h=a;this.j=new Map;this.i=!1;this.done=new Promise(function(c,d){b.h.addEventListener("complete",function(){c()});
b.h.addEventListener("error",function(e){e.currentTarget===e.target&&d(b.h.error)});
b.h.addEventListener("abort",function(){var e=b.h.error;if(e)d(e);else if(!b.i){e=no;for(var f=b.h.objectStoreNames,g=[],h=0;h<f.length;h++){var k=f.item(h);if(null===k)throw Error("Invariant: item in DOMStringList is null");g.push(k)}e=new e("UNKNOWN_ABORT",{objectStoreNames:g.join(),dbName:b.h.db.name,mode:b.h.mode});d(e)}})})}
function Lo(a,b){var c=new Promise(function(d,e){try{b(a).then(function(f){d(f)}).catch(e)}catch(f){e(f),a.abort()}});
return Promise.all([c,a.done]).then(function(d){return r(d).next().value})}
Ko.prototype.abort=function(){this.h.abort();this.i=!0;throw new no("EXPLICIT_ABORT");};
Ko.prototype.objectStore=function(a){a=this.h.objectStore(a);var b=this.j.get(a);b||(b=new Io(a),this.j.set(a,b));return b};
function Ro(a){this.h=a}
l=Ro.prototype;l.count=function(a){return Co(this.h.count(a))};
l.delete=function(a){return To(this,{query:a},function(b){return b.delete().then(function(){return b.continue()})})};
l.get=function(a){return Co(this.h.get(a))};
l.getKey=function(a){return Co(this.h.getKey(a))};
l.keyPath=function(){return this.h.keyPath};
l.unique=function(){return this.h.unique};
function To(a,b,c){a=a.h.openCursor(void 0===b.query?null:b.query,void 0===b.direction?"next":b.direction);return So(a).then(function(d){return Do(d,c)})}
function Uo(a,b){this.request=a;this.cursor=b}
function So(a){return Co(a).then(function(b){return b?new Uo(a,b):null})}
l=Uo.prototype;l.advance=function(a){this.cursor.advance(a);return So(this.request)};
l.continue=function(a){this.cursor.continue(a);return So(this.request)};
l.delete=function(){return Co(this.cursor.delete()).then(function(){})};
l.getKey=function(){return this.cursor.key};
l.getValue=function(){return this.cursor.value};
l.update=function(a){return Co(this.cursor.update(a))};function Vo(a,b,c){return new Promise(function(d,e){function f(){v||(v=new Fo(g.result,{closed:p}));return v}
var g=void 0!==b?self.indexedDB.open(a,b):self.indexedDB.open(a);var h=c.ce,k=c.blocking,m=c.ef,n=c.upgrade,p=c.closed,v;g.addEventListener("upgradeneeded",function(t){try{if(null===t.newVersion)throw Error("Invariant: newVersion on IDbVersionChangeEvent is null");if(null===g.transaction)throw Error("Invariant: transaction on IDbOpenDbRequest is null");t.dataLoss&&"none"!==t.dataLoss&&eo("IDB_DATA_CORRUPTED",{reason:t.dataLossMessage||"unknown reason",dbName:go(a)});var y=f(),D=new Ko(g.transaction);
n&&n(y,function(E){return t.oldVersion<E&&t.newVersion>=E},D);
D.done.catch(function(E){e(E)})}catch(E){e(E)}});
g.addEventListener("success",function(){var t=g.result;k&&t.addEventListener("versionchange",function(){k(f())});
t.addEventListener("close",function(){eo("IDB_UNEXPECTEDLY_CLOSED",{dbName:go(a),dbVersion:t.version});m&&m()});
d(f())});
g.addEventListener("error",function(){e(g.error)});
h&&g.addEventListener("blocked",function(){h()})})}
function Wo(a,b,c){c=void 0===c?{}:c;return Vo(a,b,c)}
function Xo(a,b){b=void 0===b?{}:b;var c,d,e,f;return x(function(g){if(1==g.h)return za(g,2),c=self.indexedDB.deleteDatabase(a),d=b,(e=d.ce)&&c.addEventListener("blocked",function(){e()}),w(g,Bo(c),4);
if(2!=g.h)return Aa(g,0);f=Ba(g);throw ro(f,a,"",-1);})}
;function Yo(a,b){this.name=a;this.options=b;this.j=!0;this.m=this.l=0}
Yo.prototype.i=function(a,b,c){c=void 0===c?{}:c;return Wo(a,b,c)};
Yo.prototype.delete=function(a){a=void 0===a?{}:a;return Xo(this.name,a)};
function Zo(a,b){return new no("INCOMPATIBLE_DB_VERSION",{dbName:a.name,oldVersion:a.options.version,newVersion:b})}
function $o(a,b){if(!b)throw so("openWithToken",go(a.name));return ap(a)}
function ap(a){function b(){var f,g,h,k,m,n,p,v,t,y;return x(function(D){switch(D.h){case 1:return g=null!=(f=Error().stack)?f:"",za(D,2),w(D,a.i(a.name,a.options.version,d),4);case 4:h=D.i;for(var E=a.options,O=[],N=r(Object.keys(E.xb)),S=N.next();!S.done;S=N.next()){S=S.value;var aa=E.xb[S],W=void 0===aa.Oe?Number.MAX_VALUE:aa.Oe;!(h.h.version>=aa.Db)||h.h.version>=W||h.h.objectStoreNames.contains(S)||O.push(S)}k=O;if(0===k.length){D.A(5);break}m=Object.keys(a.options.xb);n=h.objectStoreNames();
if(a.m<qm("ytidb_reopen_db_retries",0))return a.m++,h.close(),co(new no("DB_REOPENED_BY_MISSING_OBJECT_STORES",{dbName:a.name,expectedObjectStores:m,foundObjectStores:n})),D.return(b());if(!(a.l<qm("ytidb_remake_db_retries",1))){D.A(6);break}a.l++;return w(D,a.delete(),7);case 7:return co(new no("DB_DELETED_BY_MISSING_OBJECT_STORES",{dbName:a.name,expectedObjectStores:m,foundObjectStores:n})),D.return(b());case 6:throw new oo(n,m);case 5:return D.return(h);case 2:p=Ba(D);if(p instanceof DOMException?
"VersionError"!==p.name:"DOMError"in self&&p instanceof DOMError?"VersionError"!==p.name:!(p instanceof Object&&"message"in p)||"An attempt was made to open a database using a lower version than the existing version."!==p.message){D.A(8);break}return w(D,a.i(a.name,void 0,Object.assign({},d,{upgrade:void 0})),9);case 9:v=D.i;t=v.h.version;if(void 0!==a.options.version&&t>a.options.version+1)throw v.close(),a.j=!1,Zo(a,t);return D.return(v);case 8:throw c(),p instanceof Error&&!P("ytidb_async_stack_killswitch")&&
(p.stack=p.stack+"\n"+g.substring(g.indexOf("\n")+1)),ro(p,a.name,"",null!=(y=a.options.version)?y:-1);}})}
function c(){a.h===e&&(a.h=void 0)}
if(!a.j)throw Zo(a);if(a.h)return a.h;var d={blocking:function(f){f.close()},
closed:c,ef:c,upgrade:a.options.upgrade};var e=b();a.h=e;return a.h}
;var bp=new Yo("YtIdbMeta",{xb:{databases:{Db:1}},upgrade:function(a,b){b(1)&&Ho(a,"databases",{keyPath:"actualName"})}});
function cp(a,b){var c;return x(function(d){if(1==d.h)return w(d,$o(bp,b),2);c=d.i;return d.return(Go(c,["databases"],{da:!0,mode:"readwrite"},function(e){var f=e.objectStore("databases");return f.get(a.actualName).then(function(g){if(g?a.actualName!==g.actualName||a.publicName!==g.publicName||a.userIdentifier!==g.userIdentifier:1)return Co(f.h.put(a,void 0)).then(function(){})})}))})}
function dp(a,b){var c;return x(function(d){if(1==d.h)return a?w(d,$o(bp,b),2):d.return();c=d.i;return d.return(c.delete("databases",a))})}
function ep(a,b){var c,d;return x(function(e){return 1==e.h?(c=[],w(e,$o(bp,b),2)):3!=e.h?(d=e.i,w(e,Go(d,["databases"],{da:!0,mode:"readonly"},function(f){c.length=0;return Qo(f.objectStore("databases"),{},function(g){a(g.getValue())&&c.push(g.getValue());return g.continue()})}),3)):e.return(c)})}
function fp(a){return ep(function(b){return"LogsDatabaseV2"===b.publicName&&void 0!==b.userIdentifier},a)}
function gp(a,b,c){return ep(function(d){return c?void 0!==d.userIdentifier&&!a.includes(d.userIdentifier)&&c.includes(d.publicName):void 0!==d.userIdentifier&&!a.includes(d.userIdentifier)},b)}
function hp(a){var b,c;return x(function(d){if(1==d.h)return b=Sn("YtIdbMeta hasAnyMeta other"),w(d,ep(function(e){return void 0!==e.userIdentifier&&e.userIdentifier!==b},a),2);
c=d.i;return d.return(0<c.length)})}
;var ip,jp=new function(){}(new function(){});
function kp(){var a,b,c,d;return x(function(e){switch(e.h){case 1:a=Vn();if(null==(b=a)?0:b.hasSucceededOnce)return e.return(!0);var f;if(f=en)f=/WebKit\/([0-9]+)/.exec(Ub()),f=!!(f&&600<=parseInt(f[1],10));f&&(f=/WebKit\/([0-9]+)/.exec(Ub()),f=!(f&&602<=parseInt(f[1],10)));if(f||Ic)return e.return(!1);try{if(c=self,!(c.indexedDB&&c.IDBIndex&&c.IDBKeyRange&&c.IDBObjectStore))return e.return(!1)}catch(g){return e.return(!1)}if(!("IDBTransaction"in self&&"objectStoreNames"in IDBTransaction.prototype))return e.return(!1);
za(e,2);d={actualName:"yt-idb-test-do-not-use",publicName:"yt-idb-test-do-not-use",userIdentifier:void 0};return w(e,cp(d,jp),4);case 4:return w(e,dp("yt-idb-test-do-not-use",jp),5);case 5:return e.return(!0);case 2:return Ba(e),e.return(!1)}})}
function lp(){if(void 0!==ip)return ip;Yn=!0;return ip=kp().then(function(a){Yn=!1;var b;if(null!=(b=Un())&&b.h){var c;b={hasSucceededOnce:(null==(c=Vn())?void 0:c.hasSucceededOnce)||a};var d;null==(d=Un())||d.set("LAST_RESULT_ENTRY_KEY",b,2592E3,!0)}return a})}
function mp(){return B("ytglobal.idbToken_")||void 0}
function np(){var a=mp();return a?Promise.resolve(a):lp().then(function(b){(b=b?jp:void 0)&&A("ytglobal.idbToken_",b);return b})}
;var op=0;function pp(a,b){op||(op=ni.fa(function(){var c,d,e,f,g;return x(function(h){switch(h.h){case 1:return w(h,np(),2);case 2:c=h.i;if(!c)return h.return();d=!0;za(h,3);return w(h,gp(a,c,b),5);case 5:e=h.i;if(!e.length){d=!1;h.A(6);break}f=e[0];return w(h,Xo(f.actualName),7);case 7:return w(h,dp(f.actualName,c),6);case 6:Aa(h,4);break;case 3:g=Ba(h),co(g),d=!1;case 4:ni.Ca(op),op=0,d&&pp(a,b),h.h=0}})}))}
function qp(){var a;return x(function(b){return 1==b.h?w(b,np(),2):(a=b.i)?b.return(hp(a)):b.return(!1)})}
new Kh;function rp(a){if(!Rn())throw a=new no("AUTH_INVALID",{dbName:a}),co(a),a;var b=Sn();return{actualName:a+":"+b,publicName:a,userIdentifier:b}}
function sp(a,b,c,d){var e,f,g,h,k,m;return x(function(n){switch(n.h){case 1:return f=null!=(e=Error().stack)?e:"",w(n,np(),2);case 2:g=n.i;if(!g)throw h=so("openDbImpl",a,b),P("ytidb_async_stack_killswitch")||(h.stack=h.stack+"\n"+f.substring(f.indexOf("\n")+1)),co(h),h;fo(a);k=c?{actualName:a,publicName:a,userIdentifier:void 0}:rp(a);za(n,3);return w(n,cp(k,g),5);case 5:return w(n,Wo(k.actualName,b,d),6);case 6:return n.return(n.i);case 3:return m=Ba(n),za(n,7),w(n,dp(k.actualName,g),9);case 9:Aa(n,
8);break;case 7:Ba(n);case 8:throw m;}})}
function tp(a,b,c){c=void 0===c?{}:c;return sp(a,b,!1,c)}
function up(a,b,c){c=void 0===c?{}:c;return sp(a,b,!0,c)}
function vp(a,b){b=void 0===b?{}:b;var c,d;return x(function(e){if(1==e.h)return w(e,np(),2);if(3!=e.h){c=e.i;if(!c)return e.return();fo(a);d=rp(a);return w(e,Xo(d.actualName,b),3)}return w(e,dp(d.actualName,c),0)})}
function wp(a,b,c){a=a.map(function(d){return x(function(e){return 1==e.h?w(e,Xo(d.actualName,b),2):w(e,dp(d.actualName,c),0)})});
return Promise.all(a).then(function(){})}
function xp(){var a=void 0===a?{}:a;var b,c;return x(function(d){if(1==d.h)return w(d,np(),2);if(3!=d.h){b=d.i;if(!b)return d.return();fo("LogsDatabaseV2");return w(d,fp(b),3)}c=d.i;return w(d,wp(c,a,b),0)})}
function yp(a,b){b=void 0===b?{}:b;var c;return x(function(d){if(1==d.h)return w(d,np(),2);if(3!=d.h){c=d.i;if(!c)return d.return();fo(a);return w(d,Xo(a,b),3)}return w(d,dp(a,c),0)})}
;function zp(a,b){Yo.call(this,a,b);this.options=b;fo(a)}
u(zp,Yo);function Ap(a,b){var c;return function(){c||(c=new zp(a,b));return c}}
zp.prototype.i=function(a,b,c){c=void 0===c?{}:c;return(this.options.uc?up:tp)(a,b,Object.assign({},c))};
zp.prototype.delete=function(a){a=void 0===a?{}:a;return(this.options.uc?yp:vp)(this.name,a)};
function Bp(a,b){return Ap(a,b)}
;var Cp={},Dp=Bp("ytGcfConfig",{xb:(Cp.coldConfigStore={Db:1},Cp.hotConfigStore={Db:1},Cp),uc:!1,upgrade:function(a,b){b(1)&&(Oo(Ho(a,"hotConfigStore",{keyPath:"key",autoIncrement:!0}),"hotTimestampIndex","timestamp"),Oo(Ho(a,"coldConfigStore",{keyPath:"key",autoIncrement:!0}),"coldTimestampIndex","timestamp"))},
version:1});function Ep(a){return $o(Dp(),a)}
function Fp(a,b,c){var d,e,f;return x(function(g){switch(g.h){case 1:return d={config:a,hashData:b,timestamp:R()},w(g,Ep(c),2);case 2:return e=g.i,w(g,e.clear("hotConfigStore"),3);case 3:return w(g,Jo(e,"hotConfigStore",d),4);case 4:return f=g.i,g.return(f)}})}
function Gp(a,b,c,d){var e,f,g;return x(function(h){switch(h.h){case 1:return e={config:a,hashData:b,configData:c,timestamp:R()},w(h,Ep(d),2);case 2:return f=h.i,w(h,f.clear("coldConfigStore"),3);case 3:return w(h,Jo(f,"coldConfigStore",e),4);case 4:return g=h.i,h.return(g)}})}
function Hp(a){var b,c;return x(function(d){return 1==d.h?w(d,Ep(a),2):3!=d.h?(b=d.i,c=void 0,w(d,Go(b,["coldConfigStore"],{mode:"readwrite",da:!0},function(e){return To(e.objectStore("coldConfigStore").index("coldTimestampIndex"),{direction:"prev"},function(f){c=f.getValue()})}),3)):d.return(c)})}
function Ip(a){var b,c;return x(function(d){return 1==d.h?w(d,Ep(a),2):3!=d.h?(b=d.i,c=void 0,w(d,Go(b,["hotConfigStore"],{mode:"readwrite",da:!0},function(e){return To(e.objectStore("hotConfigStore").index("hotTimestampIndex"),{direction:"prev"},function(f){c=f.getValue()})}),3)):d.return(c)})}
;function Jp(){}
function Kp(a,b,c){var d,e,f;return x(function(g){if(1==g.h){if(!P("update_log_event_config"))return g.A(0);c&&(a.h=c,A("yt.gcf.config.hotConfigGroup",a.h));a.hotHashData=b;A("yt.gcf.config.hotHashData",a.hotHashData);return(d=mp())?c?g.A(4):w(g,Ip(d),5):g.A(0)}4!=g.h&&(e=g.i,c=null==(f=e)?void 0:f.config);return w(g,Fp(c,b,d),0)})}
function Lp(a,b,c){var d,e,f,g;return x(function(h){if(1==h.h){if(!P("update_log_event_config"))return h.A(0);a.coldHashData=b;A("yt.gcf.config.coldHashData",a.coldHashData);return(d=mp())?c?h.A(4):w(h,Hp(d),5):h.A(0)}4!=h.h&&(e=h.i,c=null==(f=e)?void 0:f.config);if(!c)return h.A(0);g=c.configData;return w(h,Gp(c,b,g,d),0)})}
;function Mp(){return"INNERTUBE_API_KEY"in mm&&"INNERTUBE_API_VERSION"in mm}
function Np(){return{innertubeApiKey:M("INNERTUBE_API_KEY"),innertubeApiVersion:M("INNERTUBE_API_VERSION"),Fc:M("INNERTUBE_CONTEXT_CLIENT_CONFIG_INFO"),ud:M("INNERTUBE_CONTEXT_CLIENT_NAME","WEB"),xe:M("INNERTUBE_CONTEXT_CLIENT_NAME",1),innertubeContextClientVersion:M("INNERTUBE_CONTEXT_CLIENT_VERSION"),wd:M("INNERTUBE_CONTEXT_HL"),vd:M("INNERTUBE_CONTEXT_GL"),ye:M("INNERTUBE_HOST_OVERRIDE")||"",Ae:!!M("INNERTUBE_USE_THIRD_PARTY_AUTH",!1),ze:!!M("INNERTUBE_OMIT_API_KEY_WHEN_AUTH_HEADER_IS_PRESENT",
!1),appInstallData:M("SERIALIZED_CLIENT_CONFIG_DATA")}}
function Op(a){var b={client:{hl:a.wd,gl:a.vd,clientName:a.ud,clientVersion:a.innertubeContextClientVersion,configInfo:a.Fc}};navigator.userAgent&&(b.client.userAgent=String(navigator.userAgent));var c=z.devicePixelRatio;c&&1!=c&&(b.client.screenDensityFloat=String(c));c=rm();""!==c&&(b.client.experimentsToken=c);c=sm();0<c.length&&(b.request={internalExperimentFlags:c});Pp(a,void 0,b);P("enable_third_party_info")&&Qp(void 0,b);Rp(void 0,b);Sp(a,void 0,b);Tp(void 0,b);P("start_sending_config_hash")&&
Up(void 0,b);M("DELEGATED_SESSION_ID")&&!P("pageid_as_header_web")&&(b.user={onBehalfOfUser:M("DELEGATED_SESSION_ID")});a=Object;c=a.assign;for(var d=b.client,e={},f=r(Object.entries(Hm(M("DEVICE","")))),g=f.next();!g.done;g=f.next()){var h=r(g.value);g=h.next().value;h=h.next().value;"cbrand"===g?e.deviceMake=h:"cmodel"===g?e.deviceModel=h:"cbr"===g?e.browserName=h:"cbrver"===g?e.browserVersion=h:"cos"===g?e.osName=h:"cosver"===g?e.osVersion=h:"cplatform"===g&&(e.platform=h)}b.client=c.call(a,d,
e);return b}
function Vp(a){var b=new Jk,c=new Ak;F(c,1,a.wd);F(c,2,a.vd);F(c,16,a.xe);F(c,17,a.innertubeContextClientVersion);if(a.Fc){var d=a.Fc,e=new wk;d.coldConfigData&&F(e,1,d.coldConfigData);d.appInstallData&&F(e,6,d.appInstallData);d.coldHashData&&F(e,3,d.coldHashData);d.hotHashData&&F(e,5,d.hotHashData);G(c,wk,62,e)}if((d=z.devicePixelRatio)&&1!=d){if(null!=d&&"number"!==typeof d)throw Error("Value of float field must be a number|null|undefined, found "+typeof d+": "+d);F(c,65,d)}d=rm();""!==d&&F(c,54,
d);d=sm();if(0<d.length){e=new Ck;for(var f=0;f<d.length;f++){var g=new uk;F(g,1,d[f].key);Xd(g,2,vk,d[f].value);ee(e,15,uk,g)}G(b,Ck,5,e)}Pp(a,c);P("enable_third_party_info")&&Qp(b);Rp(c);Sp(a,c);Tp(c);P("start_sending_config_hash")&&Up(c);M("DELEGATED_SESSION_ID")&&!P("pageid_as_header_web")&&(a=new Hk,F(a,3,M("DELEGATED_SESSION_ID")));a=r(Object.entries(Hm(M("DEVICE",""))));for(d=a.next();!d.done;d=a.next())e=r(d.value),d=e.next().value,e=e.next().value,"cbrand"===d?F(c,12,e):"cmodel"===d?F(c,
13,e):"cbr"===d?F(c,87,e):"cbrver"===d?F(c,88,e):"cos"===d?F(c,18,e):"cosver"===d?F(c,19,e):"cplatform"===d&&F(c,42,e);b.i(c);return b}
function Pp(a,b,c){a=a.ud;if("WEB"===a||"MWEB"===a||1===a||2===a)if(b){c=Zd(b,xk,96)||new xk;var d=un();d=Object.keys(Qk).indexOf(d);d=-1===d?null:d;null!==d&&F(c,3,d);G(b,xk,96,c)}else c&&(c.client.mainAppWebInfo=null!=(d=c.client.mainAppWebInfo)?d:{},c.client.mainAppWebInfo.webDisplayMode=un())}
function Qp(a,b){var c=B("yt.embedded_player.embed_url");c&&(a?(b=Zd(a,Ek,7)||new Ek,F(b,4,c),G(a,Ek,7,b)):b&&(b.thirdParty={embedUrl:c}))}
function Rp(a,b){var c;if(P("web_log_memory_total_kbytes")&&(null==(c=z.navigator)?0:c.deviceMemory)){var d;c=null==(d=z.navigator)?void 0:d.deviceMemory;a?F(a,95,1E6*c):b&&(b.client.memoryTotalKbytes=""+1E6*c)}}
function Sp(a,b,c){if(a.appInstallData)if(b){var d;c=null!=(d=Zd(b,wk,62))?d:new wk;F(c,6,a.appInstallData);G(b,wk,62,c)}else c&&(c.client.configInfo=c.client.configInfo||{},c.client.configInfo.appInstallData=a.appInstallData)}
function Tp(a,b){var c=Jn();c&&(a?F(a,61,Fn[c]):b&&(b.client.connectionType=c));P("web_log_effective_connection_type")&&(c=Kn())&&(a?F(a,94,Gn[c]):b&&(b.client.effectiveConnectionType=c))}
function Wp(a,b,c){c=void 0===c?{}:c;var d={};M("EOM_VISITOR_DATA")?d={"X-Goog-EOM-Visitor-Id":M("EOM_VISITOR_DATA")}:d={"X-Goog-Visitor-Id":c.visitorData||M("VISITOR_DATA","")};if(b&&b.includes("www.youtube-nocookie.com"))return d;(b=c.pt||M("AUTHORIZATION"))||(a?b="Bearer "+B("gapi.auth.getToken")().ot:b=Dg([]));b&&(d.Authorization=b,d["X-Goog-AuthUser"]=M("SESSION_INDEX",0),P("pageid_as_header_web")&&(d["X-Goog-PageId"]=M("DELEGATED_SESSION_ID")));return d}
function Up(a,b){Jp.h||(Jp.h=new Jp);var c=B("yt.gcf.config.coldConfigData");var d=B("yt.gcf.config.hotHashData");var e=B("yt.gcf.config.coldHashData");if(c&&e&&d)if(a){var f;b=null!=(f=Zd(a,wk,62))?f:new wk;F(b,1,c);F(b,3,e);F(b,5,d);G(a,wk,62,b)}else b&&(b.client.configInfo=b.client.configInfo||{},b.client.configInfo.coldConfigData=c,b.client.configInfo.coldHashData=e,b.client.configInfo.hotHashData=d)}
;function Xp(a,b,c,d){try{var e=ii(b);var f=f||{};f.we=!0;var g=new nk(f);g.push(e,!0);if(g.err)throw g.msg||oj[g.err];var h=g.result;c.headers||(c.headers={});c.headers["Content-Encoding"]="gzip";c.postBody=h;c.postParams=void 0;d(a,c)}catch(k){Am(k),d(a,c)}}
;function Yp(a){a=Object.assign({},a);delete a.Authorization;var b=Dg();if(b){var c=new ti;c.update(M("INNERTUBE_API_KEY"));c.update(b);a.hash=cd(c.digest(),3)}return a}
;var Zp;function $p(){Zp||(Zp=new Tn("yt.innertube"));return Zp}
function aq(a,b,c,d){if(d)return null;d=$p().get("nextId",!0)||1;var e=$p().get("requests",!0)||{};e[d]={method:a,request:b,authState:Yp(c),requestTime:Math.round(R())};$p().set("nextId",d+1,86400,!0);$p().set("requests",e,86400,!0);return d}
function bq(a){var b=$p().get("requests",!0)||{};delete b[a];$p().set("requests",b,86400,!0)}
function cq(a){var b=$p().get("requests",!0);if(b){for(var c in b){var d=b[c];if(!(6E4>Math.round(R())-d.requestTime)){var e=d.authState,f=Yp(Wp(!1));ub(e,f)&&(e=d.request,"requestTimeMs"in e&&(e.requestTimeMs=Math.round(R())),dq(a,d.method,e,{}));delete b[c]}}$p().set("requests",b,86400,!0)}}
;function eq(a){this.cc=this.h=!1;this.potentialEsfErrorCounter=this.i=0;this.handleError=function(){};
this.rb=function(){};
this.now=Date.now;this.Gb=!1;var b;this.Nd=null!=(b=a.Nd)?b:100;var c;this.Id=null!=(c=a.Id)?c:1;var d;this.Gd=null!=(d=a.Gd)?d:2592E6;var e;this.Ed=null!=(e=a.Ed)?e:12E4;var f;this.Hd=null!=(f=a.Hd)?f:5E3;var g;this.R=null!=(g=a.R)?g:void 0;this.ic=!!a.ic;var h;this.fc=null!=(h=a.fc)?h:.1;var k;this.pc=null!=(k=a.pc)?k:10;a.handleError&&(this.handleError=a.handleError);a.rb&&(this.rb=a.rb);a.Gb&&(this.Gb=a.Gb);a.cc&&(this.cc=a.cc);this.O=a.O;this.xa=a.xa;this.Y=a.Y;this.W=a.W;this.Oa=a.Oa;this.Nc=
a.Nc;this.Mc=a.Mc;fq(this)&&(!this.O||this.O("networkless_logging"))&&gq(this)}
function gq(a){fq(a)&&!a.Gb&&(a.h=!0,a.ic&&Math.random()<=a.fc&&a.Y.ee(a.R),hq(a),a.W.ma()&&a.Qb(),a.W.Ma(a.Nc,a.Qb.bind(a)),a.W.Ma(a.Mc,a.fd.bind(a)))}
l=eq.prototype;l.writeThenSend=function(a,b){var c=this;b=void 0===b?{}:b;if(fq(this)&&this.h){var d={url:a,options:b,timestamp:this.now(),status:"NEW",sendCount:0};this.Y.set(d,this.R).then(function(e){d.id=e;c.W.ma()&&iq(c,d)}).catch(function(e){iq(c,d);
jq(c,e)})}else this.Oa(a,b)};
l.sendThenWrite=function(a,b,c){var d=this;b=void 0===b?{}:b;if(fq(this)&&this.h){var e={url:a,options:b,timestamp:this.now(),status:"NEW",sendCount:0};this.O&&this.O("nwl_skip_retry")&&(e.skipRetry=c);if(this.W.ma()||this.O&&this.O("nwl_aggressive_send_then_write")&&!e.skipRetry){if(!e.skipRetry){var f=b.onError?b.onError:function(){};
b.onError=function(g,h){return x(function(k){if(1==k.h)return w(k,d.Y.set(e,d.R).catch(function(m){jq(d,m)}),2);
f(g,h);k.h=0})}}this.Oa(a,b,e.skipRetry)}else this.Y.set(e,this.R).catch(function(g){d.Oa(a,b,e.skipRetry);
jq(d,g)})}else this.Oa(a,b,this.O&&this.O("nwl_skip_retry")&&c)};
l.sendAndWrite=function(a,b){var c=this;b=void 0===b?{}:b;if(fq(this)&&this.h){var d={url:a,options:b,timestamp:this.now(),status:"NEW",sendCount:0},e=!1,f=b.onSuccess?b.onSuccess:function(){};
d.options.onSuccess=function(g,h){void 0!==d.id?c.Y.qb(d.id,c.R):e=!0;c.W.ib&&c.O&&c.O("vss_network_hint")&&c.W.ib(!0);f(g,h)};
this.Oa(d.url,d.options);this.Y.set(d,this.R).then(function(g){d.id=g;e&&c.Y.qb(d.id,c.R)}).catch(function(g){jq(c,g)})}else this.Oa(a,b)};
l.Qb=function(){var a=this;if(!fq(this))throw so("throttleSend");this.i||(this.i=this.xa.fa(function(){var b;return x(function(c){if(1==c.h)return w(c,a.Y.rd("NEW",a.R),2);if(3!=c.h)return b=c.i,b?w(c,iq(a,b),3):(a.fd(),c.return());a.i&&(a.i=0,a.Qb());c.h=0})},this.Nd))};
l.fd=function(){this.xa.Ca(this.i);this.i=0};
function iq(a,b){var c,d;return x(function(e){switch(e.h){case 1:if(!fq(a))throw c=so("immediateSend"),c;if(void 0===b.id){e.A(2);break}return w(e,a.Y.Ce(b.id,a.R),3);case 3:if(d=e.i){if(a.O&&!a.O("nwl_send_from_memory_when_online")||void 0===a.O)b=d}else a.rb(Error("The request cannot be found in the database."));case 2:if(kq(a,b,a.Gd)){e.A(4);break}a.rb(Error("Networkless Logging: Stored logs request expired age limit"));if(void 0===b.id){e.A(5);break}return w(e,a.Y.qb(b.id,a.R),5);case 5:return e.return();
case 4:b.skipRetry||(b=lq(a,b));if(!b){e.A(0);break}if(!b.skipRetry||void 0===b.id){e.A(8);break}return w(e,a.Y.qb(b.id,a.R),8);case 8:a.Oa(b.url,b.options,!!b.skipRetry),e.h=0}})}
function lq(a,b){if(!fq(a))throw so("updateRequestHandlers");var c=b.options.onError?b.options.onError:function(){};
b.options.onError=function(e,f){var g,h,k,m;return x(function(n){switch(n.h){case 1:g=mq(f);h=nq(f);if(!(a.O&&a.O("nwl_consider_error_code")&&g||a.O&&!a.O("nwl_consider_error_code")&&a.potentialEsfErrorCounter<=a.pc)){n.A(2);break}if(!a.W.tc){n.A(3);break}return w(n,a.W.tc(),3);case 3:if(a.W.ma()){n.A(2);break}c(e,f);if(!a.O||!a.O("nwl_consider_error_code")||void 0===(null==(k=b)?void 0:k.id)){n.A(6);break}return w(n,a.Y.Rc(b.id,a.R,!1),6);case 6:return n.return();case 2:if(a.O&&a.O("nwl_consider_error_code")&&
!g&&a.potentialEsfErrorCounter>a.pc)return n.return();a.potentialEsfErrorCounter++;if(void 0===(null==(m=b)?void 0:m.id)){n.A(8);break}return b.sendCount<a.Id?w(n,a.Y.Rc(b.id,a.R,!0,h?!1:void 0),12):w(n,a.Y.qb(b.id,a.R),8);case 12:a.xa.fa(function(){a.W.ma()&&a.Qb()},a.Hd);
case 8:c(e,f),n.h=0}})};
var d=b.options.onSuccess?b.options.onSuccess:function(){};
b.options.onSuccess=function(e,f){var g;return x(function(h){if(1==h.h)return void 0===(null==(g=b)?void 0:g.id)?h.A(2):w(h,a.Y.qb(b.id,a.R),2);a.W.ib&&a.O&&a.O("vss_network_hint")&&a.W.ib(!0);d(e,f);h.h=0})};
return b}
function kq(a,b,c){b=b.timestamp;return a.now()-b>=c?!1:!0}
function hq(a){if(!fq(a))throw so("retryQueuedRequests");a.Y.rd("QUEUED",a.R).then(function(b){b&&!kq(a,b,a.Ed)?a.xa.fa(function(){return x(function(c){if(1==c.h)return void 0===b.id?c.A(2):w(c,a.Y.Rc(b.id,a.R),2);hq(a);c.h=0})}):a.W.ma()&&a.Qb()})}
function jq(a,b){a.Td&&!a.W.ma()?a.Td(b):a.handleError(b)}
function fq(a){return!!a.R||a.cc}
function mq(a){var b;return(a=null==a?void 0:null==(b=a.error)?void 0:b.code)&&400<=a&&599>=a?!1:!0}
function nq(a){var b;a=null==a?void 0:null==(b=a.error)?void 0:b.code;return!(400!==a&&415!==a)}
;function oq(a,b){this.version=a;this.args=b}
;function pq(a,b){this.topic=a;this.h=b}
pq.prototype.toString=function(){return this.topic};var qq=B("ytPubsub2Pubsub2Instance")||new Ki;Ki.prototype.subscribe=Ki.prototype.subscribe;Ki.prototype.unsubscribeByKey=Ki.prototype.Bb;Ki.prototype.publish=Ki.prototype.cb;Ki.prototype.clear=Ki.prototype.clear;A("ytPubsub2Pubsub2Instance",qq);var rq=B("ytPubsub2Pubsub2SubscribedKeys")||{};A("ytPubsub2Pubsub2SubscribedKeys",rq);var sq=B("ytPubsub2Pubsub2TopicToKeys")||{};A("ytPubsub2Pubsub2TopicToKeys",sq);var tq=B("ytPubsub2Pubsub2IsAsync")||{};A("ytPubsub2Pubsub2IsAsync",tq);
A("ytPubsub2Pubsub2SkipSubKey",null);function uq(a,b){var c=vq();c&&c.publish.call(c,a.toString(),a,b)}
function wq(a){var b=xq,c=vq();if(!c)return 0;var d=c.subscribe(b.toString(),function(e,f){var g=B("ytPubsub2Pubsub2SkipSubKey");g&&g==d||(g=function(){if(rq[d])try{if(f&&b instanceof pq&&b!=e)try{var h=b.h,k=f;if(!k.args||!k.version)throw Error("yt.pubsub2.Data.deserialize(): serializedData is incomplete.");try{if(!h.Xa){var m=new h;h.Xa=m.version}var n=h.Xa}catch(E){}if(!n||k.version!=n)throw Error("yt.pubsub2.Data.deserialize(): serializedData version is incompatible.");try{n=Reflect;var p=n.construct;
var v=k.args,t=v.length;if(0<t){var y=Array(t);for(k=0;k<t;k++)y[k]=v[k];var D=y}else D=[];f=p.call(n,h,D)}catch(E){throw E.message="yt.pubsub2.Data.deserialize(): "+E.message,E;}}catch(E){throw E.message="yt.pubsub2.pubsub2 cross-binary conversion error for "+b.toString()+": "+E.message,E;}a.call(window,f)}catch(E){zm(E)}},tq[b.toString()]?B("yt.scheduler.instance")?ni.fa(g):Qm(g,0):g())});
rq[d]=!0;sq[b.toString()]||(sq[b.toString()]=[]);sq[b.toString()].push(d);return d}
function yq(){var a=zq,b=wq(function(c){a.apply(void 0,arguments);Aq(b)});
return b}
function Aq(a){var b=vq();b&&("number"===typeof a&&(a=[a]),hb(a,function(c){b.unsubscribeByKey(c);delete rq[c]}))}
function vq(){return B("ytPubsub2Pubsub2Instance")}
;var Bq;
function Cq(){if(Bq)return Bq();var a={};Bq=Bp("LogsDatabaseV2",{xb:(a.LogsRequestsStore={Db:2},a),uc:!1,upgrade:function(b,c,d){c(2)&&Ho(b,"LogsRequestsStore",{keyPath:"id",autoIncrement:!0});c(3);c(5)&&(d=d.objectStore("LogsRequestsStore"),d.h.indexNames.contains("newRequest")&&d.h.deleteIndex("newRequest"),Oo(d,"newRequestV2",["status","interface","timestamp"]));c(7)&&b.h.objectStoreNames.contains("sapisid")&&b.h.deleteObjectStore("sapisid");c(9)&&b.h.objectStoreNames.contains("SWHealthLog")&&b.h.deleteObjectStore("SWHealthLog")},
version:9});return Bq()}
;function Dq(a){return $o(Cq(),a)}
function Eq(a,b){var c,d,e,f;return x(function(g){if(1==g.h)return c={startTime:R(),transactionType:"YT_IDB_TRANSACTION_TYPE_WRITE"},w(g,Dq(b),2);if(3!=g.h)return d=g.i,e=Object.assign({},a,{options:JSON.parse(JSON.stringify(a.options)),interface:M("INNERTUBE_CONTEXT_CLIENT_NAME",0)}),w(g,Jo(d,"LogsRequestsStore",e),3);f=g.i;c.gf=R();Fq(c);return g.return(f)})}
function Gq(a,b){var c,d,e,f,g,h,k;return x(function(m){if(1==m.h)return c={startTime:R(),transactionType:"YT_IDB_TRANSACTION_TYPE_READ"},w(m,Dq(b),2);if(3!=m.h)return d=m.i,e=M("INNERTUBE_CONTEXT_CLIENT_NAME",0),f=[a,e,0],g=[a,e,R()],h=IDBKeyRange.bound(f,g),k=void 0,w(m,Go(d,["LogsRequestsStore"],{mode:"readwrite",da:!0},function(n){return To(n.objectStore("LogsRequestsStore").index("newRequestV2"),{query:h,direction:"prev"},function(p){p.getValue()&&(k=p.getValue(),"NEW"===a&&(k.status="QUEUED",
p.update(k)))})}),3);
c.gf=R();Fq(c);return m.return(k)})}
function Hq(a,b){var c;return x(function(d){if(1==d.h)return w(d,Dq(b),2);c=d.i;return d.return(Go(c,["LogsRequestsStore"],{mode:"readwrite",da:!0},function(e){var f=e.objectStore("LogsRequestsStore");return f.get(a).then(function(g){if(g)return g.status="QUEUED",Co(f.h.put(g,void 0)).then(function(){return g})})}))})}
function Iq(a,b,c,d){c=void 0===c?!0:c;var e;return x(function(f){if(1==f.h)return w(f,Dq(b),2);e=f.i;return f.return(Go(e,["LogsRequestsStore"],{mode:"readwrite",da:!0},function(g){var h=g.objectStore("LogsRequestsStore");return h.get(a).then(function(k){return k?(k.status="NEW",c&&(k.sendCount+=1),void 0!==d&&(k.options.compress=d),Co(h.h.put(k,void 0)).then(function(){return k})):wo.resolve(void 0)})}))})}
function Jq(a,b){var c;return x(function(d){if(1==d.h)return w(d,Dq(b),2);c=d.i;return d.return(c.delete("LogsRequestsStore",a))})}
function Kq(a){var b,c;return x(function(d){if(1==d.h)return w(d,Dq(a),2);b=d.i;c=R()-2592E6;return w(d,Go(b,["LogsRequestsStore"],{mode:"readwrite",da:!0},function(e){return Qo(e.objectStore("LogsRequestsStore"),{},function(f){if(f.getValue().timestamp<=c)return f.delete().then(function(){return f.continue()})})}),0)})}
function Lq(){x(function(a){return w(a,xp(),0)})}
function Fq(a){P("nwl_csi_killswitch")||.01>=Math.random()&&uq("nwl_transaction_latency_payload",a)}
;var Zq={},xr=Bp("ServiceWorkerLogsDatabase",{xb:(Zq.SWHealthLog={Db:1},Zq),uc:!0,upgrade:function(a,b){b(1)&&Oo(Ho(a,"SWHealthLog",{keyPath:"id",autoIncrement:!0}),"swHealthNewRequest",["interface","timestamp"])},
version:1});function yr(a){return $o(xr(),a)}
function zr(a){var b,c;x(function(d){if(1==d.h)return w(d,yr(a),2);b=d.i;c=R()-2592E6;return w(d,Go(b,["SWHealthLog"],{mode:"readwrite",da:!0},function(e){return Qo(e.objectStore("SWHealthLog"),{},function(f){if(f.getValue().timestamp<=c)return f.delete().then(function(){return f.continue()})})}),0)})}
function Ar(a){var b;return x(function(c){if(1==c.h)return w(c,yr(a),2);b=c.i;return w(c,b.clear("SWHealthLog"),0)})}
;var Br={},Cr=0;function Dr(a){var b=new Image,c=""+Cr++;Br[c]=b;b.onload=b.onerror=function(){delete Br[c]};
b.src=a}
;function Er(){this.h=new Map;this.i=!1}
function Fr(){if(!Er.h){var a=B("yt.networkRequestMonitor.instance")||new Er;A("yt.networkRequestMonitor.instance",a);Er.h=a}return Er.h}
Er.prototype.requestComplete=function(a,b){b&&(this.i=!0);a=this.removeParams(a);this.h.get(a)||this.h.set(a,b)};
Er.prototype.isEndpointCFR=function(a){a=this.removeParams(a);return(a=this.h.get(a))?!1:!1===a&&this.i?!0:null};
Er.prototype.removeParams=function(a){return a.split("?")[0]};
Er.prototype.removeParams=Er.prototype.removeParams;Er.prototype.isEndpointCFR=Er.prototype.isEndpointCFR;Er.prototype.requestComplete=Er.prototype.requestComplete;Er.getInstance=Fr;var Gr;function Hr(){Gr||(Gr=new Tn("yt.offline"));return Gr}
function Ir(a){if(P("offline_error_handling")){var b=Hr().get("errors",!0)||{};b[a.message]={name:a.name,stack:a.stack};a.level&&(b[a.message].level=a.level);Hr().set("errors",b,2592E3,!0)}}
;function Jr(){af.call(this);var a=this;this.j=!1;this.i=mi();this.i.Ma("networkstatus-online",function(){if(a.j&&P("offline_error_handling")){var b=Hr().get("errors",!0);if(b){for(var c in b)if(b[c]){var d=new Q(c,"sent via offline_errors");d.name=b[c].name;d.stack=b[c].stack;d.level=b[c].level;zm(d)}Hr().set("errors",{},2592E3,!0)}}})}
u(Jr,af);function Kr(){if(!Jr.h){var a=B("yt.networkStatusManager.instance")||new Jr;A("yt.networkStatusManager.instance",a);Jr.h=a}return Jr.h}
l=Jr.prototype;l.ma=function(){return this.i.ma()};
l.ib=function(a){this.i.i=a};
l.se=function(){var a=window.navigator.onLine;return void 0===a?!0:a};
l.ke=function(){this.j=!0};
l.Ma=function(a,b){return this.i.Ma(a,b)};
l.tc=function(a){a=ki(this.i,a);a.then(function(b){P("use_cfr_monitor")&&Fr().requestComplete("generate_204",b)});
return a};
Jr.prototype.sendNetworkCheckRequest=Jr.prototype.tc;Jr.prototype.listen=Jr.prototype.Ma;Jr.prototype.enableErrorFlushing=Jr.prototype.ke;Jr.prototype.getWindowStatus=Jr.prototype.se;Jr.prototype.networkStatusHint=Jr.prototype.ib;Jr.prototype.isNetworkAvailable=Jr.prototype.ma;Jr.getInstance=Kr;function Lr(a){a=void 0===a?{}:a;af.call(this);var b=this;this.i=this.s=0;this.j=Kr();var c=B("yt.networkStatusManager.instance.listen").bind(this.j);c&&(a.sc?(this.sc=a.sc,c("networkstatus-online",function(){Mr(b,"publicytnetworkstatus-online")}),c("networkstatus-offline",function(){Mr(b,"publicytnetworkstatus-offline")})):(c("networkstatus-online",function(){bf(b,"publicytnetworkstatus-online")}),c("networkstatus-offline",function(){bf(b,"publicytnetworkstatus-offline")})))}
u(Lr,af);Lr.prototype.ma=function(){var a=B("yt.networkStatusManager.instance.isNetworkAvailable");return a?a.bind(this.j)():!0};
Lr.prototype.ib=function(a){var b=B("yt.networkStatusManager.instance.networkStatusHint").bind(this.j);b&&b(a)};
Lr.prototype.tc=function(a){var b=this,c;return x(function(d){c=B("yt.networkStatusManager.instance.sendNetworkCheckRequest").bind(b.j);return P("skip_network_check_if_cfr")&&Fr().isEndpointCFR("generate_204")?d.return(new Promise(function(e){var f;b.ib((null==(f=window.navigator)?void 0:f.onLine)||!0);e(b.ma())})):c?d.return(c(a)):d.return(!0)})};
function Mr(a,b){a.sc?a.i?(ni.Ca(a.s),a.s=ni.fa(function(){a.m!==b&&(bf(a,b),a.m=b,a.i=R())},a.sc-(R()-a.i))):(bf(a,b),a.m=b,a.i=R()):bf(a,b)}
;var Nr;function Or(){var a=eq.call;Nr||(Nr=new Lr({Dt:!0,wt:!0}));a.call(eq,this,{Y:{ee:Kq,qb:Jq,rd:Gq,Ce:Hq,Rc:Iq,set:Eq},W:Nr,handleError:zm,rb:Am,Oa:Pr,now:R,Td:Ir,xa:Qn(),Nc:"publicytnetworkstatus-online",Mc:"publicytnetworkstatus-offline",ic:!0,fc:.1,pc:qm("potential_esf_error_limit",10),O:P,Gb:!(Rn()&&Qr())});this.j=new Kh;P("networkless_immediately_drop_all_requests")&&Lq();yp("LogsDatabaseV2")}
u(Or,eq);function Rr(){var a=B("yt.networklessRequestController.instance");a||(a=new Or,A("yt.networklessRequestController.instance",a),P("networkless_logging")&&np().then(function(b){a.R=b;gq(a);a.j.resolve();a.ic&&Math.random()<=a.fc&&a.R&&zr(a.R);P("networkless_immediately_drop_sw_health_store")&&Sr(a)}));
return a}
Or.prototype.writeThenSend=function(a,b){b||(b={});Rn()||(this.h=!1);eq.prototype.writeThenSend.call(this,a,b)};
Or.prototype.sendThenWrite=function(a,b,c){b||(b={});Rn()||(this.h=!1);eq.prototype.sendThenWrite.call(this,a,b,c)};
Or.prototype.sendAndWrite=function(a,b){b||(b={});Rn()||(this.h=!1);eq.prototype.sendAndWrite.call(this,a,b)};
Or.prototype.awaitInitialization=function(){return this.j.promise};
function Sr(a){var b;x(function(c){if(!a.R)throw b=so("clearSWHealthLogsDb"),b;return c.return(Ar(a.R).catch(function(d){a.handleError(d)}))})}
function Pr(a,b,c){P("use_cfr_monitor")&&Tr(a,b);if(P("use_request_time_ms_header"))b.headers&&(b.headers["X-Goog-Request-Time"]=JSON.stringify(Math.round(R())));else{var d;if(null==(d=b.postParams)?0:d.requestTimeMs)b.postParams.requestTimeMs=Math.round(R())}if(c&&0===Object.keys(b).length){var e=void 0===e?"":e;var f=void 0===f?!1:f;if(a)if(e)Zm(a,void 0,"POST",e);else if(M("USE_NET_AJAX_FOR_PING_TRANSPORT",!1))Zm(a,void 0,"GET","",void 0,void 0,f);else{b:{try{var g=new db({url:a});if(g.j&&g.i||
g.l){var h=lc(oc(5,a)),k;if(!(k=!h||!h.endsWith("/aclk"))){var m=a.search(zc),n=yc(a,0,"ri",m);if(0>n)var p=null;else{var v=a.indexOf("&",n);if(0>v||v>m)v=m;p=decodeURIComponent(a.slice(n+3,-1!==v?v:0).replace(/\+/g," "))}k="1"!==p}var t=!k;break b}}catch(D){}t=!1}if(t){b:{try{if(window.navigator&&window.navigator.sendBeacon&&window.navigator.sendBeacon(a,"")){var y=!0;break b}}catch(D){}y=!1}c=y?!0:!1}else c=!1;c||Dr(a)}}else b.compress?b.postBody?("string"!==typeof b.postBody&&(b.postBody=JSON.stringify(b.postBody)),
Xp(a,b.postBody,b,Wm)):Xp(a,JSON.stringify(b.postParams),b,dn):Wm(a,b)}
function Tr(a,b){var c=b.onError?b.onError:function(){};
b.onError=function(e,f){Fr().requestComplete(a,!1);c(e,f)};
var d=b.onSuccess?b.onSuccess:function(){};
b.onSuccess=function(e,f){Fr().requestComplete(a,!0);d(e,f)}}
function Qr(){return"www.youtube-nocookie.com"!==pc(document.location.toString())}
;var Ur=!1,Vr=z.ytNetworklessLoggingInitializationOptions||{isNwlInitialized:Ur};A("ytNetworklessLoggingInitializationOptions",Vr);function Wr(){var a;x(function(b){if(1==b.h)return w(b,np(),2);a=b.i;if(!a||!Rn()&&!P("nwl_init_require_datasync_id_killswitch")||!Qr())return b.A(0);Ur=!0;Vr.isNwlInitialized=Ur;return w(b,Rr().awaitInitialization(),0)})}
;function Xr(a){var b=this;this.config_=null;a?this.config_=a:Mp()&&(this.config_=Np());Mn(function(){cq(b)},5E3)}
Xr.prototype.isReady=function(){!this.config_&&Mp()&&(this.config_=Np());return!!this.config_};
function dq(a,b,c,d){function e(y){y=void 0===y?!1:y;var D;if(d.retry&&"www.youtube-nocookie.com"!=h&&(y||P("skip_ls_gel_retry")||"application/json"!==g.headers["Content-Type"]||(D=aq(b,c,m,k)),D)){var E=g.onSuccess,O=g.onFetchSuccess;g.onSuccess=function(S,aa){bq(D);E(S,aa)};
c.onFetchSuccess=function(S,aa){bq(D);O(S,aa)}}try{if(y&&d.retry&&!d.zd.bypassNetworkless)g.method="POST",d.zd.writeThenSend?Rr().writeThenSend(t,g):Rr().sendAndWrite(t,g);
else if(d.compress)if(g.postBody){var N=g.postBody;"string"!==typeof N&&(N=JSON.stringify(g.postBody));Xp(t,N,g,Wm)}else Xp(t,JSON.stringify(g.postParams),g,dn);else P("web_all_payloads_via_jspb")?Wm(t,g):dn(t,g)}catch(S){if("InvalidAccessError"==S.name)D&&(bq(D),D=0),Am(Error("An extension is blocking network request."));else throw S;}D&&Mn(function(){cq(a)},5E3)}
!M("VISITOR_DATA")&&"visitor_id"!==b&&.01>Math.random()&&Am(new Q("Missing VISITOR_DATA when sending innertube request.",b,c,d));if(!a.isReady()){var f=new Q("innertube xhrclient not ready",b,c,d);zm(f);throw f;}var g={headers:d.headers||{},method:"POST",postParams:c,postBody:d.postBody,postBodyFormat:d.postBodyFormat||"JSON",onTimeout:function(){d.onTimeout()},
onFetchTimeout:d.onTimeout,onSuccess:function(y,D){if(d.onSuccess)d.onSuccess(D)},
onFetchSuccess:function(y){if(d.onSuccess)d.onSuccess(y)},
onError:function(y,D){if(d.onError)d.onError(D)},
onFetchError:function(y){if(d.onError)d.onError(y)},
timeout:d.timeout,withCredentials:!0,compress:d.compress};g.headers["Content-Type"]||(g.headers["Content-Type"]="application/json");var h="";(f=a.config_.ye)&&(h=f);var k=a.config_.Ae||!1,m=Wp(k,h,d);Object.assign(g.headers,m);(f=g.headers.Authorization)&&!h&&(g.headers["x-origin"]=window.location.origin);var n="/youtubei/"+a.config_.innertubeApiVersion+"/"+b,p={alt:"json"},v=a.config_.ze&&f;v=v&&f.startsWith("Bearer");v||(p.key=a.config_.innertubeApiKey);var t=Jm(""+h+n,p||{},!0);(B("ytNetworklessLoggingInitializationOptions")?
Vr.isNwlInitialized:Ur)?lp().then(function(y){e(y)}):e(!1)}
;var Yr=0,Zr=Kc?"webkit":Jc?"moz":Hc?"ms":Gc?"o":"";A("ytDomDomGetNextId",B("ytDomDomGetNextId")||function(){return++Yr});var $r={stopImmediatePropagation:1,stopPropagation:1,preventMouseEvent:1,preventManipulation:1,preventDefault:1,layerX:1,layerY:1,screenX:1,screenY:1,scale:1,rotation:1,webkitMovementX:1,webkitMovementY:1};
function as(a){this.type="";this.state=this.source=this.data=this.currentTarget=this.relatedTarget=this.target=null;this.charCode=this.keyCode=0;this.metaKey=this.shiftKey=this.ctrlKey=this.altKey=!1;this.rotation=this.clientY=this.clientX=0;this.scale=1;this.changedTouches=this.touches=null;try{if(a=a||window.event){this.event=a;for(var b in a)b in $r||(this[b]=a[b]);this.scale=a.scale;this.rotation=a.rotation;var c=a.target||a.srcElement;c&&3==c.nodeType&&(c=c.parentNode);this.target=c;var d=a.relatedTarget;
if(d)try{d=d.nodeName?d:null}catch(e){d=null}else"mouseover"==this.type?d=a.fromElement:"mouseout"==this.type&&(d=a.toElement);this.relatedTarget=d;this.clientX=void 0!=a.clientX?a.clientX:a.pageX;this.clientY=void 0!=a.clientY?a.clientY:a.pageY;this.keyCode=a.keyCode?a.keyCode:a.which;this.charCode=a.charCode||("keypress"==this.type?this.keyCode:0);this.altKey=a.altKey;this.ctrlKey=a.ctrlKey;this.shiftKey=a.shiftKey;this.metaKey=a.metaKey;this.h=a.pageX;this.i=a.pageY}}catch(e){}}
function bs(a){if(document.body&&document.documentElement){var b=document.body.scrollTop+document.documentElement.scrollTop;a.h=a.clientX+(document.body.scrollLeft+document.documentElement.scrollLeft);a.i=a.clientY+b}}
as.prototype.preventDefault=function(){this.event&&(this.event.returnValue=!1,this.event.preventDefault&&this.event.preventDefault())};
as.prototype.stopPropagation=function(){this.event&&(this.event.cancelBubble=!0,this.event.stopPropagation&&this.event.stopPropagation())};
as.prototype.stopImmediatePropagation=function(){this.event&&(this.event.cancelBubble=!0,this.event.stopImmediatePropagation&&this.event.stopImmediatePropagation())};var qb=z.ytEventsEventsListeners||{};A("ytEventsEventsListeners",qb);var cs=z.ytEventsEventsCounter||{count:0};A("ytEventsEventsCounter",cs);
function ds(a,b,c,d){d=void 0===d?{}:d;a.addEventListener&&("mouseenter"!=b||"onmouseenter"in document?"mouseleave"!=b||"onmouseenter"in document?"mousewheel"==b&&"MozBoxSizing"in document.documentElement.style&&(b="MozMousePixelScroll"):b="mouseout":b="mouseover");return pb(function(e){var f="boolean"===typeof e[4]&&e[4]==!!d,g=Sa(e[4])&&Sa(d)&&ub(e[4],d);return!!e.length&&e[0]==a&&e[1]==b&&e[2]==c&&(f||g)})}
var es=fb(function(){var a=!1;try{var b=Object.defineProperty({},"capture",{get:function(){a=!0}});
window.addEventListener("test",null,b)}catch(c){}return a});
function fs(a,b,c,d){d=void 0===d?{}:d;if(!a||!a.addEventListener&&!a.attachEvent)return"";var e=ds(a,b,c,d);if(e)return e;e=++cs.count+"";var f=!("mouseenter"!=b&&"mouseleave"!=b||!a.addEventListener||"onmouseenter"in document);var g=f?function(h){h=new as(h);if(!qf(h.relatedTarget,function(k){return k==a}))return h.currentTarget=a,h.type=b,c.call(a,h)}:function(h){h=new as(h);
h.currentTarget=a;return c.call(a,h)};
g=ym(g);a.addEventListener?("mouseenter"==b&&f?b="mouseover":"mouseleave"==b&&f?b="mouseout":"mousewheel"==b&&"MozBoxSizing"in document.documentElement.style&&(b="MozMousePixelScroll"),es()||"boolean"===typeof d?a.addEventListener(b,g,d):a.addEventListener(b,g,!!d.capture)):a.attachEvent("on"+b,g);qb[e]=[a,b,c,g,d];return e}
function gs(a){a&&("string"==typeof a&&(a=[a]),hb(a,function(b){if(b in qb){var c=qb[b],d=c[0],e=c[1],f=c[3];c=c[4];d.removeEventListener?es()||"boolean"===typeof c?d.removeEventListener(e,f,c):d.removeEventListener(e,f,!!c.capture):d.detachEvent&&d.detachEvent("on"+e,f);delete qb[b]}}))}
;var hs=window.ytcsi&&window.ytcsi.now?window.ytcsi.now:window.performance&&window.performance.timing&&window.performance.now&&window.performance.timing.navigationStart?function(){return window.performance.timing.navigationStart+window.performance.now()}:function(){return(new Date).getTime()};function is(a){this.N=a;this.i=null;this.m=0;this.v=null;this.s=0;this.j=[];for(a=0;4>a;a++)this.j.push(0);this.l=0;this.V=fs(window,"mousemove",Za(this.Z,this));a=Za(this.S,this);"function"===typeof a&&(a=ym(a));this.aa=window.setInterval(a,25)}
ab(is,J);is.prototype.Z=function(a){void 0===a.h&&bs(a);var b=a.h;void 0===a.i&&bs(a);this.i=new mf(b,a.i)};
is.prototype.S=function(){if(this.i){var a=hs();if(0!=this.m){var b=this.v,c=this.i,d=b.x-c.x;b=b.y-c.y;d=Math.sqrt(d*d+b*b)/(a-this.m);this.j[this.l]=.5<Math.abs((d-this.s)/this.s)?1:0;for(c=b=0;4>c;c++)b+=this.j[c]||0;3<=b&&this.N();this.s=d}this.m=a;this.v=this.i;this.l=(this.l+1)%4}};
is.prototype.M=function(){window.clearInterval(this.aa);gs(this.V)};var js={};
function ks(a){var b=void 0===a?{}:a;a=void 0===b.Le?!1:b.Le;b=void 0===b.le?!0:b.le;if(null==B("_lact",window)){var c=parseInt(M("LACT"),10);c=isFinite(c)?Date.now()-Math.max(c,0):-1;A("_lact",c,window);A("_fact",c,window);-1==c&&ls();fs(document,"keydown",ls);fs(document,"keyup",ls);fs(document,"mousedown",ls);fs(document,"mouseup",ls);a?fs(window,"touchmove",function(){ms("touchmove",200)},{passive:!0}):(fs(window,"resize",function(){ms("resize",200)}),b&&fs(window,"scroll",function(){ms("scroll",200)}));
new is(function(){ms("mouse",100)});
fs(document,"touchstart",ls,{passive:!0});fs(document,"touchend",ls,{passive:!0})}}
function ms(a,b){js[a]||(js[a]=!0,ni.fa(function(){ls();js[a]=!1},b))}
function ls(){null==B("_lact",window)&&ks();var a=Date.now();A("_lact",a,window);-1==B("_fact",window)&&A("_fact",a,window);(a=B("ytglobal.ytUtilActivityCallback_"))&&a()}
function ns(){var a=B("_lact",window);return null==a?-1:Math.max(Date.now()-a,0)}
;var os=z.ytPubsubPubsubInstance||new Ki,ps=z.ytPubsubPubsubSubscribedKeys||{},qs=z.ytPubsubPubsubTopicToKeys||{},rs=z.ytPubsubPubsubIsSynchronous||{};function ss(a,b){var c=ts();if(c&&b){var d=c.subscribe(a,function(){var e=arguments;var f=function(){ps[d]&&b.apply&&"function"==typeof b.apply&&b.apply(window,e)};
try{rs[a]?f():Qm(f,0)}catch(g){zm(g)}},void 0);
ps[d]=!0;qs[a]||(qs[a]=[]);qs[a].push(d);return d}return 0}
function us(a){var b=ts();b&&("number"===typeof a?a=[a]:"string"===typeof a&&(a=[parseInt(a,10)]),hb(a,function(c){b.unsubscribeByKey(c);delete ps[c]}))}
function vs(a,b){var c=ts();c&&c.publish.apply(c,arguments)}
function ws(a){var b=ts();if(b)if(b.clear(a),a)xs(a);else for(var c in qs)xs(c)}
function ts(){return z.ytPubsubPubsubInstance}
function xs(a){qs[a]&&(a=qs[a],hb(a,function(b){ps[b]&&delete ps[b]}),a.length=0)}
Ki.prototype.subscribe=Ki.prototype.subscribe;Ki.prototype.unsubscribeByKey=Ki.prototype.Bb;Ki.prototype.publish=Ki.prototype.cb;Ki.prototype.clear=Ki.prototype.clear;A("ytPubsubPubsubInstance",os);A("ytPubsubPubsubTopicToKeys",qs);A("ytPubsubPubsubIsSynchronous",rs);A("ytPubsubPubsubSubscribedKeys",ps);var ys=Symbol("injectionDeps");function zs(a){this.name=a}
zs.prototype.toString=function(){return"InjectionToken("+this.name+")"};
function As(){this.key=Bs}
function Cs(){this.h=new Map;this.i=new Map}
Cs.prototype.resolve=function(a){return a instanceof As?Ds(this,a.key,[],!0):Ds(this,a,[])};
function Ds(a,b,c,d){d=void 0===d?!1:d;if(-1<c.indexOf(b))throw Error("Deps cycle for: "+b);if(a.i.has(b))return a.i.get(b);if(!a.h.has(b)){if(d)return;throw Error("No provider for: "+b);}d=a.h.get(b);c.push(b);if(d.Qd)var e=d.Qd;else if(d.kf)e=d[ys]?Es(a,d[ys],c):[],e=d.kf.apply(d,ja(e));else if(d.Pd){e=d.Pd;var f=e[ys]?Es(a,e[ys],c):[];e=new (Function.prototype.bind.apply(e,[null].concat(ja(f))))}else throw Error("Could not resolve providers for: "+b);c.pop();d.Nt||a.i.set(b,e);return e}
function Es(a,b,c){return b?b.map(function(d){return d instanceof As?Ds(a,d.key,c,!0):Ds(a,d,c)}):[]}
;var Fs;function Gs(){Fs||(Fs=new Cs);return Fs}
;function Hs(){this.store={};this.h={}}
Hs.prototype.storePayload=function(a,b){a=Is(a);this.store[a]?this.store[a].push(b):(this.h={},this.store[a]=[b]);return a};
Hs.prototype.extractMatchingEntries=function(a){a=Js(this,a);for(var b=[],c=0;c<a.length;c++)this.store[a[c]]&&(b.push.apply(b,ja(this.store[a[c]])),delete this.store[a[c]]);return b};
Hs.prototype.getSequenceCount=function(a){a=Js(this,a);for(var b=0,c=0;c<a.length;c++)b+=this.store[a[c]].length||0;return b};
function Js(a,b){var c=Is(b);if(a.h[c])return a.h[c];var d=Object.keys(a.store)||[];if(1>=d.length&&Is(b)===d[0])return d;for(var e=[],f=0;f<d.length;f++){var g=d[f].split("/");if(Ks(b.auth,g[0])){var h=b.isJspb;Ks(void 0===h?"undefined":h?"true":"false",g[1])&&Ks(b.cttAuthInfo,g[2])&&e.push(d[f])}}return a.h[c]=e}
function Ks(a,b){return void 0===a||"undefined"===a?!0:a===b}
Hs.prototype.getSequenceCount=Hs.prototype.getSequenceCount;Hs.prototype.extractMatchingEntries=Hs.prototype.extractMatchingEntries;Hs.prototype.storePayload=Hs.prototype.storePayload;function Is(a){return[void 0===a.auth?"undefined":a.auth,void 0===a.isJspb?"undefined":a.isJspb,void 0===a.cttAuthInfo?"undefined":a.cttAuthInfo].join("/")}
;function Ls(a,b){if(a)return a[b.name]}
;var Ms=qm("initial_gel_batch_timeout",2E3),Ns=qm("gel_queue_timeout_max_ms",6E4),Os=Math.pow(2,16)-1,Ps=void 0;function Qs(){this.j=this.h=this.i=0}
var Rs=new Qs,Ss=new Qs,Ts,Us=!0,Vs=z.ytLoggingTransportGELQueue_||new Map;A("ytLoggingTransportGELQueue_",Vs);var Ws=z.ytLoggingTransportGELProtoQueue_||new Map;A("ytLoggingTransportGELProtoQueue_",Ws);var Xs=z.ytLoggingTransportTokensToCttTargetIds_||{};A("ytLoggingTransportTokensToCttTargetIds_",Xs);var Ys=z.ytLoggingTransportTokensToJspbCttTargetIds_||{};A("ytLoggingTransportTokensToJspbCttTargetIds_",Ys);var Zs={};function $s(){var a=B("yt.logging.ims");a||(a=new Hs,A("yt.logging.ims",a));return a}
function at(a,b){P("web_all_payloads_via_jspb")&&Am(new Q("transport.log called for JSON in JSPB only experiment"));if("log_event"===a.endpoint){bt(a);var c=ct(a);if(P("use_new_in_memory_storage")){Zs[c]=!0;var d={cttAuthInfo:c,isJspb:!1};$s().storePayload(d,a.payload);dt(b,[],c,!1,d)}else d=Vs.get(c)||[],Vs.set(c,d),d.push(a.payload),dt(b,d,c)}}
function et(a,b){if("log_event"===a.endpoint){bt(void 0,a);var c=ct(a,!0);if(P("use_new_in_memory_storage")){Zs[c]=!0;var d={cttAuthInfo:c,isJspb:!0};$s().storePayload(d,a.payload.toJSON());dt(b,[],c,!0,d)}else d=Ws.get(c)||[],Ws.set(c,d),a=a.payload.toJSON(),d.push(a),dt(b,d,c,!0)}}
function dt(a,b,c,d,e){d=void 0===d?!1:d;a&&(Ps=new a);a=qm("tvhtml5_logging_max_batch_ads_fork")||qm("tvhtml5_logging_max_batch")||qm("web_logging_max_batch")||100;var f=R(),g=d?Ss.j:Rs.j;b=b.length;e&&(b=$s().getSequenceCount(e));b>=a?Ts||(Ts=ft(function(){gt({writeThenSend:!0},P("flush_only_full_queue")?c:void 0,d);Ts=void 0},0)):10<=f-g&&(ht(d),d?Ss.j=f:Rs.j=f)}
function jt(a,b){P("web_all_payloads_via_jspb")&&Am(new Q("transport.logIsolatedGelPayload called in JSPB only experiment"));if("log_event"===a.endpoint){bt(a);var c=ct(a),d=new Map;d.set(c,[a.payload]);b&&(Ps=new b);return new Cf(function(e,f){Ps&&Ps.isReady()?kt(d,Ps,e,f,{bypassNetworkless:!0},!0):e()})}}
function lt(a,b){if("log_event"===a.endpoint){bt(void 0,a);var c=ct(a,!0),d=new Map;d.set(c,[a.payload.toJSON()]);b&&(Ps=new b);return new Cf(function(e){Ps&&Ps.isReady()?mt(d,Ps,e,{bypassNetworkless:!0},!0):e()})}}
function ct(a,b){var c="";if(a.dangerousLogToVisitorSession)c="visitorOnlyApprovedKey";else if(a.cttAuthInfo){if(void 0===b?0:b){b=a.cttAuthInfo.token;c=a.cttAuthInfo;var d=new $l;c.videoId?d.setVideoId(c.videoId):c.playlistId&&Xd(d,2,am,c.playlistId);Ys[b]=d}else b=a.cttAuthInfo,c={},b.videoId?c.videoId=b.videoId:b.playlistId&&(c.playlistId=b.playlistId),Xs[a.cttAuthInfo.token]=c;c=a.cttAuthInfo.token}return c}
function gt(a,b,c){a=void 0===a?{}:a;c=void 0===c?!1:c;!c&&P("web_all_payloads_via_jspb")&&Am(new Q("transport.flushLogs called for JSON in JSPB only experiment"));new Cf(function(d,e){c?(nt(Ss.i),nt(Ss.h),Ss.h=0):(nt(Rs.i),nt(Rs.h),Rs.h=0);if(Ps&&Ps.isReady())if(P("use_new_in_memory_storage")){var f=a,g=c,h=Ps;f=void 0===f?{}:f;g=void 0===g?!1:g;var k=new Map,m=new Map;if(void 0!==b)g?(e=$s().extractMatchingEntries({isJspb:g,cttAuthInfo:b}),k.set(b,e),mt(k,h,d,f)):(k=$s().extractMatchingEntries({isJspb:g,
cttAuthInfo:b}),m.set(b,k),kt(m,h,d,e,f));else if(g){e=r(Object.keys(Zs));for(g=e.next();!g.done;g=e.next())m=g.value,g=$s().extractMatchingEntries({isJspb:!0,cttAuthInfo:m}),0<g.length&&k.set(m,g),delete Zs[m];mt(k,h,d,f)}else{k=r(Object.keys(Zs));for(g=k.next();!g.done;g=k.next()){g=g.value;var n=$s().extractMatchingEntries({isJspb:!1,cttAuthInfo:g});0<n.length&&m.set(g,n);delete Zs[g]}kt(m,h,d,e,f)}}else f=a,k=c,h=Ps,f=void 0===f?{}:f,k=void 0===k?!1:k,void 0!==b?k?(e=new Map,k=Ws.get(b)||[],e.set(b,
k),mt(e,h,d,f),Ws.delete(b)):(k=new Map,m=Vs.get(b)||[],k.set(b,m),kt(k,h,d,e,f),Vs.delete(b)):k?(mt(Ws,h,d,f),Ws.clear()):(kt(Vs,h,d,e,f),Vs.clear());else ht(c),d()})}
function ht(a){a=void 0===a?!1:a;if(P("web_gel_timeout_cap")&&(!a&&!Rs.h||a&&!Ss.h)){var b=ft(function(){gt({writeThenSend:!0},void 0,a)},Ns);
a?Ss.h=b:Rs.h=b}nt(a?Ss.i:Rs.i);b=M("LOGGING_BATCH_TIMEOUT",qm("web_gel_debounce_ms",1E4));P("shorten_initial_gel_batch_timeout")&&Us&&(b=Ms);b=ft(function(){gt({writeThenSend:!0},void 0,a)},b);
a?Ss.i=b:Rs.i=b}
function kt(a,b,c,d,e,f){e=void 0===e?{}:e;var g=Math.round(R()),h=a.size,k={};a=r(a);for(var m=a.next();!m.done;k={Tb:k.Tb,ab:k.ab,zb:k.zb,Vb:k.Vb,Ub:k.Ub},m=a.next()){var n=r(m.value);m=n.next().value;n=n.next().value;k.ab=wb({context:Op(b.config_||Np())});if(!Ra(n)&&!P("throw_err_when_logevent_malformed_killswitch")){d();break}k.ab.events=n;(n=Xs[m])&&ot(k.ab,m,n);delete Xs[m];k.zb="visitorOnlyApprovedKey"===m;pt(k.ab,g,k.zb);qt(e);k.Vb=function(p){P("update_log_event_config")&&ni.fa(function(){return x(function(v){return w(v,
rt(p),0)})});
h--;h||c()};
k.Tb=0;k.Ub=function(p){return function(){p.Tb++;if(e.bypassNetworkless&&1===p.Tb)try{dq(b,"log_event",p.ab,st({writeThenSend:!0},p.zb,p.Vb,p.Ub,f)),Us=!1}catch(v){zm(v),d()}h--;h||c()}}(k);
try{dq(b,"log_event",k.ab,st(e,k.zb,k.Vb,k.Ub,f)),Us=!1}catch(p){zm(p),d()}}}
function mt(a,b,c,d,e){d=void 0===d?{}:d;var f=Math.round(R()),g=a.size,h=new Map([].concat(ja(a)));h=r(h);for(var k=h.next();!k.done;k=h.next()){var m=r(k.value).next().value,n=a.get(m);k=new bm;var p=Vp(b.config_||Np());G(k,Jk,1,p);n=n?tt(n):[];n=r(n);for(p=n.next();!p.done;p=n.next())ee(k,3,Wl,p.value);(n=Ys[m])&&ut(k,m,n);delete Ys[m];m="visitorOnlyApprovedKey"===m;vt(k,f,m);qt(d);k=me(k);m=st(d,m,function(v){P("update_log_event_config")&&ni.fa(function(){return x(function(t){return w(t,rt(v),
0)})});
g--;g||c()},function(){g--;
g||c()},e);
m.headers["Content-Type"]="application/json+protobuf";m.postBodyFormat="JSPB";m.postBody=k;dq(b,"log_event","",m);Us=!1}}
function qt(a){P("always_send_and_write")&&(a.writeThenSend=!1)}
function st(a,b,c,d,e){a={retry:!0,onSuccess:c,onError:d,zd:a,dangerousLogToVisitorSession:b,rt:!!e,headers:{},postBodyFormat:"",postBody:"",compress:P("compress_gel")};wt()&&(a.headers["X-Goog-Request-Time"]=JSON.stringify(Math.round(R())));return a}
function pt(a,b,c){wt()||(a.requestTimeMs=String(b));P("unsplit_gel_payloads_in_logs")&&(a.unsplitGelPayloadsInLogs=!0);!c&&(b=M("EVENT_ID"))&&(c=xt(),a.serializedClientEventId={serializedEventId:b,clientCounter:String(c)})}
function vt(a,b,c){wt()||F(a,2,b);if(!c&&(b=M("EVENT_ID"))){c=xt();var d=new Zl;F(d,1,b);F(d,2,c);G(a,Zl,5,d)}}
function xt(){var a=M("BATCH_CLIENT_COUNTER")||0;a||(a=Math.floor(Math.random()*Os/2));a++;a>Os&&(a=1);nm("BATCH_CLIENT_COUNTER",a);return a}
function ot(a,b,c){if(c.videoId)var d="VIDEO";else if(c.playlistId)d="PLAYLIST";else return;a.credentialTransferTokenTargetId=c;a.context=a.context||{};a.context.user=a.context.user||{};a.context.user.credentialTransferTokens=[{token:b,scope:d}]}
function ut(a,b,c){if(fe(c,1===Yd(c,am)?1:-1))var d=1;else if(c.getPlaylistId())d=2;else return;G(a,$l,4,c);a=Zd(a,Jk,1)||new Jk;c=Zd(a,Hk,3)||new Hk;var e=new Gk;F(e,2,b);F(e,1,d);ee(c,12,Gk,e);G(a,Hk,3,c)}
function tt(a){for(var b=[],c=0;c<a.length;c++)try{b.push(new Wl(a[c]))}catch(d){zm(new Q("Transport failed to deserialize "+String(a[c])))}return b}
function bt(a,b){if(B("yt.logging.transport.enableScrapingForTest")){var c=B("yt.logging.transport.scrapedPayloadsForTesting"),d=B("yt.logging.transport.payloadToScrape","");b&&(b=B("yt.logging.transport.getScrapedPayloadFromClientEventsFunction").bind(b.payload)())&&c.push(b);a&&a.payload[d]&&c.push((null==a?void 0:a.payload)[d]);A("yt.logging.transport.scrapedPayloadsForTesting",c)}}
function wt(){return P("use_request_time_ms_header")||P("lr_use_request_time_ms_header")}
function ft(a,b){return P("transport_use_scheduler")?Mn(a,b):Qm(a,b)}
function nt(a){P("transport_use_scheduler")?ni.Ca(a):window.clearTimeout(a)}
function rt(a){var b,c,d,e,f,g,h,k,m,n;return x(function(p){return 1==p.h?(d=null==(b=a)?void 0:null==(c=b.responseContext)?void 0:c.globalConfigGroup,e=Ls(d,sk),g=null==(f=d)?void 0:f.hotHashData,h=Ls(d,rk),m=null==(k=d)?void 0:k.coldHashData,n=Gs().resolve(Jp),g?e?w(p,Kp(n,g,e),2):w(p,Kp(n,g),2):p.A(2)):m?h?w(p,Lp(n,m,h),0):w(p,Lp(n,m),0):p.A(0)})}
;var zt=z.ytLoggingGelSequenceIdObj_||{};A("ytLoggingGelSequenceIdObj_",zt);
function At(a,b,c,d){d=void 0===d?{}:d;var e={},f=Math.round(d.timestamp||R());e.eventTimeMs=f<Number.MAX_SAFE_INTEGER?f:0;e[a]=b;P("enable_unknown_lact_fix_on_html5")&&ks();a=ns();e.context={lastActivityMs:String(d.timestamp||!isFinite(a)?-1:a)};P("log_sequence_info_on_gel_web")&&d.sequenceGroup&&(a=e.context,b=d.sequenceGroup,b={index:Bt(b),groupKey:b},a.sequence=b,d.endOfSequence&&delete zt[d.sequenceGroup]);(d.sendIsolatedPayload?jt:at)({endpoint:"log_event",payload:e,cttAuthInfo:d.cttAuthInfo,
dangerousLogToVisitorSession:d.dangerousLogToVisitorSession},c)}
function Ct(a){gt(void 0,void 0,void 0===a?!1:a)}
function Bt(a){zt[a]=a in zt?zt[a]+1:0;return zt[a]}
;var Dt=[];function bo(a,b,c){c=void 0===c?{}:c;var d=Xr;M("ytLoggingEventsDefaultDisabled",!1)&&Xr===Xr&&(d=null);P("web_all_payloads_via_jspb")?Dt.push({Oc:a,payload:b,options:c}):At(a,b,d,c)}
;var Et=z.ytLoggingGelSequenceIdObj_||{};A("ytLoggingGelSequenceIdObj_",Et);
function Ft(a,b,c){c=void 0===c?{}:c;var d=Math.round(c.timestamp||R());F(a,1,d<Number.MAX_SAFE_INTEGER?d:0);var e=ns();d=new Vl;F(d,1,c.timestamp||!isFinite(e)?-1:e);if(P("log_sequence_info_on_gel_web")&&c.sequenceGroup){e=c.sequenceGroup;var f=Bt(e),g=new Ul;F(g,2,f);F(g,1,e);G(d,Ul,3,g);c.endOfSequence&&delete Et[c.sequenceGroup]}G(a,Vl,33,d);(c.sendIsolatedPayload?lt:et)({endpoint:"log_event",payload:a,cttAuthInfo:c.cttAuthInfo,dangerousLogToVisitorSession:c.dangerousLogToVisitorSession},b)}
;function Gt(a,b){b=void 0===b?{}:b;var c=!1;M("ytLoggingEventsDefaultDisabled",!1)&&(c=!0);Ft(a,c?null:Xr,b)}
;function Ht(a,b,c){var d=new Wl;ce(d,Ll,72,Xl,a);c?Ft(d,c,b):Gt(d,b)}
function It(a,b,c){var d=new Wl;ce(d,Kl,73,Xl,a);c?Ft(d,c,b):Gt(d,b)}
function Jt(a,b,c){var d=new Wl;ce(d,Jl,78,Xl,a);c?Ft(d,c,b):Gt(d,b)}
function Kt(a,b,c){var d=new Wl;ce(d,Ml,208,Xl,a);c?Ft(d,c,b):Gt(d,b)}
function Lt(a,b,c){var d=new Wl;ce(d,Cl,156,Xl,a);c?Ft(d,c,b):Gt(d,b)}
function Mt(a,b,c){var d=new Wl;ce(d,Gl,215,Xl,a);c?Ft(d,c,b):Gt(d,b)}
;var Nt=new Set,Ot=0,Pt=0,Qt=0,Rt=[],St=["PhantomJS","Googlebot","TO STOP THIS SECURITY SCAN go/scan"];function ao(a){Tt(a)}
function Ut(a){Tt(a,"WARNING")}
function Tt(a,b,c,d,e,f){f=void 0===f?{}:f;f.name=c||M("INNERTUBE_CONTEXT_CLIENT_NAME",1);f.version=d||M("INNERTUBE_CONTEXT_CLIENT_VERSION");var g=f||{},h=void 0===b?"ERROR":b;h=void 0===h?"ERROR":h;if(a){a.hasOwnProperty("level")&&a.level&&(h=a.level);if(P("console_log_js_exceptions")){var k=[];k.push("Name: "+a.name);k.push("Message: "+a.message);a.hasOwnProperty("params")&&k.push("Error Params: "+JSON.stringify(a.params));a.hasOwnProperty("args")&&k.push("Error args: "+JSON.stringify(a.args));
k.push("File name: "+a.fileName);k.push("Stacktrace: "+a.stack);window.console.log(k.join("\n"),a)}if(!(5<=Ot)){var m=Rt,n=ze(a),p=n.message||"Unknown Error",v=n.name||"UnknownError",t=n.stack||a.i||"Not available";if(t.startsWith(v+": "+p)){var y=t.split("\n");y.shift();t=y.join("\n")}var D=n.lineNumber||"Not available",E=n.fileName||"Not available",O=t,N=0;if(a.hasOwnProperty("args")&&a.args&&a.args.length)for(var S=0;S<a.args.length&&!(N=qn(a.args[S],"params."+S,g,N),500<=N);S++);else if(a.hasOwnProperty("params")&&
a.params){var aa=a.params;if("object"===typeof a.params)for(var W in aa){if(aa[W]){var xb="params."+W,Ya=sn(aa[W]);g[xb]=Ya;N+=xb.length+Ya.length;if(500<N)break}}else g.params=sn(aa)}if(m.length)for(var ra=0;ra<m.length&&!(N=qn(m[ra],"params.context."+ra,g,N),500<=N);ra++);navigator.vendor&&!g.hasOwnProperty("vendor")&&(g["device.vendor"]=navigator.vendor);var I={message:p,name:v,lineNumber:D,fileName:E,stack:O,params:g,sampleWeight:1},pa=Number(a.columnNumber);isNaN(pa)||(I.lineNumber=I.lineNumber+
":"+pa);if("IGNORED"===a.level)var ha=0;else a:{for(var df=mn(),ef=r(df.Ua),Od=ef.next();!Od.done;Od=ef.next()){var ua=Od.value;if(I.message&&I.message.match(ua.Et)){ha=ua.weight;break a}}for(var Mq=r(df.Qa),Tk=Mq.next();!Tk.done;Tk=Mq.next()){var Nq=Tk.value;if(Nq.callback(I)){ha=Nq.weight;break a}}ha=1}I.sampleWeight=ha;for(var Oq=r(gn),Uk=Oq.next();!Uk.done;Uk=Oq.next()){var Vk=Uk.value;if(Vk.oc[I.name])for(var Pq=r(Vk.oc[I.name]),Wk=Pq.next();!Wk.done;Wk=Pq.next()){var Qq=Wk.value,zh=I.message.match(Qq.regexp);
if(zh){I.params["params.error.original"]=zh[0];for(var Xk=Qq.groups,Rq={},Pd=0;Pd<Xk.length;Pd++)Rq[Xk[Pd]]=zh[Pd+1],I.params["params.error."+Xk[Pd]]=zh[Pd+1];I.message=Vk.Lc(Rq);break}}}I.params||(I.params={});var Sq=mn();I.params["params.errorServiceSignature"]="msg="+Sq.Ua.length+"&cb="+Sq.Qa.length;I.params["params.serviceWorker"]="false";z.document&&z.document.querySelectorAll&&(I.params["params.fscripts"]=String(document.querySelectorAll("script:not([nonce])").length));Eb("sample").constructor!==
Cb&&(I.params["params.fconst"]="true");window.yterr&&"function"===typeof window.yterr&&window.yterr(I);if(0!==I.sampleWeight&&!Nt.has(I.message)){if("ERROR"===h){nn.cb("handleError",I);if(P("record_app_crashed_web")&&0===Qt&&1===I.sampleWeight)if(Qt++,P("errors_via_jspb")){var Yk=new vl;F(Yk,1,1);if(!P("report_client_error_with_app_crash_ks")){var Tq=new ql;F(Tq,1,I.message);var Uq=new rl;G(Uq,ql,3,Tq);var Vq=new sl;G(Vq,rl,5,Uq);var Wq=new tl;G(Wq,sl,9,Vq);G(Yk,tl,4,Wq)}var Xq=new Wl;ce(Xq,vl,20,
Xl,Yk);Gt(Xq)}else{var Yq={appCrashType:"APP_CRASH_TYPE_BREAKPAD"};P("report_client_error_with_app_crash_ks")||(Yq.systemHealth={crashData:{clientError:{logMessage:{message:I.message}}}});bo("appCrashed",Yq)}Pt++}else"WARNING"===h&&nn.cb("handleWarning",I);if(P("kevlar_gel_error_routing"))a:{var ff=h;if(P("errors_via_jspb")){if(Vt())var $q=void 0;else{var Qd=new nl;F(Qd,1,I.stack);I.fileName&&F(Qd,4,I.fileName);var Qb=I.lineNumber&&I.lineNumber.split?I.lineNumber.split(":"):[];0!==Qb.length&&(1!==
Qb.length||isNaN(Number(Qb[0]))?2!==Qb.length||isNaN(Number(Qb[0]))||isNaN(Number(Qb[1]))||(F(Qd,2,Number(Qb[0])),F(Qd,3,Number(Qb[1]))):F(Qd,2,Number(Qb[0])));var Qc=new ql;F(Qc,1,I.message);F(Qc,3,I.name);F(Qc,6,I.sampleWeight);"ERROR"===ff?F(Qc,2,2):"WARNING"===ff?F(Qc,2,1):F(Qc,2,0);var Zk=new ol;F(Zk,1,!0);ce(Zk,nl,3,pl,Qd);var mc=new Rk;F(mc,3,window.location.href);for(var ar=M("FEXP_EXPERIMENTS",[]),$k=0;$k<ar.length;$k++){var Mx=ar[$k];Dd(mc);Wd(mc,5,2,!1,!1).push(Mx)}var al=M("LATEST_ECATCHER_SERVICE_TRACKING_PARAMS");
if(!om()&&al)for(var br=r(Object.keys(al)),Rc=br.next();!Rc.done;Rc=br.next()){var cr=Rc.value,bl=new ml;F(bl,1,cr);F(bl,2,String(al[cr]));ee(mc,4,ml,bl)}var cl=I.params;if(cl){var dr=r(Object.keys(cl));for(Rc=dr.next();!Rc.done;Rc=dr.next()){var er=Rc.value,dl=new ml;F(dl,1,"client."+er);F(dl,2,String(cl[er]));ee(mc,4,ml,dl)}}var fr=M("SERVER_NAME"),gr=M("SERVER_VERSION");if(fr&&gr){var el=new ml;F(el,1,"server.name");F(el,2,fr);ee(mc,4,ml,el);var fl=new ml;F(fl,1,"server.version");F(fl,2,gr);ee(mc,
4,ml,fl)}var Ah=new rl;G(Ah,Rk,1,mc);G(Ah,ol,2,Zk);G(Ah,ql,3,Qc);$q=Ah}var hr=$q;if(!hr)break a;var ir=new Wl;ce(ir,rl,163,Xl,hr);Gt(ir)}else{if(Vt())var jr=void 0;else{var gf={stackTrace:I.stack};I.fileName&&(gf.filename=I.fileName);var Rb=I.lineNumber&&I.lineNumber.split?I.lineNumber.split(":"):[];0!==Rb.length&&(1!==Rb.length||isNaN(Number(Rb[0]))?2!==Rb.length||isNaN(Number(Rb[0]))||isNaN(Number(Rb[1]))||(gf.lineNumber=Number(Rb[0]),gf.columnNumber=Number(Rb[1])):gf.lineNumber=Number(Rb[0]));
var gl={level:"ERROR_LEVEL_UNKNOWN",message:I.message,errorClassName:I.name,sampleWeight:I.sampleWeight};"ERROR"===ff?gl.level="ERROR_LEVEL_ERROR":"WARNING"===ff&&(gl.level="ERROR_LEVEL_WARNNING");var Nx={isObfuscated:!0,browserStackInfo:gf},Rd={pageUrl:window.location.href,kvPairs:[]};M("FEXP_EXPERIMENTS")&&(Rd.experimentIds=M("FEXP_EXPERIMENTS"));var hl=M("LATEST_ECATCHER_SERVICE_TRACKING_PARAMS");if(!om()&&hl)for(var kr=r(Object.keys(hl)),Sc=kr.next();!Sc.done;Sc=kr.next()){var lr=Sc.value;Rd.kvPairs.push({key:lr,
value:String(hl[lr])})}var il=I.params;if(il){var mr=r(Object.keys(il));for(Sc=mr.next();!Sc.done;Sc=mr.next()){var nr=Sc.value;Rd.kvPairs.push({key:"client."+nr,value:String(il[nr])})}}var or=M("SERVER_NAME"),pr=M("SERVER_VERSION");or&&pr&&(Rd.kvPairs.push({key:"server.name",value:or}),Rd.kvPairs.push({key:"server.version",value:pr}));jr={errorMetadata:Rd,stackTrace:Nx,logMessage:gl}}var qr=jr;if(!qr)break a;bo("clientError",qr)}if("ERROR"===ff||P("errors_flush_gel_always_killswitch"))b:{if(P("web_fp_via_jspb")&&
(Ct(!0),!P("web_fp_via_jspb_and_json")))break b;Ct()}}if(!P("suppress_error_204_logging")){var hf=I.params||{},nc={urlParams:{a:"logerror",t:"jserror",type:I.name,msg:I.message.substr(0,250),line:I.lineNumber,level:h,"client.name":hf.name},postParams:{url:M("PAGE_NAME",window.location.href),file:I.fileName},method:"POST"};hf.version&&(nc["client.version"]=hf.version);if(nc.postParams){I.stack&&(nc.postParams.stack=I.stack);for(var rr=r(Object.keys(hf)),jl=rr.next();!jl.done;jl=rr.next()){var sr=jl.value;
nc.postParams["client."+sr]=hf[sr]}var kl=M("LATEST_ECATCHER_SERVICE_TRACKING_PARAMS");if(kl)for(var tr=r(Object.keys(kl)),ll=tr.next();!ll.done;ll=tr.next()){var ur=ll.value;nc.postParams[ur]=kl[ur]}var vr=M("SERVER_NAME"),wr=M("SERVER_VERSION");vr&&wr&&(nc.postParams["server.name"]=vr,nc.postParams["server.version"]=wr)}Wm(M("ECATCHER_REPORT_HOST","")+"/error_204",nc)}try{Nt.add(I.message)}catch(uz){}Ot++}}}}
function Vt(){for(var a=r(St),b=a.next();!b.done;b=a.next())if(fn(b.value.toLowerCase()))return!0;return!1}
function Wt(a){var b=Ka.apply(1,arguments);a.args||(a.args=[]);a.args.push.apply(a.args,ja(b))}
;function Xt(){this.register=new Map}
function Yt(a){a=r(a.register.values());for(var b=a.next();!b.done;b=a.next())b.value.It("ABORTED")}
Xt.prototype.clear=function(){Yt(this);this.register.clear()};
var Zt=new Xt;var $t=Date.now().toString();
function au(){a:{if(window.crypto&&window.crypto.getRandomValues)try{var a=Array(16),b=new Uint8Array(16);window.crypto.getRandomValues(b);for(var c=0;c<a.length;c++)a[c]=b[c];var d=a;break a}catch(e){}d=Array(16);for(a=0;16>a;a++){b=Date.now();for(c=0;c<b%23;c++)d[a]=Math.random();d[a]=Math.floor(256*Math.random())}if($t)for(a=1,b=0;b<$t.length;b++)d[a%16]=d[a%16]^d[(a-1)%16]/4^$t.charCodeAt(b),a++}a=[];for(b=0;b<d.length;b++)a.push("ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789-_".charAt(d[b]&63));
return a.join("")}
;var bu=z.ytLoggingDocDocumentNonce_;bu||(bu=au(),A("ytLoggingDocDocumentNonce_",bu));var cu=bu;var du={Pj:0,hg:1,rg:2,Nn:3,Rj:4,Cs:5,Ho:6,Aq:7,Pp:8,nq:9,0:"DEFAULT",1:"CHAT",2:"CONVERSATIONS",3:"MINIPLAYER",4:"DIALOG",5:"VOZ",6:"MUSIC_WATCH_TABS",7:"SHARE",8:"PUSH_NOTIFICATIONS",9:"RICH_GRID_WATCH"};function eu(a){this.P=a}
function fu(a){return new eu({trackingParams:a})}
eu.prototype.getAsJson=function(){var a={};void 0!==this.P.trackingParams?a.trackingParams=this.P.trackingParams:(a.veType=this.P.veType,void 0!==this.P.veCounter&&(a.veCounter=this.P.veCounter),void 0!==this.P.elementIndex&&(a.elementIndex=this.P.elementIndex));void 0!==this.P.dataElement&&(a.dataElement=this.P.dataElement.getAsJson());void 0!==this.P.youtubeData&&(a.youtubeData=this.P.youtubeData);return a};
eu.prototype.getAsJspb=function(){var a=new xl;if(void 0!==this.P.trackingParams){var b=this.P.trackingParams;if(null!=b)if("string"===typeof b)b=b?new ld(b,id):md();else if(b.constructor!==ld)if(hd(b))b=b.length?new ld(new Uint8Array(b),id):md();else throw Error();F(a,1,b)}else void 0!==this.P.veType&&F(a,2,this.P.veType),void 0!==this.P.veCounter&&F(a,6,this.P.veCounter),void 0!==this.P.elementIndex&&F(a,3,this.P.elementIndex);void 0!==this.P.dataElement&&(b=this.P.dataElement.getAsJspb(),G(a,xl,
7,b));void 0!==this.P.youtubeData&&G(a,tk,8,this.P.jspbYoutubeData);return a};
eu.prototype.toString=function(){return JSON.stringify(this.getAsJson())};
eu.prototype.isClientVe=function(){return!this.P.trackingParams&&!!this.P.veType};function gu(a){a=void 0===a?0:a;return 0===a?"client-screen-nonce":"client-screen-nonce."+a}
function hu(a){a=void 0===a?0:a;return 0===a?"ROOT_VE_TYPE":"ROOT_VE_TYPE."+a}
function iu(a){return M(hu(void 0===a?0:a))}
A("yt_logging_screen.getRootVeType",iu);function ju(a){return(a=iu(void 0===a?0:a))?new eu({veType:a,youtubeData:void 0,jspbYoutubeData:void 0}):null}
function ku(){var a=M("csn-to-ctt-auth-info");a||(a={},nm("csn-to-ctt-auth-info",a));return a}
function lu(a){a=M(gu(void 0===a?0:a));if(!a&&!M("USE_CSN_FALLBACK",!0))return null;a||(a="UNDEFINED_CSN");return a?a:null}
A("yt_logging_screen.getCurrentCsn",lu);function mu(a){for(var b=r(Object.values(du)),c=b.next();!c.done;c=b.next())if(lu(c.value)===a)return!0;return!1}
function nu(a,b,c){var d=ku();(c=lu(c))&&delete d[c];b&&(d[a]=b)}
function ou(a){return ku()[a]}
A("yt_logging_screen.getCttAuthInfo",ou);function pu(a,b,c,d){c=void 0===c?0:c;if(a!==M(gu(c))||b!==M(hu(c)))if(nu(a,d,c),nm(gu(c),a),nm(hu(c),b),b=function(){setTimeout(function(){if(a)if(P("web_time_via_jspb")){var e=new yl;F(e,1,cu);F(e,2,a);var f=new Wl;ce(f,yl,111,Xl,e);Gt(f)}else bo("foregroundHeartbeatScreenAssociated",{clientDocumentNonce:cu,clientScreenNonce:a})},0)},"requestAnimationFrame"in window)try{window.requestAnimationFrame(b)}catch(e){b()}else b()}
A("yt_logging_screen.setCurrentScreen",pu);var qu=window.yt&&window.yt.msgs_||window.ytcfg&&window.ytcfg.msgs||{};A("yt.msgs_",qu);function ru(a){im(qu,arguments)}
;var su={gg:3611,lf:27686,mf:85013,nf:23462,qf:157557,rf:42016,sf:62407,tf:26926,pf:43781,uf:51236,vf:79148,wf:50160,xf:77504,Jf:153587,Kf:87907,Lf:18630,Mf:54445,Nf:80935,Of:152172,Pf:105675,Qf:150723,Rf:37521,Sf:147285,Tf:47786,Uf:98349,Vf:168271,Wf:168954,Xf:168277,Yf:168273,Zf:168270,ag:123695,cg:6827,dg:29434,eg:7282,fg:124448,jg:32276,ig:76278,kg:147868,lg:147869,mg:93911,ng:106531,og:27259,pg:27262,qg:27263,sg:21759,tg:27107,ug:62936,vg:160866,wg:49568,xg:160789,yg:38408,zg:80637,Ag:68727,Bg:68728,
Cg:80353,Dg:80356,Eg:74610,Fg:45707,Gg:83962,Hg:83970,Ig:46713,Jg:166591,Kg:89711,Lg:74612,Mg:155792,Ng:93265,Og:74611,Pg:131380,Rg:128979,Sg:139311,Tg:128978,Qg:131391,Ug:105350,Wg:139312,Xg:134800,Vg:131392,Zg:113533,ah:93252,bh:99357,eh:94521,fh:114252,gh:113532,hh:94522,dh:94583,ih:88E3,jh:139580,kh:93253,lh:93254,mh:94387,nh:94388,oh:93255,ph:97424,Yg:72502,qh:110111,rh:76019,th:117092,uh:117093,sh:89431,vh:110466,wh:77240,xh:60508,yh:148123,zh:148124,Ah:137401,Bh:137402,Ch:137046,Dh:73393,Eh:113534,
Fh:92098,Gh:131381,Hh:84517,Ih:83759,Jh:162711,Kh:162712,Lh:80357,Mh:86113,Nh:72598,Oh:168413,Ph:72733,Qh:107349,Rh:124275,Sh:118203,Th:133275,Uh:160157,Vh:152569,Wh:156651,Xh:133274,Yh:160159,Zh:160158,ai:133272,bi:133273,ci:133276,di:144507,fi:143247,gi:156652,hi:143248,ii:143249,ji:143250,ki:143251,li:156653,mi:144401,oi:117431,ni:133797,ri:153964,si:128572,ti:133405,vi:117429,wi:117430,xi:117432,yi:120080,zi:117259,Ai:156655,Bi:156654,Ci:121692,Di:145656,Ei:156656,Fi:145655,Gi:145653,Hi:145654,
Ii:145657,Ji:132972,Ki:133051,Li:133658,Mi:132971,Ni:97615,Pi:143359,Oi:143356,Ri:143361,Qi:143358,Ti:143360,Si:143357,Ui:142303,Vi:143353,Wi:143354,Xi:144479,Yi:143355,Zi:31402,bj:133624,cj:146477,dj:133623,ej:133622,aj:133621,fj:84774,hj:160801,gj:95117,ij:150497,jj:98930,kj:98931,lj:98932,mj:153320,nj:153321,oj:43347,pj:129889,qj:149123,rj:45474,sj:100352,tj:84758,uj:98443,vj:117985,wj:74613,xj:155911,yj:74614,zj:64502,Aj:136032,Bj:74615,Cj:74616,Dj:122224,Ej:74617,Fj:77820,Gj:74618,Hj:93278,Ij:93274,
Jj:93275,Kj:93276,Lj:22110,Mj:29433,Nj:133798,Oj:132295,Qj:120541,Sj:82047,Tj:113550,Uj:75836,Vj:75837,Wj:42352,Xj:84512,Yj:76065,Zj:75989,ek:51879,fk:16623,gk:32594,hk:27240,ik:32633,jk:74858,kk:156999,mk:3945,lk:16989,nk:45520,pk:25488,qk:25492,rk:25494,sk:55760,tk:14057,uk:18451,vk:57204,wk:57203,xk:17897,yk:57205,zk:18198,Ak:17898,Bk:17909,Ck:43980,Dk:46220,Ek:11721,Fk:147994,Gk:49954,Hk:96369,Ik:3854,Jk:151633,Kk:56251,Lk:159108,Mk:25624,Nk:152036,il:16906,jl:99999,kl:68172,ll:27068,ml:47973,
nl:72773,ol:26970,pl:26971,ql:96805,rl:17752,sl:73233,ul:109512,vl:22256,wl:14115,xl:22696,yl:89278,zl:89277,Al:109513,Bl:43278,Cl:43459,Dl:43464,El:89279,Fl:43717,Gl:55764,Hl:22255,Il:147912,Jl:89281,Kl:40963,Ll:43277,Ml:167701,Nl:43442,Ol:91824,Pl:120137,Ql:96367,Rl:36850,Sl:72694,Tl:37414,Ul:36851,Wl:124863,Vl:121343,Xl:73491,Yl:54473,Zl:166861,am:43375,bm:46674,cm:143815,dm:139095,em:144402,fm:149968,gm:149969,hm:32473,im:72901,jm:72906,km:50947,lm:50612,mm:50613,nm:50942,om:84938,pm:84943,qm:84939,
rm:84941,sm:84944,tm:84940,um:84942,vm:35585,wm:51926,xm:79983,ym:63238,zm:18921,Am:63241,Bm:57893,Cm:41182,Dm:135732,Em:33424,Fm:22207,Gm:42993,Hm:36229,Im:22206,Jm:22205,Km:18993,Lm:19001,Mm:18990,Nm:18991,Om:18997,Pm:18725,Qm:19003,Rm:36874,Sm:44763,Tm:33427,Um:67793,Vm:22182,Wm:37091,Xm:34650,Ym:50617,Zm:47261,an:22287,bn:25144,cn:97917,dn:62397,en:150871,fn:150874,gn:125598,hn:137935,jn:36961,kn:108035,ln:27426,mn:27857,nn:27846,pn:27854,qn:69692,rn:61411,sn:39299,tn:38696,un:62520,vn:36382,
wn:108701,xn:50663,yn:36387,zn:14908,An:37533,Bn:105443,Cn:61635,Dn:62274,En:161670,Fn:133818,Gn:65702,Hn:65703,In:65701,Jn:76256,Kn:166382,Ln:37671,Mn:49953,On:36216,Pn:28237,Qn:39553,Rn:29222,Sn:26107,Tn:38050,Un:26108,Wn:120745,Vn:26109,Xn:26110,Yn:66881,Zn:28236,ao:14586,bo:160598,co:57929,eo:74723,fo:44098,ho:44099,lo:23528,mo:61699,jo:134104,ko:134103,no:59149,oo:101951,po:97346,qo:118051,ro:95102,so:64882,to:119505,uo:63595,vo:63349,wo:95101,xo:75240,yo:27039,zo:68823,Ao:21537,Bo:83464,Co:75707,
Do:170215,Eo:83113,Fo:101952,Go:101953,Io:79610,Jo:125755,Ko:24402,Lo:24400,Mo:32925,Oo:57173,No:156421,Po:122502,Qo:145268,Ro:138480,So:64423,To:64424,Uo:33986,Vo:100828,Wo:129089,Xo:21409,bp:135155,cp:135156,ep:135157,fp:135158,gp:158225,hp:135159,ip:135160,jp:167651,kp:135161,mp:135162,np:135163,lp:158226,qp:158227,rp:135164,sp:135165,tp:135166,Yo:11070,Zo:11074,ap:17880,up:14001,wp:30709,xp:30707,yp:30711,zp:30710,Ap:30708,vp:26984,Bp:146143,Cp:63648,Dp:63649,Ep:111059,Fp:5754,Gp:20445,Hp:151308,
Ip:151152,Lp:130975,Kp:130976,Jp:167637,Mp:110386,Np:113746,Op:66557,Qp:17310,Rp:28631,Sp:21589,Tp:164817,Up:168011,Vp:154946,Wp:68012,Xp:162617,Yp:60480,Zp:138664,aq:141121,bq:164502,cq:31571,fq:141978,gq:150105,hq:150106,iq:150107,jq:150108,kq:76980,lq:41577,mq:45469,oq:38669,pq:13768,qq:13777,rq:141842,sq:62985,tq:4724,uq:59369,wq:43927,xq:43928,yq:12924,zq:100355,Cq:56219,Dq:27669,Eq:10337,Bq:47896,Fq:122629,Hq:139723,Gq:139722,Iq:121258,Jq:107598,Kq:127991,Lq:96639,Mq:107536,Nq:130169,Oq:96661,
Pq:145188,Qq:96658,Rq:116646,Sq:159428,Tq:121122,Uq:96660,Vq:127738,Wq:127083,Xq:155281,Yq:162959,Zq:163566,br:147842,dr:104443,er:96659,fr:147595,gr:106442,hr:162776,ir:134840,jr:63667,kr:63668,lr:63669,mr:130686,pr:147036,qr:78314,rr:147799,sr:148649,tr:55761,ur:127098,vr:134841,wr:96368,xr:67374,yr:48992,zr:146176,Ar:49956,Br:31961,Cr:26388,Dr:23811,Er:5E4,Fr:126250,Gr:96370,Hr:47355,Ir:47356,Jr:37935,Kr:45521,Lr:21760,Mr:83769,Nr:49977,Or:49974,Pr:93497,Qr:93498,Rr:34325,Sr:140759,Tr:115803,Ur:123707,
Vr:100081,Wr:35309,Xr:68314,Yr:25602,Zr:100339,bs:143516,ds:59018,es:18248,gs:50625,hs:9729,ks:37168,ls:37169,ms:21667,ns:16749,qs:18635,rs:39305,ts:18046,us:53969,vs:8213,ws:93926,xs:102852,ys:110099,zs:22678,As:69076,Bs:137575,Ds:139224,Es:100856,Fs:154430,Gs:17736,Hs:3832,Is:147111,Js:55759,Ks:64031,Qs:93044,Rs:93045,Ts:34388,Ss:167841,Us:17657,Vs:17655,Ws:39579,Xs:39578,Ys:77448,Zs:8196,bt:11357,ct:69877,et:8197,ft:168501,gt:156512,ht:161613,jt:156509,kt:161612,lt:161614,mt:82039};function tu(){var a=vb(uu),b;return(new Cf(function(c,d){a.onSuccess=function(e){Pm(e)?c(new vu(e)):d(new wu("Request failed, status="+(e&&"status"in e?e.status:-1),"net.badstatus",e))};
a.onError=function(e){d(new wu("Unknown request error","net.unknown",e))};
a.onTimeout=function(e){d(new wu("Request timed out","net.timeout",e))};
b=Wm("//googleads.g.doubleclick.net/pagead/id",a)})).vc(function(c){c instanceof Jf&&b.abort();
return Hf(c)})}
function wu(a,b,c){cb.call(this,a+", errorCode="+b);this.errorCode=b;this.xhr=c;this.name="PromiseAjaxError"}
u(wu,cb);function vu(a){this.xhr=a}
;function xu(){this.h=0;this.za=null}
xu.prototype.then=function(a,b,c){return 1===this.h&&a?(a=a.call(c,this.za))&&"function"===typeof a.then?a:yu(a):2===this.h&&b?(a=b.call(c,this.za))&&"function"===typeof a.then?a:zu(a):this};
xu.prototype.getValue=function(){return this.za};
xu.prototype.$goog_Thenable=!0;function zu(a){var b=new xu;a=void 0===a?null:a;b.h=2;b.za=void 0===a?null:a;return b}
function yu(a){var b=new xu;a=void 0===a?null:a;b.h=1;b.za=void 0===a?null:a;return b}
;function Au(a,b){var c=void 0===c?{}:c;a={method:void 0===b?"POST":b,mode:Km(a)?"same-origin":"cors",credentials:Km(a)?"same-origin":"include"};b={};for(var d=r(Object.keys(c)),e=d.next();!e.done;e=d.next())e=e.value,c[e]&&(b[e]=c[e]);0<Object.keys(b).length&&(a.headers=b);return a}
;function Bu(){return Bg()||en&&fn("applewebkit")&&!fn("version")&&(!fn("safari")||fn("gsa/"))||Lc&&fn("version/")?!0:M("EOM_VISITOR_DATA")?!1:!0}
;function Cu(a){a:{var b=a.raw_embedded_player_response;if(!b&&(a=a.embedded_player_response))try{b=JSON.parse(a)}catch(d){b="EMBEDDED_PLAYER_MODE_UNKNOWN";break a}if(b)b:{for(var c in Ok)if(Ok[c]==b.embeddedPlayerMode){b=Ok[c];break b}b="EMBEDDED_PLAYER_MODE_UNKNOWN"}else b="EMBEDDED_PLAYER_MODE_UNKNOWN"}return"EMBEDDED_PLAYER_MODE_PFL"===b}
;function Du(a){cb.call(this,a.message||a.description||a.name);this.isMissing=a instanceof Eu;this.isTimeout=a instanceof wu&&"net.timeout"==a.errorCode;this.isCanceled=a instanceof Jf}
u(Du,cb);Du.prototype.name="BiscottiError";function Eu(){cb.call(this,"Biscotti ID is missing from server")}
u(Eu,cb);Eu.prototype.name="BiscottiMissingError";var uu={format:"RAW",method:"GET",timeout:5E3,withCredentials:!0},Fu=null;function Gu(){if(P("disable_biscotti_fetch_entirely_for_all_web_clients"))return Error("Biscotti id fetching has been disabled entirely.");if(!Bu())return Error("User has not consented - not fetching biscotti id.");var a=M("PLAYER_VARS",{});if("1"==tb(a))return Error("Biscotti ID is not available in private embed mode");if(Cu(a))return Error("Biscotti id fetching has been disabled for pfl.")}
function um(){var a=Gu();if(void 0!==a)return Hf(a);Fu||(Fu=tu().then(Hu).vc(function(b){return Iu(2,b)}));
return Fu}
function Hu(a){a=a.xhr.responseText;if(0!=a.lastIndexOf(")]}'",0))throw new Eu;a=JSON.parse(a.substr(4));if(1<(a.type||1))throw new Eu;a=a.id;vm(a);Fu=yu(a);Ju(18E5,2);return a}
function Iu(a,b){b=new Du(b);vm("");Fu=zu(b);0<a&&Ju(12E4,a-1);throw b;}
function Ju(a,b){Qm(function(){tu().then(Hu,function(c){return Iu(b,c)}).vc(eb)},a)}
function Ku(){try{var a=B("yt.ads.biscotti.getId_");return a?a():um()}catch(b){return Hf(b)}}
;function Lu(a){if("1"!=tb(M("PLAYER_VARS",{}))){a&&tm();try{Ku().then(function(){},function(){}),Qm(Lu,18E5)}catch(b){zm(b)}}}
;function Mu(){var a=zn.getInstance(),b=Cn(119),c=1<window.devicePixelRatio;if(document.body&&xi(document.body,"exp-invert-logo"))if(c&&!xi(document.body,"inverted-hdpi")){var d=document.body;if(d.classList)d.classList.add("inverted-hdpi");else if(!xi(d,"inverted-hdpi")){var e=vi(d);wi(d,e+(0<e.length?" inverted-hdpi":"inverted-hdpi"))}}else!c&&xi(document.body,"inverted-hdpi")&&yi();if(b!=c){b="f"+(Math.floor(119/31)+1);d=Dn(b)||0;d=c?d|67108864:d&-67108865;0==d?delete yn[b]:(c=d.toString(16),yn[b]=
c.toString());c=!0;P("web_secure_pref_cookie_killswitch")&&(c=!1);b=a.h;d=[];for(var f in yn)d.push(f+"="+encodeURIComponent(String(yn[f])));vn(b,d.join("&"),63072E3,a.i,c)}}
;function Nu(){this.df=!0}
function Ou(a){var b={},c=Dg([]);c&&(b.Authorization=c,c=a=null==a?void 0:a.sessionIndex,void 0===c&&(c=Number(M("SESSION_INDEX",0)),c=isNaN(c)?0:c),P("voice_search_auth_header_removal")||(b["X-Goog-AuthUser"]=c.toString()),"INNERTUBE_HOST_OVERRIDE"in mm||(b["X-Origin"]=window.location.origin),void 0===a&&"DELEGATED_SESSION_ID"in mm&&(b["X-Goog-PageId"]=M("DELEGATED_SESSION_ID")));return b}
;var Pu={identityType:"UNAUTHENTICATED_IDENTITY_TYPE_UNKNOWN"};var Qu=new Map([["dark","USER_INTERFACE_THEME_DARK"],["light","USER_INTERFACE_THEME_LIGHT"]]);function Ru(){var a=void 0===a?window.location.href:a;if(P("kevlar_disable_theme_param"))return null;lc(oc(5,a));try{var b=Im(a).theme;return Qu.get(b)||null}catch(c){}return null}
;function Su(){this.h={};if(this.i=xn()){var a=zg.get("CONSISTENCY",void 0);a&&Tu(this,{encryptedTokenJarContents:a})}}
Su.prototype.handleResponse=function(a,b){if(!b)throw Error("request needs to be passed into ConsistencyService");var c,d;b=(null==(c=b.La.context)?void 0:null==(d=c.request)?void 0:d.consistencyTokenJars)||[];var e;if(a=null==(e=a.responseContext)?void 0:e.consistencyTokenJar){e=r(b);for(c=e.next();!c.done;c=e.next())delete this.h[c.value.encryptedTokenJarContents];Tu(this,a)}};
function Tu(a,b){if(b.encryptedTokenJarContents&&(a.h[b.encryptedTokenJarContents]=b,"string"===typeof b.expirationSeconds)){var c=Number(b.expirationSeconds);setTimeout(function(){delete a.h[b.encryptedTokenJarContents]},1E3*c);
a.i&&vn("CONSISTENCY",b.encryptedTokenJarContents,c,void 0,!0)}}
;var Uu=window.location.hostname.split(".").slice(-2).join(".");function Vu(){var a=M("LOCATION_PLAYABILITY_TOKEN");"TVHTML5"===M("INNERTUBE_CLIENT_NAME")&&(this.h=Wu(this))&&(a=this.h.get("yt-location-playability-token"));a&&(this.locationPlayabilityToken=a,this.i=void 0)}
var Xu;Vu.getInstance=function(){Xu=B("yt.clientLocationService.instance");Xu||(Xu=new Vu,A("yt.clientLocationService.instance",Xu));return Xu};
l=Vu.prototype;l.setLocationOnInnerTubeContext=function(a){a.client||(a.client={});this.i?(a.client.locationInfo||(a.client.locationInfo={}),a.client.locationInfo.latitudeE7=Math.floor(1E7*this.i.coords.latitude),a.client.locationInfo.longitudeE7=Math.floor(1E7*this.i.coords.longitude),a.client.locationInfo.horizontalAccuracyMeters=Math.round(this.i.coords.accuracy),a.client.locationInfo.forceLocationPlayabilityTokenRefresh=!0):this.locationPlayabilityToken&&(a.client.locationPlayabilityToken=this.locationPlayabilityToken)};
l.handleResponse=function(a){var b;a=null==(b=a.responseContext)?void 0:b.locationPlayabilityToken;void 0!==a&&(this.locationPlayabilityToken=a,this.i=void 0,"TVHTML5"===M("INNERTUBE_CLIENT_NAME")?(this.h=Wu(this))&&this.h.set("yt-location-playability-token",a,15552E3):vn("YT_CL",JSON.stringify({loctok:a}),15552E3,Uu,!0))};
function Wu(a){return void 0===a.h?new Tn("yt-client-location"):a.h}
l.clearLocationPlayabilityToken=function(a){"TVHTML5"===a?(this.h=Wu(this))&&this.h.remove("yt-location-playability-token"):wn("YT_CL")};
l.getCurrentPositionFromGeolocation=function(){var a=this;if(!(navigator&&navigator.geolocation&&navigator.geolocation.getCurrentPosition))return Promise.reject(Error("Geolocation unsupported"));var b=!1,c=1E4;"MWEB"===M("INNERTUBE_CLIENT_NAME")&&(b=!0,c=15E3);return new Promise(function(d,e){navigator.geolocation.getCurrentPosition(function(f){a.i=f;d(f)},function(f){e(f)},{enableHighAccuracy:b,
maximumAge:0,timeout:c})})};
l.createUnpluggedLocationInfo=function(a){var b={};a=a.coords;if(null==a?0:a.latitude)b.latitudeE7=Math.floor(1E7*a.latitude);if(null==a?0:a.longitude)b.longitudeE7=Math.floor(1E7*a.longitude);if(null==a?0:a.accuracy)b.locationRadiusMeters=Math.round(a.accuracy);return b};function Yu(a,b){var c,d=null==(c=Ls(a,Nk))?void 0:c.signal;if(d&&b.Pb&&(c=b.Pb[d]))return c();var e;if((c=null==(e=Ls(a,Lk))?void 0:e.request)&&b.he&&(e=b.he[c]))return e();for(var f in a)if(b.jd[f]&&(a=b.jd[f]))return a()}
;function Zu(a){return function(){return new a}}
;var $u={},av=($u.WEB_UNPLUGGED="^unplugged/",$u.WEB_UNPLUGGED_ONBOARDING="^unplugged/",$u.WEB_UNPLUGGED_OPS="^unplugged/",$u.WEB_UNPLUGGED_PUBLIC="^unplugged/",$u.WEB_CREATOR="^creator/",$u.WEB_KIDS="^kids/",$u.WEB_EXPERIMENTS="^experiments/",$u.WEB_MUSIC="^music/",$u.WEB_REMIX="^music/",$u.WEB_MUSIC_EMBEDDED_PLAYER="^music/",$u.WEB_MUSIC_EMBEDDED_PLAYER="^main_app/|^sfv/",$u);
function bv(a){var b=void 0===b?"UNKNOWN_INTERFACE":b;if(1===a.length)return a[0];var c=av[b];if(c){var d=new RegExp(c),e=r(a);for(c=e.next();!c.done;c=e.next())if(c=c.value,d.exec(c))return c}var f=[];Object.entries(av).forEach(function(g){var h=r(g);g=h.next().value;h=h.next().value;b!==g&&f.push(h)});
d=new RegExp(f.join("|"));a.sort(function(g,h){return g.length-h.length});
e=r(a);for(c=e.next();!c.done;c=e.next())if(c=c.value,!d.exec(c))return c;return a[0]}
;function cv(){}
cv.prototype.m=function(a,b,c){b=void 0===b?{}:b;c=void 0===c?Pu:c;var d=a.clickTrackingParams,e=this.l,f=!1;f=void 0===f?!1:f;e=void 0===e?!1:e;var g=M("INNERTUBE_CONTEXT");if(g){g=wb(g);P("web_no_tracking_params_in_shell_killswitch")||delete g.clickTracking;g.client||(g.client={});var h=g.client;"MWEB"===h.clientName&&(h.clientFormFactor=M("IS_TABLET")?"LARGE_FORM_FACTOR":"SMALL_FORM_FACTOR");h.screenWidthPoints=window.innerWidth;h.screenHeightPoints=window.innerHeight;h.screenPixelDensity=Math.round(window.devicePixelRatio||
1);h.screenDensityFloat=window.devicePixelRatio||1;h.utcOffsetMinutes=-Math.floor((new Date).getTimezoneOffset());var k=void 0===k?!1:k;zn.getInstance();var m="USER_INTERFACE_THEME_LIGHT";Cn(165)?m="USER_INTERFACE_THEME_DARK":Cn(174)?m="USER_INTERFACE_THEME_LIGHT":!P("kevlar_legacy_browsers")&&window.matchMedia&&window.matchMedia("(prefers-color-scheme)").matches&&window.matchMedia("(prefers-color-scheme: dark)").matches&&(m="USER_INTERFACE_THEME_DARK");k=k?m:Ru()||m;h.userInterfaceTheme=k;if(!f){if(k=
Jn())h.connectionType=k;P("web_log_effective_connection_type")&&(k=Kn())&&(g.client.effectiveConnectionType=k)}var n;if(P("web_log_memory_total_kbytes")&&(null==(n=z.navigator)?0:n.deviceMemory)){var p;n=null==(p=z.navigator)?void 0:p.deviceMemory;g.client.memoryTotalKbytes=""+1E6*n}p=Im(z.location.href);!P("web_populate_internal_geo_killswitch")&&p.internalcountrycode&&(h.internalGeo=p.internalcountrycode);"MWEB"===h.clientName||"WEB"===h.clientName?(h.mainAppWebInfo={graftUrl:z.location.href},P("kevlar_woffle")&&
tn.h&&(p=tn.h,h.mainAppWebInfo.pwaInstallabilityStatus=!p.h&&p.i?"PWA_INSTALLABILITY_STATUS_CAN_BE_INSTALLED":"PWA_INSTALLABILITY_STATUS_UNKNOWN"),h.mainAppWebInfo.webDisplayMode=un(),h.mainAppWebInfo.isWebNativeShareAvailable=navigator&&void 0!==navigator.share):"TVHTML5"===h.clientName&&(!P("web_lr_app_quality_killswitch")&&(p=M("LIVING_ROOM_APP_QUALITY"))&&(h.tvAppInfo=Object.assign(h.tvAppInfo||{},{appQuality:p})),p=M("LIVING_ROOM_CERTIFICATION_SCOPE"))&&(h.tvAppInfo=Object.assign(h.tvAppInfo||
{},{certificationScope:p}));if(!P("web_populate_time_zone_itc_killswitch")){b:{if("undefined"!==typeof Intl)try{var v=(new Intl.DateTimeFormat).resolvedOptions().timeZone;break b}catch(xb){}v=void 0}v&&(h.timeZone=v)}(v=rm())?h.experimentsToken=v:delete h.experimentsToken;v=sm();Su.h||(Su.h=new Su);h=Su.h.h;p=[];n=0;for(var t in h)p[n++]=h[t];g.request=Object.assign({},g.request,{internalExperimentFlags:v,consistencyTokenJars:p});!P("web_prequest_context_killswitch")&&(t=M("INNERTUBE_CONTEXT_PREQUEST_CONTEXT"))&&
(g.request.externalPrequestContext=t);v=zn.getInstance();t=Cn(58);v=v.get("gsml","");g.user=Object.assign({},g.user);t&&(g.user.enableSafetyMode=t);v&&(g.user.lockedSafetyMode=!0);P("warm_op_csn_cleanup")?e&&(f=lu())&&(g.clientScreenNonce=f):!f&&(f=lu())&&(g.clientScreenNonce=f);d&&(g.clickTracking={clickTrackingParams:d});if(d=B("yt.mdx.remote.remoteClient_"))g.remoteClient=d;Vu.getInstance().setLocationOnInnerTubeContext(g);try{var y=Lm(),D=y.bid;delete y.bid;g.adSignalsInfo={params:[],bid:D};var E=
r(Object.entries(y));for(var O=E.next();!O.done;O=E.next()){var N=r(O.value),S=N.next().value,aa=N.next().value;y=S;D=aa;d=void 0;null==(d=g.adSignalsInfo.params)||d.push({key:y,value:""+D})}}catch(xb){Tt(xb)}E=g}else Tt(Error("Error: No InnerTubeContext shell provided in ytconfig.")),E={};E={context:E};if(O=this.h(a)){this.i(E,O,b);var W;b="/youtubei/v1/"+bv(this.j());(O=null==(W=Ls(a.commandMetadata,Mk))?void 0:W.apiUrl)&&(b=O);W=b;(b=M("INNERTUBE_HOST_OVERRIDE"))&&(W=String(b)+String(qc(W)));b=
{};b.key=M("INNERTUBE_API_KEY");P("json_condensed_response")&&(b.prettyPrint="false");W=Jm(W,b||{},!1);a=Object.assign({},{command:a},void 0);a={input:W,kb:Au(W),La:E,config:a};a.config.ac?a.config.ac.identity=c:a.config.ac={identity:c};return a}Tt(new Q("Error: Failed to create Request from Command.",a))};
ea.Object.defineProperties(cv.prototype,{l:{configurable:!0,enumerable:!0,get:function(){return!1}}});function dv(){}
u(dv,cv);dv.prototype.m=function(){return{input:"/getDatasyncIdsEndpoint",kb:Au("/getDatasyncIdsEndpoint","GET"),La:{}}};
dv.prototype.j=function(){return[]};
dv.prototype.h=function(){};
dv.prototype.i=function(){};var ev={},fv=(ev.GET_DATASYNC_IDS=Zu(dv),ev);function gv(a){var b=Ka.apply(1,arguments);if(!hv(a)||b.some(function(d){return!hv(d)}))throw Error("Only objects may be merged.");
b=r(b);for(var c=b.next();!c.done;c=b.next())iv(a,c.value);return a}
function iv(a,b){for(var c in b)if(hv(b[c])){if(c in a&&!hv(a[c]))throw Error("Cannot merge an object into a non-object.");c in a||(a[c]={});iv(a[c],b[c])}else if(jv(b[c])){if(c in a&&!jv(a[c]))throw Error("Cannot merge an array into a non-array.");c in a||(a[c]=[]);kv(a[c],b[c])}else a[c]=b[c];return a}
function kv(a,b){b=r(b);for(var c=b.next();!c.done;c=b.next())c=c.value,hv(c)?a.push(iv({},c)):jv(c)?a.push(kv([],c)):a.push(c);return a}
function hv(a){return"object"===typeof a&&!Array.isArray(a)}
function jv(a){return"object"===typeof a&&Array.isArray(a)}
;function lv(a,b){oq.call(this,1,arguments);this.timer=b}
u(lv,oq);var mv=new pq("aft-recorded",lv);var nv=window;function ov(){this.timing={};this.clearResourceTimings=function(){};
this.webkitClearResourceTimings=function(){};
this.mozClearResourceTimings=function(){};
this.msClearResourceTimings=function(){};
this.oClearResourceTimings=function(){}}
var T=nv.performance||nv.mozPerformance||nv.msPerformance||nv.webkitPerformance||new ov;var pv=!1,qv={'script[name="scheduler/scheduler"]':"sj",'script[name="player/base"]':"pj",'link[rel="stylesheet"][name="www-player"]':"pc",'link[rel="stylesheet"][name="player/www-player"]':"pc",'script[name="desktop_polymer/desktop_polymer"]':"dpj",'link[rel="import"][name="desktop_polymer"]':"dph",'script[name="mobile-c3"]':"mcj",'link[rel="stylesheet"][name="mobile-c3"]':"mcc",'script[name="player-plasma-ias-phone/base"]':"mcppj",'script[name="player-plasma-ias-tablet/base"]':"mcptj",'link[rel="stylesheet"][name="mobile-polymer-player-ias"]':"mcpc",
'link[rel="stylesheet"][name="mobile-polymer-player-svg-ias"]':"mcpsc",'script[name="mobile_blazer_core_mod"]':"mbcj",'link[rel="stylesheet"][name="mobile_blazer_css"]':"mbc",'script[name="mobile_blazer_logged_in_users_mod"]':"mbliuj",'script[name="mobile_blazer_logged_out_users_mod"]':"mblouj",'script[name="mobile_blazer_noncore_mod"]':"mbnj","#player_css":"mbpc",'script[name="mobile_blazer_desktopplayer_mod"]':"mbpj",'link[rel="stylesheet"][name="mobile_blazer_tablet_css"]':"mbtc",'script[name="mobile_blazer_watch_mod"]':"mbwj"};
Za(T.clearResourceTimings||T.webkitClearResourceTimings||T.mozClearResourceTimings||T.msClearResourceTimings||T.oClearResourceTimings||eb,T);function rv(a){var b=sv("aft",a);if(b)return b;b=M((a||"")+"TIMING_AFT_KEYS",["ol"]);for(var c=b.length,d=0;d<c;d++){var e=sv(b[d],a);if(e)return e}return NaN}
function tv(){var a;if(P("csi_use_performance_navigation_timing")||P("csi_use_performance_navigation_timing_tvhtml5")){var b,c,d,e=null==T?void 0:null==(a=T.getEntriesByType)?void 0:null==(b=a.call(T,"navigation"))?void 0:null==(c=b[0])?void 0:null==(d=c.toJSON)?void 0:d.call(c);e?(e.requestStart=uv(e.requestStart),e.responseEnd=uv(e.responseEnd),e.redirectStart=uv(e.redirectStart),e.redirectEnd=uv(e.redirectEnd),e.domainLookupEnd=uv(e.domainLookupEnd),e.connectStart=uv(e.connectStart),e.connectEnd=
uv(e.connectEnd),e.responseStart=uv(e.responseStart),e.secureConnectionStart=uv(e.secureConnectionStart),e.domainLookupStart=uv(e.domainLookupStart),e.isPerformanceNavigationTiming=!0,a=e):a=T.timing}else a=T.timing;return a}
function vv(){return(P("csi_use_time_origin")||P("csi_use_time_origin_tvhtml5"))&&T.timeOrigin?Math.floor(T.timeOrigin):T.timing.navigationStart}
function uv(a){return Math.round(vv()+a)}
function wv(a){var b;(b=B("ytcsi."+(a||"")+"data_"))||(b={tick:{},info:{}},A("ytcsi."+(a||"")+"data_",b));return b}
function xv(a){a=wv(a);a.info||(a.info={});return a.info}
function yv(a){a=wv(a);a.metadata||(a.metadata={});return a.metadata}
function zv(a){a=wv(a);a.tick||(a.tick={});return a.tick}
function sv(a,b){if(a=zv(b)[a])return"number"===typeof a?a:a[a.length-1]}
function Av(a){a=wv(a);if(a.gel){var b=a.gel;b.gelInfos||(b.gelInfos={});b.gelTicks||(b.gelTicks={})}else a.gel={gelTicks:{},gelInfos:{}};return a.gel}
function Bv(a){a=Av(a);a.gelInfos||(a.gelInfos={});return a.gelInfos}
function Cv(a){var b=wv(a).nonce;b||(b=au(),wv(a).nonce=b);return b}
function Dv(a){var b=sv("_start",a),c=rv(a);b&&c&&!pv&&(uq(mv,new lv(Math.round(c-b),a)),pv=!0)}
function Ev(a,b){for(var c=r(Object.keys(b)),d=c.next();!d.done;d=c.next())if(d=d.value,!Object.keys(a).includes(d)||"object"===typeof b[d]&&!Ev(a[d],b[d]))return!1;return!0}
function Fv(){if(T.getEntriesByType){var a=T.getEntriesByType("paint");if(a=lb(a,function(b){return"first-paint"===b.name}))return uv(a.startTime)}a=T.timing;
return a.He?Math.max(0,a.He):0}
;function Gv(){var a=B("ytcsi.debug");a||(a=[],A("ytcsi.debug",a),A("ytcsi.reference",{}));return a}
function Hv(a){a=a||"";var b=B("ytcsi.reference");b||(Gv(),b=B("ytcsi.reference"));if(b[a])return b[a];var c=Gv(),d={timerName:a,info:{},tick:{},span:{},jspbInfo:[]};c.push(d);return b[a]=d}
;var U={},Iv=(U.auto_search="LATENCY_ACTION_AUTO_SEARCH",U.ad_to_ad="LATENCY_ACTION_AD_TO_AD",U.ad_to_video="LATENCY_ACTION_AD_TO_VIDEO",U["analytics.explore"]="LATENCY_ACTION_CREATOR_ANALYTICS_EXPLORE",U.app_startup="LATENCY_ACTION_APP_STARTUP",U["artist.analytics"]="LATENCY_ACTION_CREATOR_ARTIST_ANALYTICS",U["artist.events"]="LATENCY_ACTION_CREATOR_ARTIST_CONCERTS",U["artist.presskit"]="LATENCY_ACTION_CREATOR_ARTIST_PROFILE",U["song.analytics"]="LATENCY_ACTION_CREATOR_SONG_ANALYTICS",U.browse="LATENCY_ACTION_BROWSE",
U.cast_splash="LATENCY_ACTION_CAST_SPLASH",U.channels="LATENCY_ACTION_CHANNELS",U.creator_channel_dashboard="LATENCY_ACTION_CREATOR_CHANNEL_DASHBOARD",U["channel.analytics"]="LATENCY_ACTION_CREATOR_CHANNEL_ANALYTICS",U["channel.comments"]="LATENCY_ACTION_CREATOR_CHANNEL_COMMENTS",U["channel.content"]="LATENCY_ACTION_CREATOR_POST_LIST",U["channel.content.promotions"]="LATENCY_ACTION_CREATOR_PROMOTION_LIST",U["channel.copyright"]="LATENCY_ACTION_CREATOR_CHANNEL_COPYRIGHT",U["channel.editing"]="LATENCY_ACTION_CREATOR_CHANNEL_EDITING",
U["channel.monetization"]="LATENCY_ACTION_CREATOR_CHANNEL_MONETIZATION",U["channel.music"]="LATENCY_ACTION_CREATOR_CHANNEL_MUSIC",U["channel.music_storefront"]="LATENCY_ACTION_CREATOR_CHANNEL_MUSIC_STOREFRONT",U["channel.playlists"]="LATENCY_ACTION_CREATOR_CHANNEL_PLAYLISTS",U["channel.translations"]="LATENCY_ACTION_CREATOR_CHANNEL_TRANSLATIONS",U["channel.videos"]="LATENCY_ACTION_CREATOR_CHANNEL_VIDEOS",U["channel.live_streaming"]="LATENCY_ACTION_CREATOR_LIVE_STREAMING",U.chips="LATENCY_ACTION_CHIPS",
U["dialog.copyright_strikes"]="LATENCY_ACTION_CREATOR_DIALOG_COPYRIGHT_STRIKES",U["dialog.video_copyright"]="LATENCY_ACTION_CREATOR_DIALOG_VIDEO_COPYRIGHT",U["dialog.uploads"]="LATENCY_ACTION_CREATOR_DIALOG_UPLOADS",U.direct_playback="LATENCY_ACTION_DIRECT_PLAYBACK",U.embed="LATENCY_ACTION_EMBED",U.entity_key_serialization_perf="LATENCY_ACTION_ENTITY_KEY_SERIALIZATION_PERF",U.entity_key_deserialization_perf="LATENCY_ACTION_ENTITY_KEY_DESERIALIZATION_PERF",U.explore="LATENCY_ACTION_EXPLORE",U.home=
"LATENCY_ACTION_HOME",U.library="LATENCY_ACTION_LIBRARY",U.live="LATENCY_ACTION_LIVE",U.live_pagination="LATENCY_ACTION_LIVE_PAGINATION",U.onboarding="LATENCY_ACTION_ONBOARDING",U.owner="LATENCY_ACTION_CREATOR_CMS_DASHBOARD",U["owner.analytics"]="LATENCY_ACTION_CREATOR_CMS_ANALYTICS",U["owner.assets"]="LATENCY_ACTION_CREATOR_CMS_ASSETS",U["owner.channels"]="LATENCY_ACTION_CREATOR_CMS_CHANNELS",U["owner.claimed_videos"]="LATENCY_ACTION_CREATOR_CMS_CLAIMED_VIDEOS",U["owner.claims"]="LATENCY_ACTION_CREATOR_CMS_MANUAL_CLAIMING",
U["owner.claims.manual"]="LATENCY_ACTION_CREATOR_CMS_MANUAL_CLAIMING",U["owner.delivery"]="LATENCY_ACTION_CREATOR_CMS_CONTENT_DELIVERY",U["owner.issues"]="LATENCY_ACTION_CREATOR_CMS_ISSUES",U["owner.reports"]="LATENCY_ACTION_CREATOR_CMS_REPORTS",U["owner.videos"]="LATENCY_ACTION_CREATOR_CMS_VIDEOS",U.parent_profile_settings="LATENCY_ACTION_KIDS_PARENT_PROFILE_SETTINGS",U.parent_tools_collection="LATENCY_ACTION_PARENT_TOOLS_COLLECTION",U.parent_tools_dashboard="LATENCY_ACTION_PARENT_TOOLS_DASHBOARD",
U.player_att="LATENCY_ACTION_PLAYER_ATTESTATION",U["post.comments"]="LATENCY_ACTION_CREATOR_POST_COMMENTS",U["post.edit"]="LATENCY_ACTION_CREATOR_POST_EDIT",U.prebuffer="LATENCY_ACTION_PREBUFFER",U.prefetch="LATENCY_ACTION_PREFETCH",U.profile_settings="LATENCY_ACTION_KIDS_PROFILE_SETTINGS",U.profile_switcher="LATENCY_ACTION_LOGIN",U.reel_watch="LATENCY_ACTION_REEL_WATCH",U.results="LATENCY_ACTION_RESULTS",U["promotion.edit"]="LATENCY_ACTION_CREATOR_PROMOTION_EDIT",U.search_ui="LATENCY_ACTION_SEARCH_UI",
U.search_suggest="LATENCY_ACTION_SUGGEST",U.search_zero_state="LATENCY_ACTION_SEARCH_ZERO_STATE",U.secret_code="LATENCY_ACTION_KIDS_SECRET_CODE",U.seek="LATENCY_ACTION_PLAYER_SEEK",U.settings="LATENCY_ACTION_SETTINGS",U.store="LATENCY_ACTION_STORE",U.tenx="LATENCY_ACTION_TENX",U.video_to_ad="LATENCY_ACTION_VIDEO_TO_AD",U.watch="LATENCY_ACTION_WATCH",U.watch_it_again="LATENCY_ACTION_KIDS_WATCH_IT_AGAIN",U["watch,watch7"]="LATENCY_ACTION_WATCH",U["watch,watch7_html5"]="LATENCY_ACTION_WATCH",U["watch,watch7ad"]=
"LATENCY_ACTION_WATCH",U["watch,watch7ad_html5"]="LATENCY_ACTION_WATCH",U.wn_comments="LATENCY_ACTION_LOAD_COMMENTS",U.ww_rqs="LATENCY_ACTION_WHO_IS_WATCHING",U["video.analytics"]="LATENCY_ACTION_CREATOR_VIDEO_ANALYTICS",U["video.comments"]="LATENCY_ACTION_CREATOR_VIDEO_COMMENTS",U["video.edit"]="LATENCY_ACTION_CREATOR_VIDEO_EDIT",U["video.editor"]="LATENCY_ACTION_CREATOR_VIDEO_VIDEO_EDITOR",U["video.editor_async"]="LATENCY_ACTION_CREATOR_VIDEO_VIDEO_EDITOR_ASYNC",U["video.live_settings"]="LATENCY_ACTION_CREATOR_VIDEO_LIVE_SETTINGS",
U["video.live_streaming"]="LATENCY_ACTION_CREATOR_VIDEO_LIVE_STREAMING",U["video.monetization"]="LATENCY_ACTION_CREATOR_VIDEO_MONETIZATION",U["video.translations"]="LATENCY_ACTION_CREATOR_VIDEO_TRANSLATIONS",U.voice_assistant="LATENCY_ACTION_VOICE_ASSISTANT",U.cast_load_by_entity_to_watch="LATENCY_ACTION_CAST_LOAD_BY_ENTITY_TO_WATCH",U.networkless_performance="LATENCY_ACTION_NETWORKLESS_PERFORMANCE",U),V={},Jv=(V.ad_allowed="adTypesAllowed",V.yt_abt="adBreakType",V.ad_cpn="adClientPlaybackNonce",
V.ad_docid="adVideoId",V.yt_ad_an="adNetworks",V.ad_at="adType",V.aida="appInstallDataAgeMs",V.browse_id="browseId",V.p="httpProtocol",V.t="transportProtocol",V.cs="commandSource",V.cpn="clientPlaybackNonce",V.ccs="creatorInfo.creatorCanaryState",V.ctop="creatorInfo.topEntityType",V.csn="clientScreenNonce",V.docid="videoId",V.GetHome_rid="requestIds",V.GetSearch_rid="requestIds",V.GetPlayer_rid="requestIds",V.GetWatchNext_rid="requestIds",V.GetBrowse_rid="requestIds",V.GetLibrary_rid="requestIds",
V.is_continuation="isContinuation",V.is_nav="isNavigation",V.b_p="kabukiInfo.browseParams",V.is_prefetch="kabukiInfo.isPrefetch",V.is_secondary_nav="kabukiInfo.isSecondaryNav",V.nav_type="kabukiInfo.navigationType",V.prev_browse_id="kabukiInfo.prevBrowseId",V.query_source="kabukiInfo.querySource",V.voz_type="kabukiInfo.vozType",V.yt_lt="loadType",V.mver="creatorInfo.measurementVersion",V.yt_ad="isMonetized",V.nr="webInfo.navigationReason",V.nrsu="navigationRequestedSameUrl",V.pnt="performanceNavigationTiming",
V.prt="playbackRequiresTap",V.plt="playerInfo.playbackType",V.pis="playerInfo.playerInitializedState",V.paused="playerInfo.isPausedOnLoad",V.yt_pt="playerType",V.fmt="playerInfo.itag",V.yt_pl="watchInfo.isPlaylist",V.yt_pre="playerInfo.preloadType",V.yt_ad_pr="prerollAllowed",V.pa="previousAction",V.yt_red="isRedSubscriber",V.rce="mwebInfo.responseContentEncoding",V.rc="resourceInfo.resourceCache",V.scrh="screenHeight",V.scrw="screenWidth",V.st="serverTimeMs",V.ssdm="shellStartupDurationMs",V.br_trs=
"tvInfo.bedrockTriggerState",V.kebqat="kabukiInfo.earlyBrowseRequestInfo.abandonmentType",V.kebqa="kabukiInfo.earlyBrowseRequestInfo.adopted",V.label="tvInfo.label",V.is_mdx="tvInfo.isMdx",V.preloaded="tvInfo.isPreloaded",V.aac_type="tvInfo.authAccessCredentialType",V.upg_player_vis="playerInfo.visibilityState",V.query="unpluggedInfo.query",V.upg_chip_ids_string="unpluggedInfo.upgChipIdsString",V.yt_vst="videoStreamType",V.vph="viewportHeight",V.vpw="viewportWidth",V.yt_vis="isVisible",V.rcl="mwebInfo.responseContentLength",
V.GetSettings_rid="requestIds",V.GetTrending_rid="requestIds",V.GetMusicSearchSuggestions_rid="requestIds",V.REQUEST_ID="requestIds",V),Kv="isContinuation isNavigation kabukiInfo.earlyBrowseRequestInfo.adopted kabukiInfo.isPrefetch kabukiInfo.isSecondaryNav isMonetized navigationRequestedSameUrl performanceNavigationTiming playerInfo.isPausedOnLoad prerollAllowed isRedSubscriber tvInfo.isMdx tvInfo.isPreloaded isVisible watchInfo.isPlaylist playbackRequiresTap".split(" "),Lv={},Mv=(Lv.ccs="CANARY_STATE_",
Lv.mver="MEASUREMENT_VERSION_",Lv.pis="PLAYER_INITIALIZED_STATE_",Lv.yt_pt="LATENCY_PLAYER_",Lv.pa="LATENCY_ACTION_",Lv.ctop="TOP_ENTITY_TYPE_",Lv.yt_vst="VIDEO_STREAM_TYPE_",Lv),Nv="all_vc ap aq c cbr cbrand cbrver cmodel cos cosver cplatform ctheme cver ei l_an l_mm plid srt yt_fss yt_li vpst vpni2 vpil2 icrc icrt pa GetAccountOverview_rid GetHistory_rid cmt d_vpct d_vpnfi d_vpni nsru pc pfa pfeh pftr pnc prerender psc rc start tcrt tcrc ssr vpr vps yt_abt yt_fn yt_fs yt_pft yt_pre yt_pt yt_pvis ytu_pvis yt_ref yt_sts tds".split(" ");
function Ov(a){return Iv[a]||"LATENCY_ACTION_UNKNOWN"}
function Pv(a,b,c){c=Av(c);if(c.gelInfos)c.gelInfos[a]=!0;else{var d={};c.gelInfos=(d[a]=!0,d)}if(a.match("_rid")){var e=a.split("_rid")[0];a="REQUEST_ID"}if(a in Jv){c=Jv[a];0<=gb(Kv,c)&&(b=!!b);a in Mv&&"string"===typeof b&&(b=Mv[a]+b.toUpperCase());a=b;b=c.split(".");for(var f=d={},g=0;g<b.length-1;g++){var h=b[g];f[h]={};f=f[h]}f[b[b.length-1]]="requestIds"===c?[{id:a,endpoint:e}]:a;return gv({},d)}0<=gb(Nv,a)||Ut(new Q("Unknown label logged with GEL CSI",a))}
;var X={LATENCY_ACTION_SHORTS_VIDEO_INGESTION_TRANSCODING:179,LATENCY_ACTION_KIDS_PROFILE_SWITCHER:90,LATENCY_ACTION_OFFLINE_THUMBNAIL_TRANSFER:100,LATENCY_ACTION_CREATOR_VIDEO_VIDEO_EDITOR_ASYNC:46,LATENCY_ACTION_CREATOR_VIDEO_VIDEO_EDITOR:37,LATENCY_ACTION_SPINNER_DISPLAYED:14,LATENCY_ACTION_PLAYABILITY_CHECK:10,LATENCY_ACTION_PROCESS:9,LATENCY_ACTION_APP_STARTUP:5,LATENCY_ACTION_COMMERCE_ACTION_COMMAND_RPC:203,LATENCY_ACTION_COMMERCE_TRANSACTION:184,LATENCY_ACTION_LOG_PAYMENT_SERVER_ANALYTICS_RPC:173,
LATENCY_ACTION_GET_PAYMENT_INSTRUMENTS_PARAMS_RPC:172,LATENCY_ACTION_GET_FIX_INSTRUMENT_PARAMS_RPC:171,LATENCY_ACTION_RESUME_SUBSCRIPTION_RPC:170,LATENCY_ACTION_PAUSE_SUBSCRIPTION_RPC:169,LATENCY_ACTION_GET_OFFLINE_UPSELL_RPC:168,LATENCY_ACTION_GET_OFFERS_RPC:167,LATENCY_ACTION_GET_CANCELLATION_YT_FLOW_RPC:166,LATENCY_ACTION_GET_CANCELLATION_FLOW_RPC:165,LATENCY_ACTION_UPDATE_CROSS_DEVICE_OFFLINE_STATE_RPC:164,LATENCY_ACTION_GET_OFFER_DETAILS_RPC:163,LATENCY_ACTION_CANCEL_RECURRENCE_TRANSACTION_RPC:162,
LATENCY_ACTION_GET_TIP_MODULE_RPC:161,LATENCY_ACTION_HANDLE_TRANSACTION_RPC:160,LATENCY_ACTION_COMPLETE_TRANSACTION_RPC:159,LATENCY_ACTION_GET_CART_RPC:158,LATENCY_ACTION_THUMBNAIL_FETCH:156,LATENCY_ACTION_ABANDONED_DIRECT_PLAYBACK:154,LATENCY_ACTION_SHARE_VIDEO:153,LATENCY_ACTION_AD_TO_VIDEO_INT:152,LATENCY_ACTION_ABANDONED_BROWSE:151,LATENCY_ACTION_PLAYER_ROTATION:150,LATENCY_ACTION_GENERIC_WEB_VIEW:183,LATENCY_ACTION_SHOPPING_IN_APP:124,LATENCY_ACTION_PLAYER_ATTESTATION:121,LATENCY_ACTION_PLAYER_SEEK:119,
LATENCY_ACTION_SUPER_STICKER_BUY_FLOW:114,LATENCY_ACTION_DOWNLOADS_DATA_ACCESS:180,LATENCY_ACTION_BLOCKS_PERFORMANCE:148,LATENCY_ACTION_ASSISTANT_QUERY:138,LATENCY_ACTION_ASSISTANT_SETTINGS:137,LATENCY_ACTION_ENTITY_KEY_DESERIALIZATION_PERF:129,LATENCY_ACTION_ENTITY_KEY_SERIALIZATION_PERF:128,LATENCY_ACTION_PROOF_OF_ORIGIN_TOKEN_CREATE:127,LATENCY_ACTION_EMBEDS_SDK_INITIALIZATION:123,LATENCY_ACTION_NETWORKLESS_PERFORMANCE:122,LATENCY_ACTION_DOWNLOADS_EXPANSION:133,LATENCY_ACTION_ENTITY_TRANSFORM:131,
LATENCY_ACTION_DOWNLOADS_COMPATIBILITY_LAYER:96,LATENCY_ACTION_EMBEDS_SET_VIDEO:95,LATENCY_ACTION_SETTINGS:93,LATENCY_ACTION_ABANDONED_STARTUP:81,LATENCY_ACTION_MEDIA_BROWSER_ALARM_PLAY:80,LATENCY_ACTION_MEDIA_BROWSER_SEARCH:79,LATENCY_ACTION_MEDIA_BROWSER_LOAD_TREE:78,LATENCY_ACTION_WHO_IS_WATCHING:77,LATENCY_ACTION_CAST_LOAD_BY_ENTITY_TO_WATCH:76,LATENCY_ACTION_LITE_SWITCH_ACCOUNT:73,LATENCY_ACTION_ELEMENTS_PERFORMANCE:70,LATENCY_ACTION_LOCATION_SIGNAL_COLLECTION:69,LATENCY_ACTION_MODIFY_CHANNEL_NOTIFICATION:65,
LATENCY_ACTION_OFFLINE_STORE_START:61,LATENCY_ACTION_REEL_EDITOR:58,LATENCY_ACTION_CHANNEL_SUBSCRIBE:56,LATENCY_ACTION_CHANNEL_PREVIEW:55,LATENCY_ACTION_PREFETCH:52,LATENCY_ACTION_ABANDONED_WATCH:45,LATENCY_ACTION_LOAD_COMMENT_REPLIES:26,LATENCY_ACTION_LOAD_COMMENTS:25,LATENCY_ACTION_EDIT_COMMENT:24,LATENCY_ACTION_NEW_COMMENT:23,LATENCY_ACTION_OFFLINE_SHARING_RECEIVER_PAIRING:19,LATENCY_ACTION_EMBED:18,LATENCY_ACTION_MDX_LAUNCH:15,LATENCY_ACTION_RESOLVE_URL:13,LATENCY_ACTION_CAST_SPLASH:149,LATENCY_ACTION_MDX_CONNECT_TO_SESSION:190,
LATENCY_ACTION_MDX_STREAM_TRANSFER:178,LATENCY_ACTION_MDX_CAST:120,LATENCY_ACTION_MDX_COMMAND:12,LATENCY_ACTION_REEL_SELECT_SEGMENT:136,LATENCY_ACTION_ACCELERATED_EFFECTS:145,LATENCY_ACTION_EDIT_AUDIO_GEN:182,LATENCY_ACTION_UPLOAD_AUDIO_MIXER:147,LATENCY_ACTION_SHORTS_CLIENT_SIDE_RENDERING:157,LATENCY_ACTION_SHORTS_SEG_IMP_TRANSCODING:146,LATENCY_ACTION_SHORTS_AUDIO_PICKER_PLAYBACK:130,LATENCY_ACTION_SHORTS_WAVEFORM_DOWNLOAD:125,LATENCY_ACTION_SHORTS_VIDEO_INGESTION:155,LATENCY_ACTION_SHORTS_GALLERY:107,
LATENCY_ACTION_SHORTS_TRIM:105,LATENCY_ACTION_SHORTS_EDIT:104,LATENCY_ACTION_SHORTS_CAMERA:103,LATENCY_ACTION_PRODUCER_EXPORT_PROJECT:193,LATENCY_ACTION_PRODUCER_EDITOR:192,LATENCY_ACTION_PARENT_TOOLS_DASHBOARD:102,LATENCY_ACTION_PARENT_TOOLS_COLLECTION:101,LATENCY_ACTION_MUSIC_LOAD_RECOMMENDED_MEDIA_ITEMS:116,LATENCY_ACTION_MUSIC_LOAD_MEDIA_ITEMS:115,LATENCY_ACTION_MUSIC_ALBUM_DETAIL:72,LATENCY_ACTION_MUSIC_PLAYLIST_DETAIL:71,LATENCY_ACTION_STORE:175,LATENCY_ACTION_CHIPS:68,LATENCY_ACTION_SEARCH_ZERO_STATE:67,
LATENCY_ACTION_LIVE_PAGINATION:117,LATENCY_ACTION_LIVE:20,LATENCY_ACTION_PREBUFFER:40,LATENCY_ACTION_TENX:39,LATENCY_ACTION_KIDS_PROFILE_SETTINGS:94,LATENCY_ACTION_KIDS_WATCH_IT_AGAIN:92,LATENCY_ACTION_KIDS_SECRET_CODE:91,LATENCY_ACTION_KIDS_PARENT_PROFILE_SETTINGS:89,LATENCY_ACTION_KIDS_ONBOARDING:88,LATENCY_ACTION_KIDS_VOICE_SEARCH:82,LATENCY_ACTION_KIDS_CURATED_COLLECTION:62,LATENCY_ACTION_KIDS_LIBRARY:53,LATENCY_ACTION_CREATOR_PROMOTION_LIST:186,LATENCY_ACTION_CREATOR_PROMOTION_EDIT:185,LATENCY_ACTION_CREATOR_VIDEO_TRANSLATIONS:38,
LATENCY_ACTION_CREATOR_VIDEO_MONETIZATION:74,LATENCY_ACTION_CREATOR_VIDEO_LIVE_STREAMING:141,LATENCY_ACTION_CREATOR_VIDEO_LIVE_SETTINGS:142,LATENCY_ACTION_CREATOR_VIDEO_EDITOR_ASYNC:51,LATENCY_ACTION_CREATOR_VIDEO_EDITOR:50,LATENCY_ACTION_CREATOR_VIDEO_EDIT:36,LATENCY_ACTION_CREATOR_VIDEO_COMMENTS:34,LATENCY_ACTION_CREATOR_VIDEO_ANALYTICS:33,LATENCY_ACTION_CREATOR_SONG_ANALYTICS:176,LATENCY_ACTION_CREATOR_POST_LIST:112,LATENCY_ACTION_CREATOR_POST_EDIT:110,LATENCY_ACTION_CREATOR_POST_COMMENTS:111,
LATENCY_ACTION_CREATOR_LIVE_STREAMING:108,LATENCY_ACTION_CREATOR_DIALOG_VIDEO_COPYRIGHT:174,LATENCY_ACTION_CREATOR_DIALOG_UPLOADS:86,LATENCY_ACTION_CREATOR_DIALOG_COPYRIGHT_STRIKES:87,LATENCY_ACTION_CREATOR_CHANNEL_VIDEOS:32,LATENCY_ACTION_CREATOR_CHANNEL_TRANSLATIONS:48,LATENCY_ACTION_CREATOR_CHANNEL_PLAYLISTS:139,LATENCY_ACTION_CREATOR_CHANNEL_MUSIC_STOREFRONT:177,LATENCY_ACTION_CREATOR_CHANNEL_MUSIC:99,LATENCY_ACTION_CREATOR_CHANNEL_MONETIZATION:43,LATENCY_ACTION_CREATOR_CHANNEL_EDITING:113,LATENCY_ACTION_CREATOR_CHANNEL_DASHBOARD:49,
LATENCY_ACTION_CREATOR_CHANNEL_COPYRIGHT:44,LATENCY_ACTION_CREATOR_CMS_VIDEOS:202,LATENCY_ACTION_CREATOR_CMS_REPORTS:201,LATENCY_ACTION_CREATOR_CMS_ISSUES:191,LATENCY_ACTION_CREATOR_CMS_MANUAL_CLAIMING:200,LATENCY_ACTION_CREATOR_CMS_DASHBOARD:199,LATENCY_ACTION_CREATOR_CMS_CONTENT_DELIVERY:198,LATENCY_ACTION_CREATOR_CMS_CLAIMED_VIDEOS:197,LATENCY_ACTION_CREATOR_CMS_CHANNELS:196,LATENCY_ACTION_CREATOR_CMS_ASSETS:195,LATENCY_ACTION_CREATOR_CMS_ANALYTICS:194,LATENCY_ACTION_CREATOR_CHANNEL_COMMENTS:66,
LATENCY_ACTION_CREATOR_CHANNEL_ANALYTICS:31,LATENCY_ACTION_CREATOR_ARTIST_PROFILE:85,LATENCY_ACTION_CREATOR_ARTIST_CONCERTS:84,LATENCY_ACTION_CREATOR_ARTIST_ANALYTICS:83,LATENCY_ACTION_CREATOR_ANALYTICS_EXPLORE:140,LATENCY_ACTION_EXPERIMENTAL_WATCH_UI:181,LATENCY_ACTION_STORYBOARD_THUMBNAILS:118,LATENCY_ACTION_SEARCH_THUMBNAILS:59,LATENCY_ACTION_ON_DEVICE_MODEL_DOWNLOAD:54,LATENCY_ACTION_VOICE_ASSISTANT:47,LATENCY_ACTION_SEARCH_UI:35,LATENCY_ACTION_SUGGEST:30,LATENCY_ACTION_AUTO_SEARCH:126,LATENCY_ACTION_DOWNLOADS:98,
LATENCY_ACTION_EXPLORE:75,LATENCY_ACTION_VIDEO_LIST:63,LATENCY_ACTION_HOME_RESUME:60,LATENCY_ACTION_SUBSCRIPTIONS_LIST:57,LATENCY_ACTION_THUMBNAIL_LOAD:42,LATENCY_ACTION_FIRST_THUMBNAIL_LOAD:29,LATENCY_ACTION_SUBSCRIPTIONS_FEED:109,LATENCY_ACTION_SUBSCRIPTIONS:28,LATENCY_ACTION_TRENDING:27,LATENCY_ACTION_LIBRARY:21,LATENCY_ACTION_VIDEO_THUMBNAIL:8,LATENCY_ACTION_SHOW_MORE:7,LATENCY_ACTION_VIDEO_PREVIEW:6,LATENCY_ACTION_AD_TO_AD:22,LATENCY_ACTION_VIDEO_TO_AD:17,LATENCY_ACTION_AD_TO_VIDEO:16,LATENCY_ACTION_DIRECT_PLAYBACK:132,
LATENCY_ACTION_PREBUFFER_VIDEO:144,LATENCY_ACTION_PREFETCH_VIDEO:143,LATENCY_ACTION_STARTUP:106,LATENCY_ACTION_ONBOARDING:135,LATENCY_ACTION_LOGIN:97,LATENCY_ACTION_REEL_WATCH:41,LATENCY_ACTION_WATCH:3,LATENCY_ACTION_RESULTS:2,LATENCY_ACTION_CHANNELS:4,LATENCY_ACTION_HOME:1,LATENCY_ACTION_BROWSE:11,LATENCY_ACTION_USER_ACTION:189,LATENCY_ACTION_INFRASTRUCTURE:188,LATENCY_ACTION_PAGE_NAVIGATION:187,LATENCY_ACTION_UNKNOWN:0};X[X.LATENCY_ACTION_SHORTS_VIDEO_INGESTION_TRANSCODING]="LATENCY_ACTION_SHORTS_VIDEO_INGESTION_TRANSCODING";
X[X.LATENCY_ACTION_KIDS_PROFILE_SWITCHER]="LATENCY_ACTION_KIDS_PROFILE_SWITCHER";X[X.LATENCY_ACTION_OFFLINE_THUMBNAIL_TRANSFER]="LATENCY_ACTION_OFFLINE_THUMBNAIL_TRANSFER";X[X.LATENCY_ACTION_CREATOR_VIDEO_VIDEO_EDITOR_ASYNC]="LATENCY_ACTION_CREATOR_VIDEO_VIDEO_EDITOR_ASYNC";X[X.LATENCY_ACTION_CREATOR_VIDEO_VIDEO_EDITOR]="LATENCY_ACTION_CREATOR_VIDEO_VIDEO_EDITOR";X[X.LATENCY_ACTION_SPINNER_DISPLAYED]="LATENCY_ACTION_SPINNER_DISPLAYED";X[X.LATENCY_ACTION_PLAYABILITY_CHECK]="LATENCY_ACTION_PLAYABILITY_CHECK";
X[X.LATENCY_ACTION_PROCESS]="LATENCY_ACTION_PROCESS";X[X.LATENCY_ACTION_APP_STARTUP]="LATENCY_ACTION_APP_STARTUP";X[X.LATENCY_ACTION_COMMERCE_ACTION_COMMAND_RPC]="LATENCY_ACTION_COMMERCE_ACTION_COMMAND_RPC";X[X.LATENCY_ACTION_COMMERCE_TRANSACTION]="LATENCY_ACTION_COMMERCE_TRANSACTION";X[X.LATENCY_ACTION_LOG_PAYMENT_SERVER_ANALYTICS_RPC]="LATENCY_ACTION_LOG_PAYMENT_SERVER_ANALYTICS_RPC";X[X.LATENCY_ACTION_GET_PAYMENT_INSTRUMENTS_PARAMS_RPC]="LATENCY_ACTION_GET_PAYMENT_INSTRUMENTS_PARAMS_RPC";
X[X.LATENCY_ACTION_GET_FIX_INSTRUMENT_PARAMS_RPC]="LATENCY_ACTION_GET_FIX_INSTRUMENT_PARAMS_RPC";X[X.LATENCY_ACTION_RESUME_SUBSCRIPTION_RPC]="LATENCY_ACTION_RESUME_SUBSCRIPTION_RPC";X[X.LATENCY_ACTION_PAUSE_SUBSCRIPTION_RPC]="LATENCY_ACTION_PAUSE_SUBSCRIPTION_RPC";X[X.LATENCY_ACTION_GET_OFFLINE_UPSELL_RPC]="LATENCY_ACTION_GET_OFFLINE_UPSELL_RPC";X[X.LATENCY_ACTION_GET_OFFERS_RPC]="LATENCY_ACTION_GET_OFFERS_RPC";X[X.LATENCY_ACTION_GET_CANCELLATION_YT_FLOW_RPC]="LATENCY_ACTION_GET_CANCELLATION_YT_FLOW_RPC";
X[X.LATENCY_ACTION_GET_CANCELLATION_FLOW_RPC]="LATENCY_ACTION_GET_CANCELLATION_FLOW_RPC";X[X.LATENCY_ACTION_UPDATE_CROSS_DEVICE_OFFLINE_STATE_RPC]="LATENCY_ACTION_UPDATE_CROSS_DEVICE_OFFLINE_STATE_RPC";X[X.LATENCY_ACTION_GET_OFFER_DETAILS_RPC]="LATENCY_ACTION_GET_OFFER_DETAILS_RPC";X[X.LATENCY_ACTION_CANCEL_RECURRENCE_TRANSACTION_RPC]="LATENCY_ACTION_CANCEL_RECURRENCE_TRANSACTION_RPC";X[X.LATENCY_ACTION_GET_TIP_MODULE_RPC]="LATENCY_ACTION_GET_TIP_MODULE_RPC";
X[X.LATENCY_ACTION_HANDLE_TRANSACTION_RPC]="LATENCY_ACTION_HANDLE_TRANSACTION_RPC";X[X.LATENCY_ACTION_COMPLETE_TRANSACTION_RPC]="LATENCY_ACTION_COMPLETE_TRANSACTION_RPC";X[X.LATENCY_ACTION_GET_CART_RPC]="LATENCY_ACTION_GET_CART_RPC";X[X.LATENCY_ACTION_THUMBNAIL_FETCH]="LATENCY_ACTION_THUMBNAIL_FETCH";X[X.LATENCY_ACTION_ABANDONED_DIRECT_PLAYBACK]="LATENCY_ACTION_ABANDONED_DIRECT_PLAYBACK";X[X.LATENCY_ACTION_SHARE_VIDEO]="LATENCY_ACTION_SHARE_VIDEO";X[X.LATENCY_ACTION_AD_TO_VIDEO_INT]="LATENCY_ACTION_AD_TO_VIDEO_INT";
X[X.LATENCY_ACTION_ABANDONED_BROWSE]="LATENCY_ACTION_ABANDONED_BROWSE";X[X.LATENCY_ACTION_PLAYER_ROTATION]="LATENCY_ACTION_PLAYER_ROTATION";X[X.LATENCY_ACTION_GENERIC_WEB_VIEW]="LATENCY_ACTION_GENERIC_WEB_VIEW";X[X.LATENCY_ACTION_SHOPPING_IN_APP]="LATENCY_ACTION_SHOPPING_IN_APP";X[X.LATENCY_ACTION_PLAYER_ATTESTATION]="LATENCY_ACTION_PLAYER_ATTESTATION";X[X.LATENCY_ACTION_PLAYER_SEEK]="LATENCY_ACTION_PLAYER_SEEK";X[X.LATENCY_ACTION_SUPER_STICKER_BUY_FLOW]="LATENCY_ACTION_SUPER_STICKER_BUY_FLOW";
X[X.LATENCY_ACTION_DOWNLOADS_DATA_ACCESS]="LATENCY_ACTION_DOWNLOADS_DATA_ACCESS";X[X.LATENCY_ACTION_BLOCKS_PERFORMANCE]="LATENCY_ACTION_BLOCKS_PERFORMANCE";X[X.LATENCY_ACTION_ASSISTANT_QUERY]="LATENCY_ACTION_ASSISTANT_QUERY";X[X.LATENCY_ACTION_ASSISTANT_SETTINGS]="LATENCY_ACTION_ASSISTANT_SETTINGS";X[X.LATENCY_ACTION_ENTITY_KEY_DESERIALIZATION_PERF]="LATENCY_ACTION_ENTITY_KEY_DESERIALIZATION_PERF";X[X.LATENCY_ACTION_ENTITY_KEY_SERIALIZATION_PERF]="LATENCY_ACTION_ENTITY_KEY_SERIALIZATION_PERF";
X[X.LATENCY_ACTION_PROOF_OF_ORIGIN_TOKEN_CREATE]="LATENCY_ACTION_PROOF_OF_ORIGIN_TOKEN_CREATE";X[X.LATENCY_ACTION_EMBEDS_SDK_INITIALIZATION]="LATENCY_ACTION_EMBEDS_SDK_INITIALIZATION";X[X.LATENCY_ACTION_NETWORKLESS_PERFORMANCE]="LATENCY_ACTION_NETWORKLESS_PERFORMANCE";X[X.LATENCY_ACTION_DOWNLOADS_EXPANSION]="LATENCY_ACTION_DOWNLOADS_EXPANSION";X[X.LATENCY_ACTION_ENTITY_TRANSFORM]="LATENCY_ACTION_ENTITY_TRANSFORM";X[X.LATENCY_ACTION_DOWNLOADS_COMPATIBILITY_LAYER]="LATENCY_ACTION_DOWNLOADS_COMPATIBILITY_LAYER";
X[X.LATENCY_ACTION_EMBEDS_SET_VIDEO]="LATENCY_ACTION_EMBEDS_SET_VIDEO";X[X.LATENCY_ACTION_SETTINGS]="LATENCY_ACTION_SETTINGS";X[X.LATENCY_ACTION_ABANDONED_STARTUP]="LATENCY_ACTION_ABANDONED_STARTUP";X[X.LATENCY_ACTION_MEDIA_BROWSER_ALARM_PLAY]="LATENCY_ACTION_MEDIA_BROWSER_ALARM_PLAY";X[X.LATENCY_ACTION_MEDIA_BROWSER_SEARCH]="LATENCY_ACTION_MEDIA_BROWSER_SEARCH";X[X.LATENCY_ACTION_MEDIA_BROWSER_LOAD_TREE]="LATENCY_ACTION_MEDIA_BROWSER_LOAD_TREE";X[X.LATENCY_ACTION_WHO_IS_WATCHING]="LATENCY_ACTION_WHO_IS_WATCHING";
X[X.LATENCY_ACTION_CAST_LOAD_BY_ENTITY_TO_WATCH]="LATENCY_ACTION_CAST_LOAD_BY_ENTITY_TO_WATCH";X[X.LATENCY_ACTION_LITE_SWITCH_ACCOUNT]="LATENCY_ACTION_LITE_SWITCH_ACCOUNT";X[X.LATENCY_ACTION_ELEMENTS_PERFORMANCE]="LATENCY_ACTION_ELEMENTS_PERFORMANCE";X[X.LATENCY_ACTION_LOCATION_SIGNAL_COLLECTION]="LATENCY_ACTION_LOCATION_SIGNAL_COLLECTION";X[X.LATENCY_ACTION_MODIFY_CHANNEL_NOTIFICATION]="LATENCY_ACTION_MODIFY_CHANNEL_NOTIFICATION";X[X.LATENCY_ACTION_OFFLINE_STORE_START]="LATENCY_ACTION_OFFLINE_STORE_START";
X[X.LATENCY_ACTION_REEL_EDITOR]="LATENCY_ACTION_REEL_EDITOR";X[X.LATENCY_ACTION_CHANNEL_SUBSCRIBE]="LATENCY_ACTION_CHANNEL_SUBSCRIBE";X[X.LATENCY_ACTION_CHANNEL_PREVIEW]="LATENCY_ACTION_CHANNEL_PREVIEW";X[X.LATENCY_ACTION_PREFETCH]="LATENCY_ACTION_PREFETCH";X[X.LATENCY_ACTION_ABANDONED_WATCH]="LATENCY_ACTION_ABANDONED_WATCH";X[X.LATENCY_ACTION_LOAD_COMMENT_REPLIES]="LATENCY_ACTION_LOAD_COMMENT_REPLIES";X[X.LATENCY_ACTION_LOAD_COMMENTS]="LATENCY_ACTION_LOAD_COMMENTS";
X[X.LATENCY_ACTION_EDIT_COMMENT]="LATENCY_ACTION_EDIT_COMMENT";X[X.LATENCY_ACTION_NEW_COMMENT]="LATENCY_ACTION_NEW_COMMENT";X[X.LATENCY_ACTION_OFFLINE_SHARING_RECEIVER_PAIRING]="LATENCY_ACTION_OFFLINE_SHARING_RECEIVER_PAIRING";X[X.LATENCY_ACTION_EMBED]="LATENCY_ACTION_EMBED";X[X.LATENCY_ACTION_MDX_LAUNCH]="LATENCY_ACTION_MDX_LAUNCH";X[X.LATENCY_ACTION_RESOLVE_URL]="LATENCY_ACTION_RESOLVE_URL";X[X.LATENCY_ACTION_CAST_SPLASH]="LATENCY_ACTION_CAST_SPLASH";X[X.LATENCY_ACTION_MDX_CONNECT_TO_SESSION]="LATENCY_ACTION_MDX_CONNECT_TO_SESSION";
X[X.LATENCY_ACTION_MDX_STREAM_TRANSFER]="LATENCY_ACTION_MDX_STREAM_TRANSFER";X[X.LATENCY_ACTION_MDX_CAST]="LATENCY_ACTION_MDX_CAST";X[X.LATENCY_ACTION_MDX_COMMAND]="LATENCY_ACTION_MDX_COMMAND";X[X.LATENCY_ACTION_REEL_SELECT_SEGMENT]="LATENCY_ACTION_REEL_SELECT_SEGMENT";X[X.LATENCY_ACTION_ACCELERATED_EFFECTS]="LATENCY_ACTION_ACCELERATED_EFFECTS";X[X.LATENCY_ACTION_EDIT_AUDIO_GEN]="LATENCY_ACTION_EDIT_AUDIO_GEN";X[X.LATENCY_ACTION_UPLOAD_AUDIO_MIXER]="LATENCY_ACTION_UPLOAD_AUDIO_MIXER";
X[X.LATENCY_ACTION_SHORTS_CLIENT_SIDE_RENDERING]="LATENCY_ACTION_SHORTS_CLIENT_SIDE_RENDERING";X[X.LATENCY_ACTION_SHORTS_SEG_IMP_TRANSCODING]="LATENCY_ACTION_SHORTS_SEG_IMP_TRANSCODING";X[X.LATENCY_ACTION_SHORTS_AUDIO_PICKER_PLAYBACK]="LATENCY_ACTION_SHORTS_AUDIO_PICKER_PLAYBACK";X[X.LATENCY_ACTION_SHORTS_WAVEFORM_DOWNLOAD]="LATENCY_ACTION_SHORTS_WAVEFORM_DOWNLOAD";X[X.LATENCY_ACTION_SHORTS_VIDEO_INGESTION]="LATENCY_ACTION_SHORTS_VIDEO_INGESTION";X[X.LATENCY_ACTION_SHORTS_GALLERY]="LATENCY_ACTION_SHORTS_GALLERY";
X[X.LATENCY_ACTION_SHORTS_TRIM]="LATENCY_ACTION_SHORTS_TRIM";X[X.LATENCY_ACTION_SHORTS_EDIT]="LATENCY_ACTION_SHORTS_EDIT";X[X.LATENCY_ACTION_SHORTS_CAMERA]="LATENCY_ACTION_SHORTS_CAMERA";X[X.LATENCY_ACTION_PRODUCER_EXPORT_PROJECT]="LATENCY_ACTION_PRODUCER_EXPORT_PROJECT";X[X.LATENCY_ACTION_PRODUCER_EDITOR]="LATENCY_ACTION_PRODUCER_EDITOR";X[X.LATENCY_ACTION_PARENT_TOOLS_DASHBOARD]="LATENCY_ACTION_PARENT_TOOLS_DASHBOARD";X[X.LATENCY_ACTION_PARENT_TOOLS_COLLECTION]="LATENCY_ACTION_PARENT_TOOLS_COLLECTION";
X[X.LATENCY_ACTION_MUSIC_LOAD_RECOMMENDED_MEDIA_ITEMS]="LATENCY_ACTION_MUSIC_LOAD_RECOMMENDED_MEDIA_ITEMS";X[X.LATENCY_ACTION_MUSIC_LOAD_MEDIA_ITEMS]="LATENCY_ACTION_MUSIC_LOAD_MEDIA_ITEMS";X[X.LATENCY_ACTION_MUSIC_ALBUM_DETAIL]="LATENCY_ACTION_MUSIC_ALBUM_DETAIL";X[X.LATENCY_ACTION_MUSIC_PLAYLIST_DETAIL]="LATENCY_ACTION_MUSIC_PLAYLIST_DETAIL";X[X.LATENCY_ACTION_STORE]="LATENCY_ACTION_STORE";X[X.LATENCY_ACTION_CHIPS]="LATENCY_ACTION_CHIPS";X[X.LATENCY_ACTION_SEARCH_ZERO_STATE]="LATENCY_ACTION_SEARCH_ZERO_STATE";
X[X.LATENCY_ACTION_LIVE_PAGINATION]="LATENCY_ACTION_LIVE_PAGINATION";X[X.LATENCY_ACTION_LIVE]="LATENCY_ACTION_LIVE";X[X.LATENCY_ACTION_PREBUFFER]="LATENCY_ACTION_PREBUFFER";X[X.LATENCY_ACTION_TENX]="LATENCY_ACTION_TENX";X[X.LATENCY_ACTION_KIDS_PROFILE_SETTINGS]="LATENCY_ACTION_KIDS_PROFILE_SETTINGS";X[X.LATENCY_ACTION_KIDS_WATCH_IT_AGAIN]="LATENCY_ACTION_KIDS_WATCH_IT_AGAIN";X[X.LATENCY_ACTION_KIDS_SECRET_CODE]="LATENCY_ACTION_KIDS_SECRET_CODE";X[X.LATENCY_ACTION_KIDS_PARENT_PROFILE_SETTINGS]="LATENCY_ACTION_KIDS_PARENT_PROFILE_SETTINGS";
X[X.LATENCY_ACTION_KIDS_ONBOARDING]="LATENCY_ACTION_KIDS_ONBOARDING";X[X.LATENCY_ACTION_KIDS_VOICE_SEARCH]="LATENCY_ACTION_KIDS_VOICE_SEARCH";X[X.LATENCY_ACTION_KIDS_CURATED_COLLECTION]="LATENCY_ACTION_KIDS_CURATED_COLLECTION";X[X.LATENCY_ACTION_KIDS_LIBRARY]="LATENCY_ACTION_KIDS_LIBRARY";X[X.LATENCY_ACTION_CREATOR_PROMOTION_LIST]="LATENCY_ACTION_CREATOR_PROMOTION_LIST";X[X.LATENCY_ACTION_CREATOR_PROMOTION_EDIT]="LATENCY_ACTION_CREATOR_PROMOTION_EDIT";
X[X.LATENCY_ACTION_CREATOR_VIDEO_TRANSLATIONS]="LATENCY_ACTION_CREATOR_VIDEO_TRANSLATIONS";X[X.LATENCY_ACTION_CREATOR_VIDEO_MONETIZATION]="LATENCY_ACTION_CREATOR_VIDEO_MONETIZATION";X[X.LATENCY_ACTION_CREATOR_VIDEO_LIVE_STREAMING]="LATENCY_ACTION_CREATOR_VIDEO_LIVE_STREAMING";X[X.LATENCY_ACTION_CREATOR_VIDEO_LIVE_SETTINGS]="LATENCY_ACTION_CREATOR_VIDEO_LIVE_SETTINGS";X[X.LATENCY_ACTION_CREATOR_VIDEO_EDITOR_ASYNC]="LATENCY_ACTION_CREATOR_VIDEO_EDITOR_ASYNC";
X[X.LATENCY_ACTION_CREATOR_VIDEO_EDITOR]="LATENCY_ACTION_CREATOR_VIDEO_EDITOR";X[X.LATENCY_ACTION_CREATOR_VIDEO_EDIT]="LATENCY_ACTION_CREATOR_VIDEO_EDIT";X[X.LATENCY_ACTION_CREATOR_VIDEO_COMMENTS]="LATENCY_ACTION_CREATOR_VIDEO_COMMENTS";X[X.LATENCY_ACTION_CREATOR_VIDEO_ANALYTICS]="LATENCY_ACTION_CREATOR_VIDEO_ANALYTICS";X[X.LATENCY_ACTION_CREATOR_SONG_ANALYTICS]="LATENCY_ACTION_CREATOR_SONG_ANALYTICS";X[X.LATENCY_ACTION_CREATOR_POST_LIST]="LATENCY_ACTION_CREATOR_POST_LIST";
X[X.LATENCY_ACTION_CREATOR_POST_EDIT]="LATENCY_ACTION_CREATOR_POST_EDIT";X[X.LATENCY_ACTION_CREATOR_POST_COMMENTS]="LATENCY_ACTION_CREATOR_POST_COMMENTS";X[X.LATENCY_ACTION_CREATOR_LIVE_STREAMING]="LATENCY_ACTION_CREATOR_LIVE_STREAMING";X[X.LATENCY_ACTION_CREATOR_DIALOG_VIDEO_COPYRIGHT]="LATENCY_ACTION_CREATOR_DIALOG_VIDEO_COPYRIGHT";X[X.LATENCY_ACTION_CREATOR_DIALOG_UPLOADS]="LATENCY_ACTION_CREATOR_DIALOG_UPLOADS";X[X.LATENCY_ACTION_CREATOR_DIALOG_COPYRIGHT_STRIKES]="LATENCY_ACTION_CREATOR_DIALOG_COPYRIGHT_STRIKES";
X[X.LATENCY_ACTION_CREATOR_CHANNEL_VIDEOS]="LATENCY_ACTION_CREATOR_CHANNEL_VIDEOS";X[X.LATENCY_ACTION_CREATOR_CHANNEL_TRANSLATIONS]="LATENCY_ACTION_CREATOR_CHANNEL_TRANSLATIONS";X[X.LATENCY_ACTION_CREATOR_CHANNEL_PLAYLISTS]="LATENCY_ACTION_CREATOR_CHANNEL_PLAYLISTS";X[X.LATENCY_ACTION_CREATOR_CHANNEL_MUSIC_STOREFRONT]="LATENCY_ACTION_CREATOR_CHANNEL_MUSIC_STOREFRONT";X[X.LATENCY_ACTION_CREATOR_CHANNEL_MUSIC]="LATENCY_ACTION_CREATOR_CHANNEL_MUSIC";X[X.LATENCY_ACTION_CREATOR_CHANNEL_MONETIZATION]="LATENCY_ACTION_CREATOR_CHANNEL_MONETIZATION";
X[X.LATENCY_ACTION_CREATOR_CHANNEL_EDITING]="LATENCY_ACTION_CREATOR_CHANNEL_EDITING";X[X.LATENCY_ACTION_CREATOR_CHANNEL_DASHBOARD]="LATENCY_ACTION_CREATOR_CHANNEL_DASHBOARD";X[X.LATENCY_ACTION_CREATOR_CHANNEL_COPYRIGHT]="LATENCY_ACTION_CREATOR_CHANNEL_COPYRIGHT";X[X.LATENCY_ACTION_CREATOR_CMS_VIDEOS]="LATENCY_ACTION_CREATOR_CMS_VIDEOS";X[X.LATENCY_ACTION_CREATOR_CMS_REPORTS]="LATENCY_ACTION_CREATOR_CMS_REPORTS";X[X.LATENCY_ACTION_CREATOR_CMS_ISSUES]="LATENCY_ACTION_CREATOR_CMS_ISSUES";
X[X.LATENCY_ACTION_CREATOR_CMS_MANUAL_CLAIMING]="LATENCY_ACTION_CREATOR_CMS_MANUAL_CLAIMING";X[X.LATENCY_ACTION_CREATOR_CMS_DASHBOARD]="LATENCY_ACTION_CREATOR_CMS_DASHBOARD";X[X.LATENCY_ACTION_CREATOR_CMS_CONTENT_DELIVERY]="LATENCY_ACTION_CREATOR_CMS_CONTENT_DELIVERY";X[X.LATENCY_ACTION_CREATOR_CMS_CLAIMED_VIDEOS]="LATENCY_ACTION_CREATOR_CMS_CLAIMED_VIDEOS";X[X.LATENCY_ACTION_CREATOR_CMS_CHANNELS]="LATENCY_ACTION_CREATOR_CMS_CHANNELS";X[X.LATENCY_ACTION_CREATOR_CMS_ASSETS]="LATENCY_ACTION_CREATOR_CMS_ASSETS";
X[X.LATENCY_ACTION_CREATOR_CMS_ANALYTICS]="LATENCY_ACTION_CREATOR_CMS_ANALYTICS";X[X.LATENCY_ACTION_CREATOR_CHANNEL_COMMENTS]="LATENCY_ACTION_CREATOR_CHANNEL_COMMENTS";X[X.LATENCY_ACTION_CREATOR_CHANNEL_ANALYTICS]="LATENCY_ACTION_CREATOR_CHANNEL_ANALYTICS";X[X.LATENCY_ACTION_CREATOR_ARTIST_PROFILE]="LATENCY_ACTION_CREATOR_ARTIST_PROFILE";X[X.LATENCY_ACTION_CREATOR_ARTIST_CONCERTS]="LATENCY_ACTION_CREATOR_ARTIST_CONCERTS";X[X.LATENCY_ACTION_CREATOR_ARTIST_ANALYTICS]="LATENCY_ACTION_CREATOR_ARTIST_ANALYTICS";
X[X.LATENCY_ACTION_CREATOR_ANALYTICS_EXPLORE]="LATENCY_ACTION_CREATOR_ANALYTICS_EXPLORE";X[X.LATENCY_ACTION_EXPERIMENTAL_WATCH_UI]="LATENCY_ACTION_EXPERIMENTAL_WATCH_UI";X[X.LATENCY_ACTION_STORYBOARD_THUMBNAILS]="LATENCY_ACTION_STORYBOARD_THUMBNAILS";X[X.LATENCY_ACTION_SEARCH_THUMBNAILS]="LATENCY_ACTION_SEARCH_THUMBNAILS";X[X.LATENCY_ACTION_ON_DEVICE_MODEL_DOWNLOAD]="LATENCY_ACTION_ON_DEVICE_MODEL_DOWNLOAD";X[X.LATENCY_ACTION_VOICE_ASSISTANT]="LATENCY_ACTION_VOICE_ASSISTANT";
X[X.LATENCY_ACTION_SEARCH_UI]="LATENCY_ACTION_SEARCH_UI";X[X.LATENCY_ACTION_SUGGEST]="LATENCY_ACTION_SUGGEST";X[X.LATENCY_ACTION_AUTO_SEARCH]="LATENCY_ACTION_AUTO_SEARCH";X[X.LATENCY_ACTION_DOWNLOADS]="LATENCY_ACTION_DOWNLOADS";X[X.LATENCY_ACTION_EXPLORE]="LATENCY_ACTION_EXPLORE";X[X.LATENCY_ACTION_VIDEO_LIST]="LATENCY_ACTION_VIDEO_LIST";X[X.LATENCY_ACTION_HOME_RESUME]="LATENCY_ACTION_HOME_RESUME";X[X.LATENCY_ACTION_SUBSCRIPTIONS_LIST]="LATENCY_ACTION_SUBSCRIPTIONS_LIST";
X[X.LATENCY_ACTION_THUMBNAIL_LOAD]="LATENCY_ACTION_THUMBNAIL_LOAD";X[X.LATENCY_ACTION_FIRST_THUMBNAIL_LOAD]="LATENCY_ACTION_FIRST_THUMBNAIL_LOAD";X[X.LATENCY_ACTION_SUBSCRIPTIONS_FEED]="LATENCY_ACTION_SUBSCRIPTIONS_FEED";X[X.LATENCY_ACTION_SUBSCRIPTIONS]="LATENCY_ACTION_SUBSCRIPTIONS";X[X.LATENCY_ACTION_TRENDING]="LATENCY_ACTION_TRENDING";X[X.LATENCY_ACTION_LIBRARY]="LATENCY_ACTION_LIBRARY";X[X.LATENCY_ACTION_VIDEO_THUMBNAIL]="LATENCY_ACTION_VIDEO_THUMBNAIL";X[X.LATENCY_ACTION_SHOW_MORE]="LATENCY_ACTION_SHOW_MORE";
X[X.LATENCY_ACTION_VIDEO_PREVIEW]="LATENCY_ACTION_VIDEO_PREVIEW";X[X.LATENCY_ACTION_AD_TO_AD]="LATENCY_ACTION_AD_TO_AD";X[X.LATENCY_ACTION_VIDEO_TO_AD]="LATENCY_ACTION_VIDEO_TO_AD";X[X.LATENCY_ACTION_AD_TO_VIDEO]="LATENCY_ACTION_AD_TO_VIDEO";X[X.LATENCY_ACTION_DIRECT_PLAYBACK]="LATENCY_ACTION_DIRECT_PLAYBACK";X[X.LATENCY_ACTION_PREBUFFER_VIDEO]="LATENCY_ACTION_PREBUFFER_VIDEO";X[X.LATENCY_ACTION_PREFETCH_VIDEO]="LATENCY_ACTION_PREFETCH_VIDEO";X[X.LATENCY_ACTION_STARTUP]="LATENCY_ACTION_STARTUP";
X[X.LATENCY_ACTION_ONBOARDING]="LATENCY_ACTION_ONBOARDING";X[X.LATENCY_ACTION_LOGIN]="LATENCY_ACTION_LOGIN";X[X.LATENCY_ACTION_REEL_WATCH]="LATENCY_ACTION_REEL_WATCH";X[X.LATENCY_ACTION_WATCH]="LATENCY_ACTION_WATCH";X[X.LATENCY_ACTION_RESULTS]="LATENCY_ACTION_RESULTS";X[X.LATENCY_ACTION_CHANNELS]="LATENCY_ACTION_CHANNELS";X[X.LATENCY_ACTION_HOME]="LATENCY_ACTION_HOME";X[X.LATENCY_ACTION_BROWSE]="LATENCY_ACTION_BROWSE";X[X.LATENCY_ACTION_USER_ACTION]="LATENCY_ACTION_USER_ACTION";
X[X.LATENCY_ACTION_INFRASTRUCTURE]="LATENCY_ACTION_INFRASTRUCTURE";X[X.LATENCY_ACTION_PAGE_NAVIGATION]="LATENCY_ACTION_PAGE_NAVIGATION";X[X.LATENCY_ACTION_UNKNOWN]="LATENCY_ACTION_UNKNOWN";var Qv={LATENCY_NETWORK_MOBILE:2,LATENCY_NETWORK_WIFI:1,LATENCY_NETWORK_UNKNOWN:0};Qv[Qv.LATENCY_NETWORK_MOBILE]="LATENCY_NETWORK_MOBILE";Qv[Qv.LATENCY_NETWORK_WIFI]="LATENCY_NETWORK_WIFI";Qv[Qv.LATENCY_NETWORK_UNKNOWN]="LATENCY_NETWORK_UNKNOWN";
var Y={CONN_INVALID:31,CONN_CELLULAR_5G_NSA:12,CONN_CELLULAR_5G_SA:11,CONN_WIFI_METERED:10,CONN_CELLULAR_5G:9,CONN_DISCO:8,CONN_CELLULAR_UNKNOWN:7,CONN_CELLULAR_4G:6,CONN_CELLULAR_3G:5,CONN_CELLULAR_2G:4,CONN_WIFI:3,CONN_NONE:2,CONN_UNKNOWN:1,CONN_DEFAULT:0};Y[Y.CONN_INVALID]="CONN_INVALID";Y[Y.CONN_CELLULAR_5G_NSA]="CONN_CELLULAR_5G_NSA";Y[Y.CONN_CELLULAR_5G_SA]="CONN_CELLULAR_5G_SA";Y[Y.CONN_WIFI_METERED]="CONN_WIFI_METERED";Y[Y.CONN_CELLULAR_5G]="CONN_CELLULAR_5G";Y[Y.CONN_DISCO]="CONN_DISCO";
Y[Y.CONN_CELLULAR_UNKNOWN]="CONN_CELLULAR_UNKNOWN";Y[Y.CONN_CELLULAR_4G]="CONN_CELLULAR_4G";Y[Y.CONN_CELLULAR_3G]="CONN_CELLULAR_3G";Y[Y.CONN_CELLULAR_2G]="CONN_CELLULAR_2G";Y[Y.CONN_WIFI]="CONN_WIFI";Y[Y.CONN_NONE]="CONN_NONE";Y[Y.CONN_UNKNOWN]="CONN_UNKNOWN";Y[Y.CONN_DEFAULT]="CONN_DEFAULT";
var Z={DETAILED_NETWORK_TYPE_NR_NSA:126,DETAILED_NETWORK_TYPE_NR_SA:125,DETAILED_NETWORK_TYPE_INTERNAL_WIFI_IMPAIRED:124,DETAILED_NETWORK_TYPE_APP_WIFI_HOTSPOT:123,DETAILED_NETWORK_TYPE_DISCONNECTED:122,DETAILED_NETWORK_TYPE_NON_MOBILE_UNKNOWN:121,DETAILED_NETWORK_TYPE_MOBILE_UNKNOWN:120,DETAILED_NETWORK_TYPE_WIMAX:119,DETAILED_NETWORK_TYPE_ETHERNET:118,DETAILED_NETWORK_TYPE_BLUETOOTH:117,DETAILED_NETWORK_TYPE_WIFI:116,DETAILED_NETWORK_TYPE_LTE:115,DETAILED_NETWORK_TYPE_HSPAP:114,DETAILED_NETWORK_TYPE_EHRPD:113,
DETAILED_NETWORK_TYPE_EVDO_B:112,DETAILED_NETWORK_TYPE_UMTS:111,DETAILED_NETWORK_TYPE_IDEN:110,DETAILED_NETWORK_TYPE_HSUPA:109,DETAILED_NETWORK_TYPE_HSPA:108,DETAILED_NETWORK_TYPE_HSDPA:107,DETAILED_NETWORK_TYPE_EVDO_A:106,DETAILED_NETWORK_TYPE_EVDO_0:105,DETAILED_NETWORK_TYPE_CDMA:104,DETAILED_NETWORK_TYPE_1_X_RTT:103,DETAILED_NETWORK_TYPE_GPRS:102,DETAILED_NETWORK_TYPE_EDGE:101,DETAILED_NETWORK_TYPE_UNKNOWN:0};Z[Z.DETAILED_NETWORK_TYPE_NR_NSA]="DETAILED_NETWORK_TYPE_NR_NSA";
Z[Z.DETAILED_NETWORK_TYPE_NR_SA]="DETAILED_NETWORK_TYPE_NR_SA";Z[Z.DETAILED_NETWORK_TYPE_INTERNAL_WIFI_IMPAIRED]="DETAILED_NETWORK_TYPE_INTERNAL_WIFI_IMPAIRED";Z[Z.DETAILED_NETWORK_TYPE_APP_WIFI_HOTSPOT]="DETAILED_NETWORK_TYPE_APP_WIFI_HOTSPOT";Z[Z.DETAILED_NETWORK_TYPE_DISCONNECTED]="DETAILED_NETWORK_TYPE_DISCONNECTED";Z[Z.DETAILED_NETWORK_TYPE_NON_MOBILE_UNKNOWN]="DETAILED_NETWORK_TYPE_NON_MOBILE_UNKNOWN";Z[Z.DETAILED_NETWORK_TYPE_MOBILE_UNKNOWN]="DETAILED_NETWORK_TYPE_MOBILE_UNKNOWN";
Z[Z.DETAILED_NETWORK_TYPE_WIMAX]="DETAILED_NETWORK_TYPE_WIMAX";Z[Z.DETAILED_NETWORK_TYPE_ETHERNET]="DETAILED_NETWORK_TYPE_ETHERNET";Z[Z.DETAILED_NETWORK_TYPE_BLUETOOTH]="DETAILED_NETWORK_TYPE_BLUETOOTH";Z[Z.DETAILED_NETWORK_TYPE_WIFI]="DETAILED_NETWORK_TYPE_WIFI";Z[Z.DETAILED_NETWORK_TYPE_LTE]="DETAILED_NETWORK_TYPE_LTE";Z[Z.DETAILED_NETWORK_TYPE_HSPAP]="DETAILED_NETWORK_TYPE_HSPAP";Z[Z.DETAILED_NETWORK_TYPE_EHRPD]="DETAILED_NETWORK_TYPE_EHRPD";Z[Z.DETAILED_NETWORK_TYPE_EVDO_B]="DETAILED_NETWORK_TYPE_EVDO_B";
Z[Z.DETAILED_NETWORK_TYPE_UMTS]="DETAILED_NETWORK_TYPE_UMTS";Z[Z.DETAILED_NETWORK_TYPE_IDEN]="DETAILED_NETWORK_TYPE_IDEN";Z[Z.DETAILED_NETWORK_TYPE_HSUPA]="DETAILED_NETWORK_TYPE_HSUPA";Z[Z.DETAILED_NETWORK_TYPE_HSPA]="DETAILED_NETWORK_TYPE_HSPA";Z[Z.DETAILED_NETWORK_TYPE_HSDPA]="DETAILED_NETWORK_TYPE_HSDPA";Z[Z.DETAILED_NETWORK_TYPE_EVDO_A]="DETAILED_NETWORK_TYPE_EVDO_A";Z[Z.DETAILED_NETWORK_TYPE_EVDO_0]="DETAILED_NETWORK_TYPE_EVDO_0";Z[Z.DETAILED_NETWORK_TYPE_CDMA]="DETAILED_NETWORK_TYPE_CDMA";
Z[Z.DETAILED_NETWORK_TYPE_1_X_RTT]="DETAILED_NETWORK_TYPE_1_X_RTT";Z[Z.DETAILED_NETWORK_TYPE_GPRS]="DETAILED_NETWORK_TYPE_GPRS";Z[Z.DETAILED_NETWORK_TYPE_EDGE]="DETAILED_NETWORK_TYPE_EDGE";Z[Z.DETAILED_NETWORK_TYPE_UNKNOWN]="DETAILED_NETWORK_TYPE_UNKNOWN";var Rv={LATENCY_PLAYER_RTSP:7,LATENCY_PLAYER_HTML5_INLINE:6,LATENCY_PLAYER_HTML5_FULLSCREEN:5,LATENCY_PLAYER_HTML5:4,LATENCY_PLAYER_FRAMEWORK:3,LATENCY_PLAYER_FLASH:2,LATENCY_PLAYER_EXO:1,LATENCY_PLAYER_UNKNOWN:0};Rv[Rv.LATENCY_PLAYER_RTSP]="LATENCY_PLAYER_RTSP";
Rv[Rv.LATENCY_PLAYER_HTML5_INLINE]="LATENCY_PLAYER_HTML5_INLINE";Rv[Rv.LATENCY_PLAYER_HTML5_FULLSCREEN]="LATENCY_PLAYER_HTML5_FULLSCREEN";Rv[Rv.LATENCY_PLAYER_HTML5]="LATENCY_PLAYER_HTML5";Rv[Rv.LATENCY_PLAYER_FRAMEWORK]="LATENCY_PLAYER_FRAMEWORK";Rv[Rv.LATENCY_PLAYER_FLASH]="LATENCY_PLAYER_FLASH";Rv[Rv.LATENCY_PLAYER_EXO]="LATENCY_PLAYER_EXO";Rv[Rv.LATENCY_PLAYER_UNKNOWN]="LATENCY_PLAYER_UNKNOWN";
var Sv={LATENCY_AD_BREAK_TYPE_POSTROLL:3,LATENCY_AD_BREAK_TYPE_MIDROLL:2,LATENCY_AD_BREAK_TYPE_PREROLL:1,LATENCY_AD_BREAK_TYPE_UNKNOWN:0};Sv[Sv.LATENCY_AD_BREAK_TYPE_POSTROLL]="LATENCY_AD_BREAK_TYPE_POSTROLL";Sv[Sv.LATENCY_AD_BREAK_TYPE_MIDROLL]="LATENCY_AD_BREAK_TYPE_MIDROLL";Sv[Sv.LATENCY_AD_BREAK_TYPE_PREROLL]="LATENCY_AD_BREAK_TYPE_PREROLL";Sv[Sv.LATENCY_AD_BREAK_TYPE_UNKNOWN]="LATENCY_AD_BREAK_TYPE_UNKNOWN";var Tv={LATENCY_ACTION_ERROR_STARTUP_TIMEOUT:1,LATENCY_ACTION_ERROR_UNSPECIFIED:0};
Tv[Tv.LATENCY_ACTION_ERROR_STARTUP_TIMEOUT]="LATENCY_ACTION_ERROR_STARTUP_TIMEOUT";Tv[Tv.LATENCY_ACTION_ERROR_UNSPECIFIED]="LATENCY_ACTION_ERROR_UNSPECIFIED";var Uv={LIVE_STREAM_MODE_WINDOW:5,LIVE_STREAM_MODE_POST:4,LIVE_STREAM_MODE_LP:3,LIVE_STREAM_MODE_LIVE:2,LIVE_STREAM_MODE_DVR:1,LIVE_STREAM_MODE_UNKNOWN:0};Uv[Uv.LIVE_STREAM_MODE_WINDOW]="LIVE_STREAM_MODE_WINDOW";Uv[Uv.LIVE_STREAM_MODE_POST]="LIVE_STREAM_MODE_POST";Uv[Uv.LIVE_STREAM_MODE_LP]="LIVE_STREAM_MODE_LP";
Uv[Uv.LIVE_STREAM_MODE_LIVE]="LIVE_STREAM_MODE_LIVE";Uv[Uv.LIVE_STREAM_MODE_DVR]="LIVE_STREAM_MODE_DVR";Uv[Uv.LIVE_STREAM_MODE_UNKNOWN]="LIVE_STREAM_MODE_UNKNOWN";var Vv={VIDEO_STREAM_TYPE_VOD:3,VIDEO_STREAM_TYPE_DVR:2,VIDEO_STREAM_TYPE_LIVE:1,VIDEO_STREAM_TYPE_UNSPECIFIED:0};Vv[Vv.VIDEO_STREAM_TYPE_VOD]="VIDEO_STREAM_TYPE_VOD";Vv[Vv.VIDEO_STREAM_TYPE_DVR]="VIDEO_STREAM_TYPE_DVR";Vv[Vv.VIDEO_STREAM_TYPE_LIVE]="VIDEO_STREAM_TYPE_LIVE";Vv[Vv.VIDEO_STREAM_TYPE_UNSPECIFIED]="VIDEO_STREAM_TYPE_UNSPECIFIED";
var Wv={YT_IDB_TRANSACTION_TYPE_READ:2,YT_IDB_TRANSACTION_TYPE_WRITE:1,YT_IDB_TRANSACTION_TYPE_UNKNOWN:0};Wv[Wv.YT_IDB_TRANSACTION_TYPE_READ]="YT_IDB_TRANSACTION_TYPE_READ";Wv[Wv.YT_IDB_TRANSACTION_TYPE_WRITE]="YT_IDB_TRANSACTION_TYPE_WRITE";Wv[Wv.YT_IDB_TRANSACTION_TYPE_UNKNOWN]="YT_IDB_TRANSACTION_TYPE_UNKNOWN";var Xv={PLAYER_ROTATION_TYPE_PORTRAIT_TO_FULLSCREEN:2,PLAYER_ROTATION_TYPE_FULLSCREEN_TO_PORTRAIT:1,PLAYER_ROTATION_TYPE_UNKNOWN:0};Xv[Xv.PLAYER_ROTATION_TYPE_PORTRAIT_TO_FULLSCREEN]="PLAYER_ROTATION_TYPE_PORTRAIT_TO_FULLSCREEN";
Xv[Xv.PLAYER_ROTATION_TYPE_FULLSCREEN_TO_PORTRAIT]="PLAYER_ROTATION_TYPE_FULLSCREEN_TO_PORTRAIT";Xv[Xv.PLAYER_ROTATION_TYPE_UNKNOWN]="PLAYER_ROTATION_TYPE_UNKNOWN";var Yv="actionVisualElement spinnerInfo resourceInfo playerInfo commentInfo mdxInfo watchInfo thumbnailLoadInfo creatorInfo unpluggedInfo reelInfo subscriptionsFeedInfo requestIds mediaBrowserActionInfo musicLoadActionInfo shoppingInfo webViewInfo prefetchInfo accelerationSession commerceInfo webInfo tvInfo kabukiInfo mwebInfo musicInfo".split(" ");var Zv=z.ytLoggingLatencyUsageStats_||{};A("ytLoggingLatencyUsageStats_",Zv);function $v(){this.h=0}
function aw(){$v.h||($v.h=new $v);return $v.h}
$v.prototype.tick=function(a,b,c,d){bw(this,"tick_"+a+"_"+b)||(c={timestamp:c,cttAuthInfo:d},P("web_csi_via_jspb")?(d=new Tl,F(d,1,a),F(d,2,b),a=new Wl,ce(a,Tl,5,Xl,d),Gt(a,c)):bo("latencyActionTicked",{tickName:a,clientActionNonce:b},c))};
$v.prototype.info=function(a,b,c){var d=Object.keys(a).join("");bw(this,"info_"+d+"_"+b)||(a=Object.assign({},a),a.clientActionNonce=b,bo("latencyActionInfo",a,{cttAuthInfo:c}))};
$v.prototype.jspbInfo=function(a,b,c){for(var d="",e=0;e<a.toJSON().length;e++)void 0!==a.toJSON()[e]&&(d=0===e?d.concat(""+e):d.concat("_"+e));bw(this,"info_"+d+"_"+b)||(F(a,2,b),b={cttAuthInfo:c},c=new Wl,ce(c,Pl,7,Xl,a),Gt(c,b))};
$v.prototype.span=function(a,b,c){var d=Object.keys(a).join("");bw(this,"span_"+d+"_"+b)||(a.clientActionNonce=b,bo("latencyActionSpan",a,{cttAuthInfo:c}))};
function bw(a,b){Zv[b]=Zv[b]||{count:0};var c=Zv[b];c.count++;c.time=R();a.h||(a.h=Mn(function(){var d=R(),e;for(e in Zv)Zv[e]&&6E4<d-Zv[e].time&&delete Zv[e];a&&(a.h=0)},5E3));
return 5<c.count?(6===c.count&&1>1E5*Math.random()&&(c=new Q("CSI data exceeded logging limit with key",b.split("_")),0<=b.indexOf("plev")||Ut(c)),!0):!1}
;function cw(){var a=["ol"];Hv("").info.actionType="embed";a&&nm("TIMING_AFT_KEYS",a);nm("TIMING_ACTION","embed");if(P("web_csi_via_jspb")){a=M("TIMING_INFO",{});var b=new Pl;a=r(Object.entries(a));for(var c=a.next();!c.done;c=a.next()){var d=r(c.value);c=d.next().value;d=d.next().value;switch(c){case "GetBrowse_rid":var e=new Sl;F(e,1,c);F(e,2,String(d));Rl(b,e);break;case "GetGuide_rid":e=new Sl;F(e,1,c);F(e,2,String(d));Rl(b,e);break;case "GetHome_rid":e=new Sl;F(e,1,c);F(e,2,String(d));Rl(b,e);
break;case "GetPlayer_rid":e=new Sl;F(e,1,c);F(e,2,String(d));Rl(b,e);break;case "GetSearch_rid":e=new Sl;F(e,1,c);F(e,2,String(d));Rl(b,e);break;case "GetSettings_rid":e=new Sl;F(e,1,c);F(e,2,String(d));Rl(b,e);break;case "GetTrending_rid":e=new Sl;F(e,1,c);F(e,2,String(d));Rl(b,e);break;case "GetWatchNext_rid":e=new Sl;F(e,1,c);F(e,2,String(d));Rl(b,e);break;case "yt_red":F(b,14,!!d);break;case "yt_ad":F(b,9,!!d)}}dw(b);b=new Pl;b=F(b,25,!0);b=F(b,1,X[Ov(M("TIMING_ACTION"))]);(a=M("PREVIOUS_ACTION"))&&
F(b,13,X[Ov(a)]);(a=M("CLIENT_PROTOCOL"))&&F(b,33,a);(a=M("CLIENT_TRANSPORT"))&&F(b,34,a);(a=lu())&&"UNDEFINED_CSN"!==a&&F(b,4,a);a=ew();1!==a&&-1!==a||F(b,6,!0);a=xv();P("skip_setting_info_in_csi_data_object")&&yv();F(b,3,"cold");fw(a);a=gw();if(0<a.length)for(a=r(a),c=a.next();!c.done;c=a.next())c=c.value,d=new Ol,F(d,1,c),ee(b,83,Ol,d);dw(b)}else{a=M("TIMING_INFO",{});for(b in a)a.hasOwnProperty(b)&&hw(b,a[b]);b={isNavigation:!0,actionType:Ov(M("TIMING_ACTION"))};if(a=M("PREVIOUS_ACTION"))b.previousAction=
Ov(a);if(a=M("CLIENT_PROTOCOL"))b.httpProtocol=a;if(a=M("CLIENT_TRANSPORT"))b.transportProtocol=a;(a=lu())&&"UNDEFINED_CSN"!==a&&(b.clientScreenNonce=a);a=ew();if(1===a||-1===a)b.isVisible=!0;P("skip_setting_info_in_csi_data_object")&&yv();xv();b.loadType="cold";fw(xv());a=gw();if(0<a.length)for(b.resourceInfo=[],a=r(a),c=a.next();!c.done;c=a.next())b.resourceInfo.push({resourceCache:c.value});iw(b)}b=xv();a=Bv();if(!(P("skip_setting_info_in_csi_data_object")&&"cold"!==yv().loadType||"cold"!==b.yt_lt&&
"cold"!==a.loadType)){c=zv();d=Av();d=d.gelTicks?d.gelTicks:d.gelTicks={};for(var f in c)if(!(f in d))if("number"===typeof c[f])jw(f,sv(f));else if(P("log_repeated_ytcsi_ticks")){e=r(c[f]);for(var g=e.next();!g.done;g=e.next())jw(f.slice(1),g.value)}f={};c=!1;d=r(Object.keys(b));for(e=d.next();!e.done;e=d.next())e=e.value,(e=Pv(e,b[e]))&&!Ev(Bv(),e)&&(gv(a,e),gv(f,e),c=!0);c&&iw(f)}A("ytglobal.timingready_",!0);f=M("TIMING_ACTION");B("ytglobal.timingready_")&&f&&"_start"in zv()&&rv()&&Dv()}
function hw(a,b,c,d){if(null!==b){var e=xv(c);P("skip_setting_info_in_csi_data_object")?"yt_lt"===a&&(e="string"===typeof b?b:""+b,yv(c).loadType=e):e[a]=b;(a=Pv(a,b,c))&&iw(a,c,d)}}
function iw(a,b,c){if(!P("web_csi_via_jspb")||(void 0===c?0:c))c=Hv(b||""),gv(c.info,a),P("skip_setting_info_in_csi_data_object")&&a.loadType&&(c=a.loadType,yv(b).loadType=c),gv(Bv(b),a),c=Cv(b),b=wv(b).cttAuthInfo,aw().info(a,c,b);else{c=new Pl;var d=Object.keys(a);a=Object.values(a);for(var e=0;e<d.length;e++){var f=d[e];try{switch(f){case "actionType":F(c,1,X[a[e]]);break;case "clientActionNonce":F(c,2,a[e]);break;case "clientScreenNonce":F(c,4,a[e]);break;case "loadType":F(c,3,a[e]);break;case "isPrewarmedLaunch":F(c,
92,a[e]);break;case "isFirstInstall":F(c,55,a[e]);break;case "networkType":F(c,5,Qv[a[e]]);break;case "connectionType":F(c,26,Y[a[e]]);break;case "detailedConnectionType":F(c,27,Z[a[e]]);break;case "isVisible":F(c,6,a[e]);break;case "playerType":F(c,7,Rv[a[e]]);break;case "clientPlaybackNonce":F(c,8,a[e]);break;case "adClientPlaybackNonce":F(c,28,a[e]);break;case "previousCpn":F(c,77,a[e]);break;case "targetCpn":F(c,76,a[e]);break;case "isMonetized":F(c,9,a[e]);break;case "isPrerollAllowed":F(c,16,
a[e]);break;case "isPrerollShown":F(c,17,a[e]);break;case "adType":F(c,12,a[e]);break;case "adTypesAllowed":F(c,36,a[e]);break;case "adNetworks":F(c,37,a[e]);break;case "previousAction":F(c,13,X[a[e]]);break;case "isRedSubscriber":F(c,14,a[e]);break;case "serverTimeMs":F(c,15,a[e]);break;case "videoId":c.setVideoId(a[e]);break;case "adVideoId":F(c,20,a[e]);break;case "targetVideoId":F(c,78,a[e]);break;case "adBreakType":F(c,21,Sv[a[e]]);break;case "isNavigation":F(c,25,a[e]);break;case "viewportHeight":F(c,
29,a[e]);break;case "viewportWidth":F(c,30,a[e]);break;case "screenHeight":F(c,84,a[e]);break;case "screenWidth":F(c,85,a[e]);break;case "browseId":F(c,31,a[e]);break;case "isCacheHit":F(c,32,a[e]);break;case "httpProtocol":F(c,33,a[e]);break;case "transportProtocol":F(c,34,a[e]);break;case "searchQuery":F(c,41,a[e]);break;case "isContinuation":F(c,42,a[e]);break;case "availableProcessors":F(c,43,a[e]);break;case "sdk":F(c,44,a[e]);break;case "isLocalStream":F(c,45,a[e]);break;case "navigationRequestedSameUrl":F(c,
64,a[e]);break;case "shellStartupDurationMs":F(c,70,a[e]);break;case "appInstallDataAgeMs":F(c,73,a[e]);break;case "latencyActionError":F(c,71,Tv[a[e]]);break;case "actionStep":F(c,79,a[e]);break;case "jsHeapSizeLimit":F(c,80,a[e]);break;case "totalJsHeapSize":F(c,81,a[e]);break;case "usedJsHeapSize":F(c,82,a[e]);break;case "sourceVideoDurationMs":F(c,90,a[e]);break;case "videoOutputFrames":F(c,93,a[e]);break;case "isResume":F(c,104,a[e]);break;case "debugTicksExcluded":F(c,105,a[e]);break;case "adPrebufferedTimeSecs":F(c,
39,a[e]);break;case "isLivestream":F(c,47,a[e]);break;case "liveStreamMode":F(c,91,Uv[a[e]]);break;case "adCpn2":F(c,48,a[e]);break;case "adDaiDriftMillis":F(c,49,a[e]);break;case "videoStreamType":F(c,53,Vv[a[e]]);break;case "playbackRequiresTap":F(c,56,a[e]);break;case "performanceNavigationTiming":F(c,67,a[e]);break;case "transactionType":F(c,74,Wv[a[e]]);break;case "playerRotationType":F(c,101,Xv[a[e]]);break;case "allowedPreroll":F(c,10,a[e]);break;case "shownPreroll":F(c,11,a[e]);break;case "getHomeRequestId":F(c,
57,a[e]);break;case "getSearchRequestId":F(c,60,a[e]);break;case "getPlayerRequestId":F(c,61,a[e]);break;case "getWatchNextRequestId":F(c,62,a[e]);break;case "getBrowseRequestId":F(c,63,a[e]);break;case "getLibraryRequestId":F(c,66,a[e]);break;case "isTransformerEnabledForFeature":F(c,106,a[e]);break;default:Yv.includes(f)&&zm(new Q("Codegen laipb translator asked to translate message field",""+f))}}catch(g){zm(Error("Codegen laipb translator failed to set "+f))}}dw(c,b)}}
function dw(a,b){if(P("skip_setting_info_in_csi_data_object")){var c=ge(Td(a,3),"");c&&(yv(b).loadType=c)}else c=Av(b),c.jspbInfos||(c.jspbInfos=[]),c.jspbInfos.push(me(a));Hv(b||"").jspbInfo.push(a);c=Cv(b);b=wv(b).cttAuthInfo;aw().jspbInfo(a,c,b)}
function jw(a,b,c){if(!b&&"_"!==a[0]){var d=a;T.mark&&(0==d.lastIndexOf("mark_",0)||(d="mark_"+d),c&&(d+=" ("+c+")"),T.mark(d))}d=Hv(c||"");d.tick[a]=b||R();if(d.callback&&d.callback[a]){d=r(d.callback[a]);for(var e=d.next();!e.done;e=d.next())e=e.value,e()}d=Av(c);d.gelTicks&&(d.gelTicks[a]=!0);e=zv(c);d=b||R();P("log_repeated_ytcsi_ticks")?a in e||(e[a]=d):e[a]=d;e=Cv(c);var f=wv(c).cttAuthInfo;"_start"===a?(a=aw(),bw(a,"baseline_"+e)||(b={timestamp:b,cttAuthInfo:f},P("web_csi_via_jspb")?(a=new Nl,
F(a,1,e),e=new Wl,ce(e,Nl,6,Xl,a),Gt(e,b)):bo("latencyActionBaselined",{clientActionNonce:e},b))):aw().tick(a,e,b,f);Dv(c);return d}
function kw(){var a=Cv();requestAnimationFrame(function(){setTimeout(function(){a===Cv()&&jw("ol",void 0,void 0)},0)})}
function ew(){var a=document;if("visibilityState"in a)a=a.visibilityState;else{var b=Zr+"VisibilityState";a=b in a?a[b]:void 0}switch(a){case "hidden":return 0;case "visible":return 1;case "prerender":return 2;case "unloaded":return 3;default:return-1}}
function fw(a){var b=tv(),c=vv(),d=M("CSI_START_TIMESTAMP_MILLIS",0);0<d&&!P("embeds_web_enable_csi_start_override_killswitch")&&(c=d);c&&(jw("srt",b.responseStart),1!==a.prerender&&jw("_start",c,void 0));a=Fv();0<a&&jw("fpt",a);a=tv();a.isPerformanceNavigationTiming&&iw({performanceNavigationTiming:!0});jw("nreqs",a.requestStart,void 0);jw("nress",a.responseStart,void 0);jw("nrese",a.responseEnd,void 0);0<a.redirectEnd-a.redirectStart&&(jw("nrs",a.redirectStart,void 0),jw("nre",a.redirectEnd,void 0));
0<a.domainLookupEnd-a.domainLookupStart&&(jw("ndnss",a.domainLookupStart,void 0),jw("ndnse",a.domainLookupEnd,void 0));0<a.connectEnd-a.connectStart&&(jw("ntcps",a.connectStart,void 0),jw("ntcpe",a.connectEnd,void 0));a.secureConnectionStart>=vv()&&0<a.connectEnd-a.secureConnectionStart&&(jw("nstcps",a.secureConnectionStart,void 0),jw("ntcpe",a.connectEnd,void 0));T&&"getEntriesByType"in T&&lw()}
function mw(a,b){a=document.querySelector(a);if(!a)return!1;var c="",d=a.nodeName;"SCRIPT"===d?(c=a.src,c||(c=a.getAttribute("data-timing-href"))&&(c=window.location.protocol+c)):"LINK"===d&&(c=a.href);hc()&&a.setAttribute("nonce",hc());return c?(a=T.getEntriesByName(c))&&a[0]&&(a=a[0],c=vv(),jw("rsf_"+b,c+Math.round(a.fetchStart)),jw("rse_"+b,c+Math.round(a.responseEnd)),void 0!==a.transferSize&&0===a.transferSize)?!0:!1:!1}
function gw(){var a=[];if(document.querySelector&&T&&T.getEntriesByName)for(var b in qv)if(qv.hasOwnProperty(b)){var c=qv[b];mw(b,c)&&a.push(c)}return a}
function lw(){var a=window.location.protocol,b=T.getEntriesByType("resource");b=ib(b,function(c){return 0===c.name.indexOf(a+"//fonts.gstatic.com/s/")});
(b=kb(b,function(c,d){return d.duration>c.duration?d:c},{duration:0}))&&0<b.startTime&&0<b.responseEnd&&(jw("wffs",uv(b.startTime)),jw("wffe",uv(b.responseEnd)))}
var nw=window;nw.ytcsi&&(nw.ytcsi.info=hw,nw.ytcsi.tick=jw);var ow="tokens consistency mss client_location entities response_received_commands store PLAYER_PRELOAD".split(" "),pw=["type.googleapis.com/youtube.api.pfiinnertube.YoutubeApiInnertube.BrowseResponse"];function qw(a,b,c,d){this.m=a;this.W=b;this.l=c;this.j=d;this.i=void 0;this.h=new Map;a.Pb||(a.Pb={});a.Pb=Object.assign({},fv,a.Pb)}
function rw(a,b,c,d){if(void 0!==qw.h){if(d=qw.h,a=[a!==d.m,b!==d.W,c!==d.l,!1,!1,void 0!==d.i],a.some(function(e){return e}))throw new Q("InnerTubeTransportService is already initialized",a);
}else qw.h=new qw(a,b,c,d)}
function sw(a){var b={signalServiceEndpoint:{signal:"GET_DATASYNC_IDS"}};var c=void 0===c?Pu:c;var d=Yu(b,a.m);if(!d)return Hf(new Q("Error: No request builder found for command.",b));var e=d.m(b,void 0,c);return e?new Cf(function(f){var g,h,k;return x(function(m){if(1==m.h){h="cors"===(null==(g=e.kb)?void 0:g.mode)?"cors":void 0;if(a.l.df){var n=e.config,p;n=null==n?void 0:null==(p=n.ac)?void 0:p.sessionIndex;p=Ou({sessionIndex:n});k=Object.assign({},tw(h),p);return m.A(2)}return w(m,uw(e.config,
h),3)}2!=m.h&&(k=m.i);f(vw(a,e,k));m.h=0})}):Hf(new Q("Error: Failed to build request for command.",b))}
function ww(a,b,c){var d;if(b&&!(null==b?0:null==(d=b.Lt)?0:d.Ot)&&a.j){d=r(ow);for(var e=d.next();!e.done;e=d.next())e=e.value,a.j[e]&&a.j[e].handleResponse(b,c)}}
function vw(a,b,c){var d,e,f,g,h,k,m,n,p,v,t,y,D,E,O,N,S,aa,W,xb,Ya,ra,I,pa,ha,df,ef,Od;return x(function(ua){switch(ua.h){case 1:ua.A(2);break;case 3:if((d=ua.i)&&!d.isExpired())return ua.return(Promise.resolve(d.h()));case 2:if(null==(e=b)?0:null==(f=e.La)?0:f.context)for(g=r([]),h=g.next();!h.done;h=g.next())k=h.value,k.Ht(b.La.context);if(null==(m=a.i)||!m.Mt(b.input,b.La)){ua.A(4);break}return w(ua,a.i.Ct(b.input,b.La),5);case 5:return n=ua.i,P("kevlar_process_local_innertube_responses_killswitch")||
ww(a,n,b),ua.return(n);case 4:return(t=null==(v=b.config)?void 0:v.Va)&&a.h.has(t)&&P("web_memoize_inflight_requests")?p=a.h.get(t):(y=JSON.stringify(b.La),O=null!=(E=null==(D=b.kb)?void 0:D.headers)?E:{},b.kb=Object.assign({},b.kb,{headers:Object.assign({},O,c)}),N=Object.assign({},b.kb),"POST"===b.kb.method&&(N=Object.assign({},N,{body:y})),(null==(S=b.config)?0:S.Pe)&&jw(b.config.Pe),aa=function(){return a.W.fetch(b.input,N,b.config)},p=aa(),t&&a.h.set(t,p)),w(ua,p,6);
case 6:if((W=ua.i)&&"error"in W&&(null==(xb=W)?0:null==(Ya=xb.error)?0:Ya.details))for(ra=W.error.details,I=r(ra),pa=I.next();!pa.done;pa=I.next())ha=pa.value,(df=ha["@type"])&&-1<pw.indexOf(df)&&(delete ha["@type"],W=ha);t&&a.h.has(t)&&a.h.delete(t);(null==(ef=b.config)?0:ef.Qe)&&jw(b.config.Qe);if(W||null==(Od=a.i)||!Od.tt(b.input,b.La)){ua.A(7);break}return w(ua,a.i.Bt(b.input,b.La),8);case 8:W=ua.i;case 7:return ww(a,W,b),ua.return(W||void 0)}})}
function uw(a,b){var c,d,e,f;return x(function(g){if(1==g.h){e=null==(c=a)?void 0:null==(d=c.ac)?void 0:d.sessionIndex;var h=Ou({sessionIndex:e});if(!(h instanceof Cf)){var k=new Cf(eb);Df(k,2,h);h=k}return w(g,h,2)}f=g.i;return g.return(Promise.resolve(Object.assign({},tw(b),f)))})}
function tw(a){var b={"Content-Type":"application/json"};M("EOM_VISITOR_DATA")?b["X-Goog-EOM-Visitor-Id"]=M("EOM_VISITOR_DATA"):M("VISITOR_DATA")&&(b["X-Goog-Visitor-Id"]=M("VISITOR_DATA"));b["X-Youtube-Bootstrap-Logged-In"]=M("LOGGED_IN",!1);"cors"!==a&&((a=M("INNERTUBE_CONTEXT_CLIENT_NAME"))&&(b["X-Youtube-Client-Name"]=a),(a=M("INNERTUBE_CONTEXT_CLIENT_VERSION"))&&(b["X-Youtube-Client-Version"]=a),(a=M("CHROME_CONNECTED_HEADER"))&&(b["X-Youtube-Chrome-Connected"]=a),(a=M("DOMAIN_ADMIN_STATE"))&&
(b["X-Youtube-Domain-Admin-State"]=a));return b}
;var xw=new zs("INNERTUBE_TRANSPORT_TOKEN");var yw=["share/get_web_player_share_panel"],zw=["feedback"],Aw=["notification/modify_channel_preference"],Bw=["browse/edit_playlist"],Cw=["subscription/subscribe"],Dw=["subscription/unsubscribe"];function Ew(){}
u(Ew,cv);Ew.prototype.j=function(){return Cw};
Ew.prototype.h=function(a){return Ls(a,hm)||void 0};
Ew.prototype.i=function(a,b,c){c=void 0===c?{}:c;b.channelIds&&(a.channelIds=b.channelIds);b.siloName&&(a.siloName=b.siloName);b.params&&(a.params=b.params);c.botguardResponse&&(a.botguardResponse=c.botguardResponse);c.feature&&(a.clientFeature=c.feature)};
ea.Object.defineProperties(Ew.prototype,{l:{configurable:!0,enumerable:!0,get:function(){return!0}}});function Fw(){}
u(Fw,cv);Fw.prototype.j=function(){return Dw};
Fw.prototype.h=function(a){return Ls(a,gm)||void 0};
Fw.prototype.i=function(a,b){b.channelIds&&(a.channelIds=b.channelIds);b.siloName&&(a.siloName=b.siloName);b.params&&(a.params=b.params)};
ea.Object.defineProperties(Fw.prototype,{l:{configurable:!0,enumerable:!0,get:function(){return!0}}});function Gw(){}
u(Gw,cv);Gw.prototype.j=function(){return zw};
Gw.prototype.h=function(a){return Ls(a,Pk)||void 0};
Gw.prototype.i=function(a,b,c){a.feedbackTokens=[];b.feedbackToken&&a.feedbackTokens.push(b.feedbackToken);if(b=b.cpn||c.cpn)a.feedbackContext={cpn:b};a.isFeedbackTokenUnencrypted=!!c.is_feedback_token_unencrypted;a.shouldMerge=!1;c.extra_feedback_tokens&&(a.shouldMerge=!0,a.feedbackTokens=a.feedbackTokens.concat(c.extra_feedback_tokens))};
ea.Object.defineProperties(Gw.prototype,{l:{configurable:!0,enumerable:!0,get:function(){return!0}}});function Hw(){}
u(Hw,cv);Hw.prototype.j=function(){return Aw};
Hw.prototype.h=function(a){return Ls(a,fm)||void 0};
Hw.prototype.i=function(a,b){b.params&&(a.params=b.params);b.secondaryParams&&(a.secondaryParams=b.secondaryParams)};function Iw(){}
u(Iw,cv);Iw.prototype.j=function(){return Bw};
Iw.prototype.h=function(a){return Ls(a,em)||void 0};
Iw.prototype.i=function(a,b){b.actions&&(a.actions=b.actions);b.params&&(a.params=b.params);b.playlistId&&(a.playlistId=b.playlistId)};function Jw(){}
u(Jw,cv);Jw.prototype.j=function(){return yw};
Jw.prototype.h=function(a){return Ls(a,dm)};
Jw.prototype.i=function(a,b,c){c=void 0===c?{}:c;b.serializedShareEntity&&(a.serializedSharedEntity=b.serializedShareEntity);c.includeListId&&(a.includeListId=!0)};var Bs=new zs("NETWORK_SLI_TOKEN");function Kw(a){this.h=a}
Kw.prototype.fetch=function(a,b){var c=this,d,e;return x(function(f){c.h&&(d=lc(oc(5,Bc(a,"key")))||"/UNKNOWN_PATH",c.h.start(d));e=new window.Request(a,b);return P("web_fetch_promise_cleanup_killswitch")?f.return(Promise.resolve(fetch(e).then(function(g){return c.handleResponse(g)}).catch(function(g){Ut(g)}))):f.return(fetch(e).then(function(g){return c.handleResponse(g)}).catch(function(g){Ut(g)}))})};
Kw.prototype.handleResponse=function(a){var b=a.text().then(function(c){return JSON.parse(c.replace(")]}'",""))});
a.redirected||a.ok?this.h&&this.h.success():(this.h&&this.h.xt(),b=b.then(function(c){Ut(new Q("Error: API fetch failed",a.status,a.url,c));return Object.assign({},c,{errorMetadata:{status:a.status}})}));
return b};
Kw[ys]=[new As];var Lw=new zs("NETWORK_MANAGER_TOKEN");var Mw;function Nw(a){oq.call(this,1,arguments);this.csn=a}
u(Nw,oq);var xq=new pq("screen-created",Nw),Ow=[],Qw=Pw,Rw=0;function Sw(a,b,c,d,e,f,g){function h(){Ut(new Q("newScreen() parent element does not have a VE - rootVe",b))}
var k=Qw(),m=new eu({veType:b,youtubeData:f,jspbYoutubeData:void 0});f={sequenceGroup:k};e&&(f.cttAuthInfo=e);P("il_via_jspb")?(e=Dl((new Cl).i(k),m.getAsJspb()),c&&c.visualElement?(m=new El,c.clientScreenNonce&&F(m,2,c.clientScreenNonce),Fl(m,c.visualElement.getAsJspb()),g&&F(m,4,Yl[g]),G(e,El,5,m)):c&&h(),d&&F(e,3,d),Lt(e,f,a)):(e={csn:k,pageVe:m.getAsJson()},c&&c.visualElement?(e.implicitGesture={parentCsn:c.clientScreenNonce,gesturedVe:c.visualElement.getAsJson()},g&&(e.implicitGesture.gestureType=
g)):c&&h(),d&&(e.cloneCsn=d),a?At("screenCreated",e,a,f):bo("screenCreated",e,f));uq(xq,new Nw(k));return k}
function Tw(a,b,c,d){var e=d.filter(function(k){k.csn!==b?(k.csn=b,k=!0):k=!1;return k}),f={cttAuthInfo:ou(b)||void 0,
sequenceGroup:b};d=r(d);for(var g=d.next();!g.done;g=d.next())g=g.value.getAsJson(),(rb(g)||!g.trackingParams&&!g.veType)&&Ut(Error("Child VE logged with no data"));if(P("il_via_jspb")){var h=Il((new Gl).i(b),c.getAsJspb());jb(e,function(k){k=k.getAsJspb();ee(h,3,xl,k)});
"UNDEFINED_CSN"===b?Uw("visualElementAttached",f,void 0,h):Mt(h,f,a)}else c={csn:b,parentVe:c.getAsJson(),childVes:jb(e,function(k){return k.getAsJson()})},"UNDEFINED_CSN"===b?Uw("visualElementAttached",f,c):a?At("visualElementAttached",c,a,f):bo("visualElementAttached",c,f)}
function Vw(a,b,c,d,e,f){Ww(a,b,c,e,f)}
function Ww(a,b,c,d,e){var f={cttAuthInfo:ou(b)||void 0,sequenceGroup:b};P("il_via_jspb")?(d=(new Ll).i(b),c=c.getAsJspb(),c=G(d,xl,2,c),c=F(c,4,1),e&&G(c,Al,3,e),"UNDEFINED_CSN"===b?Uw("visualElementShown",f,void 0,c):Ht(c,f,a)):(e={csn:b,ve:c.getAsJson(),eventType:1},d&&(e.clientData=d),"UNDEFINED_CSN"===b?Uw("visualElementShown",f,e):a?At("visualElementShown",e,a,f):bo("visualElementShown",e,f))}
function Xw(a,b,c){var d=!0,e=(d=void 0===d?!1:d)?16:8,f={cttAuthInfo:ou(b)||void 0,sequenceGroup:b,endOfSequence:d};P("il_via_jspb")?(e=(new Kl).i(b),c=c.getAsJspb(),c=G(e,xl,2,c),F(c,4,d?16:8),"UNDEFINED_CSN"===b?Uw("visualElementHidden",f,void 0,c):It(c,f,a)):(d={csn:b,ve:c.getAsJson(),eventType:e},"UNDEFINED_CSN"===b?Uw("visualElementHidden",f,d):a?At("visualElementHidden",d,a,f):bo("visualElementHidden",d,f))}
function Pw(){if(P("enable_web_96_bit_csn"))var a=au();else{a=Math.random()+"";for(var b=[],c=0,d=0;d<a.length;d++){var e=a.charCodeAt(d);255<e&&(b[c++]=e&255,e>>=8);b[c++]=e}a=cd(b,3)}return a}
function Uw(a,b,c,d){Ow.push({Oc:a,payload:c,Ta:d,options:b});Rw||(Rw=yq())}
function zq(a){if(Ow){for(var b=r(Ow),c=b.next();!c.done;c=b.next())if(c=c.value,P("il_via_jspb")&&c.Ta)switch(c.Ta.i(a.csn),c.Oc){case "screenCreated":Lt(c.Ta,c.options);break;case "visualElementAttached":Mt(c.Ta,c.options);break;case "visualElementShown":Ht(c.Ta,c.options);break;case "visualElementHidden":It(c.Ta,c.options);break;case "visualElementGestured":Jt(c.Ta,c.options);break;case "visualElementStateChanged":Kt(c.Ta,c.options);break;default:Ut(new Q("flushQueue unable to map payloadName to JSPB setter"))}else c.payload&&
(c.payload.csn=a.csn,bo(c.Oc,c.payload,c.options));Ow.length=0}Rw=0}
;function Yw(){this.l=new Set;this.h=new Set;this.m=new Map;this.client=Xr;this.csn=null}
function Zw(){Yw.h||(Yw.h=new Yw);return Yw.h}
Yw.prototype.i=function(a){this.client=a};
Yw.prototype.j=function(){this.clear();this.csn=lu()};
Yw.prototype.clear=function(){this.l.clear();this.h.clear();this.m.clear();this.csn=null};function $w(){this.j=new Set;this.h=new Set;this.l=new Map;this.client=void 0;this.csn=null}
function ax(){$w.h||($w.h=new $w);return $w.h}
$w.prototype.i=function(a){P("safe_logging_library_killswitch")?this.client=a:ym(Zw().i).bind(Zw())(a)};
$w.prototype.clear=function(){P("safe_logging_library_killswitch")?(this.j.clear(),this.h.clear(),this.l.clear(),this.csn=null):ym(Zw().clear).bind(Zw())()};function bx(){this.j=new Set;this.h=new Set;this.l=new Map}
bx.prototype.i=function(a){P("use_ts_visibilitylogger")&&ax().i(a)};
function cx(){var a=bx.getInstance();P("use_ts_visibilitylogger")?(a=ax(),P("safe_logging_library_killswitch")?(a.clear(),a.csn=lu()):ym(Zw().j).bind(Zw())()):a.clear()}
bx.prototype.clear=function(){P("use_ts_visibilitylogger")?ax().clear():(this.j.clear(),this.h.clear(),this.l.clear())};
Pa(bx);function dx(a,b){P("safe_logging_library_killswitch")?Ww(void 0,a,b):ym(Vw)(void 0,a,b,void 0,void 0,void 0)}
;function ex(){this.s=[];this.D=[];this.h=[];this.m=[];this.X=[];this.j=new Set;this.v=new Map}
ex.prototype.i=function(a){this.client=a};
function fx(a,b,c){c=void 0===c?0:c;b.then(function(d){a.j.has(c)&&a.l&&a.l();var e=lu(c),f=ju(c);if(e&&f){var g;(null==d?0:null==(g=d.response)?0:g.trackingParams)&&Tw(a.client,e,f,[fu(d.response.trackingParams)]);var h;(null==d?0:null==(h=d.playerResponse)?0:h.trackingParams)&&Tw(a.client,e,f,[fu(d.playerResponse.trackingParams)])}})}
function gx(a,b,c,d){d=void 0===d?0:d;if(a.j.has(d))a.s.push([b,c]);else{var e=lu(d);c=c||ju(d);e&&c&&Tw(a.client,e,c,[b])}}
ex.prototype.clickCommand=function(a,b,c){var d=a.clickTrackingParams;c=void 0===c?0:c;if(d)if(c=lu(void 0===c?0:c)){a=this.client;var e=fu(d);d={cttAuthInfo:ou(c)||void 0,sequenceGroup:c};P("il_via_jspb")?(b=(new Jl).i(c),e=e.getAsJspb(),b=G(b,xl,2,e),F(b,4,Yl.INTERACTION_LOGGING_GESTURE_TYPE_GENERIC_CLICK),"UNDEFINED_CSN"===c?Uw("visualElementGestured",d,void 0,b):Jt(b,d,a)):(e={csn:c,ve:e.getAsJson(),gestureType:"INTERACTION_LOGGING_GESTURE_TYPE_GENERIC_CLICK"},b&&(e.clientData=b),"UNDEFINED_CSN"===
c?Uw("visualElementGestured",d,e):a?At("visualElementGestured",e,a,d):bo("visualElementGestured",e,d));b=!0}else b=!1;else b=!1;return b};
ex.prototype.visualElementStateChanged=function(a,b,c){c=void 0===c?0:c;0===c&&this.j.has(c)?this.D.push([a,b]):hx(this,a,b,c)};
function hx(a,b,c,d){d=void 0===d?0:d;var e=lu(d);d=b||ju(d);e&&d&&(a=a.client,b={cttAuthInfo:ou(e)||void 0,sequenceGroup:e},P("il_via_jspb")?(c=new Ml,c.i(e),d=d.getAsJspb(),G(c,xl,2,d),"UNDEFINED_CSN"===e?Uw("visualElementStateChanged",b,void 0,c):Kt(c,b,a)):(c={csn:e,ve:d.getAsJson(),clientData:c},"UNDEFINED_CSN"===e?Uw("visualElementStateChanged",b,c):a?At("visualElementStateChanged",c,a,b):bo("visualElementStateChanged",c,b)))}
function ix(a,b,c){c=void 0===c?{}:c;a.j.add(c.layer||0);a.l=function(){jx(a,b,c);var f=ju(c.layer);if(f){for(var g=r(a.s),h=g.next();!h.done;h=g.next())h=h.value,gx(a,h[0],h[1]||f,c.layer);f=r(a.D);for(g=f.next();!g.done;g=f.next())g=g.value,hx(a,g[0],g[1])}};
lu(c.layer)||a.l();if(c.md)for(var d=r(c.md),e=d.next();!e.done;e=d.next())fx(a,e.value,c.layer);else Tt(Error("Delayed screen needs a data promise."))}
function jx(a,b,c){c=void 0===c?{}:c;var d=void 0;c.layer||(c.layer=0);d=void 0!==c.Ke?c.Ke:c.layer;var e=lu(d);d=ju(d);var f;d&&(void 0!==c.parentCsn?f={clientScreenNonce:c.parentCsn,visualElement:d}:e&&"UNDEFINED_CSN"!==e&&(f={clientScreenNonce:e,visualElement:d}));var g,h=M("EVENT_ID");"UNDEFINED_CSN"===e&&h&&(g={servletData:{serializedServletEventId:h}});try{var k=Sw(a.client,b,f,c.ld,c.cttAuthInfo,g,c.zt)}catch(p){Wt(p,{Jt:b,rootVe:d,Gt:void 0,ut:e,Ft:f,ld:c.ld});Tt(p);return}pu(k,b,c.layer,
c.cttAuthInfo);e&&"UNDEFINED_CSN"!==e&&d&&!mu(e)&&Xw(a.client,e,d);a.h[a.h.length-1]&&!a.h[a.h.length-1].csn&&(a.h[a.h.length-1].csn=k||"");iw({clientScreenNonce:k});cx();var m=ju(c.layer);e&&"UNDEFINED_CSN"!==e&&m&&(P("web_mark_root_visible")||P("music_web_mark_root_visible"))&&dx(k,m);a.j.delete(c.layer||0);a.l=void 0;var n;null==(n=a.v.get(c.layer))||n.forEach(function(p,v){p?gx(a,v,p,c.layer):m&&gx(a,v,m,c.layer)});
kx(a)}
function kx(a){for(var b=0;b<a.m.length;b++){var c=a.m[b];try{c()}catch(d){Tt(d)}}for(b=a.m.length=0;b<a.X.length;b++){c=a.X[b];try{c()}catch(d){Tt(d)}}}
;function lx(){var a,b,c;return x(function(d){if(1==d.h)return a=Gs().resolve(xw),a?w(d,sw(a),2):(Ut(Error("InnertubeTransportService unavailable in fetchDatasyncIds")),d.return(void 0));if(b=d.i){if(b.errorMetadata)return Ut(Error("Datasync IDs fetch responded with "+b.errorMetadata.status+": "+b.error)),d.return(void 0);c=b.vt;return d.return(c)}Ut(Error("Network request to get Datasync IDs failed."));return d.return(void 0)})}
;var mx=z.caches,nx;function ox(a){var b=a.indexOf(":");return-1===b?{Cd:a}:{Cd:a.substring(0,b),datasyncId:a.substring(b+1)}}
function px(){return x(function(a){if(void 0!==nx)return a.return(nx);nx=new Promise(function(b){var c;return x(function(d){switch(d.h){case 1:return za(d,2),w(d,mx.open("test-only"),4);case 4:return w(d,mx.delete("test-only"),5);case 5:Aa(d,3);break;case 2:if(c=Ba(d),c instanceof Error&&"SecurityError"===c.name)return b(!1),d.return();case 3:b("caches"in window),d.h=0}})});
return a.return(nx)})}
function qx(a){var b,c,d,e,f,g,h;x(function(k){if(1==k.h)return w(k,px(),2);if(3!=k.h){if(!k.i)return k.return(!1);b=[];return w(k,mx.keys(),3)}c=k.i;d=r(c);for(e=d.next();!e.done;e=d.next())f=e.value,g=ox(f),h=g.datasyncId,!h||a.includes(h)||b.push(mx.delete(f));return k.return(Promise.all(b).then(function(m){return m.some(function(n){return n})}))})}
function rx(){var a,b,c,d,e,f,g;return x(function(h){if(1==h.h)return w(h,px(),2);if(3!=h.h){if(!h.i)return h.return(!1);a=Sn("cache contains other");return w(h,mx.keys(),3)}b=h.i;c=r(b);for(d=c.next();!d.done;d=c.next())if(e=d.value,f=ox(e),(g=f.datasyncId)&&g!==a)return h.return(!0);return h.return(!1)})}
;function sx(){try{return!!self.localStorage}catch(a){return!1}}
;function tx(a){a=a.match(/(.*)::.*::.*/);if(null!==a)return a[1]}
function ux(a){if(sx()){var b=Object.keys(window.localStorage);b=r(b);for(var c=b.next();!c.done;c=b.next()){c=c.value;var d=tx(c);void 0===d||a.includes(d)||self.localStorage.removeItem(c)}}}
function vx(){if(!sx())return!1;var a=Sn(),b=Object.keys(window.localStorage);b=r(b);for(var c=b.next();!c.done;c=b.next())if(c=tx(c.value),void 0!==c&&c!==a)return!0;return!1}
;function wx(){lx().then(function(a){a&&(pp(a),qx(a),ux(a))})}
function xx(){var a=new Lr;ni.fa(function(){var b,c,d,e;return x(function(f){switch(f.h){case 1:if(P("ytidb_clear_optimizations_killswitch")){f.A(2);break}b=Sn("clear");if(b.startsWith("V")){var g=[b];pp(g);qx(g);ux(g);return f.return()}c=vx();return w(f,rx(),3);case 3:return d=f.i,w(f,qp(),4);case 4:if(e=f.i,!c&&!d&&!e)return f.return();case 2:a.ma()?wx():a.l.add("publicytnetworkstatus-online",wx,!0,void 0,void 0),f.h=0}})})}
;var Th=ia(["data-"]);function yx(a){a&&(a.dataset?a.dataset[zx("loaded")]="true":Sh(a))}
function Ax(a,b){return a?a.dataset?a.dataset[zx(b)]:a.getAttribute("data-"+b):null}
var Bx={};function zx(a){return Bx[a]||(Bx[a]=String(a).replace(/\-([a-z])/g,function(b,c){return c.toUpperCase()}))}
;var Cx=/\.vflset|-vfl[a-zA-Z0-9_+=-]+/,Dx=/-[a-zA-Z]{2,3}_[a-zA-Z]{2,3}(?=(\/|$))/;function Ex(a,b,c){c=void 0===c?null:c;if(window.spf&&spf.script){c="";if(a){var d=a.indexOf("jsbin/"),e=a.lastIndexOf(".js"),f=d+6;-1<d&&-1<e&&e>f&&(c=a.substring(f,e),c=c.replace(Cx,""),c=c.replace(Dx,""),c=c.replace("debug-",""),c=c.replace("tracing-",""))}spf.script.load(a,c,b)}else Fx(a,b,c)}
function Fx(a,b,c){c=void 0===c?null:c;var d=Gx(a),e=document.getElementById(d),f=e&&Ax(e,"loaded"),g=e&&!f;f?b&&b():(b&&(f=ss(d,b),b=""+Ta(b),Hx[b]=f),g||(e=Ix(a,d,function(){Ax(e,"loaded")||(yx(e),vs(d),Qm($a(ws,d),0))},c)))}
function Ix(a,b,c,d){d=void 0===d?null:d;var e=pf("SCRIPT");e.id=b;e.onload=function(){c&&setTimeout(c,0)};
e.onreadystatechange=function(){switch(e.readyState){case "loaded":case "complete":e.onload()}};
d&&e.setAttribute("nonce",d);Vh(e,pk(a));a=document.getElementsByTagName("head")[0]||document.body;a.insertBefore(e,a.firstChild);return e}
function Jx(a){a=Gx(a);var b=document.getElementById(a);b&&(ws(a),b.parentNode.removeChild(b))}
function Kx(a,b){a&&b&&(a=""+Ta(b),(a=Hx[a])&&us(a))}
function Gx(a){var b=document.createElement("a");ec(b,a);a=b.href.replace(/^[a-zA-Z]+:\/\//,"//");return"js-"+jc(a)}
var Hx={};var Lx=[],Ox=!1;function Px(){if(!P("disable_biscotti_fetch_for_ad_blocker_detection")&&!P("disable_biscotti_fetch_entirely_for_all_web_clients")&&Bu()){var a=M("PLAYER_VARS",{});if("1"!=tb(a)&&!Cu(a)){var b=function(){Ox=!0;"google_ad_status"in window?nm("DCLKSTAT",1):nm("DCLKSTAT",2)};
try{Ex("//static.doubleclick.net/instream/ad_status.js",b)}catch(c){}Lx.push(ni.fa(function(){if(!(Ox||"google_ad_status"in window)){try{Kx("//static.doubleclick.net/instream/ad_status.js",b)}catch(c){}Ox=!0;nm("DCLKSTAT",3)}},5E3))}}}
function Qx(){var a=Number(M("DCLKSTAT",0));return isNaN(a)?0:a}
;function Rx(a){var b=this;var c=void 0===c?0:c;var d=void 0===d?Qn():d;this.l=c;this.j=d;this.i=new Kh;this.h=a;a={};c=r(this.h.entries());for(d=c.next();!d.done;a={Ab:a.Ab,Rb:a.Rb},d=c.next()){var e=r(d.value);d=e.next().value;e=e.next().value;a.Rb=d;a.Ab=e;d=function(f){return function(){f.Ab.Ic();b.h[f.Rb].qc=!0;b.h.every(function(g){return!0===g.qc})&&b.i.resolve()}}(a);
e=Nn(d,Sx(this,a.Ab));this.h[a.Rb]=Object.assign({},a.Ab,{Ic:d,jobId:e})}}
function Tx(a){var b=Array.from(a.h.keys()).sort(function(d,e){return Sx(a,a.h[e])-Sx(a,a.h[d])});
b=r(b);for(var c=b.next();!c.done;c=b.next())c=a.h[c.value],void 0===c.jobId||c.qc||(a.j.Ca(c.jobId),Nn(c.Ic,10))}
Rx.prototype.cancel=function(){for(var a=r(this.h),b=a.next();!b.done;b=a.next())b=b.value,void 0===b.jobId||b.qc||this.j.Ca(b.jobId),b.qc=!0;this.i.resolve()};
function Sx(a,b){var c;return null!=(c=b.priority)?c:a.l}
;function Ux(a){this.state=a;this.plugins=[];this.s=void 0}
Ux.prototype.install=function(){this.plugins.push.apply(this.plugins,ja(Ka.apply(0,arguments)))};
Ux.prototype.uninstall=function(){var a=this;Ka.apply(0,arguments).forEach(function(b){b=a.plugins.indexOf(b);-1<b&&a.plugins.splice(b,1)})};
Ux.prototype.transition=function(a,b){var c=this,d=this.D.find(function(f){return Array.isArray(f.from)?f.from.find(function(g){return g===c.state&&f.K===a}):f.from===c.state&&f.K===a});
if(d){this.j&&(Tx(this.j),this.j=void 0);this.state=a;d=d.action.bind(this);var e=this.plugins.filter(function(f){return f[a]}).map(function(f){return f[a]});
d(Vx(this,e,this.s),b)}else throw Error("no transition specified from "+this.state+" to "+a);};
function Vx(a,b,c){return function(){var d=Ka.apply(0,arguments),e=b.filter(function(k){var m;return 10===(null!=(m=null!=c?c:k.priority)?m:0)}),f=b.filter(function(k){var m;
return 10!==(null!=(m=null!=c?c:k.priority)?m:0)});
Qn();var g={};e=r(e);for(var h=e.next();!h.done;g={Sb:g.Sb},h=e.next())g.Sb=h.value,On(function(k){return function(){k.Sb.callback.apply(k.Sb,ja(d))}}(g));
f=f.map(function(k){var m;return{Ic:function(){k.callback.apply(k,ja(d))},
priority:null!=(m=null!=c?c:k.priority)?m:0}});
f.length&&(a.j=new Rx(f))}}
ea.Object.defineProperties(Ux.prototype,{currentState:{configurable:!0,enumerable:!0,get:function(){return this.state}}});function Wx(a){Ux.call(this,void 0===a?"document_active":a);var b=this;this.s=10;this.h=new Map;this.D=[{from:"document_active",K:"document_disposed_preventable",action:this.X},{from:"document_active",K:"document_disposed",action:this.l},{from:"document_disposed_preventable",K:"document_disposed",action:this.l},{from:"document_disposed_preventable",K:"flush_logs",action:this.m},{from:"document_disposed_preventable",K:"document_active",action:this.i},{from:"document_disposed",K:"flush_logs",action:this.m},
{from:"document_disposed",K:"document_active",action:this.i},{from:"document_disposed",K:"document_disposed",action:function(){}},
{from:"flush_logs",K:"document_active",action:this.i}];window.addEventListener("pagehide",function(c){b.transition("document_disposed",{event:c})});
window.addEventListener("beforeunload",function(c){b.transition("document_disposed_preventable",{event:c})})}
u(Wx,Ux);Wx.prototype.X=function(a,b){if(!this.h.get("document_disposed_preventable")){a(null==b?void 0:b.event);var c,d;if((null==b?0:null==(c=b.event)?0:c.defaultPrevented)||(null==b?0:null==(d=b.event)?0:d.returnValue)){b.event.returnValue||(b.event.returnValue=!0);b.event.defaultPrevented||b.event.preventDefault();this.h=new Map;this.transition("document_active");return}}this.h.set("document_disposed_preventable",!0);this.h.get("document_disposed")?this.transition("flush_logs"):this.transition("document_disposed")};
Wx.prototype.l=function(a,b){this.h.get("document_disposed")?this.transition("document_active"):(a(null==b?void 0:b.event),this.h.set("document_disposed",!0),this.transition("flush_logs"))};
Wx.prototype.m=function(a,b){a(null==b?void 0:b.event);this.transition("document_active")};
Wx.prototype.i=function(){this.h=new Map};function Xx(a){Ux.call(this,void 0===a?"document_visibility_unknown":a);var b=this;this.D=[{from:"document_visibility_unknown",K:"document_visible",action:this.i},{from:"document_visibility_unknown",K:"document_hidden",action:this.h},{from:"document_visibility_unknown",K:"document_foregrounded",action:this.m},{from:"document_visibility_unknown",K:"document_backgrounded",action:this.l},{from:"document_visible",K:"document_hidden",action:this.h},{from:"document_visible",K:"document_foregrounded",action:this.m},
{from:"document_visible",K:"document_visible",action:this.i},{from:"document_foregrounded",K:"document_visible",action:this.i},{from:"document_foregrounded",K:"document_hidden",action:this.h},{from:"document_foregrounded",K:"document_foregrounded",action:this.m},{from:"document_hidden",K:"document_visible",action:this.i},{from:"document_hidden",K:"document_backgrounded",action:this.l},{from:"document_hidden",K:"document_hidden",action:this.h},{from:"document_backgrounded",K:"document_hidden",action:this.h},
{from:"document_backgrounded",K:"document_backgrounded",action:this.l},{from:"document_backgrounded",K:"document_visible",action:this.i}];document.addEventListener("visibilitychange",function(c){"visible"===document.visibilityState?b.transition("document_visible",{event:c}):b.transition("document_hidden",{event:c})});
P("visibility_lifecycles_dynamic_backgrounding")&&(window.addEventListener("blur",function(c){b.transition("document_backgrounded",{event:c})}),window.addEventListener("focus",function(c){b.transition("document_foregrounded",{event:c})}))}
u(Xx,Ux);Xx.prototype.i=function(a,b){a(null==b?void 0:b.event);P("visibility_lifecycles_dynamic_backgrounding")&&this.transition("document_foregrounded")};
Xx.prototype.h=function(a,b){a(null==b?void 0:b.event);P("visibility_lifecycles_dynamic_backgrounding")&&this.transition("document_backgrounded")};
Xx.prototype.l=function(a,b){a(null==b?void 0:b.event)};
Xx.prototype.m=function(a,b){a(null==b?void 0:b.event)};function Yx(){this.h=new Wx;this.i=new Xx}
Yx.prototype.install=function(){var a=Ka.apply(0,arguments);this.h.install.apply(this.h,ja(a));this.i.install.apply(this.i,ja(a))};function Zx(){Yx.call(this);var a={};this.install((a.document_disposed={callback:this.j},a));a={};this.install((a.flush_logs={callback:this.l},a))}
var $x;u(Zx,Yx);Zx.prototype.l=function(){if(P("web_fp_via_jspb")){var a=new wl,b=lu();b&&F(a,1,b);b=new Wl;ce(b,wl,380,Xl,a);Gt(b);P("web_fp_via_jspb_and_json")&&bo("finalPayload",{csn:lu()})}else bo("finalPayload",{csn:lu()})};
Zx.prototype.j=function(){Yt(Zt)};function ay(){}
ay.getInstance=function(){var a=B("ytglobal.storage_");a||(a=new ay,A("ytglobal.storage_",a));return a};
ay.prototype.estimate=function(){var a,b,c;return x(function(d){a=navigator;return(null==(b=a.storage)?0:b.estimate)?d.return(a.storage.estimate()):(null==(c=a.webkitTemporaryStorage)?0:c.queryUsageAndQuota)?d.return(by()):d.return()})};
function by(){var a=navigator;return new Promise(function(b,c){var d;null!=(d=a.webkitTemporaryStorage)&&d.queryUsageAndQuota?a.webkitTemporaryStorage.queryUsageAndQuota(function(e,f){b({usage:e,quota:f})},function(e){c(e)}):c(Error("webkitTemporaryStorage is not supported."))})}
A("ytglobal.storageClass_",ay);function $n(a,b){var c=this;this.handleError=a;this.h=b;this.i=!1;void 0===self.document||self.addEventListener("beforeunload",function(){c.i=!0});
this.j=Math.random()<=qm("ytidb_transaction_ended_event_rate_limit_session",.2)}
$n.prototype.logEvent=function(a,b){switch(a){case "IDB_DATA_CORRUPTED":P("idb_data_corrupted_killswitch")||this.h("idbDataCorrupted",b);break;case "IDB_UNEXPECTEDLY_CLOSED":this.h("idbUnexpectedlyClosed",b);break;case "IS_SUPPORTED_COMPLETED":P("idb_is_supported_completed_killswitch")||this.h("idbIsSupportedCompleted",b);break;case "QUOTA_EXCEEDED":cy(this,b);break;case "TRANSACTION_ENDED":this.j&&Math.random()<=qm("ytidb_transaction_ended_event_rate_limit_transaction",.1)&&this.h("idbTransactionEnded",
b);break;case "TRANSACTION_UNEXPECTEDLY_ABORTED":a=Object.assign({},b,{hasWindowUnloaded:this.i}),this.h("idbTransactionAborted",a)}};
function cy(a,b){ay.getInstance().estimate().then(function(c){c=Object.assign({},b,{isSw:void 0===self.document,isIframe:self!==self.top,deviceStorageUsageMbytes:dy(null==c?void 0:c.usage),deviceStorageQuotaMbytes:dy(null==c?void 0:c.quota)});a.h("idbQuotaExceeded",c)})}
function dy(a){return"undefined"===typeof a?"-1":String(Math.ceil(a/1048576))}
;function ey(a,b,c){J.call(this);var d=this;c=c||M("POST_MESSAGE_ORIGIN")||window.document.location.protocol+"//"+window.document.location.hostname;this.l=b||null;this.targetOrigin="*";this.m=c;this.sessionId=null;this.i="widget";this.S=!!a;this.N=function(e){a:if(!("*"!=d.m&&e.origin!=d.m||d.l&&e.source!=d.l||"string"!==typeof e.data)){try{var f=JSON.parse(e.data)}catch(g){break a}if(!(null==f||d.S&&(d.sessionId&&d.sessionId!=f.id||d.i&&d.i!=f.channel))&&f)switch(f.event){case "listening":"null"!=
e.origin&&(d.m=d.targetOrigin=e.origin);d.l=e.source;d.sessionId=f.id;d.j&&(d.j(),d.j=null);break;case "command":d.s&&(!d.v||0<=gb(d.v,f.func))&&d.s(f.func,f.args,e.origin)}}};
this.v=this.j=this.s=null;window.addEventListener("message",this.N)}
u(ey,J);ey.prototype.sendMessage=function(a,b){if(b=b||this.l){this.sessionId&&(a.id=this.sessionId);this.i&&(a.channel=this.i);try{var c=JSON.stringify(a);b.postMessage(c,this.targetOrigin)}catch(d){Am(d)}}};
ey.prototype.M=function(){window.removeEventListener("message",this.N);J.prototype.M.call(this)};function fy(){this.i=[];this.isReady=!1;this.j={};var a=this.h=new ey(!!M("WIDGET_ID_ENFORCE")),b=this.Me.bind(this);a.s=b;a.v=null;this.h.i="widget";if(a=M("WIDGET_ID"))this.h.sessionId=a}
l=fy.prototype;l.Me=function(a,b,c){"addEventListener"===a&&b?this.Hc(b[0],c):this.Xc(a,b,c)};
l.Xc=function(){};
l.zc=function(a){var b=this;return function(c){return b.sendMessage(a,c)}};
l.Hc=function(a,b){this.j[a]||"onReady"===a||(this.addEventListener(a,this.zc(a,b)),this.j[a]=!0)};
l.addEventListener=function(){};
l.pe=function(){this.isReady=!0;this.sendMessage("initialDelivery",this.Cc());this.sendMessage("onReady");hb(this.i,this.Jd,this);this.i=[]};
l.Cc=function(){return null};
function gy(a,b){a.sendMessage("infoDelivery",b)}
l.Jd=function(a){this.isReady?this.h.sendMessage(a):this.i.push(a)};
l.sendMessage=function(a,b){this.Jd({event:a,info:void 0===b?null:b})};
l.dispose=function(){this.h=null};var hy={},iy=(hy["api.invalidparam"]=2,hy.auth=150,hy["drm.auth"]=150,hy["heartbeat.net"]=150,hy["heartbeat.servererror"]=150,hy["heartbeat.stop"]=150,hy["html5.unsupportedads"]=5,hy["fmt.noneavailable"]=5,hy["fmt.decode"]=5,hy["fmt.unplayable"]=5,hy["html5.missingapi"]=5,hy["html5.unsupportedlive"]=5,hy["drm.unavailable"]=5,hy["mrm.blocked"]=151,hy);var jy=new Set("endSeconds startSeconds mediaContentUrl suggestedQuality videoId rct rctn".split(" "));function ky(a){return(0===a.search("cue")||0===a.search("load"))&&"loadModule"!==a}
function ly(a,b,c){if("string"===typeof a)return{videoId:a,startSeconds:b,suggestedQuality:c};b={};c=r(jy);for(var d=c.next();!d.done;d=c.next())d=d.value,a[d]&&(b[d]=a[d]);return b}
function my(a,b,c,d){if(Sa(a)&&!Array.isArray(a)){b="playlist list listType index startSeconds suggestedQuality".split(" ");c={};for(d=0;d<b.length;d++){var e=b[d];a[e]&&(c[e]=a[e])}return c}b={index:b,startSeconds:c,suggestedQuality:d};"string"===typeof a&&16===a.length?b.list="PL"+a:b.playlist=a;return b}
;function ny(a){fy.call(this);this.listeners=[];this.l=!1;this.api=a;this.addEventListener("onReady",this.onReady.bind(this));this.addEventListener("onVideoProgress",this.We.bind(this));this.addEventListener("onVolumeChange",this.Xe.bind(this));this.addEventListener("onApiChange",this.Re.bind(this));this.addEventListener("onPlaybackQualityChange",this.Te.bind(this));this.addEventListener("onPlaybackRateChange",this.Ue.bind(this));this.addEventListener("onStateChange",this.Ve.bind(this));this.addEventListener("onWebglSettingsChanged",
this.Ye.bind(this))}
u(ny,fy);l=ny.prototype;
l.Xc=function(a,b,c){if(this.api.isExternalMethodAvailable(a,c)){b=b||[];if(0<b.length&&ky(a)){var d=b;if(Sa(d[0])&&!Array.isArray(d[0]))var e=d[0];else switch(e={},a){case "loadVideoById":case "cueVideoById":e=ly(d[0],void 0!==d[1]?Number(d[1]):void 0,d[2]);break;case "loadVideoByUrl":case "cueVideoByUrl":e=d[0];"string"===typeof e&&(e={mediaContentUrl:e,startSeconds:void 0!==d[1]?Number(d[1]):void 0,suggestedQuality:d[2]});b:{if((d=e.mediaContentUrl)&&(d=/\/([ve]|embed)\/([^#?]+)/.exec(d))&&d[2]){d=
d[2];break b}d=null}e.videoId=d;e=ly(e);break;case "loadPlaylist":case "cuePlaylist":e=my(d[0],d[1],d[2],d[3])}b.length=1;b[0]=e}this.api.handleExternalCall(a,b,c);ky(a)&&gy(this,this.Cc())}};
l.Hc=function(a,b){("onReady"===a||"onError"===a&&this.l)&&this.api.logApiCall(a+" invocation",b);this.api.logApiCall(a+" registration",b);fy.prototype.Hc.call(this,a,b)};
l.zc=function(a,b){var c=this,d=fy.prototype.zc.call(this,a,b);return function(e){c.api.logApiCall(a+" invocation",b);d(e)}};
l.onReady=function(){var a=this.pe.bind(this);this.h.j=a;a=this.api.getVideoData();if(!a.isPlayable){this.l=!0;a=a.errorCode;var b=void 0===b?5:b;this.sendMessage("onError",(a?iy[a]||b:b).toString())}};
l.addEventListener=function(a,b){this.listeners.push({eventType:a,listener:b});this.api.addEventListener(a,b)};
l.Cc=function(){if(!this.api)return null;var a=this.api.getApiInterface();mb(a,"getVideoData");for(var b={apiInterface:a},c=0,d=a.length;c<d;c++){var e=a[c];if(0===e.search("get")||0===e.search("is")){var f=0;0===e.search("get")?f=3:0===e.search("is")&&(f=2);f=e.charAt(f).toLowerCase()+e.substr(f+1);try{var g=this.api[e]();b[f]=g}catch(h){}}}b.videoData=this.api.getVideoData();b.currentTimeLastUpdated_=Date.now()/1E3;return b};
l.Ve=function(a){a={playerState:a,currentTime:this.api.getCurrentTime(),duration:this.api.getDuration(),videoData:this.api.getVideoData(),videoStartBytes:0,videoBytesTotal:this.api.getVideoBytesTotal(),videoLoadedFraction:this.api.getVideoLoadedFraction(),playbackQuality:this.api.getPlaybackQuality(),availableQualityLevels:this.api.getAvailableQualityLevels(),currentTimeLastUpdated_:Date.now()/1E3,playbackRate:this.api.getPlaybackRate(),mediaReferenceTime:this.api.getMediaReferenceTime()};this.api.getVideoUrl&&
(a.videoUrl=this.api.getVideoUrl());this.api.getVideoContentRect&&(a.videoContentRect=this.api.getVideoContentRect());this.api.getProgressState&&(a.progressState=this.api.getProgressState());this.api.getPlaylist&&(a.playlist=this.api.getPlaylist());this.api.getPlaylistIndex&&(a.playlistIndex=this.api.getPlaylistIndex());this.api.getStoryboardFormat&&(a.storyboardFormat=this.api.getStoryboardFormat());gy(this,a)};
l.Te=function(a){gy(this,{playbackQuality:a})};
l.Ue=function(a){gy(this,{playbackRate:a})};
l.Re=function(){for(var a=this.api.getOptions(),b={namespaces:a},c=0,d=a.length;c<d;c++){var e=a[c],f=this.api.getOptions(e);b[e]={options:f};for(var g=0,h=f.length;g<h;g++){var k=f[g],m=this.api.getOption(e,k);b[e][k]=m}}this.sendMessage("apiInfoDelivery",b)};
l.Xe=function(){gy(this,{muted:this.api.isMuted(),volume:this.api.getVolume()})};
l.We=function(a){a={currentTime:a,videoBytesLoaded:this.api.getVideoBytesLoaded(),videoLoadedFraction:this.api.getVideoLoadedFraction(),currentTimeLastUpdated_:Date.now()/1E3,playbackRate:this.api.getPlaybackRate(),mediaReferenceTime:this.api.getMediaReferenceTime()};this.api.getProgressState&&(a.progressState=this.api.getProgressState());gy(this,a)};
l.Ye=function(){var a={sphericalProperties:this.api.getSphericalProperties()};gy(this,a)};
l.dispose=function(){fy.prototype.dispose.call(this);for(var a=0;a<this.listeners.length;a++){var b=this.listeners[a];this.api.removeEventListener(b.eventType,b.listener)}this.listeners=[]};function oy(a){J.call(this);this.i={};this.started=!1;this.connection=a;this.connection.subscribe("command",this.Fd,this)}
u(oy,J);l=oy.prototype;l.start=function(){this.started||this.h()||(this.started=!0,this.connection.lb("RECEIVING"))};
l.lb=function(a,b){this.started&&!this.h()&&this.connection.lb(a,b)};
l.Fd=function(a,b,c){if(this.started&&!this.h()){var d=b||{};switch(a){case "addEventListener":"string"===typeof d.event&&this.addListener(d.event);break;case "removeEventListener":"string"===typeof d.event&&this.removeListener(d.event);break;default:this.api.isReady()&&this.api.isExternalMethodAvailable(a,c||null)&&(b=py(a,b||{}),c=this.api.handleExternalCall(a,b,c||null),(c=qy(a,c))&&this.lb(a,c))}}};
l.addListener=function(a){if(!(a in this.i)){var b=this.Se.bind(this,a);this.i[a]=b;this.addEventListener(a,b)}};
l.Se=function(a,b){this.started&&!this.h()&&this.connection.lb(a,this.Bc(a,b))};
l.Bc=function(a,b){if(null!=b)return{value:b}};
l.removeListener=function(a){a in this.i&&(this.removeEventListener(a,this.i[a]),delete this.i[a])};
l.M=function(){var a=this.connection;a.h()||Li(a.i,"command",this.Fd,this);this.connection=null;for(var b in this.i)this.i.hasOwnProperty(b)&&this.removeListener(b);J.prototype.M.call(this)};function ry(a,b){oy.call(this,b);this.api=a;this.start()}
u(ry,oy);ry.prototype.addEventListener=function(a,b){this.api.addEventListener(a,b)};
ry.prototype.removeEventListener=function(a,b){this.api.removeEventListener(a,b)};
function py(a,b){switch(a){case "loadVideoById":return a=ly(b),[a];case "cueVideoById":return a=ly(b),[a];case "loadVideoByPlayerVars":return[b];case "cueVideoByPlayerVars":return[b];case "loadPlaylist":return a=my(b),[a];case "cuePlaylist":return a=my(b),[a];case "seekTo":return[b.seconds,b.allowSeekAhead];case "playVideoAt":return[b.index];case "setVolume":return[b.volume];case "setPlaybackQuality":return[b.suggestedQuality];case "setPlaybackRate":return[b.suggestedRate];case "setLoop":return[b.loopPlaylists];
case "setShuffle":return[b.shufflePlaylist];case "getOptions":return[b.module];case "getOption":return[b.module,b.option];case "setOption":return[b.module,b.option,b.value];case "handleGlobalKeyDown":return[b.keyCode,b.shiftKey,b.ctrlKey,b.altKey,b.metaKey,b.key,b.code]}return[]}
function qy(a,b){switch(a){case "isMuted":return{muted:b};case "getVolume":return{volume:b};case "getPlaybackRate":return{playbackRate:b};case "getAvailablePlaybackRates":return{availablePlaybackRates:b};case "getVideoLoadedFraction":return{videoLoadedFraction:b};case "getPlayerState":return{playerState:b};case "getCurrentTime":return{currentTime:b};case "getPlaybackQuality":return{playbackQuality:b};case "getAvailableQualityLevels":return{availableQualityLevels:b};case "getDuration":return{duration:b};
case "getVideoUrl":return{videoUrl:b};case "getVideoEmbedCode":return{videoEmbedCode:b};case "getPlaylist":return{playlist:b};case "getPlaylistIndex":return{playlistIndex:b};case "getOptions":return{options:b};case "getOption":return{option:b}}}
ry.prototype.Bc=function(a,b){switch(a){case "onReady":return;case "onStateChange":return{playerState:b};case "onPlaybackQualityChange":return{playbackQuality:b};case "onPlaybackRateChange":return{playbackRate:b};case "onError":return{errorCode:b}}return oy.prototype.Bc.call(this,a,b)};
ry.prototype.M=function(){oy.prototype.M.call(this);delete this.api};function sy(a){a=void 0===a?!1:a;J.call(this);this.i=new Ki(a);we(this,this.i)}
ab(sy,J);sy.prototype.subscribe=function(a,b,c){return this.h()?0:this.i.subscribe(a,b,c)};
sy.prototype.m=function(a,b){this.h()||this.i.cb.apply(this.i,arguments)};function ty(a,b,c){sy.call(this);this.l=a;this.j=b;this.id=c}
u(ty,sy);ty.prototype.lb=function(a,b){this.h()||this.l.lb(this.j,this.id,a,b)};
ty.prototype.M=function(){this.j=this.l=null;sy.prototype.M.call(this)};function uy(a,b,c){J.call(this);this.i=a;this.origin=c;this.j=fs(window,"message",this.l.bind(this));this.connection=new ty(this,a,b);we(this,this.connection)}
u(uy,J);uy.prototype.lb=function(a,b,c,d){this.h()||a!==this.i||(a={id:b,command:c},d&&(a.data=d),this.i.postMessage(JSON.stringify(a),this.origin))};
uy.prototype.l=function(a){if(!this.h()&&a.origin===this.origin){var b=a.data;if("string"===typeof b){try{b=JSON.parse(b)}catch(d){return}if(b.command){var c=this.connection;c.h()||c.m("command",b.command,b.data,a.origin)}}}};
uy.prototype.M=function(){gs(this.j);this.i=null;J.prototype.M.call(this)};function vy(){this.state=1;this.h=null}
l=vy.prototype;
l.initialize=function(a,b,c){if(a.program){var d,e=null!=(d=a.interpreterUrl)?d:null;if(a.interpreterSafeScript){d=a.interpreterSafeScript;Eb("From proto message. b/166824318");d=d.privateDoNotAccessOrElseSafeScriptWrappedValue||"";var f=Bb();d=f?f.createScript(d):d;d=new Gb(d,Fb)}else d=null!=(f=a.interpreterScript)?f:null;a.interpreterSafeUrl&&(e=a.interpreterSafeUrl,Eb("From proto message. b/166824318"),e=Kb(e.privateDoNotAccessOrElseTrustedResourceUrlWrappedValue||"").toString());wy(this,d,e,
a.program,b,c)}else Ut(Error("Cannot initialize botguard without program"))};
function wy(a,b,c,d,e,f){var g=void 0===g?"trayride":g;c?(a.state=2,Ex(c,function(){window[g]?xy(a,d,g,e):(a.state=3,Jx(c),Ut(new Q("Unable to load Botguard","from "+c)))},f)):b?(f=pf("SCRIPT"),b instanceof Gb?(b instanceof Gb&&b.constructor===Gb?b=b.j:(Qa(b),b="type_error:SafeScript"),f.textContent=b,Uh(f)):f.textContent=b,f.nonce=hc(),document.head.appendChild(f),document.head.removeChild(f),window[g]?xy(a,d,g,e):(a.state=4,Ut(new Q("Unable to load Botguard from JS")))):Ut(new Q("Unable to load VM; no url or JS provided"))}
function xy(a,b,c,d){a.state=5;try{var e=new Lh({program:b,te:c,Ne:P("att_web_record_metrics")});e.af.then(function(){a.state=6;d&&d(b)});
a.Sc(e)}catch(f){a.state=7,f instanceof Error&&Ut(f)}}
l.invoke=function(a){a=void 0===a?{}:a;return this.Vc()?this.Rd({kd:a}):null};
l.dispose=function(){this.Yc()};
l.Yc=function(){this.Sc(null);this.state=8};
l.Vc=function(){return!!this.h};
l.Rd=function(a){return this.h.Ld(a)};
l.Sc=function(a){ue(this.h);this.h=a};function yy(){var a=B("yt.abuse.playerAttLoader");return a&&["bgvma","bgvmb","bgvmc"].every(function(b){return b in a})?a:null}
;function zy(){vy.apply(this,arguments)}
u(zy,vy);zy.prototype.Yc=function(){this.state=8};
zy.prototype.Sc=function(a){var b;null==(b=yy())||b.bgvma();a?(b={bgvma:a.dispose.bind(a),bgvmb:a.snapshot.bind(a),bgvmc:a.Ld.bind(a)},A("yt.abuse.playerAttLoader",b),A("yt.abuse.playerAttLoaderRun",function(c){return a.snapshot(c)})):(A("yt.abuse.playerAttLoader",null),A("yt.abuse.playerAttLoaderRun",null))};
zy.prototype.Vc=function(){return!!yy()};
zy.prototype.Rd=function(a){return yy().bgvmc(a)};var Ay=new zy;function By(){return Ay.Vc()}
function Cy(a){a=void 0===a?{}:a;return Ay.invoke(a)}
;function Dy(a){a=a||{};var b={},c={};this.url=a.url||"";this.args=a.args||vb(b);this.assets=a.assets||{};this.attrs=a.attrs||vb(c);this.fallback=a.fallback||null;this.fallbackMessage=a.fallbackMessage||null;this.html5=!!a.html5;this.disable=a.disable||{};this.loaded=!!a.loaded;this.messages=a.messages||{}}
Dy.prototype.clone=function(){var a=new Dy,b;for(b in this)if(this.hasOwnProperty(b)){var c=this[b];"object"==Qa(c)?a[b]=vb(c):a[b]=c}return a};var Ey=/cssbin\/(?:debug-)?([a-zA-Z0-9_-]+?)(?:-2x|-web|-rtl|-vfl|.css)/;function Fy(a){a=a||"";if(window.spf){var b=a.match(Ey);spf.style.load(a,b?b[1]:"",void 0)}else Gy(a)}
function Gy(a){var b=Hy(a),c=document.getElementById(b),d=c&&Ax(c,"loaded");d||c&&!d||(c=Iy(a,b,function(){Ax(c,"loaded")||(yx(c),vs(b),Qm($a(ws,b),0))}))}
function Iy(a,b,c){var d=document.createElement("link");d.id=b;d.onload=function(){c&&setTimeout(c,0)};
a=pk(a);fc(d,a);(document.getElementsByTagName("head")[0]||document.body).appendChild(d);return d}
function Hy(a){var b=pf("A");ec(b,new Nb(a,Ob));a=b.href.replace(/^[a-zA-Z]+:\/\//,"//");return"css-"+jc(a)}
;function Jy(){J.call(this);this.i=[]}
u(Jy,J);Jy.prototype.M=function(){for(;this.i.length;){var a=this.i.pop();a.target.removeEventListener(a.name,a.callback,void 0)}J.prototype.M.call(this)};function Ky(){Jy.apply(this,arguments)}
u(Ky,Jy);function Ly(a,b,c,d,e){J.call(this);var f=this;this.v=b;this.webPlayerContextConfig=d;this.Xb=e;this.Aa=!1;this.api={};this.oa=this.s=null;this.V=new Ki;this.i={};this.aa=this.qa=this.elementId=this.eb=this.config=null;this.Z=!1;this.l=this.N=null;this.Pa={};this.Yb=["onReady"];this.lastError=null;this.Cb=NaN;this.S={};this.Zb=new Ky(this);this.ia=0;this.j=this.m=a;we(this,this.V);My(this);Ny(this);we(this,this.Zb);c?this.ia=Qm(function(){f.loadNewVideoConfig(c)},0):d&&(Oy(this),Py(this))}
u(Ly,J);l=Ly.prototype;l.getId=function(){return this.v};
l.loadNewVideoConfig=function(a){if(!this.h()){this.ia&&(window.clearTimeout(this.ia),this.ia=0);var b=a||{};b instanceof Dy||(b=new Dy(b));this.config=b;this.setConfig(a);Py(this);this.isReady()&&Qy(this)}};
function Oy(a){var b;a.webPlayerContextConfig?b=a.webPlayerContextConfig.rootElementId:b=a.config.attrs.id;a.elementId=b||a.elementId;"video-player"===a.elementId&&(a.elementId=a.v,a.webPlayerContextConfig?a.webPlayerContextConfig.rootElementId=a.v:a.config.attrs.id=a.v);var c;(null==(c=a.j)?void 0:c.id)===a.elementId&&(a.elementId+="-player",a.webPlayerContextConfig?a.webPlayerContextConfig.rootElementId=a.elementId:a.config.attrs.id=a.elementId)}
l.setConfig=function(a){this.eb=a;this.config=Ry(a);Oy(this);if(!this.qa){var b;this.qa=Sy(this,(null==(b=this.config.args)?void 0:b.jsapicallback)||"onYouTubePlayerReady")}this.config.args?this.config.args.jsapicallback=null:this.config.args={jsapicallback:null};var c;if(null==(c=this.config)?0:c.attrs)a=this.config.attrs,(b=a.width)&&this.j&&(this.j.style.width=ei(Number(b)||b)),(a=a.height)&&this.j&&(this.j.style.height=ei(Number(a)||a))};
function Qy(a){if(a.config&&!0!==a.config.loaded)if(a.config.loaded=!0,!a.config.args||"0"!==a.config.args.autoplay&&0!==a.config.args.autoplay&&!1!==a.config.args.autoplay){var b;a.api.loadVideoByPlayerVars(null!=(b=a.config.args)?b:null)}else a.api.cueVideoByPlayerVars(a.config.args)}
function Ty(a){var b=!0,c=Uy(a);c&&a.config&&(a=Vy(a),b=Ax(c,"version")===a);return b&&!!B("yt.player.Application.create")}
function Py(a){if(!a.h()&&!a.Z){var b=Ty(a);if(b&&"html5"===(Uy(a)?"html5":null))a.aa="html5",a.isReady()||Wy(a);else if(Xy(a),a.aa="html5",b&&a.l&&a.m)a.m.appendChild(a.l),Wy(a);else{a.config&&(a.config.loaded=!0);var c=!1;a.N=function(){c=!0;var d=Yy(a,"player_bootstrap_method")?B("yt.player.Application.createAlternate")||B("yt.player.Application.create"):B("yt.player.Application.create");var e=a.config?Ry(a.config):void 0;d&&d(a.m,e,a.webPlayerContextConfig,a.Xb);Wy(a)};
a.Z=!0;b?a.N():(Ex(Vy(a),a.N),(b=Zy(a))&&Fy(b),$y(a)&&!c&&A("yt.player.Application.create",null))}}}
function Uy(a){var b=of(a.elementId);!b&&a.j&&a.j.querySelector&&(b=a.j.querySelector("#"+a.elementId));return b}
function Wy(a){if(!a.h()){var b=Uy(a),c=!1;b&&b.getApiInterface&&b.getApiInterface()&&(c=!0);if(c){a.Z=!1;if(!Yy(a,"html5_remove_not_servable_check_killswitch")){var d;if((null==b?0:b.isNotServable)&&a.config&&(null==b?0:b.isNotServable(null==(d=a.config.args)?void 0:d.video_id)))return}az(a)}else a.Cb=Qm(function(){Wy(a)},50)}}
function az(a){My(a);a.Aa=!0;var b=Uy(a);if(b){a.s=bz(a,b,"addEventListener");a.oa=bz(a,b,"removeEventListener");var c=b.getApiInterface();c=c.concat(b.getInternalApiInterface());for(var d=a.api,e=0;e<c.length;e++){var f=c[e];d[f]||(d[f]=bz(a,b,f))}}for(var g in a.i)a.i.hasOwnProperty(g)&&a.s&&a.s(g,a.i[g]);Qy(a);a.qa&&a.qa(a.api);a.V.cb("onReady",a.api)}
function bz(a,b,c){var d=b[c];return function(){var e=Ka.apply(0,arguments);try{return a.lastError=null,d.apply(b,e)}catch(f){"sendAbandonmentPing"!==c&&(f.params=c,a.lastError=f,Ut(f))}}}
function My(a){a.Aa=!1;if(a.oa)for(var b in a.i)a.i.hasOwnProperty(b)&&a.oa(b,a.i[b]);for(var c in a.S)a.S.hasOwnProperty(c)&&window.clearTimeout(Number(c));a.S={};a.s=null;a.oa=null;b=a.api;for(var d in b)b.hasOwnProperty(d)&&(b[d]=null);b.addEventListener=function(e,f){a.addEventListener(e,f)};
b.removeEventListener=function(e,f){a.removeEventListener(e,f)};
b.destroy=function(){a.dispose()};
b.getLastError=function(){return a.getLastError()};
b.getPlayerType=function(){return a.getPlayerType()};
b.getCurrentVideoConfig=function(){return a.eb};
b.loadNewVideoConfig=function(e){a.loadNewVideoConfig(e)};
b.isReady=function(){return a.isReady()}}
l.isReady=function(){return this.Aa};
function Ny(a){a.addEventListener("WATCH_LATER_VIDEO_ADDED",function(b){vs("WATCH_LATER_VIDEO_ADDED",b)});
a.addEventListener("WATCH_LATER_VIDEO_REMOVED",function(b){vs("WATCH_LATER_VIDEO_REMOVED",b)})}
l.addEventListener=function(a,b){var c=this,d=Sy(this,b);d&&(0<=gb(this.Yb,a)||this.i[a]||(b=cz(this,a),this.s&&this.s(a,b)),this.V.subscribe(a,d),"onReady"===a&&this.isReady()&&Qm(function(){d(c.api)},0))};
l.removeEventListener=function(a,b){this.h()||(b=Sy(this,b))&&Li(this.V,a,b)};
function Sy(a,b){var c=b;if("string"===typeof b){if(a.Pa[b])return a.Pa[b];c=function(){var d=Ka.apply(0,arguments),e=B(b);if(e)try{e.apply(z,d)}catch(f){Tt(f)}};
a.Pa[b]=c}return c?c:null}
function cz(a,b){var c="ytPlayer"+b+a.v;a.i[b]=c;z[c]=function(d){var e=Qm(function(){if(!a.h()){try{a.V.cb(b,null!=d?d:void 0)}catch(h){Ut(new Q("PlayerProxy error when creating global callback",{error:h,event:b,playerId:a.v,data:d}))}var f=a.S,g=String(e);g in f&&delete f[g]}},0);
sb(a.S,String(e))};
return c}
l.getPlayerType=function(){return this.aa||(Uy(this)?"html5":null)};
l.getLastError=function(){return this.lastError};
function Xy(a){a.cancel();My(a);a.aa=null;a.config&&(a.config.loaded=!1);var b=Uy(a);b&&(Ty(a)||!$y(a)?a.l=b:(b&&b.destroy&&b.destroy(),a.l=null));if(a.m)for(a=a.m;b=a.firstChild;)a.removeChild(b)}
l.cancel=function(){this.N&&Kx(Vy(this),this.N);window.clearTimeout(this.Cb);this.Z=!1};
l.M=function(){Xy(this);if(this.l&&this.config&&this.l.destroy)try{this.l.destroy()}catch(b){Tt(b)}this.Pa=null;for(var a in this.i)this.i.hasOwnProperty(a)&&(z[this.i[a]]=null);this.eb=this.config=this.api=null;delete this.m;delete this.j;J.prototype.M.call(this)};
function $y(a){var b,c;a=null==(b=a.config)?void 0:null==(c=b.args)?void 0:c.fflags;return!!a&&-1!==a.indexOf("player_destroy_old_version=true")}
function Vy(a){return a.webPlayerContextConfig?a.webPlayerContextConfig.jsUrl:(a=a.config.assets)?a.js:""}
function Zy(a){return a.webPlayerContextConfig?a.webPlayerContextConfig.cssUrl:(a=a.config.assets)?a.css:""}
function Yy(a,b){if(a.webPlayerContextConfig)var c=a.webPlayerContextConfig.serializedExperimentFlags;else{var d;if(null==(d=a.config)?0:d.args)c=a.config.args.fflags}return"true"===Dm(c||"","&")[b]}
function Ry(a){for(var b={},c=r(Object.keys(a)),d=c.next();!d.done;d=c.next()){d=d.value;var e=a[d];b[d]="object"===typeof e?vb(e):e}return b}
;var dz={},ez="player_uid_"+(1E9*Math.random()>>>0);function fz(a,b){var c="player",d=!1;d=void 0===d?!0:d;c="string"===typeof c?of(c):c;var e=ez+"_"+Ta(c),f=dz[e];if(f&&d)return gz(a,b)?f.api.loadVideoByPlayerVars(a.args||null):f.loadNewVideoConfig(a),f.api;f=new Ly(c,e,a,b,void 0);dz[e]=f;vs("player-added",f.api);xe(f,function(){delete dz[f.getId()]});
return f.api}
function gz(a,b){return b&&b.serializedExperimentFlags?b.serializedExperimentFlags.includes("web_player_remove_playerproxy=true"):a&&a.args&&a.args.fflags?a.args.fflags.includes("web_player_remove_playerproxy=true"):!1}
;var hz=null,iz=null,jz=null;function kz(){lz()}
function mz(){lz()}
function lz(){var a=hz.getVideoData(1);a=a.title?a.title+" - YouTube":"YouTube";document.title!==a&&(document.title=a)}
function nz(){hz&&hz.sendAbandonmentPing&&hz.sendAbandonmentPing();M("PL_ATT")&&Ay.dispose();for(var a=ni,b=0,c=Lx.length;b<c;b++)a.Ca(Lx[b]);Lx.length=0;Jx("//static.doubleclick.net/instream/ad_status.js");Ox=!1;nm("DCLKSTAT",0);ve(jz,iz);hz&&(hz.removeEventListener("onVideoDataChange",kz),hz.destroy())}
;function oz(a,b,c){a="ST-"+jc(a).toString(36);b=b?uc(b):"";c=c||5;Bu()&&vn(a,b,c)}
;function pz(a,b,c){b=void 0===b?{}:b;c=void 0===c?!1:c;var d=M("EVENT_ID");d&&(b.ei||(b.ei=d));if(b){d=a;var e=void 0===e?!0:e;var f=M("VALID_SESSION_TEMPDATA_DOMAINS",[]),g=pc(window.location.href);g&&f.push(g);g=pc(d);if(0<=gb(f,g)||!g&&0==d.lastIndexOf("/",0))if(P("autoescape_tempdata_url")&&(f=document.createElement("a"),ec(f,d),d=f.href),d&&(d=qc(d),f=d.indexOf("#"),d=0>f?d:d.slice(0,f)))if(e&&!b.csn&&(b.itct||b.ved)&&(b=Object.assign({csn:lu()},b)),h){var h=parseInt(h,10);isFinite(h)&&0<h&&
oz(d,b,h)}else oz(d,b)}if(c)return!1;if((window.ytspf||{}).enabled)spf.navigate(a);else{var k=void 0===k?{}:k;var m=void 0===m?"":m;var n=void 0===n?window:n;c=n.location;a=wc(a,k)+m;var p=void 0===p?Yh:p;a:{p=void 0===p?Yh:p;for(k=0;k<p.length;++k)if(m=p[k],m instanceof Wh&&m.Be(a)){p=new Nb(a,Ob);break a}p=void 0}p=p||Tb;if(p instanceof Nb)var v=Pb(p);else{b:if(Oh){try{v=new URL(p)}catch(t){v="https:";break b}v=v.protocol}else c:{v=document.createElement("a");try{v.href=p}catch(t){v=void 0;break c}v=
v.protocol;v=":"===v||""===v?"https:":v}v="javascript:"!==v?p:void 0}void 0!==v&&(c.href=v)}return!0}
;A("yt.setConfig",nm);A("yt.config.set",nm);A("yt.setMsg",ru);A("yt.msgs.set",ru);A("yt.logging.errors.log",Tt);
A("writeEmbed",function(){var a=M("PLAYER_CONFIG");if(!a){var b=M("PLAYER_VARS");b&&(a={args:b})}Lu(!0);"gvn"===a.args.ps&&(document.body.style.backgroundColor="transparent");a.attrs||(a.attrs={width:"100%",height:"100%",id:"video-player"});var c=document.referrer;b=M("POST_MESSAGE_ORIGIN");window!==window.top&&c&&c!==document.URL&&(a.args.loaderUrl=c);cw();c=M("WEB_PLAYER_CONTEXT_CONFIGS").WEB_PLAYER_CONTEXT_CONFIG_ID_EMBEDDED_PLAYER;if(!c.serializedForcedExperimentIds){var d=Im(window.location.href);
d.forced_experiments&&(c.serializedForcedExperimentIds=d.forced_experiments)}hz=fz(a,c);hz.addEventListener("onVideoDataChange",kz);hz.addEventListener("onReady",mz);a=M("POST_MESSAGE_ID","player");M("ENABLE_JS_API")?jz=new ny(hz):M("ENABLE_POST_API")&&"string"===typeof a&&"string"===typeof b&&(iz=new uy(window.parent,a,b),jz=new ry(hz,iz.connection));Px();P("ytidb_create_logger_embed_killswitch")||P("embeds_web_disable_nwl")||Zn();a={};$x||($x=new Zx);$x.install((a.flush_logs={callback:function(){gt()}},
a));
P("embeds_web_disable_nwl")||Wr();P("ytidb_clear_embedded_player")&&ni.fa(function(){var e;if(!Mw){var f=Gs(),g={Pc:Lw,Pd:Kw};f.h.set(g.Pc,g);g={jd:{feedbackEndpoint:Zu(Gw),modifyChannelNotificationPreferenceEndpoint:Zu(Hw),playlistEditEndpoint:Zu(Iw),subscribeEndpoint:Zu(Ew),unsubscribeEndpoint:Zu(Fw),webPlayerShareEntityServiceEndpoint:Zu(Jw)}};var h=Vu.getInstance(),k={};h&&(k.client_location=h);if(void 0===m){Nu.h||(Nu.h=new Nu);var m=Nu.h}void 0===e&&(e=f.resolve(Lw));rw(g,e,m,k);m={Pc:xw,Qd:qw.h};
f.h.set(m.Pc,m);Mw=f.resolve(xw)}xx()})});
var qz=ym(function(){kw();Mu();ex.h||(ex.h=new ex);var a=ex.h;var b=16623;var c=void 0===c?{}:c;Object.values(su).includes(b)||(Ut(new Q("createClientScreen() called with a non-page VE",b)),b=83769);c.isHistoryNavigation||a.h.push({rootVe:b,key:c.key||""});a.s=[];a.D=[];c.md?ix(a,b,c):jx(a,b,c)}),rz=ym(function(a){a.persisted||(kw(),Mu())}),sz=ym(function(a){P("embeds_web_enable_dispose_player_if_page_not_cached_killswitch")?nz():a.persisted||nz()}),tz=ym(nz);
window.addEventListener?(window.addEventListener("load",qz),window.addEventListener("pageshow",rz),window.addEventListener("pagehide",sz)):window.attachEvent&&(window.attachEvent("onload",qz),window.attachEvent("onunload",tz));A("yt.abuse.player.botguardInitialized",B("yt.abuse.player.botguardInitialized")||By);A("yt.abuse.player.invokeBotguard",B("yt.abuse.player.invokeBotguard")||Cy);A("yt.abuse.dclkstatus.checkDclkStatus",B("yt.abuse.dclkstatus.checkDclkStatus")||Qx);
A("yt.player.exports.navigate",B("yt.player.exports.navigate")||pz);A("yt.util.activity.init",B("yt.util.activity.init")||ks);A("yt.util.activity.getTimeSinceActive",B("yt.util.activity.getTimeSinceActive")||ns);A("yt.util.activity.setTimestamp",B("yt.util.activity.setTimestamp")||ls);}).call(this);
