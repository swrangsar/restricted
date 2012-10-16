#! /bin/bash
echo "Installing all new packages from Homebrew..."
brew update
brew upgrade
brew cleanup
brew prune
brew doctor
cd ~/Restricted\!/
echo Please enter a commit message: 
read COMMITMSG
git add *
git commit -am "$COMMITMSG"
git push -u origin master
cd -
