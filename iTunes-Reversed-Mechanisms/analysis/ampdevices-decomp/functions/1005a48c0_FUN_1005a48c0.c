// name: FUN_1005a48c0
// address: 1005a48c0

int FUN_1005a48c0(long *param_1)

{
  short *psVar1;
  long lVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  undefined **local_78;
  code *local_70;
  undefined8 local_68;
  long *local_60;
  undefined ***local_58;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  int local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  if ((int)param_1[0xf] == 0) {
    iVar4 = FUN_1004dccf5(*param_1,"");
    if (iVar4 == -0x80) goto LAB_1005a4a8d;
    if (iVar4 != 0) {
      uVar5 = FUN_1001cc310();
      cVar3 = _os_log_type_enabled(uVar5,0x10);
      goto joined_r0x0001005a4a0d;
    }
    FUN_1005a4672(param_1);
    if (*(long *)(*param_1 + 0x30) != 0) {
      psVar1 = (short *)(*(long *)(*param_1 + 0x30) + 0x27b0);
      *psVar1 = *psVar1 + 1;
    }
    local_78 = &PTR_FUN_10086f0d0;
    local_70 = FUN_1005b087a;
    local_68 = 0;
    local_60 = param_1;
    local_58 = &local_78;
    iVar4 = FUN_1001b1a89(&local_78,"",param_1 + 0xf,0);
    if (local_58 == &local_78) {
      lVar6 = 0x20;
LAB_1005a4a58:
      (**(code **)((long)*local_58 + lVar6))();
    }
    else {
      lVar6 = 0x28;
      if (local_58 != (undefined ***)0x0) goto LAB_1005a4a58;
    }
    if (iVar4 != 0) {
      FUN_1005a4ae0(param_1);
      lVar6 = *param_1;
      lVar2 = *(long *)(lVar6 + 0x30);
      if (lVar2 != 0) {
        psVar1 = (short *)(lVar2 + 0x27b0);
        *psVar1 = *psVar1 + -1;
      }
      FUN_1004dd69c(lVar6,"");
      goto LAB_1005a4a8d;
    }
  }
  else if (*(char *)((long)param_1 + 0x7c) != '\0') {
    iVar4 = FUN_1001b16d1((int)param_1[0xf]);
    if ((iVar4 == -0x80) || (iVar4 == 0)) goto LAB_1005a4a8d;
    uVar5 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar5,0x10);
joined_r0x0001005a4a0d:
    if (cVar3 != '\0') {
      local_3c = 0x400;
      local_44 = "Assertion failure";
      local_48 = 0x8220202;
      local_3a = iVar4;
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_48,0x12);
    }
    goto LAB_1005a4a8d;
  }
  iVar4 = 0;
LAB_1005a4a8d:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

