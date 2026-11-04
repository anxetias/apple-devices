// name: FUN_10027b26d
// address: 10027b26d

void FUN_10027b26d(void)

{
  uint *puVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  uint uVar9;
  double dVar10;
  double dVar11;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  lVar8 = DAT_1008c76a0;
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  puVar1 = (uint *)(DAT_1008c76a0 + 0x16);
  FUN_10027b6c9(puVar1);
  FUN_1001c62d9(lVar8 + 0x1372,0x30);
  FUN_1003618bf();
  lVar5 = FUN_1001c63e1(0x1358);
  if (lVar5 == 0) {
    uVar6 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar6,0x10);
    if (cVar2 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "machinePrefs != nullptr";
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    FUN_1001c631b(puVar1,lVar5,0x1358);
    FUN_10027b78f(lVar5,1);
    iVar4 = FUN_1001ce2db(&DAT_1008b4698,0x70726566,200,"Machine Preferences",0x1358,lVar5,0);
    if (iVar4 == 0) {
      FUN_10027b78f(lVar5,0);
      FUN_1001c631b(lVar5,puVar1,0x1358);
    }
    else {
      FUN_10027b6c9(puVar1);
      *(undefined1 *)(lVar8 + 0x136e) = 1;
    }
    if (1 < *puVar1) {
      FUN_10027b6c9(puVar1);
    }
    *(undefined1 *)(lVar5 + 0x128f) = 1;
    bVar3 = *(byte *)(lVar8 + 0x5b3);
    if (bVar3 < 0x33) {
      *(undefined1 *)(lVar8 + 0x136f) = 1;
      if (bVar3 < 6) {
        *(ulong *)(lVar8 + 0xcca) = (ulong)*(uint *)(lVar8 + 0x566);
      }
      cVar2 = FUN_1002b8dbb();
      *(ushort *)(lVar8 + 0x12a0) = (cVar2 == '\x01') + 1;
      bVar3 = *(byte *)(lVar8 + 0x5b3);
      if (bVar3 < 0x2b) {
        FUN_1002791f0();
        FUN_1001cdf3f(&DAT_1008b4698,0x76786d6c,1,"Web Version Check Information");
        FUN_1002791f0();
        FUN_1001cdf3f(&DAT_1008b4698,0x616c6973,0x2ee1,0);
        bVar3 = *(byte *)(lVar8 + 0x5b3);
        if (bVar3 < 2) {
          *(undefined4 *)(lVar8 + 0x348) = 0;
        }
      }
    }
    *(byte *)(lVar8 + 0x1370) = bVar3;
    *(undefined1 *)(lVar8 + 0x5b3) = 0x33;
    if (*(long *)(lVar8 + 0x56a) == 0) {
      uVar6 = FUN_1001ea62b(0);
      *(undefined8 *)(lVar8 + 0x56a) = uVar6;
    }
    iVar4 = FUN_100208c67(lVar8 + 0x1372);
    if ((iVar4 != -0x80) && (iVar4 != 0)) {
      uVar6 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar6,0x10);
      if (cVar2 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x400;
        local_4a = (char *)CONCAT44(local_4a._4_4_,iVar4);
        __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: err == (%d)",&local_58,0x12);
      }
    }
    if ((*(int *)(lVar8 + 5000) == 2) && (*(short *)(lVar8 + 0x1386) == 500)) {
      *(undefined2 *)(lVar8 + 0x1386) = 0x1ea;
    }
    cVar2 = FUN_1001cd44e("dada",0,0);
    if (cVar2 != '\0') {
      DAT_1008c784d = 1;
    }
    *puVar1 = 1;
    dVar10 = (double)FUN_1001711e2();
    uVar6 = _CFTimeZoneCopyDefault();
    dVar11 = (double)FUN_100174405(dVar10,uVar6);
    uVar7 = _CFAbsoluteTimeGetGregorianDate(dVar10 - dVar11,0);
    uVar9 = ((int)((ulong)uVar7 >> 8) >> 0x18) + (int)uVar7 * 0xc;
    if (*(uint *)(lVar8 + 0x135a) <= uVar9) {
      uVar7 = FUN_1001ea62b(0);
      *(undefined8 *)(lVar8 + 0x135e) = uVar7;
      *(uint *)(lVar8 + 0x135a) = uVar9 + 1;
    }
    FUN_10027ba5c(uVar6);
    iVar4 = FUN_1001cd9a6(PTR_s_debugAssertCategoriesVersion_10088f5a0,0,0);
    if (iVar4 != 3) {
      lVar8 = FUN_1001cdb4a(PTR_s_debugAssertCategoriesEnabled_10088f598,0,0);
      if (lVar8 != 0) {
        uVar6 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar6,0x10);
        if (cVar2 != '\0') {
          local_58 = 0x8220202;
          local_54 = "Assertion failure";
          local_4c = 0x822;
          local_4a = "PrefGetSInt64Value(kDebugAssertCategoriesEnabledPreferenceKey) == 0";
          __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
        }
        FUN_1001782e9(0,0);
      }
      FUN_1001cd54c(PTR_s_debugAssertCategoriesVersion_10088f5a0,3,0);
      FUN_1001cdb90(PTR_s_debugAssertCategoriesEnabled_10088f598,0,0);
    }
    FUN_1001c64c1(lVar5);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

