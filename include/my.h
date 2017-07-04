/*
** my.h for my.h in /home/walter_h/tekadventure
**
** Made by Hugo WALTER
** Login   <walter_h@epitech.net>
**
** Started on  Sun May 28 15:54:38 2017 Hugo WALTER
** Last update Sun May 28 22:46:56 2017 francois mary
*/

#ifndef INC_H_
#define INC_H_

#include <SFML/Graphics.h>
#include <SFML/Window.h>
#include <SFML/System.h>
#include <SFML/Audio.h>
#include <sys/types.h>
#include <dirent.h>
#include <unistd.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <sys/stat.h>
#include <fcntl.h>

#define SCREEN_WIDTH 1920
#define SCREEN_HEIGHT 1080

typedef struct  images
{
  sfSprite	*starfield;
  sfSprite	*title;
  sfSprite	*bar;
  sfSprite	*bateau;
  sfSprite	*carte_bar;
  sfSprite	*port_carte;
  sfSprite	*port_carte_zoom;
  sfSprite	*port_sans;
  sfSprite	*potion_bar;
  sfSprite	*vue_bar;
  sfSprite	*terre;
  sfSprite	*sprite_1;
  sfSprite	*sprite_2;
  sfSprite	*sprite_3;
  sfSprite	*mountain;
  sfSprite	*nuages;
}               sprites;

typedef struct  s_my_framebuffer
{
  sfUint8       *pixels;
  int           width;
  int           height;
}               t_my_framebuffer;

typedef	struct		s_play
{
  sfMusic               *foret;
  sfMusic               *taverne;
  sfMusic               *trame;
  sfText                *nameport;
  sfText                *moyenage;
  sfText                *night;
  sfText                *matelot;
  sfText                *meurtre;
  sfText                *tanight;
  sfText                *village;
  sfText                *quete;
  sfText                *deboire;
  sfVector2f            posn;
  sfVector2f            posma;
  sfVector2f            posni;
  sfVector2f            posmat;
  sfVector2f            posme;
  sfVector2f            post;
  sfVector2f            posmata;
  sfVector2f            posmta;
  sfVector2f            posqta;
  sfMusic		*paper;
  sfMusic		*drink;
}			t_play;

typedef	struct		s_quotebar
{
  sfText		*quote;
  sfText		*quote1;
  sfText		*quote2;
  sfText		*quote3;
  sfText		*quote4;
  sfText		*quotename;
  sfText		*quote5;
  sfVector2f		posqte;
  sfVector2f		posqte1;
  sfVector2f		posqte2;
  sfVector2f		posqte3;
  sfVector2f		posqte4;
  sfVector2f		posqtename;
  sfVector2f		posqte5;
}			t_quotebar;

typedef	struct		s_settings
{
  sfTexture		*txtset;
  sfSprite		*spt;
  sfTexture		*tvolup;
  sfSprite		*svolup;
  sfTexture		*tvoldown;
  sfSprite		*svoldown;
  sfVector2f		posvolup;
  sfVector2f		posvoldown;
  sfVector2f		sclvol;
  sfText		*volume;
  sfVector2f		posvolume;
  sfText		*valider;
  sfVector2f		posvalider;
  int			vol;
  char			*maintheme;
  char			*voltxt;
  sfText		*nbvol;
  sfVector2f		posnbvol;
  sfText		*themes;
  sfVector2f		postheme;
  sfText		*themename1;
  sfVector2f		postname1;
  sfText		*themename2;
  sfVector2f		postname2;
  sfTexture		*ttheme;
  sfTexture		*ttheme2;
  sfSprite		*stheme;
  sfSprite		*stheme2;
  sfVector2f		posimgtheme1;
  sfVector2f		posimgtheme2;
  sfTexture		*tvalidate;
  sfSprite		*svalidate;
  sfVector2f		sclvalidate;
  int			mtheme;
  sfVector2f		posvalidatel;
  sfVector2f		posvalidater;
  int			wasinset;
}			t_settings;

