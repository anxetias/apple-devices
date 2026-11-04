// name: FUN_10054e286
// address: 10054e286

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10054e286(long param_1,uint param_2)

{
  char cVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  float fVar5;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined2 local_2c;
  char *local_2a;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (*(char *)(param_1 + 0x64a8) == '\0') {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_38 = 0x8220202;
      uStack_34 = 0x7a0a90;
      uStack_30 = 1;
      local_2c = 0x822;
      local_2a = "mPlayerOpen";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    fVar5 = (float)param_2 * *(float *)(param_1 + 0x1460);
    uVar3 = (ulong)fVar5;
    iVar2 = FUN_10054e38c(*(undefined8 *)(param_1 + 0x808),
                          (long)(fVar5 - _DAT_10070844c) & (long)uVar3 >> 0x3f | uVar3,&local_38);
    if ((iVar2 != -1) && (CONCAT44(uStack_34,local_38) < *(ulong *)(param_1 + 0x14a8))) {
      *(ulong *)(param_1 + 0x14a8) = CONCAT44(uStack_34,local_38);
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_18) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

