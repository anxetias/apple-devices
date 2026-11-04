// name: FUN_10026b107
// address: 10026b107

undefined8 FUN_10026b107(long param_1,int param_2,undefined1 param_3)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  long lVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  char *pcVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  uint uVar13;
  ulong uVar14;
  int local_78;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined2 uStack_4c;
  undefined2 uStack_4a;
  undefined2 uStack_48;
  undefined4 uStack_46;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == 0) {
    uVar8 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar8,0x10);
    if (cVar4 != '\0') {
      pcVar9 = "imageLibrary != nullptr";
LAB_10026b362:
      uStack_4c = 0x822;
      uStack_50 = 1;
      uStack_54 = 0x7a0a90;
      local_58 = 0x8220202;
      uStack_4a = SUB82(pcVar9,0);
      uStack_48 = (undefined2)((ulong)pcVar9 >> 0x10);
      uStack_46 = (undefined4)((ulong)pcVar9 >> 0x20);
      __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: err == (%d)",&local_58,0x16);
    }
  }
  else {
    if (param_2 - 1U < 2) {
      for (lVar7 = FUN_100496392(); lVar7 != 0; lVar7 = FUN_100496449(lVar7)) {
        uVar13 = *(uint *)(lVar7 + 0x50);
        if ((uVar13 != 0) && (lVar3 = *(long *)(lVar7 + 0x58), lVar3 != 0)) {
          if (param_2 == 1) {
            FUN_10049b143(lVar3,uVar13,param_3);
          }
          else {
            if (param_2 != 2) {
              if (param_2 == 0) {
                uVar8 = FUN_1001cc310();
                cVar4 = _os_log_type_enabled(uVar8,0x10);
                if (cVar4 != '\0') {
                  local_58 = 0x8220202;
                  uStack_54 = 0x7a0a90;
                  uStack_50 = 1;
                  uStack_4c = 0x822;
                  uStack_4a = 0x64fc;
                  uStack_48 = 0x7b;
                  uStack_46 = 1;
                  __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: err == (%d)",&local_58,
                                      0x16);
                }
                FUN_1001782e9(0,0);
              }
              uVar8 = FUN_1001cc310();
              cVar4 = _os_log_type_enabled(uVar8,0x10);
              uVar12 = 0xffffffce;
              if (cVar4 != '\0') {
                local_58 = 0x8220202;
                uStack_54 = 0x7a0a90;
                uStack_50 = 1;
                uStack_4c = 0x400;
                uStack_4a = 0xffce;
                uStack_48 = 0xffff;
                __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: err == (%d)",&local_58,0x12)
                ;
              }
              goto LAB_10026b286;
            }
            if (uVar13 - 1 != 0) {
              uVar14 = (ulong)(uVar13 - 1);
              puVar11 = (undefined8 *)(uVar14 * 0x10 + lVar3);
              do {
                uVar14 = uVar14 - 1;
                iVar5 = FUN_1001ebcfb();
                iVar6 = FUN_1001ebdc3();
                uVar8 = puVar11[1];
                local_58 = (undefined4)*puVar11;
                uStack_54 = (undefined4)((ulong)*puVar11 >> 0x20);
                uStack_50 = (undefined4)uVar8;
                uStack_4c = (undefined2)((ulong)uVar8 >> 0x20);
                uStack_4a = (undefined2)((ulong)uVar8 >> 0x30);
                lVar10 = ((ulong)(uint)(iVar6 + iVar5) % (ulong)uVar13) * 0x10;
                puVar1 = (undefined8 *)(lVar3 + lVar10);
                uVar12 = puVar1[1];
                *puVar11 = *puVar1;
                puVar11[1] = uVar12;
                puVar2 = (undefined4 *)(lVar3 + lVar10);
                *puVar2 = local_58;
                puVar2[1] = uStack_54;
                puVar2[2] = uStack_50;
                puVar2[3] = (int)((ulong)uVar8 >> 0x20);
                uVar13 = uVar13 - 1;
                puVar11 = puVar11 + -2;
                local_78 = (int)uVar14;
              } while (local_78 != 0);
            }
          }
        }
      }
      uVar12 = 0;
      goto LAB_10026b286;
    }
    uVar8 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar8,0x10);
    if (cVar4 != '\0') {
      pcVar9 = 
      "sortType == kITShImageSortType_ExposureDate || sortType == kITShImageSortType_Shuffle";
      goto LAB_10026b362;
    }
  }
  FUN_1001782e9(0,0);
  uVar12 = 0xffffffce;
LAB_10026b286:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return uVar12;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

