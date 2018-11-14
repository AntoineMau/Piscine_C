cat contacts_hard.txt | grep -i "^nicolas" | cut -c9- | grep -i "^bauer" | rev | tr -s '\t' ' ' | cut -d' ' -f 2 | rev | tail -2