typedef struct		s_credits
{
  sfText                *created;
  sfVector2f            poscreated;
  sfText                *soundsgn;
  sfVector2f            possddsgn;
  sfText                *hugo;
  sfVector2f            poshugo;
  sfText                *projectld;
  sfVector2f            posproject;
  sfText                *clement;
  sfVector2f            posclement;
  sfText                *graphiste;
  sfVector2f            posgraphiste;
  sfText                *francois;
  sfVector2f            posfrancois;
  sfText                *thx;
  sfVector2f            posthx;
  int			wasincredit;
  float			speedcd;
}			t_credits;

typedef	struct		s_port
{
  sfTexture		*tstar1;
  sfTexture		*tstar2;
  sfTexture		*tport;
  sfSprite		*sstar1;
  sfSprite		*sstar2;
  sfSprite		*sport;
  sfVector2f		poss1;
  sfVector2f		posstar1;
  sfVector2f		poss2;
  sfVector2f		posstar2;
  float			speedsky;
}			t_port;

typedef	struct		s_music
{
  char			*drink;
  char			*foret;
  char			*menu;
  char			*paper;
  char			*taverne;
  char			*piraterie;
  char			*maintheme;
  char			*tmp;
}			t_music;

typedef	struct		s_hitbox_nodes
{
  int			i;
  int			j;
  int			i2;
  char			**sc1;
  char			**sc2;
  int			**nodes1;
  int			**nodes2;
}			t_hitbox_nodes;

typedef struct		s_scene1
{
  sfVector2i            mp;
  sfVector2i            nearnode;
  sfVector2i            node;
  sfTexture             *tbar;
  sfSprite              *sbar;
  int                   right;
  int                   left;
  int                   up;
  int                   down;
  sfVector2i            stock;
  sfVector2i            lastpos;
  int                   mvm;
  int                   nomvm;
  int                   clickobj;
  int                   obj;
  sfVector2f            scale;
  sfVector2f            stocklp;
  sfVector2i            taillepers;
  sfVector2i            poswait;
  sfColor               color;
  sfVector2f            posleave;
  sfText                *txtleave;
  int                   diffy;
  sfSprite              *imaged;
  sfTexture             *tdroite;
  sfSprite              *imageg;
  sfTexture             *tgauche;
  sfSprite              *imageh;
  sfTexture             *thaut;
  sfSprite              *imageb;
  sfTexture             *tbas;
  sfSprite              *imagew;
  sfTexture             *twait;
  sfSprite              *imagefw;
  sfTexture             *tfw;
}			t_scene1;

typedef struct		s_scene2
{
  sfVector2i            mp;
  sfVector2i            nearnode;
  sfVector2i            node;
  sfTexture             *tport;
  sfSprite              *sport;
  int                   right;
  int                   left;
  int                   up;
  int                   down;
  sfVector2i            stock;
  sfVector2i            lastpos;
  int                   mvm;
  int                   nomvm;
  int                   clickobj;
  int                   obj;
  sfVector2f            scale;
  sfVector2f            stocklp;
  sfVector2i            taillepers;
  sfVector2i            poswait;
  sfColor               color;
  sfVector2f            postake;
  sfText                *txttake;
  int                   diffy;
  sfSprite              *imaged;
  sfTexture             *tdroite;
  sfSprite              *imageg;
  sfTexture             *tgauche;
  sfSprite              *imageh;
  sfTexture             *thaut;
  sfSprite              *imageb;
  sfTexture             *tbas;
  sfSprite              *imagew;
  sfTexture             *twait;
  sfSprite              *imagefw;
  sfTexture             *tfw;
  sfTexture             *tcarte;
  sfSprite              *carteflot;
  int                   coef;
  int                   yinit;
  float                 amp;
  sfVector2f            offset;
  sfVector2f            scl;
  sfTexture		*tstar;
  sfSprite		*sstar;
  sfColor		cfige;
  sfVector2f		posfige;
  sfText		*txtfige;
}			t_scene2;

