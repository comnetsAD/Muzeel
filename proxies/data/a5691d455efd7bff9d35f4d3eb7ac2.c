.airship-alert,
.airship-bell {
  font-family: -apple-system, BlinkMacSystemFont, "Segoe UI", "Roboto",
    "Helvetica Neue", Arial, sans-serif, "Apple Color Emoji", "Segoe UI Emoji",
    "Segoe UI Symbol";
}

.airship-hidden {
  display: none !important;
}

.airship-alert {
  background: #fff;
  box-sizing: border-box;
  min-width: 400px !important;
  max-width: 400px !important;
  position: fixed;
  margin-left: 8rem;
  box-shadow: 0 8px 30px 0px rgba(0, 0, 0, 0.4);
  border-radius: 0 0 10px 10px;
  z-index: 99999999;
}

@media only screen and (max-width: 650px) {
  .airship-alert {
    margin-left: 2rem;
  }
}

@media only screen and (max-width: 450px) {
  .airship-alert {
    max-width: unset;
    min-width: 100% !important;
    top: unset !important;
    border-radius: 0 !important;
    height: auto;
    left: 0;
    right: 0;
    bottom: 0;
    margin-left: 0;
    z-index: 99999999;
  }
}

.airship-alert.airship-position-top {
  top: -1px;
}

.airship-alert.airship-position-bottom {
  bottom: -1px;
  border-radius: 0;
}

.airship-alert.airship-position-bottom .airship-alert-buttons {
  border-radius: 0 !important;
}

.airship-alert.airship-position-bottom .airship-btn {
  border-radius: 0 !important;
}

.airship-alert-body {
  padding: 0 16px 0 16px;
  position: relative;
  display: flex;
}

.airship-alert-buttons {
  margin-top: 30px;
  border-radius: 0 0 10px 10px;
  height: 46px;
  width: 100%;
  display: flex;
}

@media only screen and (max-width: 450px) {
  .airship-alert-buttons {
    border-radius: 0 !important;
  }
}

.airship-btn {
  box-sizing: border-box;
  border: none;
  flex: 50%;
  height: inherit;
  padding: 0px;
  background: transparent;
  font-size: 14px;
  outline: none;
  cursor: pointer;
}

.airship-btn:first-child {
  border-radius: 0 0 0 10px;
}

@media only screen and (max-width: 450px) {
  .airship-btn:first-child {
    border-radius: 0 !important;
  }
}

.airship-btn:last-child {
  border-radius: 0 0 10px 0;
}

@media only screen and (max-width: 450px) {
  .airship-btn:last-child {
    border-radius: 0 !important;
  }
}

.airship-btn-accept {
  background: #50b766;
  color: #fff;
  box-shadow: 0px 2px 6px 0 rgba(0, 0, 0, 0.2);
  font-weight: 500;
}

.airship-btn-deny {
  color: #898b93;
  border-top: 1px solid #eae9e9;
}

.airship-alert-logo {
  width: 110px;
  margin-top: 24px;
  padding: 0 20px 0 0;
}

@media only screen and (max-width: 450px) {
  .airship-alert-logo {
    display: none !important;
  }
}

.airship-alert-logo img {
  max-width: 100%;
  max-height: 100%;
}

.airship-alert-close > span {
  background: transparent;
  font-size: 22px;
  color: gray;
}

.airship-alert-close {
  background: transparent;
  border: none;
  position: absolute;
  right: 8px;
  top: 8px;
  display: none;
}

.airship-alert-title {
  font-size: 17px;
  font-weight: 600;
  margin-bottom: 12px;
  margin-top: 24px;
  cursor: default;
}

.airship-alert-message {
  font-size: inherit;
  font-weight: normal;
  font-size: 14px;
  line-height: 1.7;
  cursor: default;
  color: #63656b;
}

.airship-alert-powered {
  font-size: 11px;
  color: #a3a4a8;
  margin: 8px 16px 10px 0;
  cursor: pointer;
  float: right;
}

.airship-alert-powered:hover {
  text-decoration: underline;
}
