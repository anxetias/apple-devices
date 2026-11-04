// name: FUN_10040d49c
// address: 10040d49c

/* WARNING: Type propagation algorithm not settling */

void FUN_10040d49c(undefined8 param_1,long param_2)

{
  char cVar1;
  undefined8 uVar2;
  double dVar3;
  uint local_3c [2];
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  cVar1 = FUN_100167896(param_1,&cf_PercentComplete,local_3c);
  if (cVar1 != '\0') {
    if (local_3c[0] < 0x65) {
      dVar3 = (double)(int)local_3c[0] / DAT_10070f3a8;
      if ((*(double *)(param_2 + 0x458) != dVar3) ||
         (NAN(*(double *)(param_2 + 0x458)) || NAN(dVar3))) {
        *(double *)(param_2 + 0x458) = dVar3;
        FUN_1001e9809(param_2 + 0x4a8);
      }
    }
    else {
      uVar2 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar2,0x10);
      if (cVar1 != '\0') {
        local_3c[1] = 0x8220202;
        local_34 = "Assertion failure";
        local_2c = 0x822;
        local_2a = "percentComplete >= 0 && percentComplete <= 100";
        __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",local_3c + 1,0x16);
      }
      FUN_1001782e9(0,0);
    }
  }
  FUN_10017060f(param_1);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

