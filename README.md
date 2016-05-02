# Workspace Setup
Config and scripts for a setting up new computer

## Install Homebrew and essential packages
```bash
/usr/bin/ruby -e "$(curl -fsSL https://raw.githubusercontent.com/Homebrew/install/master/install)"
```

## A Nice Looking Terminal
- Download iTerm2: https://www.iterm2.com/downloads.html
- Install `zsh`
```bash
$ brew install zsh
```
- Set Homebrew `zsh` as default shell
```bash
$ sudo vim /etc/shells
$ chsh -s /usr/local/bin/zsh
```
- Install `omyzsh`
```bash
$ sh -c "$(curl -fsSL https://raw.githubusercontent.com/robbyrussell/oh-my-zsh/master/tools/install.sh)"
```
- Copy zsh config file
```bash
$ cp Terminal/.zshrc ~
```

## Web Development

## Design

## Apps
