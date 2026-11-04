// name: FUN_1003de254
// address: 1003de254

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_1003de254(long param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                 double *param_5)

{
  char cVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined1 auVar6 [16];
  undefined8 local_260;
  undefined4 local_258;
  char *local_254;
  undefined2 local_24c;
  int local_24a;
  uint local_238;
  char *local_234;
  undefined2 local_22c;
  char *local_22a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (*(char *)(param_1 + 0x594) == '\0') {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_238 = 0x8220202;
      local_234 = "Assertion failure";
      local_22c = 0x822;
      local_22a = "mPlayerOpen";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_238,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else if (((*(int *)(param_1 + 0x28) != 0x53485244) && (*(int *)(param_1 + 0x28) != 0x48545450)) ||
          (*(char *)(param_1 + 0x596) != '\0')) {
    uVar3 = FUN_1003da99e(param_1,param_3,&local_260);
    uVar5 = *(ulong *)(param_1 + 0x4d0);
    if ((uVar3 <= *(ulong *)(param_1 + 0x4d0)) &&
       (uVar5 = *(ulong *)(param_1 + 0x558), uVar3 < *(ulong *)(param_1 + 0x558))) {
      uVar5 = uVar3;
    }
    auVar6._8_4_ = (int)((ulong)local_260 >> 0x20);
    auVar6._0_8_ = local_260;
    auVar6._12_4_ = DAT_10070d3c0._4_4_;
    *param_5 = ((double)CONCAT44((undefined4)DAT_10070d3c0,(int)local_260) - _DAT_10070d3d0) +
               (auVar6._8_8_ - _UNK_10070d3d8);
    *(undefined8 *)(param_1 + 0x560) = local_260;
    iVar2 = 0;
    *(undefined8 *)(param_1 + 0x548) = 0;
    *(ulong *)(param_1 + 0x550) = uVar5;
    *(undefined8 *)(param_1 + 0x58c) = 0;
    if (*(long *)(param_1 + 0x508) != 0) {
      _AudioConverterReset();
    }
    if ((*(int *)(param_1 + 0x28) == 0x53485244) || (*(int *)(param_1 + 0x28) == 0x48545450)) {
      (**(code **)(**(long **)(param_1 + 0x568) + 0x1d0))();
      FUN_1001ed4ad(*(undefined8 *)(param_1 + 0x18),0x7fffffffffffffff);
      FUN_100295c56(param_1 + 0x568);
      local_238 = local_238 & 0xffffff00;
      iVar2 = FUN_1003dbc9c(*(undefined8 *)(param_1 + 0x10),param_1 + 0x59c,
                            *(undefined4 *)(param_1 + 0x540),&local_238,uVar5,param_2,0,
                            param_1 + 0x568);
      if (iVar2 != -0x80) {
        if (iVar2 != 0) {
          uVar4 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar4,0x10);
          if (cVar1 != '\0') {
            local_258 = 0x8220202;
            local_254 = "Assertion failure";
            local_24c = 0x400;
            local_24a = iVar2;
            __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_258,0x12);
          }
          if (iVar2 != 0) goto LAB_1003de401;
        }
        *(ulong *)(param_1 + 0x548) = uVar5;
      }
    }
    goto LAB_1003de401;
  }
  iVar2 = -0x32;
LAB_1003de401:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

