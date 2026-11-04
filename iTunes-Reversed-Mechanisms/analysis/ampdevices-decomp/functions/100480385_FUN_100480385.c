// name: FUN_100480385
// address: 100480385

void FUN_100480385(long param_1,char param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined2 uStack_3c;
  undefined2 uStack_3a;
  undefined6 uStack_38;
  undefined2 uStack_32;
  undefined8 uStack_30;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  iVar2 = FUN_1004744bf(param_1,0);
  if (iVar2 == 0) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_48 = 0x8220202;
      uStack_44 = 0x7a0a90;
      uStack_40 = 1;
      uStack_3c = 0x822;
      uStack_3a = 0x1ded;
      uStack_38 = 0x1007d;
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    uVar3 = *(uint *)(param_1 + 0xd4);
    if (param_2 == '\0') {
      if ((uVar3 >> 0xd & 1) == 0) goto LAB_100480426;
      uVar3 = uVar3 & 0xffffdfff;
    }
    else {
      if ((uVar3 >> 0xd & 1) != 0) goto LAB_100480426;
      uVar3 = uVar3 | 0x2000;
    }
    *(uint *)(param_1 + 0xd4) = uVar3;
    uStack_38 = 0;
    uStack_32 = 0;
    uStack_30 = 0;
    local_48 = 0;
    uStack_44 = 0;
    uStack_40 = 0;
    uStack_3c = 0;
    uStack_3a = 0;
    FUN_1005389ba(&local_48,0x3c);
    FUN_1004755ef(param_1,0,&local_48);
  }
LAB_100480426:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

