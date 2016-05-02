# Workspace Setup
Config and scripts for a setting up new Mac.

## Install Homebrew and essential packages

1. Install Homebrew
```bash
$ /usr/bin/ruby -e "$(curl -fsSL https://raw.githubusercontent.com/Homebrew/install/master/install)"
$ brew update
```

2. Install `nvm`
```bash
$ brew install nvm
$ echo "source $(brew --prefix nvm)/nvm.sh" >> .zshrc
```

3. Install `node` with `nvm`
```bash
$ nvm ls-remote
$ nvm install <version>
$ nvm alias default <version>
```

4. Install `git`
```bash
$ brew install git
```

5. Install `npm` packages
```bash
$ npm install -g bower browser-sync foundation-cli gulp mupx yo static-i18n gatsby babel
```

## A Nice Looking Terminal

1. Download iTerm2 from https://www.iterm2.com/downloads.html

2. Install `zsh`
```bash
$ brew install zsh
```

3. Set Homebrew `zsh` as default shell
```bash
$ sudo vim /etc/shells
$ chsh -s /usr/local/bin/zsh
```

4. Install `omyzsh`
```bash
$ sh -c "$(curl -fsSL https://raw.githubusercontent.com/robbyrussell/oh-my-zsh/master/tools/install.sh)"
```

5. Copy `zsh` config file
```bash
$ cp Terminal/.zshrc ~
```

6. Set iTerm2 color palette and font settings

## Web Development

### Text editor
- Atom: https://atom.io/download/mac
- Atom packages: `emmet pigments minimap spacegray-dark-neue-syntax`

### Static web server
- Anvil/pow.cx: http://anvilformac.com/

## Design

### Design tools
- Sketch: https://www.sketchapp.com/static/download/sketch.zip
- Framer: http://framerjs.com/download/
- Origami: https://facebook.github.io/origami/
- Adobe CC: https://creative.adobe.com/products/download/creative-cloud
- Wacom Driver: http://cdn.wacom.com/u/productsupport/drivers/mac/professional/WacomTablet_6.3.15-3.dmg
- Craft: https://www.invisionapp.com/craft

### Icon libraries
- Nucleo: https://dl.devmate.com/co.ambercreative.Nucleoapp/Nucleo.zip
- Noun Project: https://thenounproject.com/for-mac/download/
- Icomoon: https://icomoon.io

### Font Managers
- RightFont
- FontExplorer X
- Suitcase Fusion

## Apps
### From the Mac App Store
- The Unarchiver
- Xcode
- 1Password
- Telegram
- Tweetbot
- WeChat
- Calcbot
- Caffeine
- Flume
- Inboard
- iA Writer
- Slack
- Transmit

### Elsewhere
- Chrome
- Dropbox
- Bartender
- Droplr
- iStat Menus
- MAMP
- Spotify
- VMWare Fusion
