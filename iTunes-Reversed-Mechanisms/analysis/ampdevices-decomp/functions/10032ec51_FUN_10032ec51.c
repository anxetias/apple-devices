// name: FUN_10032ec51
// address: 10032ec51

int FUN_10032ec51(long param_1,undefined2 *param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  char *pcVar4;
  ushort local_4d8;
  ushort local_4d6;
  ushort local_4d4;
  ushort local_4d2;
  ushort local_4d0;
  ushort local_4ce;
  int local_4cc;
  char local_4c8 [4];
  char *local_4c4;
  undefined2 local_4bc;
  int local_4ba;
  char local_4a8 [4];
  char *local_4a4;
  undefined2 local_49c;
  int local_49a;
  int local_458;
  char *local_454;
  undefined2 local_44c;
  char *local_44a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_2 == (undefined2 *)0x0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_458 = 0x8220202;
      local_454 = "Assertion failure";
      local_44c = 0x822;
      local_44a = "fileName != nullptr";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_458,0x16);
    }
    FUN_1001782e9(0,0);
    iVar2 = -0x32;
    goto LAB_10032ee0c;
  }
  *param_2 = 0;
  iVar2 = FUN_1002b1039(param_1,&local_458);
  if (iVar2 == -0x80) goto LAB_10032ee0c;
  if (iVar2 != 0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 == '\0') goto LAB_10032ee0c;
    pcVar4 = local_4a8;
    builtin_strncpy(local_4a8,"\x02\x02\"\b",4);
    local_4a4 = "Assertion failure";
    local_49c = 0x400;
    local_49a = iVar2;
LAB_10032eeb5:
    __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",pcVar4,0x12);
    goto LAB_10032ee0c;
  }
  iVar2 = FUN_10017d477(&local_458,local_4a8,0);
  if (iVar2 == -0x80) goto LAB_10032ee0c;
  if (iVar2 != 0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 == '\0') goto LAB_10032ee0c;
    pcVar4 = local_4c8;
    builtin_strncpy(local_4c8,"\x02\x02\"\b",4);
    local_4c4 = "Assertion failure";
    local_4bc = 0x400;
    local_4ba = iVar2;
    goto LAB_10032eeb5;
  }
  if (local_458 == 0x41464350 && (int)local_4a4 == 0) {
LAB_10032ecf6:
    local_4cc = *(int *)(param_1 + 0x5c);
    if (local_4cc == 0) {
      local_4cc = *(int *)(param_1 + 0x60);
    }
  }
  else {
    FUN_100177f1b((ulong)local_4a4 & 0xffffffff,&local_4cc);
    if (local_4cc == 0) goto LAB_10032ecf6;
  }
  FUN_100178093(local_4cc,&local_4d8);
  iVar2 = 0;
  _snprintf(local_4c8,0x20,"%04u%02u%02u %02u%02u%02u",(ulong)local_4d8,(ulong)local_4d6,
            (ulong)local_4d4,(ulong)local_4d2,(ulong)local_4d0,(ulong)local_4ce);
  FUN_1001e04f5(local_4c8,param_2);
LAB_10032ee0c:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

