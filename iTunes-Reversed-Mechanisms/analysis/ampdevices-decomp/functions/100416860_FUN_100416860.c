// name: FUN_100416860
// address: 100416860

undefined4 FUN_100416860(long *param_1,ulong param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  long *plVar4;
  long *plVar5;
  void *pvVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  undefined4 local_5c;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  int local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  uVar2 = 1;
  if (param_2 < 2) goto LAB_100416980;
  local_5c = 0;
  plVar9 = param_1 + 2;
  plVar5 = (long *)param_1[2];
  plVar4 = plVar9;
  if (plVar5 != (long *)0x0) {
    do {
      if ((ulong)plVar5[4] >= param_2) {
        plVar4 = plVar5;
      }
      plVar5 = (long *)plVar5[(ulong)plVar5[4] < param_2];
    } while (plVar5 != (long *)0x0);
    if ((plVar4 != plVar9) && ((ulong)plVar4[4] <= param_2)) {
      uVar2 = (undefined4)plVar4[5];
      goto LAB_100416980;
    }
  }
  lVar8 = *param_1;
  if (lVar8 == 0) {
    uVar2 = 0;
    iVar3 = FUN_10041503c(0,param_1);
    if (iVar3 == -0x80) goto LAB_100416980;
    if (iVar3 != 0) {
      uVar7 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar7,0x10);
      if (cVar1 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x400;
        local_4a = iVar3;
        __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: err == (%d)",&local_58,0x12);
      }
      goto LAB_100416980;
    }
    lVar8 = *param_1;
  }
  uVar2 = FUN_10041576c(lVar8);
  iVar3 = FUN_1000cc160(uVar2,param_2,0,&local_5c);
  if (iVar3 != 0) {
    local_5c = 0;
  }
  uVar2 = local_5c;
  plVar5 = (long *)*plVar9;
  while (plVar4 = plVar9, plVar5 != (long *)0x0) {
    while (plVar4 = plVar5, (ulong)plVar4[4] <= param_2) {
      if (param_2 <= (ulong)plVar4[4]) goto LAB_100416980;
      plVar5 = (long *)plVar4[1];
      if ((long *)plVar4[1] == (long *)0x0) {
        plVar9 = plVar4 + 1;
        goto LAB_100416955;
      }
    }
    plVar9 = plVar4;
    plVar5 = (long *)*plVar4;
  }
LAB_100416955:
  pvVar6 = operator_new(0x30);
  *(ulong *)((long)pvVar6 + 0x20) = param_2;
  *(undefined4 *)((long)pvVar6 + 0x28) = uVar2;
  FUN_10020e4b6(param_1 + 1,plVar4,plVar9,pvVar6);
  uVar2 = local_5c;
LAB_100416980:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar2;
}

