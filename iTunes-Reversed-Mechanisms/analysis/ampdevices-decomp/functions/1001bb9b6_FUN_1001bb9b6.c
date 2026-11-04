// name: FUN_1001bb9b6
// address: 1001bb9b6

undefined8 * FUN_1001bb9b6(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 local_38 [16];
  
  *param_1 = 0;
  param_1[1] = 0;
  lVar2 = _CFRetain(param_2);
  lVar3 = FUN_100173d62(lVar2,&cf__,1);
  if (lVar3 != -1) {
    lVar3 = FUN_1001737e5(0,0,lVar2);
    if (lVar3 != 0) {
      uVar4 = FUN_1001737f8(lVar3);
      FUN_100173e8c(lVar3,&cf__0,&cf__1_S,0,uVar4,1);
      uVar4 = FUN_1001737f8(lVar3);
      FUN_100173e8c(lVar3,&cf__1,&cf__2_S,0,uVar4,1);
      uVar4 = FUN_1001737f8(lVar3);
      FUN_100173e8c(lVar3,&cf__2,&cf__3_S,0,uVar4,1);
      uVar4 = FUN_1001737f8(lVar3);
      FUN_100173e8c(lVar3,&cf__3,&cf__4_S,0,uVar4,1);
      uVar4 = FUN_1001737f8(lVar3);
      FUN_100173e8c(lVar3,&cf__4,&cf__5_S,0,uVar4,1);
    }
    FUN_10017060f(lVar2);
    lVar2 = lVar3;
  }
  lVar3 = FUN_100173797(0,0,lVar2,param_3);
  if (lVar3 == 0) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      FUN_1006a2474(uVar4);
    }
    cVar1 = FUN_1001782e9(0,0);
    if (cVar1 == '\0') goto LAB_1001bbb54;
  }
  FUN_1001b7e36(local_38,lVar3);
  FUN_1001b80b2(param_1,local_38);
  FUN_1001b811c(local_38);
  _CFRelease(lVar3);
LAB_1001bbb54:
  FUN_10017060f(lVar2);
  return param_1;
}

