// name: FUN_1002060ca
// address: 1002060ca

undefined4 FUN_1002060ca(long param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  uVar2 = FUN_100324a38();
  if ((char)uVar2 == '\0') goto LAB_10020615d;
  if (*(char *)(param_1 + 0x68) == '\0') {
    FUN_10017060f(*(undefined8 *)(param_1 + 0x50));
    *(undefined8 *)(param_1 + 0x50) = 0;
    iVar3 = _AMSGetNewRecordCalendarName(**(undefined8 **)(param_1 + 8),param_1 + 0x58);
    if (iVar3 == 0) {
      uVar4 = FUN_1001736a5(DAT_1008c4d90,*(undefined8 *)(param_1 + 0x58));
      *(undefined8 *)(param_1 + 0x50) = uVar4;
      FUN_1002061f0(param_1);
      goto LAB_1002060f8;
    }
  }
  else {
LAB_1002060f8:
    iVar3 = _AMSGetCalendarDayLimit(**(undefined8 **)(param_1 + 8),param_1 + 0x70);
    *(undefined4 *)(param_1 + 0x6c) = *(undefined4 *)(param_1 + 0x70);
    if (iVar3 == 0) goto LAB_10020615d;
  }
  uVar4 = FUN_1001cc310();
  cVar1 = _os_log_type_enabled(uVar4,0x10);
  if (cVar1 != '\0') {
    local_38 = 0x8220202;
    local_34 = "Assertion failure";
    local_2c = 0x822;
    local_2a = "AMSStatus_OK == helperStatus";
    __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_38,0x16);
  }
  FUN_1001782e9(0,0);
LAB_10020615d:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_20) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar2;
}

