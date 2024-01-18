const todoForm = document.getElementById('todo-form');
const todoInput = todoForm.querySelector('input');
const todoList = document.getElementById('todo-list');

function handleTodoSubmit(e) {
  e.preventDefault();
  const newTodo = todoInput.value;
  todoInput.value = '';
  paintTodo(newTodo);
}

function deleteTodo(e) {
  const li = e.target.parentElement;
  li.remove();
}

function paintTodo(newTodo) {
  const li = document.createElement('li');

  const span = document.createElement('span');
  span.innerText = newTodo;

  const btn = document.createElement('button');
  btn.innerText = '❌';
  btn.addEventListener('click', deleteTodo);
  li.appendChild(span);
  li.appendChild(btn);

  todoList.appendChild(li);
}

todoForm.addEventListener('submit', handleTodoSubmit);
