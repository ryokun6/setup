function fullPath(el){
  var names = [];
  while (el.parentNode) {
    if (el == el.ownerDocument.documentElement) {
      names.unshift(el.tagName)
    } else {
      for (var c = 1, e = el; e.previousElementSibling; e = e.previousElementSibling, c++);
      names.unshift(el.tagName);
    }
    el = el.parentNode;
  }
  return names.join(' > ');
}

function getText(el) {
  return el.innerText;
}

function filterText(text)  {
  return text != '';
}

function handler(e) {
  if (!e.metaKey) {
    e.stopPropagation();
    e.preventDefault();
    var el = e.target;
    var selector = fullPath(el);
    var res = Array.prototype.slice.call(document.querySelectorAll(selector));
    var selectedText = getText(el);
    var items = res.map(getText).filter(filterText);
    var selectedIndex = items.indexOf(selectedText);
    if (selectedIndex > -1) {
      items = items.slice(selectedIndex);
    }
    if (items.length) {
      Panels.call_(JSON.stringify({command: 'fill-text', arguments: {words: items}}));
    }
  }
}

document.addEventListener('click', handler, true);
