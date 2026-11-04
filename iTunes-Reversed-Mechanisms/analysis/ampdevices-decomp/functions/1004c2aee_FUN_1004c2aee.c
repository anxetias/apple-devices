// name: FUN_1004c2aee
// address: 1004c2aee

undefined8 FUN_1004c2aee(long *param_1,undefined8 param_2,char param_3,undefined8 *param_4)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_4 != (undefined8 *)0x0) {
    *param_4 = param_2;
  }
  lVar2 = param_1[0x9e];
  if (lVar2 == 0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "mCoreMediaItem != __null";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
    uVar3 = 0xffffffce;
  }
  else {
    if (param_3 == '\0') {
      uVar3 = 0;
      (**(code **)(*param_1 + 0x310))(param_1,0);
      lVar2 = (**(code **)(*(long *)param_1[0xaa] + 0x48))();
      if (lVar2 == 0) goto LAB_1004c2b95;
      lVar2 = param_1[0x9e];
    }
    FUN_10044486a(lVar2,param_2,*(undefined1 *)(lVar2 + 0x528),param_4);
    uVar3 = 0;
  }
LAB_1004c2b95:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

