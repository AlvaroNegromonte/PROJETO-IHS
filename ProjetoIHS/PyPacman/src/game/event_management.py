from pygame import (K_DOWN, K_ESCAPE, K_LEFT, K_RIGHT, K_SPACE, K_UP, KEYDOWN,
                    QUIT, K_q)
from pygame import USEREVENT
from pygame.time import set_timer
from integracao import *

class EventHandler:
    def __init__(self, screen, game_state):
        self._screen = screen
        self._game_screen = game_state

    def pygame_quit(self):
        self._game_screen.running = False

    def key_bindings(self):
        Integration=IO()
        if Integration.get_PB(3)==0:
            self._game_screen.direction = "l"
        elif Integration.get_PB(0)==0:
            self._game_screen.direction = "r"
        elif Integration.get_PB(2)==0:
            self._game_screen.direction = "u"
        elif Integration.get_PB(4)==0:
            self._game_screen.direction = "d"

    def handle_events(self, event):
        if event.type == QUIT:
            self.pygame_quit()

        if event.type == KEYDOWN:
            self.key_bindings()
        
        if event.type == self._game_screen.custom_event:
            curr_mode = self._game_screen.ghost_mode
            if curr_mode == 'scatter':
                self._game_screen.ghost_mode = 'chase'
            elif curr_mode == 'chase':
                self._game_screen.ghost_mode = 'scatter'
            CUSTOM_EVENT = USEREVENT + 1
            set_timer(CUSTOM_EVENT, 
                                self._game_screen.mode_change_events * 1000)
            self._game_screen.custom_event = CUSTOM_EVENT
        
        if event.type == self._game_screen.power_up_event:
            self._game_screen.is_pacman_powered=False
