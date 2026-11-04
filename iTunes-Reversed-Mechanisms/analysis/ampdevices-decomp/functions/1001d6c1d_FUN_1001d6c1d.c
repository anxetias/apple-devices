// name: FUN_1001d6c1d
// address: 1001d6c1d

ulong FUN_1001d6c1d(undefined8 param_1,undefined8 *param_2,undefined8 param_3,long param_4,
                   undefined4 param_5)

{
  char cVar1;
  uint uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined1 local_158 [20];
  uint local_144;
  undefined8 local_140;
  undefined4 local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_40;
  undefined4 local_34;
  
  if (param_4 != 0) {
    local_140 = 0;
    local_138 = 0;
    local_130 = 0;
    uStack_128 = 0;
    local_120 = 0;
    uStack_118 = 0;
    local_40 = *param_2;
    *param_2 = 0;
    local_34 = param_5;
    uVar2 = FUN_1001d6276();
    uVar4 = (ulong)uVar2;
    if (uVar2 != 0xffffff80) {
      if (uVar2 == 0) {
        uVar2 = FUN_1001d6b5b(param_1,&local_40,param_3,local_34,local_158);
        if (uVar2 == 0) {
          FUN_1001d6d57(local_158,param_4);
          uVar4 = (ulong)local_144;
          *param_2 = local_40;
        }
        else {
          uVar4 = (ulong)uVar2;
          uVar3 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar3,0x10);
          if (cVar1 != '\0') {
            FUN_1006b4b0e(uVar2,uVar3);
          }
          FUN_1001d6790(local_158);
        }
      }
      else {
        uVar3 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar3,0x10);
        if (cVar1 != '\0') {
          FUN_1006b4b7a(uVar2,uVar3);
        }
      }
    }
    return uVar4;
  }
  uVar4 = FUN_1001d6a08(param_1,param_2,param_3,param_5);
  return uVar4;
}

