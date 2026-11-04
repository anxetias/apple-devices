// name: FUN_1002ccecc
// address: 1002ccecc

long FUN_1002ccecc(long *param_1,long *param_2)

{
  uint uVar1;
  long lVar2;
  char cVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  uint uVar9;
  long lVar10;
  uint uVar11;
  long lVar12;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar7 = *param_1;
  if (lVar7 == 0) {
    uVar4 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar4,0x10);
    if (cVar3 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "m_table";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
    lVar7 = *param_1;
  }
  uVar1 = *(uint *)((long)param_1 + 0xc);
  lVar2 = *param_2;
  uVar5 = ~(lVar2 << 0x20) + lVar2;
  uVar5 = uVar5 >> 0x16 ^ uVar5;
  uVar5 = ~(uVar5 << 0xd) + uVar5;
  uVar5 = (uVar5 >> 8 ^ uVar5) * 9;
  uVar5 = uVar5 >> 0xf ^ uVar5;
  uVar5 = ~(uVar5 << 0x1b) + uVar5;
  uVar11 = (uint)(uVar5 >> 0x1f) ^ (uint)uVar5;
  uVar8 = uVar1 & uVar11;
  lVar6 = lVar7 + (long)(int)uVar8 * 0x10;
  lVar10 = *(long *)(lVar7 + (long)(int)uVar8 * 0x10);
  uVar9 = 0;
  if (lVar10 == 0) {
    lVar12 = 0;
  }
  else {
    uVar11 = (uVar11 >> 0x17) + ~uVar11;
    uVar11 = uVar11 * 0x1000 ^ uVar11;
    uVar11 = uVar11 >> 7 ^ uVar11;
    uVar11 = uVar11 * 4 ^ uVar11;
    lVar12 = 0;
    do {
      if (lVar10 == lVar2) {
        uVar4 = CONCAT71((uint7)(uint3)(uVar1 >> 8),1);
        goto LAB_1002cd010;
      }
      if (lVar10 == -1) {
        lVar12 = lVar6;
      }
      if (uVar9 == 0) {
        uVar9 = uVar11 >> 0x14 ^ uVar11 | 1;
      }
      uVar8 = uVar8 + uVar9 & uVar1;
      lVar6 = lVar7 + (long)(int)uVar8 * 0x10;
      lVar10 = *(long *)(lVar7 + (long)(int)uVar8 * 0x10);
    } while (lVar10 != 0);
  }
  if (lVar12 != 0) {
    lVar6 = lVar12;
  }
  uVar4 = 0;
LAB_1002cd010:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(uVar8,lVar2,uVar4);
  }
  return lVar6;
}

