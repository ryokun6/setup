function folder(selection, folderPath) {
  var selectionCount = selection.length;
  var extensions = ['jpg', 'jpeg', 'png', 'tiff', 'bmp'];
  var dirContents = [[NSFileManager defaultManager] contentsOfDirectoryAtPath:folderPath error:null];
  var files = [dirContents filteredArrayUsingPredicate:[NSPredicate predicateWithFormat:'pathExtension IN %@', extensions]];
  var images = [files randomSelectionWithCount:selectionCount];

  var error = null;
  if (!images || [images count] == 0) {
    error = 'No images to place';
  } else {
    var layer, imageName;
    for (var i = 0; i < selectionCount; i++) {
      layer = selection[i];
      imageName = [images objectAtIndex:i % [images count]];
      setFill(layer, folderPath + '/' + imageName);
    }
  }
  return error;
}

function folderSymbol(selection, layerId, folderPath) {
  var selectionCount = selection.length;
  var extensions = ['jpg', 'jpeg', 'png', 'tiff', 'bmp'];
  var dirContents = [[NSFileManager defaultManager] contentsOfDirectoryAtPath:folderPath error:null];
  var files = [dirContents filteredArrayUsingPredicate:[NSPredicate predicateWithFormat:'pathExtension IN %@', extensions]];
  var images = [files randomSelectionWithCount:selectionCount];

  var error = null;
  if (!images || [images count] == 0) {
    error = 'No images to place';
  } else {
    var layer, imageName;
    for (var i = 0; i < selectionCount; i++) {
      layer = selection[i];
      imageName = [images objectAtIndex:i % [images count]];
      var imagePath = folderPath + '/' + imageName;
      var imageNS = [[NSImage alloc] initByReferencingFile:imagePath];
      var image = [[MSImageData alloc] initWithImage:imageNS convertColorSpace:false];
      [layer addOverrides:image forCellAtIndex:0 ancestorIDs:[layerId]];
    }
  }
  return error;
}


function dropbox(panelsManager, selection, link, identifier) {
  return [panelsManager dropbox:link selection:selection identifier:identifier];
}

function unsplash(panelsManager, selection, category, identifier) {
  return [panelsManager unsplashWithSelection:selection category:category identifier:identifier];
}

function setFill(layer, imagePath) {
  var imageNS = [[NSImage alloc] initByReferencingFile:imagePath];
  var style = [layer style];
  var fill = [style fill];
  if (!fill) {
    [[style fills] addNewStylePart];
  }
  fill = [style fill];

  [fill setFillType:4];
  [fill setPatternFillType:1];

  if (fill.setPatternImage_collection == undefined) {
    [fill setImage:[[MSImageData alloc] initWithImage:imageNS convertColorSpace:false]];
  } else {
    var imageCollection = [[fill documentData] images];
    [fill setPatternImage:imageNS collection:imageCollection];
  }
}
