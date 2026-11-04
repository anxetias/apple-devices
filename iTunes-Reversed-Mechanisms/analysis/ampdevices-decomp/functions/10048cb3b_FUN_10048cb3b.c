// name: FUN_10048cb3b
// address: 10048cb3b

bool FUN_10048cb3b(long param_1,long *param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  bool bVar4;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  undefined2 uStack_4a;
  undefined6 local_48;
  undefined2 uStack_42;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (*(long *)(param_1 + 0x250) == 0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      uStack_4a = 0x2495;
      local_48 = 0x1007d;
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else if ((param_2 != (long *)0x0) && (*param_2 != 0)) {
    FUN_1001b7a44(&local_58);
    local_40 = 0;
    uStack_38 = 0;
    local_30 = 0;
    local_48 = SUB86(param_2,0);
    uStack_42 = (undefined2)((ulong)param_2 >> 0x30);
    iVar2 = FUN_100483f95(param_1,0x706c7274);
    bVar4 = iVar2 == 0;
    FUN_1001b7a50(&local_58);
    goto LAB_10048cbd0;
  }
  bVar4 = false;
LAB_10048cbd0:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return bVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

