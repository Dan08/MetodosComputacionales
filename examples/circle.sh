#!/bin/bash
# ------------------------------------------------------------------
# Title			circle
# Description	gnuplot parametric plot example with a circle
# Author		Juan David Lizarazo
# Creation Date	Jun 1, 2015
# ------------------------------------------------------------------

gnuplot << EOF
	set parametric
	set trange [0:2*pi]
	set size ratio 1 # make it look circly
	set key off # no legend
	plot cos(t),sin(t)
EOF