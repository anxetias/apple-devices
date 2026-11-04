// name: FUN_1001f24c1
// address: 1001f24c1

ulong FUN_1001f24c1(int *param_1,long param_2,char param_3)

{
  char cVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 uVar4;
  char *pcVar5;
  
  if ((param_1 == (int *)0x0) || (*param_1 != 0x786d6c65)) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      FUN_1006c61f3(uVar4);
    }
  }
  else {
    if (param_2 != 0) {
      uVar2 = FUN_1001f25c0(param_1,param_2,0);
      uVar3 = (ulong)uVar2;
      if (uVar2 == 0xffffff80) {
        return 0xffffff80;
      }
      if (uVar2 != 0) {
        uVar4 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar4,0x10);
        if (cVar1 == '\0') {
          return uVar3;
        }
        FUN_1006c6111(uVar3,uVar4);
        return uVar3;
      }
      pcVar5 = "<true/>\n";
      if (param_3 == '\0') {
        pcVar5 = "<false/>\n";
      }
                    /* WARNING: Could not recover jumptable at 0x0001001f2535. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (**(code **)(param_1 + 0x10))
                        (param_1,pcVar5,param_3 == '\0' | 8,*(undefined8 *)(param_1 + 0x12));
      return uVar3;
    }
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      FUN_1006c617d(uVar4);
    }
  }
  FUN_1001782e9(0,0);
  return 0xffffffce;
}

