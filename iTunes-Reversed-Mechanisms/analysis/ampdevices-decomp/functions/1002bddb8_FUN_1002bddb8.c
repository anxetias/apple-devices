// name: FUN_1002bddb8
// address: 1002bddb8

byte FUN_1002bddb8(long param_1,char param_2)

{
  byte bVar1;
  char cVar2;
  undefined2 uVar3;
  int iVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  int local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  bVar1 = 0;
  iVar4 = FUN_10048256b();
  if (iVar4 == -0x80) goto LAB_1002bde6b;
  if (iVar4 == 0) {
    uVar5 = (ulong)*(ushort *)(param_1 + 0x10);
    if (uVar5 < 0x24) {
      if ((0x914000000U >> (uVar5 & 0x3f) & 1) != 0) goto LAB_1002bde69;
      bVar1 = 1;
      if ((0xc00UL >> (uVar5 & 0x3f) & 1) != 0) goto LAB_1002bde6b;
    }
    if ((param_2 != '\0') || ((*(byte *)(param_1 + 0x298) & 2) == 0)) {
      uVar3 = FUN_10048c0ca(param_1);
      bVar1 = FUN_10048c208(uVar3);
      bVar1 = bVar1 ^ 1;
      goto LAB_1002bde6b;
    }
  }
  else {
    uVar6 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar6,0x10);
    if (cVar2 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x400;
      local_3a = iVar4;
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: err == (%d)",&local_48,0x12);
    }
  }
LAB_1002bde69:
  bVar1 = 0;
LAB_1002bde6b:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_30) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return bVar1;
}

