// name: FUN_1005e2282
// address: 1005e2282

undefined1 * FUN_1005e2282(long *param_1,char param_2,long *param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  char cVar3;
  char *pcVar4;
  undefined8 uVar5;
  long lVar6;
  uint uVar7;
  undefined1 *puVar8;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (*(char *)*param_1 == param_2) {
    pcVar4 = (char *)*param_1 + 1;
    *param_1 = (long)pcVar4;
    pbVar2 = (byte *)*param_3;
    lVar6 = 0;
    uVar7 = 0;
    do {
      if ((int)lVar6 == 4) {
        uVar5 = FUN_1001cc310();
        cVar3 = _os_log_type_enabled(uVar5,0x10);
        if (cVar3 != '\0') {
          local_4a = "!(count == 4)";
LAB_1005e249e:
          local_4c = 0x822;
          local_54 = "Assertion failure";
          local_58 = 0x8220202;
          __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
        }
LAB_1005e238a:
        FUN_1001782e9(0,0);
        uVar5 = FUN_1001cc310();
        cVar3 = _os_log_type_enabled(uVar5,0x10);
        puVar8 = &DAT_ffffff30;
        if (cVar3 != '\0') {
          local_58 = 0x8220202;
          local_54 = "Assertion failure";
          local_4c = 0x400;
          local_4a = (char *)CONCAT44(local_4a._4_4_,0xffffff30);
          __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_58,0x12);
        }
        goto LAB_1005e23b2;
      }
      pbVar1 = (byte *)(pcVar4 + lVar6);
      if (pbVar2 <= pbVar1) {
        uVar5 = FUN_1001cc310();
        cVar3 = _os_log_type_enabled(uVar5,0x10);
        if (cVar3 != '\0') {
          local_4a = "!(*t >= end)";
          goto LAB_1005e249e;
        }
        goto LAB_1005e238a;
      }
      uVar7 = *pbVar1 & 0x7f | uVar7 << 7;
      *param_1 = (long)(pbVar1 + 1);
      lVar6 = lVar6 + 1;
    } while ((char)*pbVar1 < '\0');
    puVar8 = (undefined1 *)0x0;
  }
  else {
    uVar5 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar5,0x10);
    if (cVar3 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "!(**t != tag)";
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    uVar7 = 0;
    FUN_1001782e9(0,0);
    puVar8 = &DAT_ffffff30;
  }
LAB_1005e23b2:
  *param_3 = (ulong)uVar7 + *param_1;
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return puVar8;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

