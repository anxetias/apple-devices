// name: FUN_1006015ba
// address: 1006015ba

undefined4 FUN_1006015ba(long param_1,char param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  uVar2 = FUN_100324d00();
  if ((char)uVar2 == '\0') {
    uVar5 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar5,0x10);
    if (cVar1 != '\0') {
      local_3a = "bSavedOk";
      goto LAB_1006016fd;
    }
  }
  else {
    if ((param_2 != '\0') || (*(char *)(param_1 + 0x68) != '\x01')) goto LAB_100601663;
    if (*(long *)(param_1 + 0x58) == 0) {
      iVar3 = _AMSSetNewRecordGroupName(**(undefined8 **)(param_1 + 8),0);
      if (iVar3 == 0) {
        FUN_10017060f(*(undefined8 *)(param_1 + 0x50));
        *(undefined8 *)(param_1 + 0x50) = 0;
        goto LAB_100601663;
      }
    }
    else {
      lVar4 = FUN_10017076e(*(undefined8 *)(param_1 + 0x38));
      if (lVar4 < 1) goto LAB_100601663;
      iVar3 = _AMSSetNewRecordGroupName
                        (**(undefined8 **)(param_1 + 8),*(undefined8 *)(param_1 + 0x58));
      if (iVar3 == 0) {
        FUN_10017060f(*(undefined8 *)(param_1 + 0x50));
        uVar5 = FUN_1001736a5(DAT_1008c4d90,*(undefined8 *)(param_1 + 0x58));
        *(undefined8 *)(param_1 + 0x50) = uVar5;
        goto LAB_100601663;
      }
    }
    uVar5 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar5,0x10);
    if (cVar1 != '\0') {
      local_3a = "AMSStatus_OK == helperStatus";
LAB_1006016fd:
      local_3c = 0x822;
      local_44 = "Assertion failure";
      local_48 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_48,0x16);
    }
  }
  FUN_1001782e9(0,0);
LAB_100601663:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

