// name: FUN_10055b16f
// address: 10055b16f

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_10055b16f(void)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  int local_2a;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  DAT_1008c7870 = FUN_1001ea5dc();
  _DAT_1008c2548 = FUN_10055b2b2;
  _DAT_1008c2550 = FUN_10055b97e;
  _DAT_1008c2558 = FUN_10055bb2d;
  _DAT_1008c2560 = FUN_10055bb40;
  _DAT_1008c2568 = FUN_10055bb53;
  _DAT_1008c2570 = FUN_10055bc32;
  _DAT_1008c2578 = FUN_10055bc65;
  _DAT_1008c2580 = FUN_10055bc98;
  _DAT_1008c2588 = FUN_10055bca0;
  _DAT_1008c2590 = 0;
  iVar2 = FUN_10036c673(FUN_10055bcab,0);
  if ((iVar2 != -0x80) && (iVar2 != 0)) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_38 = 0x8220202;
      local_34 = "Assertion failure";
      local_2c = 0x400;
      local_2a = iVar2;
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_38,0x12);
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

