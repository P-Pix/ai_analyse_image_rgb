###
### Guillaume LEMONNIER
### Developpement autonome
### Tout droits reservé
###

SRC		=	main.cpp\

OBJ		=	$(SRC:.cpp = .o)

MODULE	=	-lsfml-window\
			-lsfml-system\
			-lsfml-graphics\

DATA 	=	data/ImageToVector/ImageToVector.cpp\
			data/ImageToVector/ImageToVectorAccessor.cpp\
			data/ImageToVector/ImageToVectorPrivateVectorise.cpp\
			\
			data/Graphic/Graphic.cpp\
			data/Graphic/GraphicAccessor.cpp\
			data/Graphic/GraphicPublicControl.cpp\
			\

NAME	=	AiAnalyseImage

val:
	@(valgrind g++ -o $(NAME) $(OBJ) $(DATA) $(MODULE)) > /dev/null
	@(./$(NAME))

cpp:
	@(g++ -o $(NAME) $(OBJ) $(DATA) $(MODULE)) > /dev/null
	@(./$(NAME))