typedef struct		s_scenend
{
  sfColor               black;
  sfTexture             *txture;
  sfSprite              *spt;
  sfVector2f            postxtfinal;
  sfText                *txtfinal;
  sfColor               txtcolor;
}			t_scenend;

typedef struct		s_mapsize
{
  sfRenderWindow        *window;
  sfEvent               event;
  sfTexture             *texture;
  sfSprite              *sprite;
  t_my_framebuffer	*structure;
  t_play		*play;
  t_quotebar		*qb;
  t_settings		*st;
  t_credits		*cd;
  t_port		*port;
  t_music		*music;
  t_hitbox_nodes       	*hb;
  t_scene1		*sc1;
  t_scene2		*sc2;
  t_scenend		*send;
  sfMusic               *menu;
  sfText		*playbutton;
  sfVector2f		posplay;
  sfText		*settings;
  sfTexture		*tmenu;
  sfSprite		*smenu;
  sfVector2f		possett;
  sfVector2f		poscred;
  sfText		*credits;
  sfText		*dev;
  sfVector2f		posdev;
}			t_mapsize;

void			**create_stars(int);
void			my_put_pixel(t_my_framebuffer *, int, int, sfColor);
void			scene_aventure(t_my_framebuffer *, sfRenderWindow *,
				       sprites);
void			update_texture(t_mapsize *);
void			bar(t_my_framebuffer *, sfRenderWindow *,
			    sprites, t_mapsize *);
void			carte_bar(t_my_framebuffer *, sfRenderWindow *,
				  sprites, t_mapsize *);
void			potion_bar(t_my_framebuffer *, sfRenderWindow *,
				   sprites, t_mapsize *);
void			vue_bar(t_my_framebuffer *, sfRenderWindow *,
				sprites, t_mapsize *);
void			port_carte(t_my_framebuffer *, sfRenderWindow *,
				   sprites, t_mapsize *);
void			port_carte_zoom(t_my_framebuffer *, sfRenderWindow *,
					sprites, t_mapsize *);
void			port_sans(t_my_framebuffer *, sfRenderWindow *,
				  sprites, t_mapsize *);
void			my_putchar(char);
void			my_putstr(char *);
void			my_putstr_n(char *);
void			select_credits(t_my_framebuffer *, sfRenderWindow *,
				       sprites, t_mapsize *);
void			plaquette_droite(t_mapsize *, sfVector2f);
void			plaquette_gauche(t_mapsize *, sfVector2f);
void			plaquette_haut(t_mapsize *, sfVector2f);
void			plaquette_bas(t_mapsize *, sfVector2f);
void			my_sprite(sfRenderWindow *);
void			my_sprite2(sfRenderWindow *);
void			my_sprite3(sfRenderWindow *);
void			aff_tab(char **);
void			vue_bar(t_my_framebuffer *, sfRenderWindow *,
				sprites, t_mapsize *);
void			click_theme(t_mapsize *, sfVector2i);
void			plaquette_gauches2(t_mapsize *, sfVector2f);
void			plaquette_hauts2(t_mapsize *, sfVector2f);
void			plaquette_bass2(t_mapsize *, sfVector2f);
void			plaquette_droites2(t_mapsize *, sfVector2f);
void			parralax(sfRenderWindow *, sprites);
void			finaltxt(t_my_framebuffer *, sfRenderWindow *,
				 sprites, t_mapsize *);
