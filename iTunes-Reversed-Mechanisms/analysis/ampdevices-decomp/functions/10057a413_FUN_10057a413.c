// name: FUN_10057a413
// address: 10057a413

void FUN_10057a413(undefined4 param_1,int param_2)

{
  char cVar1;
  long *plVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  plVar2 = (long *)FUN_10039a28c();
  uVar3 = (**(code **)(*plVar2 + 0x50))(plVar2);
  plVar2 = (long *)FUN_10039c016(uVar3,param_1,0);
  if (plVar2 != (long *)0x0) {
    cVar1 = (**(code **)(*plVar2 + 0x68))(plVar2);
    if (cVar1 == '\0') {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        local_48 = 0x8220202;
        local_44 = "Assertion failure (expected to be true)";
        local_3c = 0x822;
        local_3a = "updateRestoreActionDelegate->IsManualCheckingForUpdates()";
        __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
      }
      cVar1 = FUN_1001782e9(0,0);
      if (cVar1 == '\0') goto LAB_10057a4a4;
    }
    plVar4 = (long *)FUN_10039a28c();
    uVar3 = (**(code **)(*plVar4 + 0x50))(plVar4);
    FUN_10039c194(uVar3,plVar2);
  }
LAB_10057a4a4:
  plVar2 = (long *)FUN_10039a28c();
  uVar3 = (**(code **)(*plVar2 + 0x58))(plVar2);
  FUN_1001c6987(uVar3,0x73776365,param_1,1,(long)param_2);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

