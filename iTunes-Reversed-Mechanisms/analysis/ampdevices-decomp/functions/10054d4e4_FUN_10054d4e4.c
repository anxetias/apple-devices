// name: FUN_10054d4e4
// address: 10054d4e4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_10054d4e4(undefined8 param_1,int param_2,undefined8 param_3,uint param_4)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  int local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  iVar2 = -4;
  if (param_2 == 0x46494c45) {
    if ((param_4 >> 8 & 1) == 0) {
      iVar2 = FUN_10054d680(0x46494c45,param_3,0);
      if (iVar2 != 0) goto LAB_10054d5c8;
    }
    iVar2 = FUN_100548d34(_DAT_100710490,param_1,0x46494c45,param_3,0,4);
    if (iVar2 != -0x80) {
      if (iVar2 != 0) {
        uVar3 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar3,0x10);
        if (cVar1 != '\0') {
          local_58 = 0x8220202;
          local_54 = "Assertion failure";
          local_4c = 0x400;
          local_4a = iVar2;
          __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_58,0x12);
        }
        if (iVar2 != 0) goto LAB_10054d5c8;
      }
      iVar2 = FUN_100549f1e(param_1,0,0x46494c45,param_3,param_4,0,0);
      if ((iVar2 != -0x80) && (iVar2 != 0)) {
        uVar3 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar3,0x10);
        if (cVar1 != '\0') {
          local_58 = 0x8220202;
          local_54 = "Assertion failure";
          local_4c = 0x400;
          local_4a = iVar2;
          __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_58,0x12);
        }
      }
    }
  }
LAB_10054d5c8:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

