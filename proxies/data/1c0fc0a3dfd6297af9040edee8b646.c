<style type="text/css">
.cricwidgets {
  font-family: arial;
  font-size: 14px;
} 
 .cricwidgets a{
  text-decoration: none;
  color: #000; 
 } 
.cricwidgets .btn {
  transition-property: all;
  transition-duration: 0.2s;
  transition-timing-function: linear;
  transition-delay: 0s;
  padding: 10px 20px;
  margin-right: 10px;
  background-color: #fff;
  border: 1px solid #2c2c2c;
  border-radius: 3px;
  cursor: pointer;
  outline: none;
}
.cricwidgets .btn:last-child {
  margin-right: 0;
}
.cricwidgets .btn:hover, .btn.js-active {
  color: #fff;
  background-color: #2c2c2c;
}

.cricwidgets .header {
  max-width: 500px;
  margin: 50px auto;
  text-align: center;
  display: none;
}

.cricwidgets .header__title {
  margin-bottom: 30px;
  font-weight: 500;
}

.cricwidgets .content {
  margin: auto;
}

.cricwidgets .content__title {
  margin-bottom: 20px;
  font-size: 16px;
  font-weight: 500;
  text-align: center;
}

.cricwidgets .content__inner {
  width: auto;
  height: 550px;
  margin: auto;
  background-color: #fff;
 /* box-shadow: 0 8px 17px 2px rgba(0, 0, 0, 0.14), 0 3px 14px 2px rgba(0, 0, 0, 0.12), 0 5px 5px -3px rgba(0, 0, 0, 0.2); */
}

.cricwidgets .tabs {
  position: relative;
  padding: 2px 8px;
  height: 100%;
  overflow: hidden;

}

.cricwidgets .tabs__nav {
  position: relative;
}

.cricwidgets .tabs__nav-decoration {
  position: absolute;
  top: 0;
  left: 0;
  height: 100%;
  transition: width .2s linear 0s, -webkit-transform .2s ease-out 0s;
  transition: width .2s linear 0s, transform .2s ease-out 0s;
  transition: width .2s linear 0s, transform .2s ease-out 0s, -webkit-transform .2s ease-out 0s;
  border-radius: 3px;
  z-index: 1;
}

.cricwidgets .tabs__nav-list {
  position: relative;
  display: flex; 
  justify-content: space-between;
  list-style-type: none;
  z-index: 5;
  padding-left: 0px;
}

.cricwidgets .tabs__nav-item {
  transition-property: all;
  transition-duration: 0.2s;
  transition-timing-function: linear;
  transition-delay: 0s;
  padding: 12px 15px;
  cursor: pointer;
  margin: 0 auto;
}
.cricwidgets .tabs__nav-item.js-active {
  transition-property: all;
  transition-duration: 0.2s;
  transition-timing-function: linear;
  transition-delay: 0.05s;
  color: #fff;
  background-color: #00753e;
}

.cricwidgets .tabs__panels {
  position: relative;
  margin-top: 15px;
}

.cricwidgets .tabs__panel {
  position: absolute;
  top: 0;
  left: 0;
  transition: none;
  -webkit-transform: scale(0.8);
          transform: scale(0.8);
  width: 100%;
  opacity: 0;
}
.cricwidgets .tabs__panel.js-active {
  transition: all .25s linear 0s;
  -webkit-transform: scale(1);
          transform: scale(1);
  opacity: 1;
  z-index: 9999;
}

.cricwidgets .tabs__panel-card {
  display: flex;
  margin-bottom: 30px;
  padding: 15px;
  box-shadow: 0 2px 2px 0 rgba(0, 0, 0, 0.14), 0 3px 1px -2px rgba(0, 0, 0, 0.12), 0 1px 5px 0 rgba(0, 0, 0, 0.2);
}
.cricwidgets .tabs__panel-card:last-child {
  margin-bottom: 0;
}

.cricwidgets .tabs__panel-card--spaced-between {
  justify-content: space-between;
}

.cricwidgets .tabs__panel-avatar {
  flex-shrink: 0;
  width: 100px;
  height: 100px;
  border-radius: 50%;
  background-color: rgba(0, 0, 0, 0.15);
}

.cricwidgets .tabs__panel-img {
  flex-shrink: 0;
  width: 80px;
  height: 80px;
  border-radius: 4px;
  background-color: rgba(0, 0, 0, 0.15);
}

.cricwidgets .tabs__panel-content {
  width: 100%;
  margin-left: 30px;
}
.cricwidgets .tabs__panel-content:first-child {
  margin-left: 0;
}
.cricwidgets .tabs__panel-content:not(:last-child) {
  margin-right: 30px;
}
.cricwidgets .tabs__panel-content:before, .tabs__panel-content:after {
  display: block;
  width: 100%;
  height: 20px;
  content: '';
  background-color: rgba(0, 0, 0, 0.15);
}
.cricwidgets .tabs__panel-content:before {
  margin-bottom: 15px;
}
.cricwidgets td a{
  display: block;
}
iframe body{
  margin: 0px; 
}
.addiv{
  text-align:center;
	margin-bottom:8px;
}	
</style>


<!--PEN HEADER-->
<div class="cricwidgets">
<div class="header">
   
