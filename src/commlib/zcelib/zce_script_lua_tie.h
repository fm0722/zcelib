//��������ǲο�Tinkerʵ�ֵģ���Ȼ��лԭ����

#ifndef ZCE_LIB_SCRIPT_LUA_H_
#define ZCE_LIB_SCRIPT_LUA_H_

#if defined  lua_h

//LUA Ь�������ڰ�����C++��
class ZCE_Lua_Tie
{
public:
    ZCE_Lua_Tie();
    ~ZCE_Lua_Tie();

    //
    int open();
    //
    void close();

    //
    void register_int64(lua_State *lua_state);
    //
    void register_uint64(lua_State *lua_state);

protected:

    //
    lua_State   *lua_state_;
};



#endif

#endif // ZCE_LIB_SCRIPT_LUA_H_
