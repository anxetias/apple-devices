// name: FUN_100239868
// address: 100239868

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_100239868(double param_1,double param_2,long param_3)

{
  char cVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  if ((((param_1 == 0.0) && (!NAN(param_1))) && (param_2 == 0.0)) && (!NAN(param_2))) {
    if (*(short *)(param_3 + 0x60) == 0) {
      uVar2 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar2,0x10);
      if (cVar1 != '\0') {
        local_38 = 0x8220202;
        local_34 = "Assertion failure";
        local_2c = 0x822;
        local_2a = "format->minSmall != 0";
        __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
      }
      FUN_1001782e9(0,0);
    }
    param_1 = (double)FUN_1002395cb(param_1,param_3);
  }
  if (*(int *)(param_3 + 4) == 0x706e6720) {
    param_2 = param_2 * param_1 * _DAT_10070e600;
  }
  else {
    uVar3 = 0;
    if (*(int *)(param_3 + 4) != 0x6a706567) goto LAB_100239917;
    param_2 = param_2 * param_1;
  }
  uVar3 = 0x1000;
  if (0x1000 < (uint)(long)param_2) {
    uVar3 = (long)param_2 & 0xffffffff;
  }
LAB_100239917:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

