function loadFramework(pluginRoot) {
  if (NSClassFromString('PanelsManager') == null) {
    var mocha = [Mocha sharedRuntime];
    return [mocha loadFrameworkWithName:'Panels' inDirectory:pluginRoot];
  } else {
    return true;
  }
}
