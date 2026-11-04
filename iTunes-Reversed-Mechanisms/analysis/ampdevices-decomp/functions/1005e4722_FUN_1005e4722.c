// name: FUN_1005e4722
// address: 1005e4722

undefined8 FUN_1005e4722(long param_1,uint param_2,short *param_3)

{
  short sVar1;
  char cVar2;
  long lVar3;
  undefined8 uVar4;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_3 == (short *)0x0) {
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "artistName != nullptr";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    uVar4 = 0;
    FUN_1001782e9(0,0);
    goto LAB_1005e4887;
  }
  *param_3 = 0;
  sVar1 = *(short *)(param_1 + 0x62);
  if (sVar1 == 0x3e9) {
    if ((param_2 & 1) == 0) {
      if (*(short *)(param_1 + 0x60) == 5) {
        uVar4 = 0xfa0073;
      }
      else {
        uVar4 = 0xfa0025;
      }
LAB_1005e484b:
      FUN_1001c34b7(uVar4,param_3);
    }
  }
  else if (sVar1 == 1000) {
    if ((param_2 & 1) == 0) {
      uVar4 = 0xfa0045;
      goto LAB_1005e484b;
    }
  }
  else {
    if (sVar1 == 2) {
      if ((param_2 & 1) == 0) {
LAB_1005e47c3:
        if (*param_3 == 0) {
          FUN_1001de8ee(param_1 + 0xe8,param_3);
          goto LAB_1005e4853;
        }
      }
      else {
        if ((*(long *)(param_1 + 0xf8) == 0) || (*(int *)(param_1 + 0x100) == 0)) {
LAB_1005e47a6:
          lVar3 = FUN_1005e3fda(param_1);
          if (lVar3 != 0) {
            FUN_1002fb8c8(lVar3,3,param_3);
          }
          goto LAB_1005e47c3;
        }
        FUN_1001de8ee(param_1 + 0xf8,param_3);
        if (*param_3 == 0) goto LAB_1005e47a6;
      }
      uVar4 = 0;
      goto LAB_1005e4887;
    }
    FUN_1001e4bb2("<u>",param_3);
  }
LAB_1005e4853:
  uVar4 = 0;
  if (((param_2 & 2) != 0) && (*param_3 == 0)) {
    *param_3 = 0;
    FUN_1001c34b7(((param_2 & 0x20) >> 4) + 0x7f0003,param_3);
    uVar4 = 6;
  }
LAB_1005e4887:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

