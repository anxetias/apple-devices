// name: FUN_1004c305a
// address: 1004c305a

undefined8 FUN_1004c305a(long *param_1,char param_2)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1[0x9e] == 0) {
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "mCoreMediaItem != __null";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
    uVar4 = 0xffffffce;
  }
  else {
    if (param_2 != '\0') {
      iVar3 = FUN_1004437d8(param_1[0x9e],1);
      uVar4 = 0x232e;
      if (0xfffffffd < iVar3 - 3U) goto LAB_1004c314a;
    }
    cVar2 = (**(code **)(*param_1 + 0x2c0))(param_1);
    uVar4 = 0;
    if (cVar2 != '\0') {
      if ((long *)param_1[0xaa] != (long *)0x0) {
        (**(code **)(*(long *)param_1[0xaa] + 0x90))();
      }
      uVar1 = *(uint *)(param_1 + 0xa9);
      cVar2 = (**(code **)(*param_1 + 0x2c0))(param_1);
      if ((((uVar1 >> 8 & 1) == 0) && (cVar2 != '\0')) &&
         (cVar2 = (**(code **)(*param_1 + 0x2f0))(param_1), uVar4 = 0, cVar2 == '\0')) {
        cVar2 = (**(code **)(*param_1 + 0x2b8))(param_1);
        uVar4 = 0x2375;
        if (cVar2 != '\0') {
          uVar4 = 0x2380;
        }
      }
    }
  }
LAB_1004c314a:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar4;
}

