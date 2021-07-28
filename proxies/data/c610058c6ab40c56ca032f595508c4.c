(function() {window.CONFIG_CSM_DOMAIN_NAME="csm.nl.eu.criteo.net"; window.CALLER_ID="72"; var CONFIG_JS_CALLBACK=TRC.getRTUS; var StorageOrigin,PrivateModeStatus,extendStatics=function(e,t){return(extendStatics=Object.setPrototypeOf||{__proto__:[]}instanceof Array&&function(e,t){e.__proto__=t}||function(e,t){for(var n in t)t.hasOwnProperty(n)&&(e[n]=t[n])})(e,t)};function __extends(e,t){function n(){this.constructor=e}extendStatics(e,t),e.prototype=null===t?Object.create(t):(n.prototype=t.prototype,new n)}function __awaiter(i,a,s,u){return new(s=s||Promise)(function(e,t){function n(e){try{r(u.next(e))}catch(e){t(e)}}function o(e){try{r(u.throw(e))}catch(e){t(e)}}function r(t){t.done?e(t.value):new s(function(e){e(t.value)}).then(n,o)}r((u=u.apply(i,a||[])).next())})}function __generator(n,o){var r,i,a,e,s={label:0,sent:function(){if(1&a[0])throw a[1];return a[1]},trys:[],ops:[]};return e={next:t(0),throw:t(1),return:t(2)},"function"==typeof Symbol&&(e[Symbol.iterator]=function(){return this}),e;function t(t){return function(e){return function(t){if(r)throw new TypeError("Generator is already executing.");for(;s;)try{if(r=1,i&&(a=2&t[0]?i.return:t[0]?i.throw||((a=i.return)&&a.call(i),0):i.next)&&!(a=a.call(i,t[1])).done)return a;switch(i=0,a&&(t=[2&t[0],a.value]),t[0]){case 0:case 1:a=t;break;case 4:return s.label++,{value:t[1],done:!1};case 5:s.label++,i=t[1],t=[0];continue;case 7:t=s.ops.pop(),s.trys.pop();continue;default:if(!(a=0<(a=s.trys).length&&a[a.length-1])&&(6===t[0]||2===t[0])){s=0;continue}if(3===t[0]&&(!a||t[1]>a[0]&&t[1]<a[3])){s.label=t[1];break}if(6===t[0]&&s.label<a[1]){s.label=a[1],a=t;break}if(a&&s.label<a[2]){s.label=a[2],s.ops.push(t);break}a[2]&&s.ops.pop(),s.trys.pop();continue}t=o.call(n,s)}catch(e){t=[6,e],i=0}finally{r=a=0}if(5&t[0])throw t[1];return{value:t[0]?t[1]:void 0,done:!0}}([t,e])}}}function getCookie(e){for(var t=document.cookie.split(";"),n=0;n<t.length;n++){var o=t[n],r=o.substr(0,o.indexOf("=")).replace(/^\s+|\s+$/g,""),i=o.substr(o.indexOf("=")+1);if(r===e&&i)return decodeURIComponent(i)}return null}function setCookieOnMainDomain(e,t,n){var o=new Date;o.setTime(o.getTime()+60*n*60*1e3);for(var r="expires="+o.toUTCString(),i=document.location.hostname.split("."),a=null,s=0;s<i.length;++s){var u="domain=."+(a=i.slice(i.length-s-1,i.length).join("."));document.cookie=e+"="+encodeURIComponent(t)+";"+r+";"+u+";path=/";var c=getCookie(e);if(c&&c===t)break}return a||document.location}function deleteCookie(e){setCookieOnMainDomain(e,"",0)}function hasStorages(){return window.localStorage&&window.sessionStorage}function setItem(e,t){if(hasStorages())try{window.localStorage.setItem(e,t)}catch(e){}}function getItem(e){return hasStorages()?localStorage.getItem(e):null}function removeItem(e){if(hasStorages())return localStorage.removeItem(e)}function getFromAllStorages(e,t){var n=getCookie(e),o=getItem(e);return n||o?t(n||o,(n&&StorageOrigin.Cookie)|(o&&StorageOrigin.LocalStorage)):t(null,StorageOrigin.None)}!function(e){e[e.None=0]="None",e[e.Cookie=1]="Cookie",e[e.LocalStorage=2]="LocalStorage",e[e.Delegation=4]="Delegation"}(StorageOrigin=StorageOrigin||{}),function(e){e[e.Unknown=0]="Unknown",e[e.Deactivated=1]="Deactivated",e[e.Activated=2]="Activated"}(PrivateModeStatus=PrivateModeStatus||{});var StorableUserData=function(){function e(e,t,n,o){this.storageKey=e,this.expirationTimeHours=t,this.value=n,this.origin=o}return e.prototype.hasValue=function(){return""!==String(this.value)&&null!==this.value&&void 0!==this.value},e.prototype.saveOnAllStorages=function(){if(this.hasValue()){var e="boolean"==typeof this.value?this.value?"1":"0":String(this.value);setCookieOnMainDomain(this.storageKey,e,this.expirationTimeHours),setItem(this.storageKey,e)}},e.prototype.toJSON=function(){return{value:this.value,origin:this.origin}},e.prototype.removeFromAllStorages=function(){deleteCookie(this.storageKey),removeItem(this.storageKey)},e.prototype.fromAllStorages=function(e){return getFromAllStorages(this.storageKey,e)},e}(),Sid=function(n){function o(e,t){return n.call(this,"cto_sid",9360,e,t)||this}return __extends(o,n),o.fromAllStorages=function(){return getFromAllStorages("cto_sid",function(e,t){return new o(e,t)})},o.fromValue=function(e){return new o(e,StorageOrigin.None)},o}(StorableUserData),IdCopy=function(n){function o(e,t){return n.call(this,"cto_idcpy",9360,e,t)||this}return __extends(o,n),o.fromAllStorages=function(){return getFromAllStorages("cto_idcpy",function(e,t){return new o(e,t)})},o.fromValue=function(e){return new o(e,StorageOrigin.None)},o}(StorableUserData),LocalWebId=function(n){function o(e,t){return n.call(this,"cto_lwid",9360,e,t)||this}return __extends(o,n),o.fromAllStorages=function(){return getFromAllStorages("cto_lwid",function(e,t){return new o(e,t)})},o.fromValue=function(e){return new o(e,StorageOrigin.None)},o}(StorableUserData),Optout=function(n){function o(e,t){return n.call(this,"cto_optout",43200,e,t)||this}return __extends(o,n),o.fromAllStorages=function(){return getFromAllStorages("cto_optout",function(e,t){return new o("1"===e,t)})},o.fromValue=function(e){return new o(e,StorageOrigin.None)},o}(StorableUserData),Bundle=function(n){function o(e,t){return n.call(this,"cto_bundle",9360,e,t)||this}return __extends(o,n),o.fromAllStorages=function(){return getFromAllStorages("cto_bundle",function(e,t){return new o(e,t)})},o.fromValue=function(e){return new o(e,StorageOrigin.None)},o}(StorableUserData),Ifa=function(n){function o(e,t){return n.call(this,"id_controller_ifa",9360,e,t)||this}return __extends(o,n),o.fromAllStorages=function(){return getFromAllStorages("id_controller_ifa",function(e,t){return new o(e,t)})},o.fromValue=function(e){return new o(e,StorageOrigin.None)},o}(StorableUserData),TCFCompatibleConsentProvider=function(){function e(e,t,n){void 0===n&&(n=function(e){}),this.tcfv1ConsentProvider=e,this.tcfv2ConsentProvider=t,this.logger=n}return e.prototype.getReadyToRetrieveProvider=function(){return this.tcfv2ConsentProvider.hasCallerFunctionInFrame()?this.tcfv2ConsentProvider:this.tcfv1ConsentProvider.hasCallerFunctionInFrame()?this.tcfv1ConsentProvider:void 0!==this.tcfv2ConsentProvider.getCMPFrame()?this.tcfv2ConsentProvider:void 0!==this.tcfv1ConsentProvider.getCMPFrame()?this.tcfv1ConsentProvider:void 0},e.prototype.retrieveConsentForPassback=function(e){var t=this.getReadyToRetrieveProvider();void 0===t&&(this.logger("No compatible GDPR privacy provider found"),e(void 0)),t===this.tcfv1ConsentProvider?this.tcfv1ConsentProvider.retrieveConsentForPassback(e):t===this.tcfv2ConsentProvider&&this.tcfv2ConsentProvider.retrieveConsent(e)},e.prototype.retrieveConsent=function(e){var t=this.getReadyToRetrieveProvider();void 0===t&&(this.logger("No compatible GDPR privacy provider found"),e(void 0)),null==t||t.retrieveConsent(e)},e.prototype.readyToRetrieve=function(){return this.tcfv2ConsentProvider.readyToRetrieve()||this.tcfv1ConsentProvider.readyToRetrieve()},e}();function tryParseJson(e){try{return JSON.parse(e)}catch(e){return}}var CRITEO_VENDOR_ID=91,TCFv1ConsentProvider=function(){function e(e,t,n){void 0===n&&(n=function(e){}),this.cmpCallbacks={},this.currentWindow=e,this.timeout=t.tcfTimeout,this.pingTimeout=t.tcfPingTimeout,this.pingDelay=t.tcfPingDelay,this.cmpAutoDetect=t.cmpAutoDetect,this.logger=n}return e.prototype.getCMPFrame=function(){for(var e,t=this.currentWindow,n=0;n<10;++n){try{t.frames.__cmpLocator&&(e=t)}catch(e){}if(t===this.currentWindow.top)break;t=t.parent}return e},e.prototype.hasCallerFunctionInFrame=function(){return"function"==typeof this.currentWindow.__cmp},e.prototype.readyToRetrieve=function(){return this.hasCallerFunctionInFrame()||void 0!==this.getCMPFrame()},e.prototype.pingWithTimeout=function(o,e,t,n){function r(e,t){i.logger(t),clearTimeout(e),n()}var i=this;return window.setTimeout(function(){var n=window.setTimeout(function(){r(o,"Timeout: Unable to get ping return after "+e+"ms")},e);i.executeCommand("ping",null,function(e,t){clearTimeout(n),t?(i.logger("GDPR CMP ping returned"),!0!==e.cmpLoaded&&r(o,"GDPR ping returned cmpLoaded which is not true"),i.logger("GDPR ping returned cmpLoaded which is true")):r(o,"Error sending ping to GDPR CMP")})},t)},e.prototype.retrieveConsent=function(e){this.executeRetrieveConsent("getConsentData",null,e)},e.prototype.retrieveConsentForPassback=function(e){this.executeRetrieveConsent("getVendorConsents",[CRITEO_VENDOR_ID],e)},e.prototype.executeRetrieveConsent=function(e,t,n){var o=this,r=!1,i=window.setTimeout(function(){r=!0,o.logger("Timeout: Unable to resolve GDPR consent after "+o.timeout+"ms"),n(void 0)},this.timeout),a=!1!==this.cmpAutoDetect?this.pingWithTimeout(i,this.pingTimeout,this.pingDelay,function(){r=!0,o.logger("Timeout: Unable to ping GDPR API after "+o.pingTimeout+"ms"),n(void 0)}):void 0;this.executeCommand(e,t,function(e,t){clearTimeout(a),r||(clearTimeout(i),t?(o.logger("GDPR consent retrieved"),o.processConsentData(e,n)):(o.logger("Error retrieving GDPR consent data from CMP"),n(void 0)))})},e.prototype.processConsentData=function(e,t){if(e){var n={};void 0!==e.consentData&&(n.consentData=e.consentData),void 0!==e.gdprApplies&&(n.gdprApplies=!!e.gdprApplies),t(n)}else this.logger("Unable to read GDPR consent data from CMP"),t(void 0)},e.prototype.executeCommand=function(e,t,n){var i=this;if(!this.hasCallerFunctionInFrame()){this.logger("No GDPR CMP defined on current frame");var a=this.getCMPFrame();this.currentWindow.__cmp=function(e,t,n){if(!a)return i.logger("GDPR CMP not found in any frame"),void n({msg:"GDPR CMP not found in any frame"},!1);var o=Math.random().toString(10),r={__cmpCall:{command:e,parameter:t,callId:o}};i.cmpCallbacks[o]=n,a.postMessage(r,"*")},this.currentWindow.addEventListener("message",function(e){var t="string"==typeof e.data?tryParseJson(e.data):e.data;if(t&&t.__cmpReturn&&t.__cmpReturn.callId&&t.__cmpReturn.returnValue){var n=t.__cmpReturn;i.cmpCallbacks&&i.cmpCallbacks[n.callId]&&(i.cmpCallbacks[n.callId](n.returnValue,n.success),delete i.cmpCallbacks[n.callId])}},!1)}this.currentWindow.__cmp(e,t,n)},e}(),CRITEO_VENDOR_ID$1=91,TCF_V2_VERSION=2,TCFv2ConsentProvider=function(){function e(e,t,n){void 0===n&&(n=function(e){}),this.cmpCallbacks={},this.currentWindow=e,this.timeout=t.tcfTimeout,this.pingTimeout=t.tcfPingTimeout,this.pingDelay=t.tcfPingDelay,this.cmpAutoDetect=t.cmpAutoDetect,this.logger=n}return e.prototype.getCMPFrame=function(){for(var e,t=this.currentWindow,n=0;n<10;++n){try{t.frames.__tcfapiLocator&&(e=t)}catch(e){}if(t===this.currentWindow.top)break;t=t.parent}return e},e.prototype.hasCallerFunctionInFrame=function(){return"function"==typeof this.currentWindow.__tcfapi},e.prototype.readyToRetrieve=function(){return this.hasCallerFunctionInFrame()||void 0!==this.getCMPFrame()},e.prototype.pingWithTimeout=function(n,e,t,o){function r(e,t){i.logger(t),clearTimeout(e),o()}var i=this;return window.setTimeout(function(){var t=window.setTimeout(function(){r(n,"Timeout: Unable to get TCFv2 ping return after "+e+"ms")},e);i.executeCommand("ping",TCF_V2_VERSION,function(e){clearTimeout(t),i.logger("TCFv2 CMP ping returned in ms"),"error"===e.cmpStatus?r(n,"Error status on ping to TCFv2 CMP"):!0!==e.cmpLoaded?r(n,"TCFv2 ping returned cmpLoaded = false"):i.logger("TCFv2 ping returned cmpLoaded = true")})},t)},e.prototype.retrieveConsent=function(n){var o=this,r=!1,i=window.setTimeout(function(){r=!0,o.logger("Timeout: Unable to resolve TCFv2 consent after "+o.timeout+"ms"),n(void 0)},this.timeout),a=!1!==this.cmpAutoDetect?this.pingWithTimeout(i,this.pingTimeout,this.pingDelay,function(){r=!0,o.logger("Timeout: Unable to ping TCFv2 API after "+o.pingTimeout+"ms"),n(void 0)}):void 0;this.executeCommand("getTCData",TCF_V2_VERSION,function(e,t){clearTimeout(a),r||(clearTimeout(i),t?(o.logger("TCFv2 consent retrieved in ms"),o.processResponseData(e,n)):(o.logger("Error retrieving TCFv2 consent data from CMP"),n(void 0)))},[CRITEO_VENDOR_ID$1])},e.prototype.processResponseData=function(e,t){var n;if(e){var o={};void 0!==e.tcString&&(o.consentData=e.tcString),void 0!==e.gdprApplies&&(o.gdprApplies=!!e.gdprApplies),o.version=e.tcfPolicyVersion?e.tcfPolicyVersion:TCF_V2_VERSION,o.purposes=null===(n=null==e?void 0:e.purpose)||void 0===n?void 0:n.consents,t(o)}else this.logger("Unable to read GDPR consent data from CMP"),t(void 0)},e.prototype.executeCommand=function(e,t,n,o){var a=this;if(!this.hasCallerFunctionInFrame()){this.logger("No TCFv2 CMP defined on current frame");var s=this.getCMPFrame();this.currentWindow.__tcfapi=function(e,t,n,o){if(!s)return a.logger("TCFv2 CMP not found in any frame"),void n({msg:"TCFv2 CMP not found in any frame"},!1);var r=Math.random().toString(10),i={__tcfapiCall:{command:e,version:t,parameter:o,callId:r}};a.cmpCallbacks[r]=n,s.postMessage(i,"*")},this.currentWindow.addEventListener("message",function(e){var t="string"==typeof e.data?tryParseJson(e.data):e.data;if(t&&t.__tcfapiReturn&&t.__tcfapiReturn.callId&&t.__tcfapiReturn.returnValue){var n=t.__tcfapiReturn;a.cmpCallbacks&&a.cmpCallbacks[n.callId]&&"function"==typeof a.cmpCallbacks[n.callId]&&(a.cmpCallbacks[n.callId](n.returnValue,n.success),delete a.cmpCallbacks[n.callId])}},!1)}this.currentWindow.__tcfapi(e,t,n,o)},e}(),USPAPI_VERSION=1,CCPAConsentProvider=function(){function e(e,t,n){void 0===n&&(n=function(e){}),this.uspapiCallbacks={},this.currentWindow=e,this.timeout=t.uspApiTimeout,this.logger=n}return e.prototype.getCMPFrame=function(){for(var e,t=this.currentWindow,n=0;n<10;++n){try{t.frames.__uspapiLocator&&(e=t)}catch(e){}if(t===this.currentWindow.top)break;t=t.parent}return e},e.prototype.hasCallerFunctionInWindow=function(){return"function"==typeof this.currentWindow.__uspapi},e.prototype.readyToRetrieve=function(){return this.hasCallerFunctionInWindow()||void 0!==this.getCMPFrame()},e.prototype.retrieveConsent=function(n){var o=this,r=!1,i=window.setTimeout(function(){r=!0,o.logger("Timeout: Unable to resolve CCPA consent after "+o.timeout+"ms"),n(void 0)},this.timeout);this.executeCommand("getUSPData",USPAPI_VERSION,function(e,t){r||(clearTimeout(i),t?(o.logger("CCPA consent retrieved"),o.processResponseData(e,n)):(o.logger("Error retrieving CCPA consent data from CMP"),n(void 0)))})},e.prototype.processResponseData=function(e,t){e?t(e):(this.logger("Unable to read CCPA consent data from CMP"),t(void 0))},e.prototype.executeCommand=function(e,t,n){var i=this;if(!this.hasCallerFunctionInWindow()){this.logger("No CCPA CMP defined on current frame");var a=this.getCMPFrame();this.currentWindow.__uspapi=function(e,t,n){if(!a)return i.logger("CCPA CMP not found in any frame"),void n({msg:"CCPA CMP not found in any frame"},!1);var o=Math.random().toString(10),r={__uspapiCall:{command:e,parameter:t,callId:o}};i.uspapiCallbacks[o]=n,a.postMessage(r,"*")},this.currentWindow.addEventListener("message",function(e){var t="string"==typeof e.data?tryParseJson(e.data):e.data;if(t&&t.__uspapiReturn&&t.__uspapiReturn.callId&&t.__uspapiReturn.returnValue){var n=t.__uspapiReturn;i.uspapiCallbacks&&i.uspapiCallbacks[n.callId]&&(i.uspapiCallbacks[n.callId](n.returnValue,n.success),delete i.uspapiCallbacks[n.callId])}},!1)}this.currentWindow.__uspapi(e,t,n)},e.prototype.hasUserOptOut=function(e){return!(!e||!e.uspString||"1YNY"===e.uspString.toUpperCase()||"1YNN"===e.uspString.toUpperCase()||"1YN-"===e.uspString.toUpperCase()||"1-N-"===e.uspString.toUpperCase()||"1---"===e.uspString)},e}(),ConsentManager=function(){function e(e,t,n,o,r){void 0===t&&(t=1e4),void 0===n&&(n=50),void 0===o&&(o=1e3),void 0===r&&(r=50);var i={tcfTimeout:t,tcfPingTimeout:n,tcfPingDelay:o,uspApiTimeout:r},a={uspApiTimeout:t},s=new TCFv1ConsentProvider(e,i),u=new TCFv2ConsentProvider(e,i);this.tcfPrivacyProvider=new TCFCompatibleConsentProvider(s,u),this.ccpaConsentProvider=new CCPAConsentProvider(e,a)}return e.prototype.retrieveConsentGDPR=function(){var n=this;return new Promise(function(t,e){n.tcfPrivacyProvider.readyToRetrieve()?n.tcfPrivacyProvider.retrieveConsent(function(e){return t(e)}):t(void 0)})},e.prototype.retrieveConsentCCPA=function(){var n=this;return new Promise(function(t,e){n.ccpaConsentProvider.readyToRetrieve()?n.ccpaConsentProvider.retrieveConsent(function(e){return t(e)}):t(void 0)})},e}(),eventQueue=[],SYNCFRAME_ID="criteo-syncframe",SYNCFRAME_ORIGIN="https://gum.criteo.com",SYNCFRAME_URL=SYNCFRAME_ORIGIN+"/syncframe",consentManager=new ConsentManager(window),idcpy=IdCopy.fromAllStorages(),optout=Optout.fromAllStorages(),sid=Sid.fromAllStorages(),lwid=LocalWebId.fromAllStorages(),bundle=Bundle.fromAllStorages(),cookiesWriteable=!1,localStorageWritable=!1,gdprConsent=void 0,ccpaConsent=void 0,ifa=Ifa.fromAllStorages(),hasFetchAPI="function"==typeof window.fetch,rtusResponseFromLocalStorage=null,FETCHED_CALLED=!1,CURRENT_SCRIPT_SRC=document.currentScript.src,RTUS_RESPONSE_LS_KEY="cto_rtus",RTUS_RESPONSE_LS_KEY_WITH_CALLERID=RTUS_RESPONSE_LS_KEY+"_"+window.CALLER_ID,JSON_DELIMITER_REGEX=/\(({[^}]*})\)/g,JS_CALLBACK=CONFIG_JS_CALLBACK||function(e){},DEFAULT_RTUS_RESPONSE={status:"Unknown",userid:""},syncframeListener=function(e){var t=e.data;(t&&e.origin==SYNCFRAME_ORIGIN&&hasFetchAPI||window.ForceSyncframeMessageHanding)&&(e.stopImmediatePropagation(),t.optout?(logCounter("Origin.FromSyncframeOptout"),sid.removeFromAllStorages(),idcpy.removeFromAllStorages(),(optout=Optout.fromValue(!0)).saveOnAllStorages(),bundle.removeFromAllStorages(),fetchGumResponseAndStoreItInLocalStorage(null,optout,null,null)):(t.uid&&(logCounter("Origin.FromSyncframeIdcpy"),IdCopy.fromValue(t.uid).saveOnAllStorages()),t.bundle&&(logCounter("Origin.FromSyncframeBundle"),Bundle.fromValue(t.bundle).saveOnAllStorages()),t.removeSid?(logCounter("Origin.FromSyncframeRemoveSid"),sid.removeFromAllStorages(),removeItem(RTUS_RESPONSE_LS_KEY),removeItem(RTUS_RESPONSE_LS_KEY_WITH_CALLERID)):t.sid&&(logCounter("Origin.FromSyncframeSid"),Sid.fromValue(t.sid).saveOnAllStorages()),t.sid||t.uid||t.bundle?fetchGumResponseAndStoreItInLocalStorage(Sid.fromValue(t.sid),Optout.fromValue(!1),IdCopy.fromValue(t.uid),Bundle.fromValue(t.bundle)):sendMetrics()))};function fetchGumResponseAndStoreItInLocalStorage(e,t,n,o){if(FETCHED_CALLED)sendMetrics();else{var r=new Headers;e&&e.hasValue()&&(r.set("X-CRTO-SID",e.value),logCounter("Headers.Sid")),t&&t.value&&(r.set("X-CRTO-OPTOUT","1"),logCounter("Headers.Optout")),n&&n.hasValue()&&(r.set("X-CRTO-IDCPY",n.value),logCounter("Headers.Idpcy")),o&&o.hasValue()&&(r.set("X-CRTO-BUNDLE",o.value),logCounter("Headers.Bundle")),logCounter("Events.InitiateFetch"),fetch(CURRENT_SCRIPT_SRC,{headers:r,cache:"reload",mode:"cors"}).then(function(e){return e.text().then(function(e){if(FETCHED_CALLED=!0,!(0<e.indexOf('"status":"Unknown"'))){var t=JSON_DELIMITER_REGEX.exec(e);t&&t[1]&&(setItem(RTUS_RESPONSE_LS_KEY_WITH_CALLERID,t[1]),logCounter("Events.SaveResponseOnLocalStorage")),sendMetrics()}})}).catch(logCounter.bind(null,"Events.FetchError")).then(sendMetrics)}}function parseJSON(e){try{return JSON.parse(e)}catch(e){return logCounter("Events.JsonParseError"),{}}}function getTld(){var e=setCookieOnMainDomain("cto_tld_test","test",1);return deleteCookie("cto_tld_test"),e}function canWriteCookies(){return canWrite(setCookieOnMainDomain,getCookie,deleteCookie)}function canWriteLocalStorage(){return canWrite(setItem,getItem,removeItem)}function canWrite(e,t,n){e("cto_write_test","testWrite",1);var o="testWrite"===t("cto_write_test");return n("cto_write_test"),o}function createGumIframe(){var e=document.createElement("iframe"),t=extractHostname(getHighestAccessibleUrl(getHighestAccessibleWindow(window))),n=encodeURIComponent(t),o=getTld(),r={sid:sid.toJSON(),uid:idcpy.toJSON(),optout:optout.toJSON(),bundle:bundle.toJSON(),lwid:lwid.toJSON(),tld:o,cw:cookiesWriteable,origin:"rtus",topUrl:n,rtusCallerId:parseInt(window.CALLER_ID,10),ifa:ifa.toJSON(),lsw:localStorageWritable};return e.src=getSyncframeUrlWithParameters(n,"rtus",r),e.id=SYNCFRAME_ID,e.width="0",e.height="0",e.frameBorder="0",e.setAttribute("style","border-width:0px; margin:0px; display:none"),e}function getSyncframeUrlWithParameters(e,t,n){var o=SYNCFRAME_URL;return o+="?origin="+t,o+=e?"&topUrl="+e:"",gdprConsent&&(o+="&gdpr_consent="+(gdprConsent.consentData?gdprConsent.consentData:""),void 0!==gdprConsent.gdprApplies&&(o+="&gdpr="+(gdprConsent.gdprApplies?1:0))),ccpaConsent&&(o+="&us_privacy="+encodeURIComponent(ccpaConsent.uspString||"")),o+="#"+JSON.stringify(n)}function shouldDropSyncframe(){return!document.getElementById(SYNCFRAME_ID)}function appendGumIframeIfDoesNotExist(){shouldDropSyncframe()&&(logCounter("Events.SyncframeDropped"),window.addEventListener("message",syncframeListener,!0),document.body.appendChild(createGumIframe()))}function extractHostname(e){var t=document.createElement("a");return t.href=e,t.hostname}function getHighestAccessibleUrl(e){var t=e.topFrame,n="";if(e.err)try{try{n=t.top.location.href}catch(e){var o=t.location.ancestorOrigins;n=o[o.length-1]}}catch(e){n=t.document.referrer}else n=t.location.href;return n}function getHighestAccessibleWindow(e){var t=e,n=!1;try{for(;t.parent.document!==t.document;){if(!t.parent.document){n=!0;break}t=t.parent}}catch(e){n=!0}return{topFrame:t,err:n}}function init(){return __awaiter(this,void 0,void 0,function(){var t;return __generator(this,function(e){switch(e.label){case 0:return logCounter("Events.StartInit"),sid=Sid.fromAllStorages(),optout=Optout.fromAllStorages(),lwid=LocalWebId.fromAllStorages(),idcpy=IdCopy.fromAllStorages(),bundle=Bundle.fromAllStorages(),ifa=Ifa.fromAllStorages(),cookiesWriteable=canWriteCookies(),localStorageWritable=canWriteLocalStorage(),[4,consentManager.retrieveConsentGDPR()];case 1:return gdprConsent=e.sent(),[4,consentManager.retrieveConsentCCPA()];case 2:return ccpaConsent=e.sent(),lwid.hasValue()&&logCounter("Origin.FromLocalWebId"),window.addEventListener&&("complete"===document.readyState?appendGumIframeIfDoesNotExist():(t=function(){window.removeEventListener("load",t),document.removeEventListener("DOMContentLoaded",t),appendGumIframeIfDoesNotExist()},window.addEventListener("load",t,!1),document.addEventListener("DOMContentLoaded",t,!1))),(rtusResponseFromLocalStorage=getItem(RTUS_RESPONSE_LS_KEY_WITH_CALLERID)||getItem(RTUS_RESPONSE_LS_KEY))?(JS_CALLBACK(parseJSON(rtusResponseFromLocalStorage)),logCounter("Origin.FromLocalRtusResponse"),sendMetrics(),[2]):((sid.hasValue()||optout.value||idcpy.hasValue()||bundle.hasValue())&&(sid.hasValue()&&logCounter("Origin.FromLocalSid"),optout.value&&logCounter("Origin.FromLocalOptout"),idcpy.hasValue()&&logCounter("Origin.FromIdCpy"),bundle.hasValue()&&logCounter("Origin.FromBundle"),fetchGumResponseAndStoreItInLocalStorage(sid,optout,idcpy,bundle)),JS_CALLBACK(DEFAULT_RTUS_RESPONSE),[2])}})})}function logCounter(e){eventQueue.push("entry=c~Idfs.Rtus."+(window.CALLER_ID||"UnknownCaller")+"."+e+"~1")}function sendMetrics(){if(0!==eventQueue.length){var e=eventQueue.join("&"),t="https://"+window.CONFIG_CSM_DOMAIN_NAME+"/iev?"+e;if(!window.CONFIG_CSM_DOMAIN_NAME)return console.log("Pixel",t);(new Image).src=t,eventQueue=[]}}init();
})();