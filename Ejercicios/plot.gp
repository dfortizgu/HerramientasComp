set term pdf
set output 'plot.pdf'
set xlabel "x"
set ylabel "y"
plot  "datos.txt" u 1:2 w l title "arcsin(x)"