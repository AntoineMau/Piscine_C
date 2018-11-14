ldapsearch -LLL "(cn=z*)" cn | grep cn | cut -c5- | sort -fr
