// name: FUN_10052897c
// address: 10052897c

void FUN_10052897c(undefined8 *param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  char cVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  cVar3 = FUN_100527a20();
  if (cVar3 == '\0') {
    uVar4 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar4,0x10);
    if (cVar3 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "AppProgressBarIsValid(progressBar)";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
    if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
      return;
    }
    goto LAB_100528b35;
  }
  if (param_1[0x107] != 0) {
    FUN_1001bdf6c();
  }
  if (((double)param_1[0x10a] != 0.0) || (NAN((double)param_1[0x10a]))) {
    uVar4 = FUN_1001c156e();
    FUN_1001c6987(uVar4,0x68707267,param_1,0,0);
  }
  uVar4 = FUN_1001c156e();
  FUN_1001c6987(uVar4,0x64707267,param_1,0,0);
  FUN_1001c72e9(param_1 + 0x10c);
  puVar6 = &DAT_1008bfc98;
  puVar2 = (undefined8 *)0x0;
  do {
    puVar7 = puVar2;
    puVar6 = (undefined8 *)*puVar6;
    if (puVar6 == (undefined8 *)0x0) goto LAB_100528a4b;
    puVar2 = puVar6;
  } while (puVar6 != param_1);
  puVar6 = &DAT_1008bfc98;
  if (puVar7 != (undefined8 *)0x0) {
    puVar6 = puVar7;
  }
  *puVar6 = *param_1;
  *param_1 = 0;
LAB_100528a4b:
  *(undefined4 *)(param_1 + 1) = 0;
  plVar1 = (long *)param_1[0x11a];
  if (plVar1 == param_1 + 0x116) {
    lVar5 = 0x20;
LAB_100528ab7:
    (**(code **)(*plVar1 + lVar5))();
  }
  else {
    lVar5 = 0x28;
    if (plVar1 != (long *)0x0) goto LAB_100528ab7;
  }
  FUN_100205d70(param_1 + 0x107);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    operator_delete(param_1);
    return;
  }
LAB_100528b35:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

