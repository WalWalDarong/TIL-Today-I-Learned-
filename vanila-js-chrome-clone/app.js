const loginForm = document.querySelector('#login-form');
const loginInput = loginForm.querySelector('input');
// const loginButton = loginForm.querySelector('button');
const link = document.querySelector('a');

function onLoginSubmit(event) {
  event.preventDefault();
  console.log(loginInput.value);
  console.log(event);
}

function handleLinkClick(e) {
  e.preventDefault();
  console.log(e);
  // alert('clicked');
}

loginForm.addEventListener('submit', onLoginSubmit);
link.addEventListener('click', handleLinkClick);
