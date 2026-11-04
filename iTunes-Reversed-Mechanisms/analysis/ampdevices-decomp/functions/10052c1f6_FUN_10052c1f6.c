// name: FUN_10052c1f6
// address: 10052c1f6

undefined8 FUN_10052c1f6(long *param_1,void *param_2)

{
  long *plVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  if ((int)param_1[0x10] == 0x46494c45) {
    plVar1 = param_1 + 0x16;
    iVar3 = _memcmp(param_2,plVar1,0x420);
    uVar4 = 0;
    if (iVar3 != 0) {
      if (param_1[0xb4] != 0) {
        (**(code **)(*param_1 + 0x1e8))(param_1);
        if ((int)param_1[0x10] == 0x46494c45) {
          _memcpy(plVar1,param_2,0x420);
        }
        if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
                    /* WARNING: Could not recover jumptable at 0x00010052c2a7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar4 = (**(code **)(*param_1 + 0x1e0))(param_1);
          return uVar4;
        }
        goto LAB_10052c355;
      }
      _memcpy(plVar1,param_2,0x420);
    }
  }
  else {
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "mTrackKind == kITFileKind";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
    uVar4 = 0xffffffce;
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return uVar4;
  }
LAB_10052c355:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

