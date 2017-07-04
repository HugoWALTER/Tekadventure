##
## Makefile for Makefile in /home/walter_h/tekadventure
## 
## Made by Hugo WALTER
## Login   <walter_h@epitech.net>
## 
## Started on  Mon May  1 17:57:35 2017 Hugo WALTER
## Last update Mon May 29 10:15:54 2017 Hugo WALTER
##

NAME	=	tekadventure

SRC	=	src/main.c			\
		src/update.c			\
		src/draw_text.c			\
		src/set_text.c			\
		src/titlescreen.c		\
		src/quote.c			\
		src/my_getnbr.c			\
		src/my_ptr.c			\
		src/my_ptr2.c			\
		src/initialisation.c		\
		src/menu.c			\
		src/settings.c			\
		src/volume.c			\
		src/valider.c			\
		src/thememusic.c		\
		src/validatebutton.c		\
		src/anim.c			\
		src/my_destroy.c		\
		src/check_scene.c		\
		src/scroll_credits.c		\
		src/launch_credits.c		\
		src/create_credits.c		\
		src/scroll_port_sky.c		\
		src/my_strtotab.c		\
		src/my_tab.c			\
		src/my_puts.c			\
		src/analyze_node.c		\
		src/anim_direction.c		\
		src/check_mvm_hb.c		\
		src/move_same_hitbox.c		\
		src/mvm_hb.c			\
		src/posplayer_on_hb.c		\
		src/scale.c			\
		src/txt_sc1_leave.c		\
		src/update_direction.c		\
		src/update_fwait.c		\
		src/create_sprites.c		\
		src/check_image.c		\
		src/check_scene1.c		\
		src/my_check_music.c		\
		src/my_check_music2.c		\
		src/my_func.c			\
		src/txt_sc2_take.c		\
		src/update_dir_sc2.c		\
		src/move_same_hitbox_sc2.c	\
		src/sinusoide_carte.c		\
		src/analyze_node_sc2.c		\
		src/anim_dir_s2.c		\
		src/create_port.c		\
		src/create_fige.c		\
		src/scales2.c			\
		src/check_mvm_hbs2.c		\
		src/posplayer_on_hbs2.c		\
		src/mvm_hbs2.c			\
		src/scroll_credits2.c		\
		src/finaltxt.c			\
		src/update_final.c		\
		src/set_ms.c			\
		src/my_error.c

OBJ	=	$(SRC:.c=.o)

CFLAGS  =       -I./include -lc_graph_prog_full -lm

GDB	=	-g -Wall -pedantic

GCC	=	gcc -o

RM	=	rm -f

all:		$(NAME)

$(NAME):	$(OBJ)
		$(GCC) $(NAME) $(OBJ) $(CFLAGS)

gdb:		$(GDB)

$(GDB):		$(OBJ)
		$(GCC) $(NAME) $(OBJ) $(CFLAGS) $(GDB)

clean:
		$(RM) $(OBJ)

fclean:		clean
		$(RM) $(NAME)

re:		fclean all
