/*
To change this license header, choose License Headers in Project Properties.
To change this template file, choose Tools | Templates
and open the template in the editor.
*/
/* 
    Created on : Nov 20, 2018, 3:55:15 PM
    Author     : Magazine3
*/
@media only screen and (min-width: 992px) {
    .pwaforwp-footer-prompt {
        padding: 1% 3%;
     flex-direction: row;
    justify-content: center;
    }
}
.pwaforwp-footer-prompt{
    display: none;
    width: 100%;
    line-height: 2em;    
    color: #333;
    text-align: center;
    text-decoration: none;    
    min-height: 10%;
    padding:15px 0px 15px 0px;
    position: fixed;
    bottom: 0;
    justify-content: flex-end;
    flex-direction: column;
    flex-grow: 1;
    animation-duration: 1s;
    animation-fill-mode: both;
    z-index: 9999;
}
.pwaforwp-footer-prompt .pwaforwp-prompt-close:after{
  content: "✖";
  color: #d5e0eb;
  position: absolute;
  right: 10px;
  top: 10px;
  font-size: 12px;
  background: rgba(0, 0, 0, 0.40);
  border-radius: 30px;
  text-align: center;
  width: 20px;
  height: 20px;
  line-height: 22px;
  cursor: pointer;
} 
.pwaforwp-bounceInUp{
    animation-name: bounceInUp;
}
.pwaforwp-animated {
    animation-duration: 1s;
    animation-fill-mode: both;
}
.pwaforwp-btn{
    border: none;   
    cursor: pointer;
    display: inline-block;
    border-radius: 4px;
    height: auto;
    line-height: 1;
    min-width: auto;
    padding: 8px 16px;
    font-size: 16px;
    margin: 10px 0px 0px 0px;
    font-family: sans-serif;
    text-transform: none;
    transition: all .2s ease-in-out;
}
/* Center the loader */

#pwaforwp_loading_div {
position: fixed;
width: 100%;
height: 200%;
top: 0px;
left: 0px;
background-color: white;
z-index: 9999;
}
.pwaforwp-loading-wrapper{z-index: 9999999;display:none;}
#pwaforwp_loading_icon {
  position: fixed;
  left: 50%;
  top: 50%;
  z-index: 9999999;
  margin: -60px 0 0 -60px;
  border: 16px solid #f3f3f3;
  border-radius: 50%;
  border-top: 16px solid #3498db;
  width: 120px;
  height: 120px;
  -webkit-animation: spin 2s linear infinite;
  animation: spin 2s linear infinite;
}

@-webkit-keyframes spin {
  0% { -webkit-transform: rotate(0deg); }
  100% { -webkit-transform: rotate(360deg); }
}

@keyframes spin {
  0% { transform: rotate(0deg); }
  100% { transform: rotate(360deg); }
}

/* Add animation to "page content" */
.animate-bottom {
  position: relative;
  -webkit-animation-name: animatebottom;
  -webkit-animation-duration: 1s;
  animation-name: animatebottom;
  animation-duration: 1s
}

@-webkit-keyframes animatebottom {
  from { bottom:-100px; opacity:0 } 
  to { bottom:0px; opacity:1 }
}

@keyframes animatebottom { 
  from{ bottom:-100px; opacity:0 } 
  to{ bottom:0; opacity:1 }
}

/** Add to home screen CSS **/
#pwaforwp-add-to-home-click h3{
  font-size: 20px;
  font-weight: 600;
  margin: 0px;
  line-height: 1.4;
  font-family: sans-serif;
}

@media(max-width:425px){
  #pwaforwp-add-to-home-click h3 {
    font-size: 16px;
  }
  .pwaforwp-btn{
    font-size: 14px;
  }
  .pwaforwp-footer-prompt{
    padding:15px 0px 10px 0px;
  }
  .pwaforwp-footer-prompt .pwaforwp-prompt-close:after {
    right: 5px;
    top: 5px;
  }
}
.pwaforwp-app-contents{display: none;}
