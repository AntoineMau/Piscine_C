find . | grep .sh | cut -c3- | rev | cut -c4- | cut -d '/' -f1 | rev
