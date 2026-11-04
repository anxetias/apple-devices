// name: FUN_10028aad2
// address: 10028aad2

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10028aad2(long *param_1,uint param_2)

{
  int iVar1;
  int *piVar2;
  undefined1 auVar3 [16];
  char cVar4;
  void *pvVar5;
  long lVar6;
  undefined8 uVar7;
  int *piVar8;
  ulong extraout_RDX;
  int *piVar9;
  ulong uVar10;
  undefined1 auVar11 [16];
  undefined1 in_XMM1 [16];
  undefined1 auVar12 [16];
  long lVar13;
  undefined1 in_XMM4 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  uVar10 = (ulong)*(uint *)(param_1 + 1);
  piVar2 = (int *)*param_1;
  *(uint *)(param_1 + 1) = param_2;
  *(uint *)((long)param_1 + 0xc) = param_2 - 1;
  pvVar5 = _malloc((long)(int)param_2 << 3);
  auVar3 = _DAT_100700430;
  if (pvVar5 == (void *)0x0) {
    uVar7 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar7,0x10);
    if (cVar4 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "result != __null";
      __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else if (0 < (int)param_2) {
    lVar6 = (ulong)param_2 - 1;
    auVar11._8_4_ = (int)lVar6;
    auVar11._0_8_ = lVar6;
    auVar11._12_4_ = (int)((ulong)lVar6 >> 0x20);
    auVar12 = pmovsxbq(in_XMM1,_DAT_10073faa0);
    lVar6 = 0;
    auVar11 = auVar11 ^ _DAT_100700430;
    auVar14 = pmovsxbq(in_XMM4,_DAT_10073faa2);
    do {
      auVar15 = auVar12 ^ auVar3;
      if ((bool)(~(auVar15._4_4_ == auVar11._4_4_ && auVar11._0_4_ < auVar15._0_4_ ||
                  auVar11._4_4_ < auVar15._4_4_) & 1)) {
        *(undefined1 *)((long)pvVar5 + lVar6 + 4) = 0;
        *(undefined4 *)((long)pvVar5 + lVar6) = 0;
      }
      if (auVar15._12_4_ <= auVar11._12_4_ &&
          (auVar15._12_4_ != auVar11._12_4_ || auVar15._8_4_ <= auVar11._8_4_)) {
        *(undefined1 *)((long)pvVar5 + lVar6 + 0xc) = 0;
        *(undefined4 *)((long)pvVar5 + lVar6 + 8) = 0;
      }
      lVar13 = auVar12._8_8_;
      auVar12._0_8_ = auVar12._0_8_ + auVar14._0_8_;
      auVar12._8_8_ = lVar13 + auVar14._8_8_;
      lVar6 = lVar6 + 0x10;
    } while ((ulong)(param_2 + 1 >> 1) << 4 != lVar6);
  }
  *param_1 = (long)pvVar5;
  piVar9 = piVar2;
  for (; uVar10 != 0; uVar10 = uVar10 - 1) {
    if (1 < *piVar9 + 1U) {
      if (*param_1 == 0) {
        uVar7 = FUN_1001cc310();
        cVar4 = _os_log_type_enabled(uVar7,0x10);
        if (cVar4 != '\0') {
          local_58 = 0x8220202;
          local_54 = "Assertion failure";
          local_4c = 0x822;
          local_4a = "m_table";
          __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
        }
        FUN_1001782e9(0,0);
      }
      FUN_10028ae40(param_1,piVar9);
      if ((extraout_RDX & 1) != 0) {
        uVar7 = FUN_1001cc310();
        cVar4 = _os_log_type_enabled(uVar7,0x10);
        if (cVar4 != '\0') {
          local_58 = 0x8220202;
          local_54 = "Assertion failure";
          local_4c = 0x822;
          local_4a = "!lookupForWriting(Extractor::extract(entry)).second";
          __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
        }
        FUN_1001782e9(0,0);
      }
      piVar8 = (int *)FUN_10028ae40(param_1,piVar9);
      if (*piVar8 == -1) {
        uVar7 = FUN_1001cc310();
        cVar4 = _os_log_type_enabled(uVar7,0x10);
        if (cVar4 != '\0') {
          local_58 = 0x8220202;
          local_54 = "Assertion failure";
          local_4c = 0x822;
          local_4a = "!isDeletedBucket(*(lookupForWriting(Extractor::extract(entry)).first))";
          __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
        }
        FUN_1001782e9(0,0);
      }
      piVar8 = (int *)FUN_10028ae40(param_1,piVar9);
      iVar1 = *piVar9;
      *piVar9 = *piVar8;
      *piVar8 = iVar1;
      iVar1 = piVar9[1];
      *(char *)(piVar9 + 1) = (char)piVar8[1];
      *(char *)(piVar8 + 1) = (char)iVar1;
    }
    piVar9 = piVar9 + 2;
  }
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    _free(piVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

