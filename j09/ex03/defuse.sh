touch -A "-01" -a bomb.txt
stat -s bomb.txt | cut -d' ' -f9 | cut -c10-