</div>
<!--PEN CONTENT-->
<div class="content">
  <!--content title-->  
  <!--content inner-->
  <div class="content__inner">
	  
    <!--tabs-->
    <div class="tabs">
      <!--tabs navigation-->
      <div class="tabs__nav">
		  <div class="addiv">
				 <script async src="https://securepubads.g.doubleclick.net/tag/js/gpt.js"></script>
				 <div id="gpt-passback">
				  <script>
				    window.googletag = window.googletag || {cmd: []};
				    googletag.cmd.push(function() {
				    googletag.defineSlot('/3810627/DP/DPAK_Widget_unit_1', [300, 100], 'gpt-passback').addService(googletag.pubads()).setTargeting('dpak_sect', ['psl']);
				    googletag.enableServices();
				    googletag.display('gpt-passback');
				    });
				  </script>
				</div>
			</div>	
        <ul class="tabs__nav-list">
           <li class="tabs__nav-item js-active" id="upcoming-element">Upcoming</li>
          <li class="tabs__nav-item" id="live-element">Live</li>
          <li class="tabs__nav-item" id="result-element">Result</li>
         
 
        </ul>
      </div>
      <!--tabs panels-->
      <div class="tabs__panels">
        <!--single panel-->
          <div class="tabs__panel">
			
          
    
        </div>
        <div class="tabs__panel">
				<div class="addiv">
			   
			</div>
          	 	
          <div class="pslpromo">
          	<img alt="HBl PSL 2021" style="width:100%" src="https://sports.dailypakistan.com.pk/wp-content/themes/cricketapp/images/pslpromo.jpg" />
          </div>
         
        </div> 
        <!--single panel-->
        <div class="tabs__panel matchresults">
				<div class="addiv">
			  
			</div>
                   </div>
        <!--single panel-->
      
        <!--single panel-->
        
      </div>
    </div>
  </div>
</div>
</div>  




   
<script type="text/javascript">
 

  const DOM = {
  tabsNav: document.querySelector('.tabs__nav'),
  tabsNavItems: document.querySelectorAll('.tabs__nav-item'),
  panels: document.querySelectorAll('.tabs__panel') };


//set active nav element
const setActiveItem = elem => {

  DOM.tabsNavItems.forEach(el => {

    el.classList.remove('js-active');

  });

  elem.classList.add('js-active');

};

//find active nav element
const findActiveItem = () => {

  let activeIndex = 0;

  for (let i = 0; i < DOM.tabsNavItems.length; i++) {

    if (DOM.tabsNavItems[i].classList.contains('js-active')) {
      activeIndex = i;
      break;
    };

  };

  return activeIndex;

};

//find active nav elements parameters: left coord, width
const findActiveItemParams = activeItemIndex => {

  const activeTab = DOM.tabsNavItems[activeItemIndex];

  //width of elem
  const activeItemWidth = activeTab.offsetWidth - 1;

  //left coord in the tab navigation
  const activeItemOffset_left = activeTab.offsetLeft;

  return [activeItemWidth, activeItemOffset_left];

};

//appending decoration block to an active nav element
const appendDecorationNav = () => {

  //creating decoration element
  let decorationElem = document.createElement('div');

  decorationElem.classList.add('tabs__nav-decoration');
  decorationElem.classList.add('js-decoration');

  //appending decoration element to navigation
  DOM.tabsNav.append(decorationElem);

  //appending styles to decoration element
  return decorationElem;
};

//appending styles to decoration nav element
const styleDecorElem = (elem, decorWidth, decorOffset) => {
  elem.style.width = `${decorWidth}px`;
  elem.style.transform = `translateX(${decorOffset}px)`;
};

//find active panel
const findActivePanel = index => {

  return DOM.panels[index];

};

//set active panel class
const setActivePanel = index => {

  DOM.panels.forEach(el => {

    el.classList.remove('js-active');

  });

  DOM.panels[index].classList.add('js-active');

};

//onload function
window.addEventListener('load', () => {

  //find active nav item
  const activeItemIndex = findActiveItem();

  //find active nav item params
  const [decorWidth, decorOffset] = findActiveItemParams(activeItemIndex);

  //appending decoration element to an active elem
  const decorElem = appendDecorationNav();

  //setting styles to the decoration elem
  styleDecorElem(decorElem, decorWidth, decorOffset);

  //find active panel
  findActivePanel(activeItemIndex);

  //set active panel
  setActivePanel(activeItemIndex);
});

//click nav item function
DOM.tabsNav.addEventListener('click', e => {

  const navElemClass = 'tabs__nav-item';

  //check if we click on a nav item
  if (e.target.classList.contains(navElemClass)) {

    const clickedTab = e.target;

    const activeItemIndex = Array.from(DOM.tabsNavItems).indexOf(clickedTab);

    //set active nav item
    setActiveItem(clickedTab);

    //find active nav item
    const activeItem = findActiveItem();

    //find active nav item params
    const [decorWidth, decorOffset] = findActiveItemParams(activeItem);

    //setting styles to the decoration elem
    const decorElem = document.querySelector('.js-decoration');

    styleDecorElem(decorElem, decorWidth, decorOffset);

    //find active panel
    findActivePanel(activeItemIndex);

    //set active panel
    setActivePanel(activeItemIndex);

  }

}); 

</script> 

