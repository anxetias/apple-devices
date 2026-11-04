// name: FUN_10053d592
// address: 10053d592

long FUN_10053d592(long *param_1)

{
  uint uVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  undefined8 uVar7;
  uint *puVar8;
  long local_70 [4];
  long local_50;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  int local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_1001c62d9(local_70,0x20);
  lVar6 = 0;
  iVar4 = (**(code **)(*param_1 + 0xa8))(param_1,0);
  if (iVar4 == -0x80) goto LAB_10053d697;
  if (iVar4 == 0) {
    lVar6 = param_1[0x94];
    iVar2 = local_3a;
    if (((lVar6 != 0) && (local_70[0] = *(long *)(lVar6 + 0x20), local_70[0] != 0)) &&
       (iVar4 = FUN_10015d28d(lVar6,0x6d766864,&local_50), iVar2 = local_3a, iVar4 != -0x80)) {
      if (iVar4 != 0) {
        uVar7 = FUN_1001cc310();
        cVar3 = _os_log_type_enabled(uVar7,0x10);
        iVar2 = local_3a;
        goto joined_r0x00010053d693;
      }
      if ((local_50 != 0) && (lVar6 = *(long *)(local_50 + 0x20), lVar6 != 0)) {
        uVar1 = *(uint *)(lVar6 + 0x14);
        uVar5 = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
        if (uVar1 != 0xe8030000 && 0 < (int)uVar5) {
          puVar8 = (uint *)(lVar6 + 0x58);
          if (*(char *)(lVar6 + 8) == '\x01') {
            puVar8 = (uint *)(lVar6 + 100);
          }
          uVar1 = *puVar8;
          lVar6 = (long)((ulong)(uVar5 >> 1) +
                        (long)(int)(uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8
                                   | uVar1 << 0x18) * 1000) / (long)(ulong)uVar5;
          goto LAB_10053d697;
        }
      }
    }
  }
  else {
    uVar7 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar7,0x10);
    iVar2 = local_3a;
joined_r0x00010053d693:
    local_3a = iVar4;
    if (cVar3 != '\0') {
      local_3c = 0x400;
      local_44 = "Assertion failure";
      local_48 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: err == (%d)",&local_48,0x12);
      iVar2 = local_3a;
    }
  }
  local_3a = iVar2;
  lVar6 = 0;
LAB_10053d697:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return lVar6;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

