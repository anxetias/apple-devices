// name: FUN_1005ba5ab
// address: 1005ba5ab

long FUN_1005ba5ab(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  int *param_5)

{
  char cVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  int *piVar6;
  int local_64;
  undefined8 local_60;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  piVar6 = &local_64;
  if (param_5 != (int *)0x0) {
    piVar6 = param_5;
  }
  local_60 = param_1;
  iVar2 = FUN_1005b7cbc();
  *piVar6 = iVar2;
  if (iVar2 != -0x80) {
    if (iVar2 == 0) {
      lVar3 = _AMDeviceCopyValueWithError(local_60,param_2,param_3,piVar6);
      if (param_4 != 0 && lVar3 != 0) {
        lVar4 = _CFGetTypeID(lVar3);
        if (lVar4 != param_4) {
          uVar5 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar5,0x10);
          if (cVar1 != '\0') {
            local_58 = 0x8220202;
            local_54 = "Assertion failure";
            local_4c = 0x822;
            local_4a = "CFGetTypeID(value) == typeID";
            __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
          }
          FUN_1001782e9(0,0);
          _CFRelease(lVar3);
          lVar3 = 0;
        }
      }
      FUN_1005b8595(local_60);
      goto LAB_1005ba683;
    }
    uVar5 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar5,0x10);
    if (cVar1 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x400;
      local_4a = (char *)CONCAT44(local_4a._4_4_,iVar2);
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_58,0x12);
    }
  }
  lVar3 = 0;
LAB_1005ba683:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

