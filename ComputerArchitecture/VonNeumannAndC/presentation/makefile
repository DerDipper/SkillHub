all: presentation

presentation: presentation.pdf

presentation.pdf: presentation.tex
	mkdir -p out
	pdflatex --shell-escape -output-directory=out presentation.tex

clean:
	rm -r out
	