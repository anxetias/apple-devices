// name: FUN_10042a48e
// address: 10042a48e

int FUN_10042a48e(long *param_1,uint param_2,undefined8 param_3,long param_4)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined1 local_168 [20];
  int local_154;
  ulong local_50;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  ___bzero(local_168,0x118);
  uVar4 = (ulong)param_2;
  local_50 = uVar4;
  if (param_4 == 0) {
    iVar2 = (**(code **)(*param_1 + 0xa8))(param_1,&local_50,param_3);
    if ((iVar2 != 0) || (iVar2 = 0, local_50 != uVar4)) {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        local_48 = 0x8220202;
        local_44 = "Assertion failure";
        local_3c = 0x822;
        local_3a = "((status == noErr) && (localCount == count))";
        __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
      }
      FUN_1001782e9(0,0);
      iVar2 = -0x27;
    }
  }
  else {
    iVar2 = (**(code **)(*param_1 + 0xb0))(param_1,&local_50,param_3,1,local_168);
    if (iVar2 != -0x80) {
      if (iVar2 == 0) {
        do {
        } while (local_154 == 1);
        iVar2 = -0x27;
        if ((local_154 == 0) && (iVar2 = -0x27, local_50 == uVar4)) {
          iVar2 = 0;
        }
      }
      else {
        uVar3 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar3,0x10);
        if (cVar1 != '\0') {
          local_48 = 0x8220202;
          local_44 = "Assertion failure";
          local_3c = 0x400;
          local_3a = (char *)CONCAT44(local_3a._4_4_,iVar2);
          __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_48,0x12);
        }
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_30) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar2;
}

