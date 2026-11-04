// name: FUN_1001ed0ff
// address: 1001ed0ff

int FUN_1001ed0ff(undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  undefined4 local_68;
  undefined8 local_64;
  undefined4 local_5c;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  
  *param_1 = 0;
  puVar3 = (undefined4 *)FUN_1001c6429(0x10);
  if (puVar3 == (undefined4 *)0x0) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      FUN_1006c4a9d(uVar4);
    }
    FUN_1001782e9(0,0);
    iVar2 = -0x6c;
  }
  else {
    local_64 = 0x100000000;
    local_5c = 0;
    local_50 = 0;
    local_48 = 0;
    uStack_40 = 0;
    local_38 = 0;
    uStack_30 = 0;
    local_68 = param_2;
    local_58 = param_3;
    iVar2 = FUN_1001ec886(&local_68,puVar3 + 2);
    if (iVar2 != -0x80) {
      if (iVar2 == 0) {
        *puVar3 = 0x64747120;
        *param_1 = puVar3;
      }
      else {
        uVar4 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar4,0x10);
        if (cVar1 != '\0') {
          FUN_1006c4a31(iVar2,uVar4);
        }
        if (iVar2 != 0) goto LAB_1001ed1c8;
      }
      return 0;
    }
  }
LAB_1001ed1c8:
  FUN_1001c64c1(puVar3);
  return iVar2;
}

