all: presentation

presentation: presentation.pdf

out:
	mkdir -p out

statemachineImplementation.png : statemachineImplementation.plantuml out
	java -jar ../../../Tools/plantuml-1.2025.10.jar $<
	mv $@ out/$@

statemachineClass.png : statemachineClass.plantuml out
	java -jar ../../../Tools/plantuml-1.2025.10.jar $<
	mv $@ out/$@

buttonStatemachine.png : buttonStatemachine.plantuml out
	java -jar ../../../Tools/plantuml-1.2025.10.jar $<
	mv $@ out/$@

presentation.pdf: presentation.tex buttonStatemachine.png statemachineClass.png statemachineImplementation.png out
	mkdir -p out
	pdflatex --shell-escape -output-directory=out $<

clean:
	rm -r out
	