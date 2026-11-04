// name: FUN_1005e565a
// address: 1005e565a

undefined8 FUN_1005e565a(long *param_1,long param_2)

{
  undefined1 uVar1;
  char cVar2;
  ushort uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_2 == 0) {
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "inTrackInfo != nullptr";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
    uVar4 = 0xffffffce;
    goto LAB_1005e5770;
  }
  if (*(long **)(param_2 + 0x40) == (long *)0x0) {
    if ((*(long *)(param_2 + 0x48) != 0) || (*(long *)(param_2 + 0x50) != 0)) {
      uVar4 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar4,0x10);
      if (cVar2 != '\0') {
        local_48 = 0x8220202;
        local_44 = "Assertion failure";
        local_3c = 0x822;
        local_3a = 
        "(inTrackInfo->nextTrackInArtistInfoPrivate == nullptr) && (inTrackInfo->prevTrackInArtistInfoPrivate == nullptr)"
        ;
        __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
      }
      FUN_1001782e9(0,0);
    }
LAB_1005e56fd:
    FUN_1005e32b2(param_1,param_2);
  }
  else if (*(long **)(param_2 + 0x40) != param_1) {
    FUN_1005e5a00(param_2);
    goto LAB_1005e56fd;
  }
  uVar3 = *(ushort *)((long)param_1 + 0x5c) & 0xfdfb;
  *(ushort *)((long)param_1 + 0x5c) = uVar3;
  if (param_1[10] == 0) {
    *(ushort *)((long)param_1 + 0x5c) = uVar3 | 2;
  }
  (**(code **)(*param_1 + 0x80))(param_1);
  lVar5 = param_1[1];
  uVar1 = FUN_1005e4b52(param_1);
  cVar2 = FUN_1004cfafa(lVar5,uVar1);
  if (cVar2 == '\0') {
    *(byte *)((long)param_1 + 0x5c) = *(byte *)((long)param_1 + 0x5c) | 0x40;
    uVar4 = 0;
  }
  else {
    lVar5 = FUN_1005e3fda(param_1);
    uVar4 = 0;
    if (lVar5 == param_2) {
      uVar4 = 0;
      FUN_1005e36b2(param_1,0);
    }
  }
LAB_1005e5770:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

