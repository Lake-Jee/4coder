/*
 * Mr. 4th Dimention - Allen Webster
 *
 * 06.05.2016 (dd.mm.yyyy)
 *
 * Global app level settings definition
 *
 */

// TOP

struct App_Settings{
    char *user_file;
    b32 user_file_is_strict;
    
    char *init_files[8];
    i32 init_files_count;
    i32 init_files_max;

    i32 initial_line;
    b32 lctrl_lalt_is_altgr;
    
    i32 font_size;
};

struct Debug_Input_Event{
    Code key;
    
    char consumer[32];
    
    b8 is_hold;
    b8 is_ctrl;
    b8 is_alt;
    b8 is_shift;
};

struct Debug_Data{
    Debug_Input_Event input_events[16];
    i32 this_frame_count;
};

struct Models{
    Mem_Options mem;
    App_Settings settings;
    
    Command_Map map_top;
    Command_Map map_file;
    Command_Map map_ui;
    Command_Map *user_maps;
    i32 *map_id_table;
    i32 user_map_count;
    
    Command_Binding prev_command;
    
    Coroutine *command_coroutine;
    u32 command_coroutine_flags[2];
    
    Hook_Function *hooks[hook_type_count];
    Application_Links app_links;
    
    i32 *buffer_param_indices;
    i32 buffer_param_count, buffer_param_max;
    
    Font_Set *font_set;
    Style_Font global_font;
    Style_Library styles;
    u32 *palette;
    i32 palette_size;
    
    Editing_Layout layout;
    Working_Set working_set;
    Editing_File *message_buffer;
    
    char hot_dir_base_[256];
    Hot_Directory hot_directory;
    
    Panel *prev_mouse_panel;
    
    Custom_API config_api;
    Scroll_Rule_Function *scroll_rule;
    
    b32 keep_playing;
    
    Debug_Data debug;
};

// BOTTOM



