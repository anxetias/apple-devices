// name: FUN_1004c48c8
// address: 1004c48c8

undefined1 FUN_1004c48c8(long *param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (*(char *)((long)param_1 + 0x50a) == '\0') {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_2a = "mPlaybackInfo.waitingToStartPlayback";
LAB_1004c49ed:
      local_2c = 0x822;
      local_34 = "Assertion failure";
      local_38 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
  }
  else {
    if (param_1[0x9e] != 0) {
      if (*(char *)((long)param_1 + 0x50b) == '\0') {
        iVar2 = FUN_1004437d8(param_1[0x9e],3);
        if (iVar2 == 4) {
          *(undefined1 *)((long)param_1 + 0x50a) = 0;
          *(undefined4 *)((long)param_1 + 0x50c) = 0;
          uVar4 = 2;
          goto LAB_1004c496e;
        }
        if (iVar2 == 3) {
          (**(code **)(*param_1 + 0x390))(param_1);
          uVar4 = 1;
          goto LAB_1004c496e;
        }
      }
      uVar4 = 0;
      goto LAB_1004c496e;
    }
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_2a = "mCoreMediaItem != __null";
      goto LAB_1004c49ed;
    }
  }
  uVar4 = 0;
  FUN_1001782e9(0,0);
LAB_1004c496e:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_18) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

