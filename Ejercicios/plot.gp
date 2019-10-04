set term pdf
set output 'plot.pdf'
set xlabel "x"
set ylabel "y"
plot "datos.txt" u 1:2 w l title "std::tan(x)" , "datos.txt" u 1:2 w l title "tn(x)"