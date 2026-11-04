// name: FUN_1005846c2
// address: 1005846c2

void FUN_1005846c2(int param_1)

{
  char cVar1;
  undefined8 uVar2;
  int *in_R8;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (in_R8 == (int *)0x0) {
LAB_10058471d:
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "PlaylistIsValid(playlist)";
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else if (*in_R8 != 0x706c7374) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure (expected to be true)";
      local_3c = 0x822;
      local_3a = "playlist->magic == \'plst\'";
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    cVar1 = FUN_1001782e9(0,1);
    if (cVar1 == '\0') goto LAB_10058471d;
  }
  if (param_1 < 0x61706c69) {
    if ((param_1 != 0x48706c69) && (param_1 != 0x53706c69)) goto LAB_100584789;
  }
  else if ((param_1 != 0x64706c69) && (param_1 != 0x61706c69)) goto LAB_100584789;
  if ((in_R8 != (int *)0x0) && (cVar1 = FUN_1001c19b0(), cVar1 != '\0')) {
    FUN_1005821b3(in_R8,1);
  }
LAB_100584789:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

