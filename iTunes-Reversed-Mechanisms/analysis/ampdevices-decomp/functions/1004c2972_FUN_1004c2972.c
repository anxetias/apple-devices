// name: FUN_1004c2972
// address: 1004c2972

void FUN_1004c2972(long param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined4 uVar6;
  double dVar7;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_10082cb58;
  dVar7 = (double)FUN_1001ebd46();
  pcVar5 = *(code **)(param_1 + 0x588);
  if (pcVar5 != (code *)0x0) {
    if (*(long **)(param_1 + 0x5a0) == (long *)0x0) {
      uVar4 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar4,0x10);
      if (cVar2 != '\0') {
        local_38 = 0x8220202;
        local_34 = "Assertion failure";
        local_2c = 0x822;
        local_2a = "mExportInfo.exporter != __null";
        __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
      }
      FUN_1001782e9(0,0);
    }
    else {
      bVar1 = *(double *)(param_1 + 0x5c0) + DAT_10070e568 <= dVar7;
      uVar6 = DAT_100700b24;
      if (bVar1) {
        uVar6 = (**(code **)(**(long **)(param_1 + 0x5a0) + 0x18))();
        *(double *)(param_1 + 0x5c0) = dVar7;
        pcVar5 = *(code **)(param_1 + 0x588);
      }
      iVar3 = (*pcVar5)(uVar6,bVar1,*(undefined8 *)(param_1 + 0x590));
      if (iVar3 != 0) {
        if (*(long *)PTR____stack_chk_guard_10082cb58 == local_18) {
                    /* WARNING: Could not recover jumptable at 0x0001004c2a44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(**(long **)(param_1 + 0x5a0) + 8))();
          return;
        }
        goto LAB_1004c2aac;
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_18) {
    return;
  }
LAB_1004c2aac:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

