// name: FUN_1002cca22
// address: 1002cca22

long FUN_1002cca22(long *param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
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
    uVar5 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar5,0x10);
    if (cVar3 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "m_table";
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
    lVar7 = *param_1;
  }
  uVar1 = *(uint *)((long)param_1 + 0xc);
  iVar2 = *param_2;
  uVar4 = ~(iVar2 << 0xf) + iVar2;
  uVar4 = (uVar4 >> 10 ^ uVar4) * 9;
  uVar4 = uVar4 >> 6 ^ uVar4;
  uVar4 = ~(uVar4 << 0xb) + uVar4;
  uVar11 = uVar4 >> 0x10 ^ uVar4;
  uVar8 = uVar11 & uVar1;
  lVar6 = lVar7 + (long)(int)uVar8 * 0x10;
  iVar10 = *(int *)(lVar7 + (long)(int)uVar8 * 0x10);
  uVar9 = 0;
  if (iVar10 == 0) {
    lVar12 = 0;
  }
  else {
    uVar4 = (uVar4 >> 0x17) + ~uVar11;
    uVar4 = uVar4 * 0x1000 ^ uVar4;
    uVar4 = uVar4 >> 7 ^ uVar4;
    uVar4 = uVar4 * 4 ^ uVar4;
    lVar12 = 0;
    do {
      if (iVar10 == iVar2) {
        uVar5 = CONCAT71((uint7)(uint3)(uVar1 >> 8),1);
        goto LAB_1002ccb40;
      }
      if (iVar10 == -1) {
        lVar12 = lVar6;
      }
      if (uVar9 == 0) {
        uVar9 = uVar4 >> 0x14 ^ uVar4 | 1;
      }
      uVar8 = uVar8 + uVar9 & uVar1;
      lVar6 = lVar7 + (long)(int)uVar8 * 0x10;
      iVar10 = *(int *)(lVar7 + (long)(int)uVar8 * 0x10);
    } while (iVar10 != 0);
  }
  if (lVar12 != 0) {
    lVar6 = lVar12;
  }
  uVar5 = 0;
LAB_1002ccb40:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(uVar8,iVar2,uVar5);
  }
  return lVar6;
}

