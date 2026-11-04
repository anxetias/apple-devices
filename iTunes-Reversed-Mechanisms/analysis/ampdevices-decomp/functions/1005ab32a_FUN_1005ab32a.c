// name: FUN_1005ab32a
// address: 1005ab32a

undefined8
FUN_1005ab32a(char param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  
  if (param_1 == '\0') {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_100171409(DAT_1008c4d90,0,PTR__kCFTypeDictionaryKeyCallBacks_10082e138,
                          PTR__kCFTypeDictionaryValueCallBacks_10082e140);
    FUN_100168550(uVar1,&cf_track,param_2,0);
    FUN_100168550(uVar1,&cf_artist,param_3,0);
    FUN_100168550(uVar1,&cf_album,param_4,0);
    FUN_10016843e(uVar1,&cf_language,param_5,0);
  }
  return uVar1;
}

