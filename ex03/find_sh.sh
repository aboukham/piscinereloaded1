find . -type f -name "*.sh" | awk -F'.' '{print $2}' | cut -d'/' -f2
