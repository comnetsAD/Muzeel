!function e(t,r,o){function n(s,a){if(!r[s]){if(!t[s]){var c="function"==typeof require&&require;if(!a&&c)return c(s,!0);if(i)return i(s,!0);var l=new Error("Cannot find module '"+s+"'");throw l.code="MODULE_NOT_FOUND",l}var u=r[s]={exports:{}};t[s][0].call(u.exports,function(e){var r=t[s][1][e];return n(r?r:e)},u,u.exports,e,t,r,o)}return r[s].exports}for(var i="function"==typeof require&&require,s=0;s<o.length;s++)n(o[s]);return n}({1:[function(e,t,r){(function(e){Object.keys||(Object.keys=function(){var e=Object.prototype.hasOwnProperty,t=!{toString:null}.propertyIsEnumerable("toString"),r=["toString","toLocaleString","valueOf","hasOwnProperty","isPrototypeOf","propertyIsEnumerable","constructor"],o=r.length;return function(n){if("object"!=typeof n&&"function"!=typeof n||null===n)throw new TypeError("Object.keys called on non-object");var i=[];for(var s in n)e.call(n,s)&&i.push(s);if(t)for(var a=0;a<o;a++)e.call(n,r[a])&&i.push(r[a]);return i}}()),function(){function o(e,t){function r(e){if(r[e]!==c)return r[e];var o;if("bug-string-char-index"==e)o="a"!="a"[0];else if("json"==e)o=r("json-stringify")&&r("json-parse");else{var n,i='{"a":[1,true,false,null,"\\u0000\\b\\n\\f\\r\\t"]}';if("json-stringify"==e){var s=t.stringify,a="function"==typeof s&&g;if(a){(n=function(){return 1}).toJSON=n;try{a="0"===s(0)&&"0"===s(new l)&&'""'==s(new u)&&s(E)===c&&s(c)===c&&s()===c&&"1"===s(n)&&"[1]"==s([n])&&"[null]"==s([c])&&"null"==s(null)&&"[null,null,null]"==s([c,E,null])&&s({a:[n,!0,!1,null,"\0\b\n\f\r\t"]})==i&&"1"===s(null,n)&&"[\n 1,\n 2\n]"==s([1,2],null,1)&&'"-271821-04-20T00:00:00.000Z"'==s(new h((-864e13)))&&'"+275760-09-13T00:00:00.000Z"'==s(new h(864e13))&&'"-000001-01-01T00:00:00.000Z"'==s(new h((-621987552e5)))&&'"1969-12-31T23:59:59.999Z"'==s(new h((-1)))}catch(d){a=!1}}o=a}if("json-parse"==e){var f=t.parse;if("function"==typeof f)try{if(0===f("0")&&!f(!1)){n=f(i);var m=5==n.a.length&&1===n.a[0];if(m){try{m=!f('"\t"')}catch(d){}if(m)try{m=1!==f("01")}catch(d){}if(m)try{m=1!==f("1.")}catch(d){}}}}catch(d){m=!1}o=m}}return r[e]=!!o}e||(e=s.Object()),t||(t=s.Object());var i,a,c,l=e.Number||s.Number,u=e.String||s.String,d=e.Object||s.Object,h=e.Date||s.Date,f=e.SyntaxError||s.SyntaxError,m=e.TypeError||s.TypeError,y=e.Math||s.Math,p=d.prototype,E=p.toString,g=new h((-0xc782b5b800cec));try{g=g.getUTCFullYear()==-109252&&0===g.getUTCMonth()&&1===g.getUTCDate()&&10==g.getUTCHours()&&37==g.getUTCMinutes()&&6==g.getUTCSeconds()&&708==g.getUTCMilliseconds()}catch(v){}var w="[object Function]",U="[object Date]",b="[object Number]",L="[object String]",S="[object Array]",A="[object Boolean]",O=r("bug-string-char-index");if(!g)var T=y.floor,C=[0,31,59,90,120,151,181,212,243,273,304,334],R=function(e,t){return C[t]+365*(e-1970)+T((e-1969+(t=+(t>1)))/4)-T((e-1901+t)/100)+T((e-1601+t)/400)};(i=p.hasOwnProperty)||(i=function(e){var t,r={};return(r.__proto__=null,r.__proto__={toString:1},r).toString!=E?i=function(e){var t=this.__proto__,r=e in(this.__proto__=null,this);return this.__proto__=t,r}:(t=r.constructor,i=function(e){var r=(this.constructor||t).prototype;return e in this&&!(e in r&&this[e]===r[e])}),r=null,i.call(this,e)}),a=function(e,t){var r,o,s,c=0;(r=function(){this.valueOf=0}).prototype.valueOf=0,o=new r;for(s in o)i.call(o,s)&&c++;return r=o=null,c?a=2==c?function(e,t){var r,o={},n=E.call(e)==w;for(r in e)n&&"prototype"==r||i.call(o,r)||!(o[r]=1)||!i.call(e,r)||t(r)}:function(e,t){var r,o,n=E.call(e)==w;for(r in e)n&&"prototype"==r||!i.call(e,r)||(o="constructor"===r)||t(r);(o||i.call(e,r="constructor"))&&t(r)}:(o=["valueOf","toString","toLocaleString","propertyIsEnumerable","isPrototypeOf","hasOwnProperty","constructor"],a=function(e,t){var r,s,a=E.call(e)==w,c=!a&&"function"!=typeof e.constructor&&n[typeof e.hasOwnProperty]&&e.hasOwnProperty||i;for(r in e)a&&"prototype"==r||!c.call(e,r)||t(r);for(s=o.length;r=o[--s];c.call(e,r)&&t(r));}),a(e,t)};var k={92:"\\\\",34:'\\"',8:"\\b",12:"\\f",10:"\\n",13:"\\r",9:"\\t"},I="000000",M=function(e,t){return(I+(t||0)).slice(-e)},P="\\u00",x=function(e){for(var t='"',r=0,o=e.length,n=!O||o>10,i=n&&(O?e.split(""):e);r<o;r++){var s=e.charCodeAt(r);switch(s){case 8:case 9:case 10:case 12:case 13:case 34:case 92:t+=k[s];break;default:if(s<32){t+=P+M(2,s.toString(16));break}t+=n?i[r]:e.charAt(r)}}return t+'"'},j=function(e,t,r,o,n,s,l){var u,d,h,f,y,p,g,v,w,O,C,k,I,P,F,N;try{u=t[e]}catch(B){}if("object"==typeof u&&u)if(d=E.call(u),d!=U||i.call(u,"toJSON"))"function"==typeof u.toJSON&&(d!=b&&d!=L&&d!=S||i.call(u,"toJSON"))&&(u=u.toJSON(e));else if(u>-1/0&&u<1/0){if(R){for(y=T(u/864e5),h=T(y/365.2425)+1970-1;R(h+1,0)<=y;h++);for(f=T((y-R(h,0))/30.42);R(h,f+1)<=y;f++);y=1+y-R(h,f),p=(u%864e5+864e5)%864e5,g=T(p/36e5)%24,v=T(p/6e4)%60,w=T(p/1e3)%60,O=p%1e3}else h=u.getUTCFullYear(),f=u.getUTCMonth(),y=u.getUTCDate(),g=u.getUTCHours(),v=u.getUTCMinutes(),w=u.getUTCSeconds(),O=u.getUTCMilliseconds();u=(h<=0||h>=1e4?(h<0?"-":"+")+M(6,h<0?-h:h):M(4,h))+"-"+M(2,f+1)+"-"+M(2,y)+"T"+M(2,g)+":"+M(2,v)+":"+M(2,w)+"."+M(3,O)+"Z"}else u=null;if(r&&(u=r.call(t,e,u)),null===u)return"null";if(d=E.call(u),d==A)return""+u;if(d==b)return u>-1/0&&u<1/0?""+u:"null";if(d==L)return x(""+u);if("object"==typeof u){for(P=l.length;P--;)if(l[P]===u)throw m();if(l.push(u),C=[],F=s,s+=n,d==S){for(I=0,P=u.length;I<P;I++)k=j(I,u,r,o,n,s,l),C.push(k===c?"null":k);N=C.length?n?"[\n"+s+C.join(",\n"+s)+"\n"+F+"]":"["+C.join(",")+"]":"[]"}else a(o||u,function(e){var t=j(e,u,r,o,n,s,l);t!==c&&C.push(x(e)+":"+(n?" ":"")+t)}),N=C.length?n?"{\n"+s+C.join(",\n"+s)+"\n"+F+"}":"{"+C.join(",")+"}":"{}";return l.pop(),N}};t.stringify=function(e,t,r){var o,i,s,a;if(n[typeof t]&&t)if((a=E.call(t))==w)i=t;else if(a==S){s={};for(var c,l=0,u=t.length;l<u;c=t[l++],a=E.call(c),(a==L||a==b)&&(s[c]=1));}if(r)if((a=E.call(r))==b){if((r-=r%1)>0)for(o="",r>10&&(r=10);o.length<r;o+=" ");}else a==L&&(o=r.length<=10?r:r.slice(0,10));return j("",(c={},c[""]=e,c),i,s,o,"",[])};var F,N,B=u.fromCharCode,D={92:"\\",34:'"',47:"/",98:"\b",116:"\t",110:"\n",102:"\f",114:"\r"},_=function(){throw F=N=null,f()},J=function(){for(var e,t,r,o,n,i=N,s=i.length;F<s;)switch(n=i.charCodeAt(F)){case 9:case 10:case 13:case 32:F++;break;case 123:case 125:case 91:case 93:case 58:case 44:return e=O?i.charAt(F):i[F],F++,e;case 34:for(e="@",F++;F<s;)if(n=i.charCodeAt(F),n<32)_();else if(92==n)switch(n=i.charCodeAt(++F)){case 92:case 34:case 47:case 98:case 116:case 110:case 102:case 114:e+=D[n],F++;break;case 117:for(t=++F,r=F+4;F<r;F++)n=i.charCodeAt(F),n>=48&&n<=57||n>=97&&n<=102||n>=65&&n<=70||_();e+=B("0x"+i.slice(t,F));break;default:_()}else{if(34==n)break;for(n=i.charCodeAt(F),t=F;n>=32&&92!=n&&34!=n;)n=i.charCodeAt(++F);e+=i.slice(t,F)}if(34==i.charCodeAt(F))return F++,e;_();default:if(t=F,45==n&&(o=!0,n=i.charCodeAt(++F)),n>=48&&n<=57){for(48==n&&(n=i.charCodeAt(F+1),n>=48&&n<=57)&&_(),o=!1;F<s&&(n=i.charCodeAt(F),n>=48&&n<=57);F++);if(46==i.charCodeAt(F)){for(r=++F;r<s&&(n=i.charCodeAt(r),n>=48&&n<=57);r++);r==F&&_(),F=r}if(n=i.charCodeAt(F),101==n||69==n){for(n=i.charCodeAt(++F),43!=n&&45!=n||F++,r=F;r<s&&(n=i.charCodeAt(r),n>=48&&n<=57);r++);r==F&&_(),F=r}return+i.slice(t,F)}if(o&&_(),"true"==i.slice(F,F+4))return F+=4,!0;if("false"==i.slice(F,F+5))return F+=5,!1;if("null"==i.slice(F,F+4))return F+=4,null;_()}return"$"},H=function(e){var t,r;if("$"==e&&_(),"string"==typeof e){if("@"==(O?e.charAt(0):e[0]))return e.slice(1);if("["==e){for(t=[];e=J(),"]"!=e;r||(r=!0))r&&(","==e?(e=J(),"]"==e&&_()):_()),","==e&&_(),t.push(H(e));return t}if("{"==e){for(t={};e=J(),"}"!=e;r||(r=!0))r&&(","==e?(e=J(),"}"==e&&_()):_()),","!=e&&"string"==typeof e&&"@"==(O?e.charAt(0):e[0])&&":"==J()||_(),t[e.slice(1)]=H(J());return t}_()}return e},q=function(e,t,r){var o=X(e,t,r);o===c?delete e[t]:e[t]=o},X=function(e,t,r){var o,n=e[t];if("object"==typeof n&&n)if(E.call(n)==S)for(o=n.length;o--;)q(n,o,r);else a(n,function(e){q(n,e,r)});return r.call(e,t,n)};return t.parse=function(e,t){var r,o;return F=0,N=""+e,r=H(J()),"$"!=J()&&_(),F=N=null,t&&E.call(t)==w?X((o={},o[""]=r,o),"",t):r},t.runInContext=o,t}var n={"function":!0,object:!0},i=n[typeof r]&&r&&!r.nodeType&&r,s=n[typeof window]&&window||this,a=i&&n[typeof t]&&t&&!t.nodeType&&"object"==typeof e&&e;!a||a.global!==a&&a.window!==a&&a.self!==a||(s=a);var c=s.JSON,l=s.UI_JSON,u=!1,d=o(s,s.UI_JSON={noConflict:function(){return u||(u=!0,s.JSON=c,s.UI_JSON=l,c=l=null),d}});s.UI_JSON={parse:d.parse,stringify:d.stringify}}.call(this),Userlocal=function(){},Userlocal.Entry=function(e,t,r,o){this.id=e,this.rand=this.randobet(7),this.initTime=t,this.url=r?r:document.URL,this.subject=o?o:document.title,this.host="//uh0.nakanohito.jp/uhb2/",this.dynMousePositionPeriod=[2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,3,3,3,3,3,3,3,3,3,3,5,5,5,5,5,5,5,5,5,5,12,12,12,12,12,12,12,12,12,12],this.dpr=void 0!=window.devicePixelRatio?window.devicePixelRatio:0,this.domain1="nakanohito.jp",this.domain2="userlocal.jp",this.formSubmitAction=!1,this.formRecord={},this.domRecord={},this.domInitOrder=[],this.domAfterOrder=[],this.maxAddFormCount=50,this.formCount=0,this.domIDRecord={},this.domLabel={},this.endFlag=!1,this.checkSetForm=!1,this.tapEnable=!1,this.focusForm="",this.flagFirefoxSslAccess=!0,this.forciblySSL=!1,this.UH_JSON=UI_JSON,this.version="2.0.2"},Userlocal.Entry.eventInit=function(e){try{if(document.body){Userlocal.Entry.addEventListener(document.body,"mouseup",function(t){try{e.mouseClick(t)}catch(r){e.ulSendErrorLog(r,0)}}),"mousewheel"in document.body||"onmousewheel"in document.body?Userlocal.Entry.addEventListener(document.body,"mousewheel",function(t){try{e.mouseScroll(t)}catch(r){e.ulSendErrorLog(r,1)}}):"DOMMouseScroll"in document.body?Userlocal.Entry.addEventListener(document.body,"DOMMouseScroll",function(t){try{e.mouseScroll(t)}catch(r){e.ulSendErrorLog(r,2)}}):"onwheel"in document.body&&Userlocal.Entry.addEventListener(document.body,"wheel",function(t){try{e.mouseScroll(t)}catch(r){e.ulSendErrorLog(r,3)}}),Userlocal.Entry.addEventListener(document.body,"mousemove",function(t){try{e.mouseMove(t)}catch(r){e.ulSendErrorLog(r,4)}});for(var t=["input","textarea","button","select","form"],r=0;r<t.length;r++)for(var o=document.getElementsByTagName(t[r]),n=0;n<o.length;n++)"form"==t[r]?(e.checkSetForm=!0,Userlocal.Entry.addEventListener(o[n],"submit",function(t){try{e.formSubmit(t)}catch(r){e.ulSendErrorLog(r,5)}})):("submit"!==o[n].type.toLowerCase()||Userlocal.Entry.Browser.IE5||Userlocal.Entry.Browser.IE6||Userlocal.Entry.Browser.IE7||Userlocal.Entry.Browser.IE8||Userlocal.Entry.Browser.IE9||Userlocal.Entry.addEventListener(o[n],"click",function(t){try{var r=e.getParentElement("FORM",this,e);r&&e.domList(e.formErrorLog,"form",["INPUT","SELECT","TEXTAREA"],r.getAttribute("action"))}catch(o){e.ulSendErrorLog(o,6)}}),"button"!=t[r]&&("radio"===o[n].type.toLowerCase()||"checkbox"===o[n].type.toLocaleLowerCase()?Userlocal.Entry.addEventListener(o[n],"change",function(t){try{e.formChange(t)}catch(r){e.ulSendErrorLog(r,7)}}):(Userlocal.Entry.addEventListener(o[n],"focus",function(t){try{e.formFocus(t)}catch(r){e.ulSendErrorLog(r,8)}}),Userlocal.Entry.addEventListener(o[n],"blur",function(t){try{e.formBlur(t)}catch(r){e.ulSendErrorLog(r,9)}}))));"ontouchstart"in document.body&&(Userlocal.Entry.addEventListener(document.body,"touchstart",function(t){try{"undefined"!=typeof event&&"touches"in event?t.pageX||(t=event.touches[0]):t.touches&&(t=t.touches[0]),e.tapEnable=!0,e.mouseMove(t)}catch(r){e.ulSendErrorLog(r,10)}}),Userlocal.Entry.addEventListener(document.body,"touchmove",function(t){try{"undefined"!=typeof event&&"touches"in event?t.pageX||(t=event.touches[0]):t.touches&&(t=t.touches[0]),e.tapEnable=!1,e.mouseMove(t)}catch(r){e.ulSendErrorLog(r,11)}}),Userlocal.Entry.addEventListener(document.body,"touchend",function(t){try{if("undefined"!=typeof event&&"touches"in event?t.pageX||(t=event.touches[0]):t.touches&&(t=t.touches[0]),e.tapEnable){var r=!1;"mouseup"in document.body&&(e.removeEventListener("mouseup"),r=!0),e.tapEnable=!1,e.mouseClick(t),r&&Userlocal.Entry.addEventListener(document.body,"mouseup",function(t){e.mouseClick(t)})}}catch(o){e.ulSendErrorLog(o,12)}}))}}catch(i){this.ulSendErrorLog(i,13)}},Userlocal.Entry.prototype.init=function(){try{if("undefined"!=typeof Userlocal.Entry.flagAlreadyInit)return;Userlocal.Entry.flagAlreadyInit=!0;var e=this;if(this.image_url=this.host,Userlocal.Entry.Browser.Gecko&&this.flagFirefoxSslAccess&&(Userlocal.Entry.Browser.MobileAndroid||(this.forciblySSL=!0)),Userlocal.Entry.Browser.IE&&(this.forciblySSL=!0),!this.host.match(this.domain1)&&!this.host.match(this.domain2))return!1;if(Userlocal.Entry.Browser.IE5||Userlocal.Entry.Browser.IE6)return!1;Userlocal.Entry.addEventListener(window,"unload",function(){try{e.end(),Userlocal.Entry.removeAllEventListeners()}catch(t){e.ulSendErrorLog(t,14)}}),"onpagehide"in window?Userlocal.Entry.addEventListener(window,"pagehide",function(t){try{e.end(),Userlocal.Entry.removeAllEventListeners()}catch(r){e.ulSendErrorLog(r,15)}}):"beforeunload"in window&&Userlocal.Entry.addEventListener(window,"beforeunload",function(t){try{e.end(),Userlocal.Entry.removeAllEventListeners()}catch(r){e.ulSendErrorLog(r,16)}}),"complete"==document.readyState?Userlocal.Entry.eventInit(e):Userlocal.Entry.addEventListener(document,"readystatechange",function(){try{"complete"==document.readyState&&Userlocal.Entry.eventInit(e)}catch(t){e.ulSendErrorLog(t,17)}}),e.start()}catch(t){this.ulSendErrorLog(t,18)}},Userlocal.Entry.checkIE=function(){return this.checkBrowser().indexOf("ie")!==-1},Userlocal.Entry.checkIEVersion=function(e){var t=window.navigator.userAgent.toLowerCase(),r=window.navigator.appVersion.toLowerCase();return t.indexOf("msie")!=-1?r.indexOf(e)!=-1:r.indexOf(e)!=-1},Userlocal.Entry.checkOpera=function(){return"opera"==this.checkBrowser()},Userlocal.Entry.checkBrowser=function(){var e=window.navigator.userAgent.toLowerCase(),t=window.navigator.appVersion.toLowerCase(),r="unknown";return e.indexOf("msie")!=-1?r=t.indexOf("msie 6.")!=-1?"ie6":t.indexOf("msie 7.")!=-1?"ie7":t.indexOf("msie 8.")!=-1?"ie8":t.indexOf("msie 9.")!=-1?"ie9":t.indexOf("msie 10.")!=-1?"ie10":"ie":e.indexOf("trident/7")!=-1?r="ie11":e.indexOf("edge")!=-1?r="edge":e.indexOf("safari")!=-1?(r="safari",e.indexOf("chrome")==-1&&e.indexOf("crios")==-1||(r="chrome")):e.indexOf("opera")!=-1?r="opera":e.indexOf("firefox")!=-1&&(r="firefox"),r},Userlocal.Entry.Browser={IE:Userlocal.Entry.checkIE(),IE5:Userlocal.Entry.checkIEVersion("msie 5."),IE6:Userlocal.Entry.checkIEVersion("msie 6."),IE7:Userlocal.Entry.checkIEVersion("msie 7."),IE8:Userlocal.Entry.checkIEVersion("msie 8."),IE9:Userlocal.Entry.checkIEVersion("msie 9."),IE10:Userlocal.Entry.checkIEVersion("msie 10."),IE11:Userlocal.Entry.checkIEVersion("trident/7."),Edge:"edge"==Userlocal.Entry.checkBrowser(),Chrome:"chrome"==Userlocal.Entry.checkBrowser(),Opera:Userlocal.Entry.checkOpera(),Gecko:navigator.userAgent.indexOf("Gecko")>-1&&navigator.userAgent.indexOf("KHTML")==-1,Firefox:"firefox"==Userlocal.Entry.checkBrowser(),Safari:"safari"==Userlocal.Entry.checkBrowser(),MobileAndroid:navigator.userAgent.indexOf("Android")>-1,DefaultBrowser:"browser"==Userlocal.Entry.checkBrowser(),ModeStd:document.compatMode&&"BackCompat"!=document.compatMode},Userlocal.Entry.Os={iOs:navigator.userAgent.toLowerCase().indexOf("ipad")!=-1||navigator.userAgent.toLowerCase().indexOf("iphone")!=-1,Android:navigator.userAgent.toLowerCase().indexOf("android")>-1},Userlocal.Entry.addEventListener=function(e,t,r){if(Userlocal.Entry.listeners||(Userlocal.Entry.listeners=new Array),Userlocal.Entry.listeners.push({elem:e,event:t,func:r}),window.addEventListener&&!Userlocal.Entry.Browser.Opera){var o=!1;this.checkPassiveEventListener()&&(o={passive:!0,capture:!1}),e.addEventListener(t,r,o)}else window.attachEvent&&(t=this.convertEvent(t),e.attachEvent("on"+t,r))},Userlocal.Entry.convertEvent=function(e){return"DOMMouseScroll"==e&&(e="mousewheel"),e},Userlocal.Entry.removeEventListeners=function(e){if(Userlocal.Entry.listeners)for(var t=0;t<Userlocal.Entry.listeners.length;t++){var r=Userlocal.Entry.listeners[t],o=r.elem;if(e==o){var n=r.event,i=r.func;window.addEventListener?e.removeEventListener(n,i,!1):window.attachEvent&&(n=this.convertEvent(n),e.detachEvent("on"+n,i))}}},Userlocal.Entry.removeAllEventListeners=function(){if(Userlocal.Entry.listeners)for(var e=0;e<Userlocal.Entry.listeners.length;e++){var t=Userlocal.Entry.listeners[e],r=t.elem,o=t.event,n=t.func;window.addEventListener?r.removeEventListener(o,n,!1):window.attachEvent&&(o=this.convertEvent(o),r.detachEvent("on"+o,n))}},Userlocal.Entry.prototype.mouseClick=function(e){if(e||(e=window.event),e){var t=e.srcElement?e.srcElement:e.target;t&&this.setMouseClick(t,e)}},Userlocal.Entry.prototype.setMouseClick=function(e,t){var r=e.nodeName;r&&(this.lastClickTime=(new Date).getTime(),"A"==r.toUpperCase()?(this.lastClickHref=e.href,this.addMousePosition(t)):this.addMousePosition(t))},Userlocal.Entry.prototype.addMousePosition=function(e){if(this.eventPosition(e)){this.mouseTimes||(this.mouseTimes=0),this.mouseTimes++,this.mousePositionRecord||(this.mousePositionRecord=new Array),this._eventPosition||(this._eventPosition="");var t=this.eventPosition(e);t.x!=this._eventPosition.x&&t.y!=this._eventPosition.y&&t.t!=this._eventPosition.t&&this.mousePositionRecord.push(t),this._eventPosition=t}},Userlocal.Entry.prototype.getMousePositions=function(){if(this.mousePositionRecord){for(var e=new Array,t=0;t<this.mousePositionRecord.length;t++){var r=this.mousePositionRecord[t];r.x&&e.push([r.x,r.y,r.t,r.st,r.sb])}return this.joinShort(e,100)}return null},Userlocal.Entry.prototype.mouseScroll=function(e){e||(e=window.event);var t=0;e.wheelDelta?(t=e.wheelDelta/120,window.opera&&(t=-t)):e.detail?t=-e.detail/3:e.deltaY&&(t=e.deltaY>0?1:-1),t>0?this.mouseWheelUp+=parseInt(t):this.mouseWheelDown+=-parseInt(t)},Userlocal.Entry.prototype.eventPosition=function(e){var t=0,r=0;e.pageX?(t=e.pageX,r=e.pageY):(t=e.clientX+document.documentElement.scrollLeft,r=e.clientY+document.documentElement.scrollTop),Userlocal.Entry.Browser.IE&&Userlocal.Entry.Browser.ModeStd&&(t-=2,r-=2);var o=0;Userlocal.Entry.Browser.ModeStd?o=window.pageYOffset||document.documentElement.scrollTop:document.body&&(o=window.pageYOffset||document.body.scrollTop);var n=o+this.getWindowSize().height;return t&&r?{x:parseInt(t),y:parseInt(r),t:Math.floor(((new Date).getTime()-this.startTime)/100),st:parseInt(o),sb:parseInt(n)}:null},Userlocal.Entry.prototype.mouseMove=function(e){this.startMousePosition||(this.startMousePosition=this.eventPosition(e)),this.dynMousePositionRecord||(this.dynMousePositionRecord=new Array,this.dynMousePositionTime=this.startTime);var t=this.dynMousePositionRecord.length;if(t<this.dynMousePositionPeriod.length){var r=((new Date).getTime()-this.dynMousePositionTime)/1e3;if(r>this.dynMousePositionPeriod[t]){this.dynMousePositionTime=(new Date).getTime();var o=this.eventPosition(e);o&&this.dynMousePositionRecord.push(o)}}},Userlocal.Entry.prototype.formFocus=function(e){e||(e=window.event);var t=e.srcElement?e.srcElement:e.target;t&&this.addFormFocus(t,e)},Userlocal.Entry.prototype.addFormFocus=function(e,t){this.addForm(e,"focus")},Userlocal.Entry.prototype.formBlur=function(e){e||(e=window.event);var t=e.srcElement?e.srcElement:e.target;t&&this.addFormBlur(t,e)},Userlocal.Entry.prototype.addFormBlur=function(e,t){this.addForm(e,"blur")},Userlocal.Entry.prototype.formChange=function(e){e||(e=window.event);var t=e.srcElement?e.srcElement:e.target;t&&(this.isEmptyObject(this.domRecord)&&(this.focusFlag=!0),this.addFormChange(t,e))},Userlocal.Entry.prototype.addFormChange=function(e,t){this.addForm(e,"change")},Userlocal.Entry.prototype.addForm=function(e,t){this.isEmptyObject(this.domRecord)&&this.domList(this.formDomList,"form",["INPUT","SELECT","TEXTAREA","LABEL"]);var r=document.getElementsByTagName("form");if(this.domAfterOrder=[],r)for(var o=0;o<r.length;o++)this.domAfterOrder[this.domAfterOrder.length]=r[o].getAttribute("action");if(this.formCount<this.maxAddFormCount){this.formCount++;var n="",i="",s="",a="";if(e.form&&e.form.nodeName){if("undefined"==typeof e.form.getAttribute("action"))return null;this.formRecord[e.form.getAttribute("action")]||(this.formRecord[e.form.getAttribute("action")]=[]),n=e.form.getAttribute("action"),i=e.getAttribute("name")?e.getAttribute("name"):"",s=e}else{if("submit"==t){n=e.getAttribute("action"),i=e.getAttribute("name")?e.getAttribute("name"):"";for(var c=e.getElementsByTagName("input"),l=e.getElementsByTagName("button"),o=0;o<c.length;o++)if(a=c[o].getAttribute("type"),a&&("submit"==a.toLowerCase()||"image"==a.toLowerCase())){s=c[o];break}if(""==s)for(var o=0;o<l.length;o++)if("type"in l[o]&&(a=l[o].type,a&&"submit"==a.toLowerCase())){s=l[o];break}Userlocal.Entry.Browser.IE||this.domList(this.formDomList,"form",["INPUT","SELECT","TEXTAREA","LABEL"])}else"undefined"!=typeof e.getAttribute("action")&&(n=e.getAttribute("action"),i=e.getAttribute("name")?e.getAttribute("name"):"",s=e);this.formRecord[n]||(this.formRecord[n]=[])}""==n&&""==i||""==s||this.setForm(n,t,i,s)}},Userlocal.Entry.prototype.setForm=function(e,t,r,o){var n=this.getElementPosition(o);this.focusForm=e,this.formRecord[e][this.formRecord[e].length]=[t,r,Math.floor(((new Date).getTime()-this.startTime)/100),n.x,n.y]},Userlocal.Entry.prototype.formSubmit=function(e){e||(e=window.event);var t=e.srcElement?e.srcElement:e.target;t&&this.addFormSubmit(t,e)},Userlocal.Entry.prototype.addFormSubmit=function(e,t){this.formSubmitAction=!0,this.lastClickTime=(new Date).getTime(),this.addForm(e,"submit")},Userlocal.Entry.prototype.formErrorLog=function(e,t,r){var o=r.amongErrorLog(t);o&&r.addFormErrorLog(e,t,o,r)},Userlocal.Entry.prototype.amongErrorLog=function(e){switch(!1){case!e.validity.valueMissing:return"valMis";case!e.validity.typeMismatch:return"typeMis";case!e.validity.patternMismatch:return"patMis";case!e.validity.tooLong:return"tooLong";case!e.validity.rangeUnderflow:return"ranUnder";case!e.validity.rangeOverflow:return"rangeOver";case!e.validity.stepMismatch:return"stepMis";case!e.validity.customError:return"cusErr"}return null},Userlocal.Entry.prototype.addFormErrorLog=function(e,t,r,o){var n=e?e:"",i=t.getAttribute("name")?t.getAttribute("name"):"";o.setFormErrorLog(n,i,r,o)},Userlocal.Entry.prototype.setFormErrorLog=function(e,t,r,o){return"undefined"!=typeof e?null:(o.formRecord[e]||(o.formRecord[e]=[]),void(o.formRecord[e][o.formRecord[e].length]=["error",t,r]))},Userlocal.Entry.prototype.domList=function(e,t,r,o){if(document.querySelectorAll&&t){var n=document.getElementsByTagName(t);if(n&&this.isEmptyArray(this.domInitOrder))for(var i=0;i<n.length;i++)this.domAfterOrder=this.domInitOrder[this.domInitOrder.length]=n[i].getAttribute("action");if(o)for(var i=0;i<n.length;i++)n[i].getAttribute("action")==o&&this.childDomList(n[i],e,r);else for(var i=0;i<n.length;i++)this.childDomList(n[i],e,r)}},Userlocal.Entry.prototype.childDomList=function(e,t,r){if(e.querySelectorAll)for(var o=r.join(),n=e.querySelectorAll(o),i=e.getAttribute("action"),s=0;s<n.length;s=s+1|0){var a=n[s];a.tagName&&"INPUT"==a.tagName&&"hidden"==a.type.toLowerCase()||t(i,a,this)}},Userlocal.Entry.prototype.formDomList=function(e,t,r){var o=t.required,n="";if(t.tagName&&"INPUT"==t.tagName?n=t.type.toLowerCase():t.tagName&&"LABEL"!=t.tagName&&(n=t.tagName.toLowerCase()),t.tagName){var i=t.tagName;if("hidden"!=n&&t){var s=r.getElementPosition(t),a="";a="submit"==n?t.value:t.getAttribute("placeholder"),r.addFormDomList(e,t.getAttribute("name"),s.x,s.y,o,r,a,t,n,i)}}},Userlocal.Entry.prototype.getElementPosition=function(e){var t,r,o=e.getBoundingClientRect();Userlocal.Entry.Browser.ModeStd?(t=window.pageYOffset||document.documentElement.scrollTop,r=window.pageXOffset||document.documentElement.scrollLeft):document.body&&(t=window.pageYOffset||document.body.scrollTop,r=window.pageXOffset||document.body.scrollLeft);var n=parseInt(o.left+r),i=parseInt(o.top+t);return{x:n,y:i}},Userlocal.Entry.prototype.addFormDomList=function(e,t,r,o,n,i,s,a,c,l){if("undefined"==typeof e)return null;if(i.domRecord[e]||(i.domRecord[e]=[],i.domIDRecord[e]=[]),n||(n=0),s||(s=""),"LABEL"==l)i.addLabel(e,a,i);else{var u=0,d=a.value;if("SELECT"==l&&""!=d)u=1;else if("INPUT"==l)if("radio"==c||"checkbox"==c){for(var h=document.getElementsByName(t),f=0;f<h.length;f++)h[f].checked&&(u=1);s="x"}else"submit"!=c&&d&&(u=1);else d&&(u=1);var m=i.getDomNameNumber(t,e);m===!1&&(m=i.domRecord[e].length),i.domRecord[e][m]=[t,r,o,n,s,u,c],i.domIDRecord[e][m]=a.id}},Userlocal.Entry.prototype.addLabel=function(e,t,r){return"undefined"==typeof e?null:(r.domLabel[e]||(r.domLabel[e]=[]),void(r.domLabel[e][r.domLabel[e].length]=[t.getAttribute("for"),t.textContent]))},Userlocal.Entry.prototype.getDom=function(){if(this.domRecord){this.setLabel();var e={};return this.domRecord[this.focusForm]&&(e[this.focusForm]=this.domRecord[this.focusForm]),e}return null},Userlocal.Entry.prototype.setLabel=function(){for(key in this.domIDRecord)for(i in this.domIDRecord[key])for(j in this.domLabel[key])this.domIDRecord[key][i]&&this.domLabel[key][j]&&(0 in this.domLabel[key][j]&&this.domLabel[key][j][0]&&1 in this.domLabel[key][j]&&this.domLabel[key][j][1]&&this.domIDRecord[key][i]==this.domLabel[key][j][0]&&this.domRecord[key][i]&&4 in this.domRecord[key][i]&&"x"!=this.domRecord[key][i][4]?this.domRecord[key][i][4]=this.domLabel[key][j][1]:this.domRecord[key][i]&&4 in this.domRecord[key][i]&&"x"==this.domRecord[key][i][4]&&(this.domRecord[key][i][4]=""))},Userlocal.Entry.prototype.getDomNameNumber=function(e,t){for(i in this.domRecord[t])if(this.domRecord[t][i]&&this.domRecord[t][i][0]&&this.domRecord[t][i][0]==e)return i;return!1},Userlocal.Entry.prototype.getParentElement=function(e,t,r){r=r?r:this;var o=t.parentNode;return!!o&&(!!o.tagName&&(o.tagName===e?o:"HTML"!==o.tagName&&"BODY"!==o.tagName&&"HEAD"!==o.tagName&&"undefined"!=typeof o.tagName&&r.getParentElement(e,o,r)))},Userlocal.Entry.prototype.getWindowSize=function(){var e=null,t=null;return Userlocal.Entry.Browser.ModeStd?(e=document.documentElement.clientWidth,t=document.documentElement.clientHeight):document.body&&(e=document.body.clientWidth,t=document.body.clientHeight),{width:e,height:t}},Userlocal.Entry.prototype.getScreenSize=function(){var e=screen.width,t=screen.height;return{width:e,height:t}},Userlocal.Entry.prototype.getStartMousePosition=function(){return this.startMousePosition?[this.startMousePosition.x,this.startMousePosition.y]:null},Userlocal.Entry.prototype.getDynMousePositions=function(){if(this.dynMousePositionRecord){for(var e=new Array,t=0;t<this.dynMousePositionRecord.length;t++){var r=this.dynMousePositionRecord[t];r.x&&e.push([r.x,r.y,r.t,r.st,r.sb])}return this.joinShort(e,100)}return null},Userlocal.Entry.prototype.getForm=function(){if(this.formRecord){var e={};return e[this.focusForm]=this.formRecord[this.focusForm],e}return null},Userlocal.Entry.prototype.joinShort=function(e,t){for(var r=new Array,o=0,n=0;n<e.length&&(o++,!(o>t));n++)r.push(e[n]);return r},Userlocal.Entry.prototype.randobet=function(e){for(var t="0123456789".split(""),r="",o=0;o<e;o++)r+=t[Math.floor(Math.random()*t.length)];return r},Userlocal.Entry.prototype.getPeriod=function(){return this.startTime&&this.lastTime?this.lastTime-this.startTime:null},Userlocal.Entry.prototype.start=function(){this.startTime=(new Date).getTime(),this.mouseWheelUp=0,this.mouseWheelDown=0},Userlocal.Entry.prototype.margeDomAndForm=function(){var e=this.domInitOrder,t=this.domAfterOrder;if(!this.isEmptyObject(this.formRecord))for(var r=0;r<e.length;r++)e[r]&&t[r]&&e[r]!=t[r]&&(this.domRecord[e[r]]=this.domRecord[t[r]],this.formRecord[t[r]]=this.formRecord[e[r]]=this.pushArray(this.formRecord[e[r]],this.formRecord[t[r]])),e[r]&&t[r]&&t[r]==this.focusForm&&(this.focusForm=e[r])},Userlocal.Entry.prototype.pushArray=function(e,t){var r=[];if(this.isArray(e))for(var o=0;o<e.length;o++)r[r.length]=e[o];if(this.isArray(t))for(var o=0;o<t.length;o++)r[r.length]=t[o];return r},Userlocal.Entry.prototype.isEmptyObject=function(e){return 0==Object.keys(e).length},Userlocal.Entry.prototype.isEmptyArray=function(e){return 0==e.length},Userlocal.Entry.prototype.isArray=function(e){return"[object Array]"===Object.prototype.toString.call(e)},Userlocal.Entry.prototype.end=function(e){return!this.endFlag&&(this.endFlag=!0,void this.report(e))},Userlocal.Entry.prototype.ulSendBeacon=function(e){if(this.existBeacon())return void this.sendRequestUsingBeacon(this.image_url,e);var t="https:"==document.location.protocol||this.forciblySSL?"https:":"http:",r=t+this.image_url;this.sendRequestUsingImage(r,e)},Userlocal.Entry.prototype.ulSendErrorLog=function(e,t){var r=this.UH_JSON.stringify({id:this.id,url:this.url,msg:e.message,stack:e.stack,errorLine:t,v:this.version}),o=new Image(1,1);o.async=!0;var n=(new Date,this.host+"errorlog.php?error="+r);o.src=n},Userlocal.Entry.checkPassiveEventListener=function(){var e=!1;try{var t=Object.defineProperty({},"passive",{get:function(){e=!0}});window.addEventListener("test",null,t)}catch(r){}return e},Userlocal.Entry.prototype.report=function(e){this.lastTime=(new Date).getTime();var t={};t.id=this.id,t.i_time=Math.floor(this.initTime),t.s_time=Math.floor(this.startTime),t.url=this.url,t.subject=this.subject,t.rand=this.rand,t.stay_sec=Math.floor(this.getPeriod()/100);var r=this.lastClickHref;if(t.href=r,t.dpr=this.dpr,t.smp=this.getStartMousePosition(),t.mt=this.mouseTimes,t.mouse=this.getMousePositions(),t.mwu=this.mouseWheelUp,t.mwd=this.mouseWheelDown,t.mp=this.getDynMousePositions(),this.domList(this.formDomList,"form",["INPUT","SELECT","TEXTAREA","LABEL"]),this.domInitOrder!==this.domAfterOrder&&this.margeDomAndForm(),t.form=[],t.dom=[],this.formRecord&&!this.isEmptyObject(this.formRecord)&&!this.isEmptyObject(this.getForm())){var o=this.getForm(),n=encodeURIComponent(this.UH_JSON.stringify(o));(n.length<=3e3||this.existBeacon())&&(t.form=o)}if(this.domRecord&&!this.isEmptyObject(this.domRecord)&&!this.isEmptyObject(this.getDom())){var i=this.getDom(),s=encodeURIComponent(this.UH_JSON.stringify(i));(s.length<=4e3||this.existBeacon())&&(t.dom=i)}t.submit_f=this.formSubmitAction;var a=this.getWindowSize();t.bw=a.width,t.bh=a.height;var c=this.getScreenSize();t.sw=c.width,t.sh=c.height,t.form_f=this.checkSetForm,t.ref=document.referrer,t.v=this.version;var l=this.UH_JSON.stringify(t);this.ulSendBeacon(l)},Userlocal.Entry.prototype.sendRequestUsingBeacon=function(e,t){var r=new FormData;return r.append("json",t),navigator.sendBeacon(e,r)},Userlocal.Entry.prototype.checkXHRTimeoutOption=function(e){var t=!1;try{e.timeout=500,t=!0}catch(r){}return t},Userlocal.Entry.prototype.sendRequestUsingImage=function(e,t){e=e+"?json="+encodeURIComponent(t);var r=new Image(1,1);return r.async=!0,!(e.length>7e3)&&(r.src=e,void(r.onload=function(){}))},Userlocal.Entry.prototype.existBeacon=function(){return!!navigator.sendBeacon&&!!window.FormData&&window.FormData.toString().indexOf("[native code]")!=-1},function(){var e=window.UserHeatTag,t=window[e].q[0][0],r=window[e].l,o=null,n=null,i=null;if(t.id&&(o=t.id),t.url&&(n=t.url),t.subject&&(i=t.subject),o){var s=new Userlocal.Entry(o,r,n,i);s.init()}}()}).call(this,"undefined"!=typeof global?global:"undefined"!=typeof self?self:"undefined"!=typeof window?window:{})},{}]},{},[1]);