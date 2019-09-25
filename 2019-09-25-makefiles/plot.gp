set term pdf
set output "suma.pdf"
set xlabel "N"
set ylabel "Suma"
plot "datos.txt" u 1:2 w p