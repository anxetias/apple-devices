// name: FUN_10018c2fe
// address: 10018c2fe

ulong FUN_10018c2fe(undefined8 param_1,long param_2,char param_3,long param_4,long param_5)

{
  char cVar1;
  short sVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined1 local_8a;
  undefined1 local_89;
  undefined1 local_88 [80];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  cVar1 = FUN_10017cbd0();
  if (cVar1 == '\0') {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      FUN_100691653(uVar4);
    }
  }
  else {
    if (param_2 != 0) {
      uVar3 = FUN_10018e4a1(param_1,local_88);
      if ((int)uVar3 == 0) {
        sVar2 = _FSResolveAliasFileWithMountFlags(local_88,1,&local_8a,&local_89,param_3 == '\0');
        if (sVar2 == 0) {
          FUN_10018e6ca(local_88,param_2);
          uVar3 = 0;
          if (param_4 != 0 || param_5 != 0) {
            uVar3 = FUN_10017d477(param_2,param_4,param_5);
          }
        }
        else {
          uVar3 = (ulong)(uint)(int)sVar2;
        }
      }
      goto LAB_10018c3c2;
    }
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      FUN_1006915dd(uVar4);
    }
  }
  FUN_1001782e9(0,0);
  uVar3 = 0xffffffce;
LAB_10018c3c2:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