int			destroy(t_mapsize *);
int			titlescreen(t_mapsize *);
int			draw_taverne(t_mapsize *);
int			draw_night(t_mapsize *);
int			draw_name(t_mapsize *);
int			set_name(t_mapsize *);
int			set_night_text(t_mapsize *);
int			set_night(t_mapsize *);
int			set_text_taverne(t_mapsize *);
int			set_taverne(t_mapsize *);
int			update_name(t_mapsize *);
int			update_night(t_mapsize *);
int			update_taverne(t_mapsize *);
int			draw_quote(t_mapsize *, sfRenderWindow *, sprites);
int			update_quote(t_mapsize *, sfRenderWindow *, sprites);
int			set_quote_pos(t_mapsize *);
int			set_msg_quote(t_mapsize *);
int			set_quote_size(t_mapsize *);
int			set_quote(t_mapsize *);
int			gnb(char *);
int			init_ptr(void (*[8])());
int			initialisation(t_mapsize *, void (*[8])());
int			update_menu(t_mapsize *);
int			set_menu(t_mapsize *);
int			draw_menu(t_mapsize *);
int			create_menu(t_mapsize *);
int			update_settings(t_mapsize *);
int			set_settings(t_mapsize *);
int			draw_settings(t_mapsize *);
int			pos_settings(t_mapsize *);
int			create_settings(t_mapsize *);
int			update_nbvol(t_mapsize *);
int			set_nbvol(t_mapsize *);
int			draw_volume_text(t_mapsize *);
int			define_vol(t_mapsize *, int);
int			set_volume(t_mapsize *, sfVector2i);
int			click_valider(t_mapsize *, sfVector2i);
int			validate_left(t_mapsize *);
int			update_left(t_mapsize *);
int			validate_right(t_mapsize *);
int			update_right(t_mapsize *);
int			set_theme(t_mapsize *);
int			themes(t_mapsize *);
int			set_texture(t_mapsize *);
int			set_valider(t_mapsize *);
int			button_valider(t_mapsize *);
int			destroy_play(t_mapsize *);
int			destroy_settings(t_mapsize *);
int			check_pos(int, t_mapsize *);
int			check_scene(int, t_mapsize *);
int			scroll_create(t_mapsize *);
int			scroll_hugo(t_mapsize *, int);
int			scroll_clement(t_mapsize *, int);
int			scroll_francois(t_mapsize *, int);
int			scroll_fin(t_mapsize *, int);
int			set_text(t_mapsize *);
int			create_text(t_mapsize *);
int			scroll_txt(t_mapsize *, sprites);
int			scrolling_credits(t_mapsize *, sprites);
int			update_credits(t_mapsize *);
int			set_cd_position(t_mapsize *);
int			set_cd_string(t_mapsize *);
int			set_cd_size(t_mapsize *);
int			update_port(t_mapsize *);
int			move(t_mapsize *);
int			my_strlen(char *);
int			my_strcmp(char *, char *);
int			scrolling_star2(t_mapsize *);
int			create_texture_port(t_mapsize *);
int			scrolling_port(t_mapsize *);
int			destroy_port(t_mapsize *);
int			destroy_credits(t_mapsize *);
int			direction(t_mapsize *);
int			analyze_node(t_mapsize *, char **);
int			update_bar(t_mapsize *);
int			create_wallpaper(t_mapsize *);
int			direction(t_mapsize *);
int			check_same_box(t_mapsize *, char **);
int			check_plan(t_mapsize *, sfVector2i, char **);
int			still_waiting_face(t_mapsize *, sfVector2i);
int			move_sprite_same_hitbox(t_mapsize *, char **);
int			first_face(t_mapsize *, sfVector2i);
int			init_pos_player(t_mapsize *);
int			update_droite(t_mapsize *);
int			update_gauche(t_mapsize *);
int			update_haut(t_mapsize *);
int			update_bas(t_mapsize *);
int			update_wait(t_mapsize *);
int			check_hitbox(t_mapsize *, char **);
int			check_hitbox_obj(t_mapsize *, sfVector2i, char **);
int			update_leave(t_mapsize *);
int			set_text_leave(t_mapsize *);
int			set_leave(t_mapsize *);
int			draw_leave(t_mapsize *);
int			free_leave(t_mapsize *);
int			check_first_plan(t_mapsize *, char **);
int			check_second_plan(t_mapsize *, char **);
int			check_third_plan(t_mapsize *, char **);
int			check_mv_box(t_mapsize *, char **);
int			update_fwait(t_mapsize *);
int			select_play(t_mapsize *);
int			free_fige(t_mapsize *);
int			create_port(t_mapsize *);
int			init_pos_player2(t_mapsize *);
int			analyze_nodes2(t_mapsize *, char **);
int			init_scene2(t_mapsize *);
int			draw_fige(t_mapsize *);
int			still_waiting_faces2(t_mapsize *, sfVector2i);
int			update_droites2(t_mapsize *);
int			update_gauches2(t_mapsize *);
int			update_hauts2(t_mapsize *);
int			update_bass2(t_mapsize *);
int			update_waits2(t_mapsize *);
int			update_take(t_mapsize *);
int			draw_take(t_mapsize *);
int			set_take(t_mapsize *);
int			set_text_take(t_mapsize *);
int			free_take(t_mapsize *);
int			directions2(t_mapsize *);
int			check_same_boxs2(t_mapsize *, char **);
int			check_plans2(t_mapsize *, sfVector2i, char **);
int			check_hitboxs2(t_mapsize *, char **);
int			move_sprite_same_hitboxs2(t_mapsize *, char **);
int			sinusoide_carte(t_mapsize *, char **);
int			check_same_boxs2(t_mapsize *, char **);
int			check_mv_boxs2(t_mapsize *, char **);
int			init_pos_players2(t_mapsize *);
int			create_blackscreen(t_mapsize *);
int			create_finaltxt(t_mapsize *);
int			update_finaltxt(t_mapsize *);
int			update_fondu(t_mapsize *);
int			init_texture(t_mapsize *);
int			my_error_ini();
int			my_ptr_6(void (*[8])(), t_my_framebuffer *,
				 t_mapsize *, sprites);
