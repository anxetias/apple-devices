// name: FUN_1005da85c
// address: 1005da85c

uint FUN_1005da85c(long param_1)

{
  long lVar1;
  char cVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar1 = *(long *)(param_1 + 0x30);
  if (lVar1 == 0) {
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      local_38 = 0x8220202;
      local_34 = "Assertion failure";
      local_2c = 0x822;
      local_2a = "media != nullptr";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
    FUN_1001782e9(0,0);
    if (*(long *)PTR____stack_chk_guard_10082cb58 != local_18) goto LAB_1005da927;
    uVar3 = 0;
  }
  else {
    if (*(char *)(lVar1 + 8) == '\x01') {
      uVar3 = *(uint *)(lVar1 + 0x1c);
    }
    else {
      uVar3 = *(uint *)(lVar1 + 0x14);
    }
    if (*(long *)PTR____stack_chk_guard_10082cb58 != local_18) {
LAB_1005da927:
                    /* WARNING: Subroutine does not return */
      ___stack_chk_fail();
    }
    uVar3 = uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18;
  }
  return uVar3;
}

