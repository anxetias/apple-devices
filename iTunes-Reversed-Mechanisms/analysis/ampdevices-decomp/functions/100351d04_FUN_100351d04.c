// name: FUN_100351d04
// address: 100351d04

short * FUN_100351d04(short *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  short *psVar4;
  long lVar5;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == (short *)0x0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "columns != nullptr";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    psVar4 = (short *)0x0;
    FUN_1001782e9(0,0);
  }
  else {
    if (0 < *param_1) {
      psVar4 = param_1 + 2;
      lVar5 = 0;
      do {
        iVar2 = FUN_10031fa8a(psVar4);
        if (iVar2 == param_2) goto LAB_100351d7e;
        lVar5 = lVar5 + 1;
        psVar4 = psVar4 + 0xe;
      } while (lVar5 < *param_1);
    }
    psVar4 = (short *)0x0;
  }
LAB_100351d7e:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return psVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

