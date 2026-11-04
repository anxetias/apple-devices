// name: FUN_1005e48f8
// address: 1005e48f8

undefined8 FUN_1005e48f8(long param_1,ulong param_2,undefined8 *param_3,uint *param_4)

{
  short sVar1;
  ushort uVar2;
  char cVar3;
  undefined8 uVar4;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_3 == (undefined8 *)0x0) {
    uVar4 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar4,0x10);
    if (cVar3 != '\0') {
      local_3a = "name != nullptr";
LAB_1005e4ad8:
      local_3c = 0x822;
      local_44 = "Assertion failure";
      local_48 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
  }
  else {
    *param_3 = 0;
    if (param_4 != (uint *)0x0) {
      *param_4 = 0;
    }
    sVar1 = *(short *)(param_1 + 0x62);
    if (sVar1 == 0x3e9) {
      if ((param_2 & 1) == 0) {
        FUN_1005e4722(param_1,0,&DAT_1008c3230);
        *param_3 = &DAT_1008c3232;
        uVar2 = DAT_1008c3230;
joined_r0x0001005e4a24:
        if (param_4 != (uint *)0x0) {
          *param_4 = (uint)uVar2;
        }
      }
    }
    else if (sVar1 == 1000) {
      if ((param_2 & 1) == 0) {
        if (DAT_1008c3030 == 0) {
          FUN_1001c34b7(0xfa0045,&DAT_1008c3030);
        }
        *param_3 = &DAT_1008c3032;
        uVar2 = DAT_1008c3030;
        goto joined_r0x0001005e4a24;
      }
    }
    else if (sVar1 == 2) {
      if ((((param_2 & 1) == 0) || (*(long *)(param_1 + 0xf8) == 0)) ||
         (*(int *)(param_1 + 0x100) == 0)) {
        param_1 = param_1 + 0xe8;
      }
      else {
        param_1 = param_1 + 0xf8;
      }
      FUN_1001de914(param_1,param_3,param_4);
    }
    else {
      uVar4 = FUN_1001cc310();
      cVar3 = _os_log_type_enabled(uVar4,0x10);
      if (cVar3 != '\0') {
        local_48 = 0x8220202;
        local_44 = "Assertion failure";
        local_3c = 0x822;
        local_3a = "false";
        __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
      }
      FUN_1001782e9(0,0);
    }
    if ((param_2 & 2) == 0) goto LAB_1005e4a93;
    uVar4 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar4,0x10);
    if (cVar3 != '\0') {
      local_3a = "(options & kGetFieldOption_FillInDefaults) == 0";
      goto LAB_1005e4ad8;
    }
  }
  FUN_1001782e9(0,0);
LAB_1005e4a93:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

