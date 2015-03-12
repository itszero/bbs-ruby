/*---------------------------------------------------------*/
/* Rubyfix.h    ( NTHU CS MapleBBS Ver 3.10 )                  */
/*---------------------------------------------------------*/
/* target : BBSRuby for Ruby1.9.0                          */
/* create : 07/12/21                                                       */
/* update : 08/12/22                                                       */
/* Author : itszero                                        */
/*---------------------------------------------------------*/

#define RUBY_EVENT_NONE     0x00
#define RUBY_EVENT_LINE     0x01
#define RUBY_EVENT_CLASS    0x02
#define RUBY_EVENT_END      0x04
#define RUBY_EVENT_CALL     0x08
#define RUBY_EVENT_RETURN   0x10
#define RUBY_EVENT_C_CALL   0x20
#define RUBY_EVENT_C_RETURN 0x40
#define RUBY_EVENT_RAISE    0x80
#define RUBY_EVENT_ALL      0xff
#define RUBY_EVENT_VM      0x100
#define RUBY_EVENT_SWITCH  0x200
