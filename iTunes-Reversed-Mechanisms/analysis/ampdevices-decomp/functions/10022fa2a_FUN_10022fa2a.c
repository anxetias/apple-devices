// name: FUN_10022fa2a
// address: 10022fa2a

int FUN_10022fa2a(long param_1,uint param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong local_40;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  uVar4 = (ulong)param_2;
  local_40 = uVar4;
  if (*(long *)(param_1 + 0x40) == 0) {
    if (*(long *)(param_1 + 0x48) == 0) {
      iVar2 = -0x32;
    }
    else {
      FUN_1001c631b(param_3,*(long *)(param_1 + 0x48) + *(long *)(param_1 + 0x58),uVar4);
      *(long *)(param_1 + 0x58) = *(long *)(param_1 + 0x58) + uVar4;
      iVar2 = 0;
    }
  }
  else {
    iVar2 = FUN_10017d230(*(long *)(param_1 + 0x40),param_3,uVar4,0,&local_40);
    if (iVar2 != -0x80) {
      if (iVar2 == 0) {
        iVar2 = 0;
        if (local_40 != uVar4) {
          uVar3 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar3,0x10);
          if (cVar1 != '\0') {
            local_38 = 0x8220202;
            local_34 = "Assertion failure";
            local_2c = 0x822;
            local_2a = "count == numBytes";
            __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
          }
          FUN_1001782e9(0,0);
          iVar2 = -0x24;
        }
      }
      else {
        uVar3 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar3,0x10);
        if (cVar1 != '\0') {
          local_38 = 0x8220202;
          local_34 = "Assertion failure";
          local_2c = 0x400;
          local_2a = (char *)CONCAT44(local_2a._4_4_,iVar2);
          __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_38,0x12);
        }
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

