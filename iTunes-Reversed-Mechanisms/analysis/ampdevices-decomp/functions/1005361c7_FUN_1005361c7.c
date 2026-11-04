// name: FUN_1005361c7
// address: 1005361c7

/* WARNING: Type propagation algorithm not settling */

int FUN_1005361c7(void)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 local_5c [8];
  undefined4 local_54;
  int local_50;
  int local_4c [2];
  char *local_44;
  undefined2 local_3c;
  int local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_100177cff(&local_50);
  FUN_100178093(local_50,local_5c);
  local_54 = 0x50000;
  FUN_1001781a2(local_5c,local_4c);
  local_4c[0] = local_4c[0] + 0xe10;
  iVar2 = FUN_1001ee941((double)(uint)(local_4c[0] - local_50),DAT_10074b9f0,DAT_10070e580,0,
                        FUN_1005362d6,0,&DAT_1008c7840);
  if ((iVar2 != -0x80) && (iVar2 != 0)) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_4c[1] = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x400;
      local_3a = iVar2;
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",local_4c + 1,0x12);
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

