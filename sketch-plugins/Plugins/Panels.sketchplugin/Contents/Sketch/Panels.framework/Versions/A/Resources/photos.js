BACKGROUND_IMAGE_RE = /url\([\"']{0,1}(.*)[\"']{0,1}\)/;

function fullPath(el){
  var names = [];
  while (el.parentNode) {
    if (el == el.ownerDocument.documentElement) {
      names.unshift(el.tagName);
    } else {
      for (var c = 1, e = el; e.previousElementSibling; e = e.previousElementSibling, c++);
      names.unshift(el.tagName);
    }
    el = el.parentNode;
  }
  return names.join(' > ');
}

function stringStartsWith(string, prefix) {
    return string.slice(0, prefix.length) == prefix;
}


function getSrc(el) {
  var src;
  if (el instanceof HTMLImageElement) {
    src = el.src;
  } else {
    src = BACKGROUND_IMAGE_RE.exec(el.style.backgroundImage)[1];
  }

  if (stringStartsWith(src, 'data')) {
    return {
      type: 'base64',
      data: src.split(',')[1]
    }
  } else {
    return {
      type: 'src',
      link: src
    }
  }
}

function filterImage(el)  {
  return (el instanceof HTMLImageElement && el.src != '') || BACKGROUND_IMAGE_RE.test(el.style.backgroundImage);
}

function handler(e) {
  if (!e.metaKey) {
    e.stopPropagation();
    e.preventDefault();
    var el = e.target;
    var selector = fullPath(el);
    var res = Array.prototype.slice.call(document.querySelectorAll(selector));
    var selectedSrc = el;
    var filteredItems = res.filter(filterImage);
    var selectedIndex = filteredItems.indexOf(selectedSrc);
    var items = filteredItems.map(getSrc);
    if (selectedIndex > -1) {
      items = items.slice(selectedIndex);
    }
    if (items.length) {
      Panels.call_(JSON.stringify({
        command: 'fill-images',
        arguments: {
          items: items,
          tile: e.altKey
        }
      }));
    }
  }
}

document.addEventListener('click', handler, true);
