// name: FUN_100170286
// address: 100170286

ulong FUN_100170286(undefined8 param_1,long param_2,undefined1 param_3,undefined1 *param_4,
                   undefined8 *param_5)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 in_RAX;
  long lVar3;
  undefined8 uVar4;
  undefined8 local_38;
  
  local_38._4_4_ = (uint)((ulong)in_RAX >> 0x20) & 0xffffff;
  local_38 = (ulong)local_38._4_4_ << 0x20;
  if (param_2 == 0) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      FUN_1006793d0(uVar4);
    }
    FUN_1001782e9(0,1);
    local_38 = 0xffffffce;
  }
  else {
    lVar3 = FUN_10017019d(0,param_1,param_3,(long)&local_38 + 7,&local_38);
    if (lVar3 == 0) {
      local_38 = local_38 & 0xffffffffffffff;
      lVar3 = FUN_100170214(0,param_1,&local_38);
      if (lVar3 == 0) {
        ___bzero(param_2,0x420);
        if (param_4 != (undefined1 *)0x0) {
          *param_4 = 0;
        }
        if (param_5 != (undefined8 *)0x0) {
          param_5[8] = 0;
          param_5[9] = 0;
          param_5[6] = 0;
          param_5[7] = 0;
          param_5[4] = 0;
          param_5[5] = 0;
          param_5[2] = 0;
          param_5[3] = 0;
          *param_5 = 0;
          param_5[1] = 0;
        }
        if ((int)local_38 == 0) {
          return 0xffffffd5;
        }
        return local_38 & 0xffffffff;
      }
    }
    cVar1 = FUN_10016ffd2(lVar3,param_2,&local_38);
    if ((param_5 != (undefined8 *)0x0) && (cVar1 != '\0')) {
      uVar2 = FUN_10017d477(param_2,param_5,0);
      local_38 = CONCAT44(local_38._4_4_,uVar2);
    }
    if (param_4 != (undefined1 *)0x0) {
      *param_4 = local_38._7_1_;
    }
    FUN_10017060f(lVar3);
    local_38 = local_38 & 0xffffffff;
  }
  return local_38;
}

