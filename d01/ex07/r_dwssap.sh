#!/bin/sh

START=$FT_LINE1
END=$FT_LINE2

cat /etc/passwd |
sed '/^#/ d' |
sed -n 'n;p' |
cut -d ':' -f 1 |
rev |
sort -r |
head -n $END |
tail -n $(echo $END - $START | bc) |
tr '\n' ', '
