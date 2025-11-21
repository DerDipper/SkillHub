all: presentation

presentation: presentation.pdf

out:
	mkdir -p out

statemachine.png : statemachine.plantuml out
	java -jar ../../../Tools/plantuml-1.2025.10.jar $<
	mv $@ out/$@

presentation.pdf: presentation.tex statemachine.png out
	mkdir -p out
	pdflatex --shell-escape -output-directory=out $<

clean:
	rm -r out
	