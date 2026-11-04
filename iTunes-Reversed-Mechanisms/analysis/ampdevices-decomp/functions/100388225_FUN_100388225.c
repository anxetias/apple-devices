// name: FUN_100388225
// address: 100388225

int FUN_100388225(undefined8 *param_1,uint param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong local_60;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  int local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if ((int)param_2 < 0) {
    iVar2 = FUN_100160255(*param_1,&local_60);
    if (iVar2 == -0x80) goto LAB_1003883d4;
    if (iVar2 == 0) {
      iVar2 = FUN_100160772(*param_1,(long)(int)param_2 + local_60);
      if (iVar2 == -0x80) goto LAB_1003883d4;
      if (iVar2 == 0) goto LAB_1003882c8;
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
    }
    else {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
    }
    if (cVar1 != '\0') {
LAB_1003883c1:
      local_4a = iVar2;
      iVar2 = local_4a;
      local_4c = 0x400;
      local_54 = "Assertion failure";
      local_58 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_58,0x12);
    }
  }
  else {
    if (param_2 != 0) {
      do {
        uVar4 = 0x8000;
        if (param_2 < 0x8000) {
          uVar4 = (ulong)param_2;
        }
        local_60 = uVar4;
        iVar2 = FUN_100160380(*param_1,&local_60,param_1 + 5);
        if (iVar2 != 0) {
          if (iVar2 == -0x80) goto LAB_1003883d4;
          uVar3 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar3,0x10);
          if (cVar1 == '\0') goto LAB_1003883d4;
          goto LAB_1003883c1;
        }
        param_2 = param_2 - (int)uVar4;
      } while (param_2 != 0);
    }
LAB_1003882c8:
    iVar2 = 0;
  }
LAB_1003883d4:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

