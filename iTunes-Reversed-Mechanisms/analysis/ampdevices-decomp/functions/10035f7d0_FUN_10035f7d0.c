// name: FUN_10035f7d0
// address: 10035f7d0

undefined4 FUN_10035f7d0(long param_1,undefined8 param_2)

{
  long lVar1;
  char cVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (*(int *)(param_1 + 8) == 0x61646563) {
    lVar1 = param_1 + 0x20;
    uVar3 = FUN_1005983d6(lVar1,(int)*(double *)(param_1 + 0x17f0),param_2,0);
    if (*(char *)(param_1 + 0x1878) == '\0') {
      *(undefined1 *)(param_1 + 0x1877) = 0;
    }
    else {
      cVar2 = FUN_100598965(lVar1);
      *(char *)(param_1 + 0x1879) = cVar2;
      if (cVar2 == '\x01') {
        *(undefined1 *)(param_1 + 0x1877) = 1;
      }
      else {
        cVar2 = FUN_100598a35(lVar1);
        *(bool *)(param_1 + 0x1877) = cVar2 != '\0';
        if ((cVar2 == '\0') ||
           ((*(char *)(param_1 + 0x1879) == '\0' && (*(float *)(param_1 + 0x11d0) <= DAT_100700b50))
           )) goto LAB_10035f8a4;
      }
      *(undefined1 *)(param_1 + 0x187b) = 1;
    }
  }
  else {
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "decoderData->magic == \'adec\'";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
    uVar3 = 0xffffffce;
  }
LAB_10035f8a4:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

