// name: FUN_10022b77d
// address: 10022b77d

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10022b77d(int *param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  char cVar11;
  undefined8 uVar12;
  undefined4 in_R9D;
  uint uVar13;
  bool bVar14;
  bool bVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == (int *)0x0) {
LAB_10022b962:
    uVar12 = FUN_1001cc310();
    cVar11 = _os_log_type_enabled(uVar12,0x10);
    if (cVar11 != '\0') {
      local_4a = "IPodPrefsAreValid(prefs)";
LAB_10022b9e2:
      local_4c = 0x822;
      local_54 = "Assertion failure";
      local_58 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar12,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
  }
  else {
    if (*param_1 != 0x69707266) {
      uVar12 = FUN_1001cc310();
      cVar11 = _os_log_type_enabled(uVar12,0x10);
      if (cVar11 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure (expected to be true)";
        local_4c = 0x822;
        local_4a = "prefs->magic == \'iprf\'";
        in_R9D = 0x16;
        __os_log_error_impl(0x100000000,uVar12,0x10,"%{public}s: (%{public}s)");
      }
      cVar11 = FUN_1001782e9(0,1);
      if (cVar11 == '\0') goto LAB_10022b962;
    }
    if (param_2 != 0) {
      uVar1 = *(uint *)(param_2 + 0x4c);
      uVar2 = *(uint *)(param_2 + 0xac);
      uVar3 = *(uint *)(param_2 + 0x10c);
      uVar4 = *(uint *)(param_2 + 0x14c);
      auVar16._0_4_ = -(uint)(uVar1 == 0);
      auVar16._4_4_ = -(uint)(uVar2 == 0);
      auVar16._8_4_ = -(uint)(uVar3 == 0);
      auVar16._12_4_ = -(uint)(SUB124(SUB1612((undefined1  [16])0x0,4),8) == uVar4);
      auVar17 = packssdw(auVar16,auVar16);
      auVar18._8_4_ = 0xffffffff;
      auVar18._0_8_ = 0xffffffffffffffff;
      auVar18._12_4_ = 0xffffffff;
      auVar17 = packsswb(auVar18 ^ auVar17,auVar18 ^ auVar17);
      *(uint *)((long)param_1 + 0x47) = auVar17._0_4_ & (uint)DAT_100718e10;
      uVar5 = *(uint *)(param_2 + 0x6c);
      *(bool *)((long)param_1 + 0x4b) = uVar5 != 0;
      uVar6 = *(uint *)(param_2 + 0x1ec);
      *(bool *)(param_1 + 0x13) = uVar6 != 0;
      uVar7 = *(uint *)(param_2 + 0x18c);
      bVar15 = true;
      if (uVar7 == 0) {
        bVar15 = *(int *)(param_2 + 0x1ac) != 0;
      }
      uVar13 = movmskps(in_R9D,auVar16);
      bVar14 = bVar15;
      if (uVar5 != 0 || uVar6 != 0) {
        bVar14 = true;
      }
      if (((uVar13 ^ 0xf) & 6) != 0) {
        bVar14 = true;
      }
      if (((uVar13 ^ 0xf) & 1) != 0) {
        bVar14 = true;
      }
      *(bool *)((long)param_1 + 0x4d) = bVar15;
      *(bool *)((long)param_1 + 0x46) = bVar14;
      uVar13 = *(uint *)(param_2 + 0x48);
      *(bool *)((long)param_1 + 0x4f) = uVar1 < uVar13;
      uVar8 = *(uint *)(param_2 + 0xa8);
      *(bool *)(param_1 + 0x14) = uVar2 < uVar8;
      uVar9 = *(uint *)(param_2 + 0x108);
      *(bool *)((long)param_1 + 0x51) = uVar3 < uVar9;
      *(bool *)((long)param_1 + 0x52) = uVar4 < *(uint *)(param_2 + 0x148);
      uVar4 = *(uint *)(param_2 + 0x68);
      *(bool *)((long)param_1 + 0x53) = uVar5 < uVar4;
      uVar10 = *(uint *)(param_2 + 0x1e8);
      *(bool *)(param_1 + 0x15) = uVar6 < uVar10;
      bVar15 = true;
      if (*(uint *)(param_2 + 0x188) <= uVar7) {
        bVar15 = *(uint *)(param_2 + 0x1ac) < *(uint *)(param_2 + 0x1a8);
      }
      bVar14 = bVar15;
      if (uVar6 < uVar10) {
        bVar14 = true;
      }
      if (uVar5 < uVar4) {
        bVar14 = true;
      }
      if (uVar3 < uVar9) {
        bVar14 = true;
      }
      if (uVar2 < uVar8) {
        bVar14 = true;
      }
      if (uVar1 < uVar13) {
        bVar14 = true;
      }
      *(bool *)((long)param_1 + 0x55) = bVar15;
      *(bool *)((long)param_1 + 0x4e) = bVar14;
      *(bool *)((long)param_1 + 0x56) = *(int *)(param_2 + 200) != 0;
      *(bool *)((long)param_1 + 0x57) = *(int *)(param_2 + 0x128) != 0;
      goto LAB_10022ba10;
    }
    uVar12 = FUN_1001cc310();
    cVar11 = _os_log_type_enabled(uVar12,0x10);
    if (cVar11 != '\0') {
      local_4a = "trackTotals != nullptr";
      goto LAB_10022b9e2;
    }
  }
  FUN_1001782e9(0,0);
LAB_10022ba10:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

