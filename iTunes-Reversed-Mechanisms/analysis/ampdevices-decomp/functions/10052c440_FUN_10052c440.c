// name: FUN_10052c440
// address: 10052c440

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_10052c440(long *param_1,long param_2,undefined8 param_3,long param_4,uint param_5,
                 long *param_6)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  double dVar4;
  long local_68;
  long *local_60;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_68 = 0;
  cVar1 = FUN_1001ee041();
  if (cVar1 != '\0') {
    dVar4 = (double)FUN_1001ebd46();
    local_60 = (long *)(dVar4 + _DAT_100710490);
    do {
      cVar1 = (**(code **)(*param_1 + 0x188))(param_1);
      if (cVar1 == '\0') break;
      FUN_1001ee7b6(0x32);
      dVar4 = (double)FUN_1001ebd46();
    } while (dVar4 <= (double)local_60);
  }
  if (param_1[0xb4] == 0) {
    iVar2 = -0x26;
  }
  else {
    iVar2 = (int)param_1[0xb5];
    local_60 = param_6;
    if (iVar2 == 0) {
      if (((char)param_1[0xa0] == '\x01') && ((ulong)param_1[0xa1] < (ulong)(param_2 + param_4))) {
        uVar3 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar3,0x10);
        if (cVar1 != '\0') {
          local_58 = 0x8220202;
          local_54 = "Assertion failure";
          local_4c = 0x822;
          local_4a = "inPosition + inBufferSize <= mAvailableSizeForReading";
          __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
        }
        FUN_1001782e9(0,0);
        iVar2 = 0x2351;
      }
      else {
        FUN_1001e9de0();
        iVar2 = FUN_100187fa3(param_1[0xb4],param_2,param_3,param_4,~param_5 & 1,&local_68);
        param_1[0xa2] = param_2 + local_68;
        FUN_1001e9eb9(param_1 + 0xaa);
        if (local_60 != (long *)0x0 && iVar2 == 0) {
          *local_60 = local_68;
          iVar2 = 0;
        }
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

