var firebaseConfig={apiKey:"AIzaSyDNKMYRNLzK6QQPsoIbolr7mLWAODIp1bc",authDomain:"jangwebsite-4db00.firebaseapp.com",databaseURL:"https://jangwebsite-4db00.firebaseio.com",projectId:"jangwebsite-4db00",storageBucket:"jangwebsite-4db00.appspot.com",messagingSenderId:"591046353751",appId:"1:591046353751:web:ba5b2c0eeca926255f5412",measurementId:"G-56FHNTJBTG"};firebase.initializeApp(firebaseConfig);firebase.analytics();const messaging=firebase.messaging();messaging.usePublicVapidKey('BIIKe9c-Ply0gkXbX3vy_kP8RHSERfdurTpcBrg6q-hOkHLDMsHGW9CXaaV21TksMAdmF_phaecwtIPR4V7vJ8o');const tokenDivId='token_div';const permissionDivId='permission_div';messaging.onTokenRefresh(function(){messaging.getToken().then(function(refreshedToken){console.log('Token refreshed.');setTokenSentToServer(false);sendTokenToServer(refreshedToken);resetUI();}).catch(function(err){console.log('Unable to retrieve refreshed token ',err);showToken('Unable to retrieve refreshed token ',err);});});messaging.onMessage(function(payload){console.log('Message received. ',payload);var notificationOptions={body:payload.notification.body,icon:payload.notification.icon,click_action:payload.notification.click_action};new Notification(payload.notification.title,notificationOptions);appendMessage(payload);});function resetUI(){messaging.getToken().then(function(currentToken){if(currentToken){sendTokenToServer(currentToken);updateUIForPushEnabled(currentToken);}else{console.log('No Instance ID token available. Request permission to generate one.');updateUIForPushPermissionRequired();setTokenSentToServer(false);requestPermission();}}).catch(function(err){console.log('An error occurred while retrieving token. ',err);showToken('Error retrieving Instance ID token. ',err);setTokenSentToServer(false);});}
function showToken(currentToken){}
function sendTokenToServer(currentToken){if(!isTokenSentToServer()){console.log('Sending token to server...');var data=null;var xhr=new XMLHttpRequest();xhr.withCredentials=true;xhr.addEventListener("readystatechange",function(){console.log(xhr);if(xhr.readyState===4&&xhr.status===200){setTokenSentToServer(true);}});xhr.open("GET","https://jang.com.pk/assets/front/firebase_token/send_token.php?token="+currentToken);xhr.send(data);}else{console.log('Token already sent to server so won\'t send it again '+
'unless it changes');}}
function isTokenSentToServer(){return window.localStorage.getItem('sentToServer')==='1';}
function setTokenSentToServer(sent){window.localStorage.setItem('sentToServer',sent?'1':'0');}
function showHideDiv(divId,show){}
function requestPermission(){console.log('Requesting permission...');messaging.requestPermission().then(function(){console.log('Notification permission granted.');resetUI();}).catch(function(err){console.log('Unable to get permission to notify.',err);});}
function deleteToken(){messaging.getToken().then(function(currentToken){messaging.deleteToken(currentToken).then(function(){console.log('Token deleted.');setTokenSentToServer(false);resetUI();}).catch(function(err){console.log('Unable to delete token. ',err);});}).catch(function(err){console.log('Error retrieving Instance ID token. ',err);showToken('Error retrieving Instance ID token. ',err);});}
function appendMessage(payload){}
function clearMessages(){}
function updateUIForPushEnabled(currentToken){showHideDiv(tokenDivId,true);showHideDiv(permissionDivId,false);showToken(currentToken);}
function updateUIForPushPermissionRequired(){showHideDiv(tokenDivId,false);showHideDiv(permissionDivId,true);}
resetUI();