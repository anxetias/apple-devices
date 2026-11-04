// name: FUN_1003a1036
// address: 1003a1036

undefined8 FUN_1003a1036(long param_1,ulong param_2,undefined8 *param_3,uint *param_4)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_3 == (undefined8 *)0x0) {
    uVar5 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar5,0x10);
    if (cVar2 != '\0') {
      local_3a = "outName != nullptr";
LAB_1003a123c:
      local_3c = 0x822;
      local_44 = "Assertion failure";
      local_48 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
  }
  else {
    *param_3 = 0;
    if (param_4 != (uint *)0x0) {
      *param_4 = 0;
    }
    if ((*(byte *)(param_1 + 0xf8) & 2) == 0) {
      FUN_10055ea6a(param_1);
    }
    iVar1 = *(int *)(param_1 + 0x10);
    if (iVar1 == 4) {
      if ((*(byte *)(param_1 + 0xf8) & 2) == 0) {
        FUN_10055ea6a(param_1);
      }
      if (*(long *)(param_1 + 0x60) == 0) goto LAB_1003a11c1;
      FUN_10047e244(*(long *)(param_1 + 0x60),param_3,param_4);
LAB_1003a118f:
      if (param_4 != (uint *)0x0) {
        uVar3 = *param_4 * 2;
LAB_1003a11c9:
        *param_4 = uVar3 >> 1;
      }
    }
    else {
      if (iVar1 == 3) {
        if ((*(byte *)(param_1 + 0xf8) & 2) == 0) {
          FUN_10055ea6a(param_1);
        }
        if (*(long *)(param_1 + 0x60) != 0) {
          FUN_1004778bb(*(long *)(param_1 + 0x60),param_3,param_4);
          if ((((short *)*param_3 == (short *)0x0) || (*(short *)*param_3 == 0)) &&
             (lVar4 = FUN_1003a095a(), lVar4 != 0)) goto LAB_1003a115a;
        }
        goto LAB_1003a118f;
      }
      if (iVar1 == 2) {
        if ((*(byte *)(param_1 + 0xf8) & 2) == 0) {
          FUN_10055ea6a(param_1);
        }
        lVar4 = *(long *)(param_1 + 0x60);
        if (lVar4 != 0) {
LAB_1003a115a:
          FUN_1004778bb(lVar4,param_3,param_4);
          goto LAB_1003a118f;
        }
      }
      else {
        uVar5 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar5,0x10);
        if (cVar2 != '\0') {
          local_48 = 0x8220202;
          local_44 = "Assertion failure";
          local_3c = 0x822;
          local_3a = "false";
          __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
        }
        FUN_1001782e9(0,0);
      }
LAB_1003a11c1:
      if (param_4 != (uint *)0x0) {
        uVar3 = *param_4;
        goto LAB_1003a11c9;
      }
    }
    if ((param_2 & 2) == 0) goto LAB_1003a11f5;
    uVar5 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar5,0x10);
    if (cVar2 != '\0') {
      local_3a = "(inOptions & kGetFieldOption_FillInDefaults) == 0";
      goto LAB_1003a123c;
    }
  }
  FUN_1001782e9(0,0);
LAB_1003a11f5:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_30) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return 0;
}

