#define EXEC_COMMAND_SIG(n) void n(Application_Links *app, int command_id)
#define EXEC_SYSTEM_COMMAND_SIG(n) int n(Application_Links *app, View_Summary *view, Buffer_Identifier buffer, char *path, int path_len, char *command, int command_len, unsigned int flags)
#define DIRECTORY_GET_HOT_SIG(n) int n(Application_Links *app, char *out, int capacity)
#define GET_4ED_PATH_SIG(n) int n(Application_Links *app, char *out, int capacity)
#define FILE_EXISTS_SIG(n) int n(Application_Links *app, char *filename, int len)
#define DIRECTORY_CD_SIG(n) int n(Application_Links *app, char *dir, int *len, int capacity, char *rel_path, int rel_len)
#define GET_FILE_LIST_SIG(n) File_List n(Application_Links *app, char *dir, int len)
#define FREE_FILE_LIST_SIG(n) void n(Application_Links *app, File_List list)
#define GET_BUFFER_FIRST_SIG(n) Buffer_Summary n(Application_Links *app)
#define GET_BUFFER_NEXT_SIG(n) void n(Application_Links *app, Buffer_Summary *buffer)
#define GET_BUFFER_SIG(n) Buffer_Summary n(Application_Links *app, int index)
#define GET_PARAMETER_BUFFER_SIG(n) Buffer_Summary n(Application_Links *app, int param_index)
#define GET_BUFFER_BY_NAME_SIG(n) Buffer_Summary n(Application_Links *app, char *filename, int len)
#define REFRESH_BUFFER_SIG(n) int n(Application_Links *app, Buffer_Summary *buffer)
#define BUFFER_READ_RANGE_SIG(n) int n(Application_Links *app, Buffer_Summary *buffer, int start, int end, char *out)
#define BUFFER_REPLACE_RANGE_SIG(n) int n(Application_Links *app, Buffer_Summary *buffer, int start, int end, char *str, int len)
#define BUFFER_SEEK_SIG(n) int n(Application_Links *app, Buffer_Summary *buffer, int start_pos, int seek_forward, unsigned int flags)
#define BUFFER_SET_SETTING_SIG(n) int n(Application_Links *app, Buffer_Summary *buffer, int setting, int value)
#define BUFFER_SAVE_SIG(n) int n(Application_Links *app, Buffer_Summary *buffer, char *filename, int filename_len)
#define GET_VIEW_FIRST_SIG(n) View_Summary n(Application_Links *app)
#define GET_VIEW_NEXT_SIG(n) void n(Application_Links *app, View_Summary *view)
#define GET_VIEW_SIG(n) View_Summary n(Application_Links *app, int index)
#define GET_ACTIVE_VIEW_SIG(n) View_Summary n(Application_Links *app)
#define REFRESH_VIEW_SIG(n) int n(Application_Links *app, View_Summary *view)
#define VIEW_AUTO_TAB_SIG(n) int n(Application_Links *app, View_Summary *view, int start, int end, int tab_width, unsigned int flags)
#define VIEW_COMPUTE_CURSOR_SIG(n) Full_Cursor n(Application_Links *app, View_Summary *view, Buffer_Seek seek)
#define VIEW_SET_CURSOR_SIG(n) int n(Application_Links *app, View_Summary *view, Buffer_Seek seek, int set_preferred_x)
#define VIEW_SET_MARK_SIG(n) int n(Application_Links *app, View_Summary *view, Buffer_Seek seek)
#define VIEW_SET_HIGHLIGHT_SIG(n) int n(Application_Links *app, View_Summary *view, int start, int end, int turn_on)
#define VIEW_SET_BUFFER_SIG(n) int n(Application_Links *app, View_Summary *view, int buffer_id)
#define VIEW_OPEN_FILE_SIG(n) int n(Application_Links *app, View_Summary *view, char *filename, int filename_len, int do_in_background)
#define VIEW_KILL_BUFFER_SIG(n) int n(Application_Links *app, View_Summary *view, Buffer_Identifier buffer)
#define GET_USER_INPUT_SIG(n) User_Input n(Application_Links *app, unsigned int get_type, unsigned int abort_type)
#define GET_COMMAND_INPUT_SIG(n) User_Input n(Application_Links *app)
#define GET_EVENT_MESSAGE_SIG(n) Event_Message n(Application_Links *app)
#define GET_MOUSE_STATE_SIG(n) Mouse_State n(Application_Links *app)
#define START_QUERY_BAR_SIG(n) int n(Application_Links *app, Query_Bar *bar, unsigned int flags)
#define END_QUERY_BAR_SIG(n) void n(Application_Links *app, Query_Bar *bar, unsigned int flags)
#define PRINT_MESSAGE_SIG(n) void n(Application_Links *app, char *string, int len)
#define CHANGE_THEME_SIG(n) void n(Application_Links *app, char *name, int len)
#define CHANGE_FONT_SIG(n) void n(Application_Links *app, char *name, int len)
#define SET_THEME_COLORS_SIG(n) void n(Application_Links *app, Theme_Color *colors, int count)
extern "C"{
    typedef EXEC_COMMAND_SIG(Exec_Command_Function);
    typedef EXEC_SYSTEM_COMMAND_SIG(Exec_System_Command_Function);
    typedef DIRECTORY_GET_HOT_SIG(Directory_Get_Hot_Function);
    typedef GET_4ED_PATH_SIG(Get_4ed_Path_Function);
    typedef FILE_EXISTS_SIG(File_Exists_Function);
    typedef DIRECTORY_CD_SIG(Directory_CD_Function);
    typedef GET_FILE_LIST_SIG(Get_File_List_Function);
    typedef FREE_FILE_LIST_SIG(Free_File_List_Function);
    typedef GET_BUFFER_FIRST_SIG(Get_Buffer_First_Function);
    typedef GET_BUFFER_NEXT_SIG(Get_Buffer_Next_Function);
    typedef GET_BUFFER_SIG(Get_Buffer_Function);
    typedef GET_PARAMETER_BUFFER_SIG(Get_Parameter_Buffer_Function);
    typedef GET_BUFFER_BY_NAME_SIG(Get_Buffer_By_Name_Function);
    typedef REFRESH_BUFFER_SIG(Refresh_Buffer_Function);
    typedef BUFFER_READ_RANGE_SIG(Buffer_Read_Range_Function);
    typedef BUFFER_REPLACE_RANGE_SIG(Buffer_Replace_Range_Function);
    typedef BUFFER_SEEK_SIG(Buffer_Seek_Function);
    typedef BUFFER_SET_SETTING_SIG(Buffer_Set_Setting_Function);
    typedef BUFFER_SAVE_SIG(Buffer_Save_Function);
    typedef GET_VIEW_FIRST_SIG(Get_View_First_Function);
    typedef GET_VIEW_NEXT_SIG(Get_View_Next_Function);
    typedef GET_VIEW_SIG(Get_View_Function);
    typedef GET_ACTIVE_VIEW_SIG(Get_Active_View_Function);
    typedef REFRESH_VIEW_SIG(Refresh_View_Function);
    typedef VIEW_AUTO_TAB_SIG(View_Auto_Tab_Function);
    typedef VIEW_COMPUTE_CURSOR_SIG(View_Compute_Cursor_Function);
    typedef VIEW_SET_CURSOR_SIG(View_Set_Cursor_Function);
    typedef VIEW_SET_MARK_SIG(View_Set_Mark_Function);
    typedef VIEW_SET_HIGHLIGHT_SIG(View_Set_Highlight_Function);
    typedef VIEW_SET_BUFFER_SIG(View_Set_Buffer_Function);
    typedef VIEW_OPEN_FILE_SIG(View_Open_File_Function);
    typedef VIEW_KILL_BUFFER_SIG(View_Kill_Buffer_Function);
    typedef GET_USER_INPUT_SIG(Get_User_Input_Function);
    typedef GET_COMMAND_INPUT_SIG(Get_Command_Input_Function);
    typedef GET_EVENT_MESSAGE_SIG(Get_Event_Message_Function);
    typedef GET_MOUSE_STATE_SIG(Get_Mouse_State_Function);
    typedef START_QUERY_BAR_SIG(Start_Query_Bar_Function);
    typedef END_QUERY_BAR_SIG(End_Query_Bar_Function);
    typedef PRINT_MESSAGE_SIG(Print_Message_Function);
    typedef CHANGE_THEME_SIG(Change_Theme_Function);
    typedef CHANGE_FONT_SIG(Change_Font_Function);
    typedef SET_THEME_COLORS_SIG(Set_Theme_Colors_Function);
}
struct Application_Links{
    void *memory;
    int memory_size;
    Exec_Command_Function *exec_command;
    Exec_System_Command_Function *exec_system_command;
    Directory_Get_Hot_Function *directory_get_hot;
    Get_4ed_Path_Function *get_4ed_path;
    File_Exists_Function *file_exists;
    Directory_CD_Function *directory_cd;
    Get_File_List_Function *get_file_list;
    Free_File_List_Function *free_file_list;
    Get_Buffer_First_Function *get_buffer_first;
    Get_Buffer_Next_Function *get_buffer_next;
    Get_Buffer_Function *get_buffer;
    Get_Parameter_Buffer_Function *get_parameter_buffer;
    Get_Buffer_By_Name_Function *get_buffer_by_name;
    Refresh_Buffer_Function *refresh_buffer;
    Buffer_Read_Range_Function *buffer_read_range;
    Buffer_Replace_Range_Function *buffer_replace_range;
    Buffer_Seek_Function *buffer_seek;
    Buffer_Set_Setting_Function *buffer_set_setting;
    Buffer_Save_Function *buffer_save;
    Get_View_First_Function *get_view_first;
    Get_View_Next_Function *get_view_next;
    Get_View_Function *get_view;
    Get_Active_View_Function *get_active_view;
    Refresh_View_Function *refresh_view;
    View_Auto_Tab_Function *view_auto_tab;
    View_Compute_Cursor_Function *view_compute_cursor;
    View_Set_Cursor_Function *view_set_cursor;
    View_Set_Mark_Function *view_set_mark;
    View_Set_Highlight_Function *view_set_highlight;
    View_Set_Buffer_Function *view_set_buffer;
    View_Open_File_Function *view_open_file;
    View_Kill_Buffer_Function *view_kill_buffer;
    Get_User_Input_Function *get_user_input;
    Get_Command_Input_Function *get_command_input;
    Get_Event_Message_Function *get_event_message;
    Get_Mouse_State_Function *get_mouse_state;
    Start_Query_Bar_Function *start_query_bar;
    End_Query_Bar_Function *end_query_bar;
    Print_Message_Function *print_message;
    Change_Theme_Function *change_theme;
    Change_Font_Function *change_font;
    Set_Theme_Colors_Function *set_theme_colors;
    void *cmd_context;
    void *system_links;
    void *current_coroutine;
    int type_coroutine;
};
#define FillAppLinksAPI(app_links) do{\
app_links->exec_command = external_exec_command;\
app_links->exec_system_command = external_exec_system_command;\
app_links->directory_get_hot = external_directory_get_hot;\
app_links->get_4ed_path = external_get_4ed_path;\
app_links->file_exists = external_file_exists;\
app_links->directory_cd = external_directory_cd;\
app_links->get_file_list = external_get_file_list;\
app_links->free_file_list = external_free_file_list;\
app_links->get_buffer_first = external_get_buffer_first;\
app_links->get_buffer_next = external_get_buffer_next;\
app_links->get_buffer = external_get_buffer;\
app_links->get_parameter_buffer = external_get_parameter_buffer;\
app_links->get_buffer_by_name = external_get_buffer_by_name;\
app_links->refresh_buffer = external_refresh_buffer;\
app_links->buffer_read_range = external_buffer_read_range;\
app_links->buffer_replace_range = external_buffer_replace_range;\
app_links->buffer_seek = external_buffer_seek;\
app_links->buffer_set_setting = external_buffer_set_setting;\
app_links->buffer_save = external_buffer_save;\
app_links->get_view_first = external_get_view_first;\
app_links->get_view_next = external_get_view_next;\
app_links->get_view = external_get_view;\
app_links->get_active_view = external_get_active_view;\
app_links->refresh_view = external_refresh_view;\
app_links->view_auto_tab = external_view_auto_tab;\
app_links->view_compute_cursor = external_view_compute_cursor;\
app_links->view_set_cursor = external_view_set_cursor;\
app_links->view_set_mark = external_view_set_mark;\
app_links->view_set_highlight = external_view_set_highlight;\
app_links->view_set_buffer = external_view_set_buffer;\
app_links->view_open_file = external_view_open_file;\
app_links->view_kill_buffer = external_view_kill_buffer;\
app_links->get_user_input = external_get_user_input;\
app_links->get_command_input = external_get_command_input;\
app_links->get_event_message = external_get_event_message;\
app_links->get_mouse_state = external_get_mouse_state;\
app_links->start_query_bar = external_start_query_bar;\
app_links->end_query_bar = external_end_query_bar;\
app_links->print_message = external_print_message;\
app_links->change_theme = external_change_theme;\
app_links->change_font = external_change_font;\
app_links->set_theme_colors = external_set_theme_colors; } while(false)