int			my_destroy_menu(int, t_mapsize *);
char			*my_read(char **);
char			*my_drink(t_mapsize *, char **, int, int);
char			*my_foret(t_mapsize *, char **, int, int);
char			*my_menu(t_mapsize *, char **, int, int);
char			*my_taverne(t_mapsize *, char **, int, int);
char			*my_drink(t_mapsize *, char **, int, int);
char			**tab_char(char *);
char			*ft(char *);
char			*st(char *);
char			*set_ini(char **, t_mapsize *);
char			*my_strdup(char *);
char			*epur_n(char *);
void			aff_tab(char **);
char			*my_drink(t_mapsize *, char **, int, int);
char			*my_foret(t_mapsize *, char **, int, int);
char			*my_menu(t_mapsize *, char **, int, int);
char			*my_paper(t_mapsize *, char **, int, int);
char			*my_taverne(t_mapsize *, char **, int, int);
char			*my_piraterie(t_mapsize *, char **, int, int);
char			*my_maintheme(t_mapsize *, char **, int, int);
char			*set_music(char **, t_mapsize *, int);
char			*my_hitbox(t_mapsize *, char **, int, int);
char			*set_scene1(char **, t_mapsize *, int);
char			*set_scene2(char **, t_mapsize *, int);
sfRenderWindow		*create_window(char *, int, int);
t_my_framebuffer        *my_create_pixel_buffer(int, int);
t_mapsize		*init_struct(t_mapsize *, char **);
t_mapsize		*set_ms(t_mapsize *);
sfVector2f		set_scaling(t_mapsize *, sfVector2i, char **);
sfVector2f		set_scalings2(t_mapsize *, sfVector2i, char **);
sprites			create_sprites();
sprites			create_sprites2(sprites, sfTexture *);
sprites			create_sprites3(sprites, sfTexture *);

#endif /* INC_H_ */
