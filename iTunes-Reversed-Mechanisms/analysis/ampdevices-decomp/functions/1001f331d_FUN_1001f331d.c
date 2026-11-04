// name: FUN_1001f331d
// address: 1001f331d

ulong FUN_1001f331d(int *param_1,long param_2,long param_3,undefined4 param_4)

{
  char cVar1;
  uint uVar2;
  ulong in_RAX;
  undefined8 uVar3;
  ulong uVar4;
  ulong local_38;
  
  if ((param_1 == (int *)0x0) || (*param_1 != 0x786d6c65)) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_1006c737d(uVar3);
    }
  }
  else if (param_2 == 0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_1006c7307(uVar3);
    }
  }
  else {
    if (param_3 != 0) {
      local_38 = in_RAX;
      uVar2 = FUN_1001f316f(param_1,param_4);
      if (uVar2 != 0) {
        uVar3 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar3,0x10);
        if (cVar1 == '\0') {
          return (ulong)uVar2;
        }
        FUN_1006c70e1(uVar2,uVar3);
        return (ulong)uVar2;
      }
      uVar2 = FUN_1001f25c0(param_1,param_2,0);
      if (uVar2 == 0xffffff80) {
        return 0xffffff80;
      }
      if (uVar2 != 0) {
        uVar3 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar3,0x10);
        if (cVar1 == '\0') {
          return (ulong)uVar2;
        }
        FUN_1006c7225(uVar2,uVar3);
        return (ulong)uVar2;
      }
      uVar2 = (**(code **)(param_1 + 0x10))(param_1,"<string>",8,*(undefined8 *)(param_1 + 0x12));
      if (uVar2 == 0xffffff80) {
        return 0xffffff80;
      }
      if (uVar2 != 0) {
        uVar3 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar3,0x10);
        if (cVar1 == '\0') {
          return (ulong)uVar2;
        }
        FUN_1006c71b9(uVar2,uVar3);
        return (ulong)uVar2;
      }
      FUN_1001f21b4(param_3,param_4,*(undefined8 *)(param_1 + 10),param_1[0xc],&local_38,0);
      uVar2 = (**(code **)(param_1 + 0x10))
                        (param_1,*(undefined8 *)(param_1 + 10),local_38 & 0xffffffff,
                         *(undefined8 *)(param_1 + 0x12));
      if (uVar2 == 0xffffff80) {
        return 0xffffff80;
      }
      if (uVar2 != 0) {
        uVar3 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar3,0x10);
        if (cVar1 == '\0') {
          return (ulong)uVar2;
        }
        FUN_1006c714d(uVar2,uVar3);
        return (ulong)uVar2;
      }
                    /* WARNING: Could not recover jumptable at 0x0001001f34bd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar4 = (**(code **)(param_1 + 0x10))
                        (param_1,"</string>\n",10,*(undefined8 *)(param_1 + 0x12));
      return uVar4;
    }
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_1006c7291(uVar3);
    }
  }
  FUN_1001782e9(0,0);
  return 0xffffffce;
}

