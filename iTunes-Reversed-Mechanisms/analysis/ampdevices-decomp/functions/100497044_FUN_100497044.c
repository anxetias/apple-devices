// name: FUN_100497044
// address: 100497044

undefined8 FUN_100497044(long param_1)

{
  ulong uVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  undefined4 *puVar5;
  int *piVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  uint uVar9;
  ulong uVar11;
  ulong uVar12;
  uint uVar13;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  ulong uVar10;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  cVar2 = FUN_100495380();
  if (cVar2 == '\0') {
    uVar8 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar8,0x10);
    if (cVar2 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "ITImageLibraryIsValid(imageLibrary)";
      __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: err == (%d)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
    uVar8 = 0xffffffce;
  }
  else {
    uVar8 = 0;
    if (*(char *)(param_1 + 0x2481) == '\0') {
      for (lVar3 = FUN_100496392(param_1); lVar3 != 0; lVar3 = FUN_100496449(lVar3)) {
        uVar1 = *(ulong *)(lVar3 + 0x28);
        if (uVar1 != 0) {
          cVar2 = FUN_100495380(param_1);
          if (cVar2 == '\0') {
            uVar7 = FUN_1001cc310();
            cVar2 = _os_log_type_enabled(uVar7,0x10);
            if (cVar2 != '\0') {
              local_58 = 0x8220202;
              local_54 = "Assertion failure";
              local_4c = 0x822;
              local_4a = "ITImageLibraryIsValid(imageLibrary)";
              __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: err == (%d)",&local_58,0x16);
            }
            FUN_1001782e9(0,0);
          }
          else {
            if (*(char *)(param_1 + 7) == '\0') {
              piVar6 = *(int **)(param_1 + 0x13f0);
              if (piVar6 == (int *)0x0) {
                puVar5 = (undefined4 *)FUN_10049a729(param_1);
                *(undefined4 **)(param_1 + 0x13f0) = puVar5;
                if (puVar5 == (undefined4 *)0x0) {
                  uVar7 = FUN_1001cc310();
                  cVar2 = _os_log_type_enabled(uVar7,0x10);
                  if (cVar2 != '\0') {
                    local_58 = 0x8220202;
                    local_54 = "Assertion failure";
                    local_4c = 0x822;
                    local_4a = "imageLibrary->albumOldStyleSourceIDLookupTable != nullptr";
                    __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: err == (%d)",&local_58,
                                        0x16);
                  }
                  FUN_1001782e9(0,0);
                }
                else {
                  FUN_1001d26f2(puVar5 + 2,*puVar5,FUN_10049be35,0);
                }
                piVar6 = *(int **)(param_1 + 0x13f0);
                if (piVar6 == (int *)0x0) goto LAB_1004970b7;
              }
              uVar9 = *piVar6 - 1;
              uVar10 = (ulong)uVar9;
              uVar12 = 0;
              uVar13 = uVar9;
              while (1 < (int)uVar13) {
                uVar11 = (ulong)((uint)((int)uVar10 + (int)uVar12) >> 1);
                lVar4 = *(long *)(piVar6 + uVar11 * 2 + 2);
                if (*(ulong *)(lVar4 + 0x30) == uVar1) goto LAB_1004971cf;
                if (uVar1 <= *(ulong *)(lVar4 + 0x30)) {
                  uVar10 = uVar11;
                  uVar11 = uVar12;
                }
                uVar9 = (uint)uVar10;
                uVar12 = uVar11;
                uVar13 = uVar9 - (int)uVar11;
              }
              do {
                if ((long)(int)uVar9 < (long)uVar12) goto LAB_100497256;
                lVar4 = *(long *)(piVar6 + uVar12 * 2 + 2);
                uVar12 = uVar12 + 1;
              } while (*(ulong *)(lVar4 + 0x30) != uVar1);
LAB_1004971cf:
              cVar2 = FUN_100495380(*(undefined8 *)(lVar3 + 8));
              if (cVar2 == '\0') {
                uVar8 = FUN_1001cc310();
                cVar2 = _os_log_type_enabled(uVar8,0x10);
                if (cVar2 != '\0') {
                  local_4a = "ITImageAlbumIsValid(childAlbum)";
LAB_100497535:
                  local_4c = 0x822;
                  local_54 = "Assertion failure";
                  local_58 = 0x8220202;
                  __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: err == (%d)",&local_58,
                                      0x16);
                }
              }
              else {
                cVar2 = FUN_100495380(*(undefined8 *)(lVar4 + 8));
                if (cVar2 == '\0') {
                  uVar8 = FUN_1001cc310();
                  cVar2 = _os_log_type_enabled(uVar8,0x10);
                  if (cVar2 != '\0') {
                    local_4a = "ITImageAlbumIsValid(parentAlbum)";
                    goto LAB_100497535;
                  }
                }
                else {
                  if (*(long *)(lVar3 + 200) == 0) {
                    if (*(long *)(lVar3 + 0xd0) != 0) {
                      uVar7 = FUN_1001cc310();
                      cVar2 = _os_log_type_enabled(uVar7,0x10);
                      if (cVar2 != '\0') {
                        local_58 = 0x8220202;
                        local_54 = "Assertion failure";
                        local_4c = 0x822;
                        local_4a = "element->*PNEXT == nullptr";
                        __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: err == (%d)",
                                            &local_58,0x16);
                      }
                      FUN_1001782e9(0,0);
                    }
                    *(undefined8 *)(lVar3 + 0xd0) = *(undefined8 *)(lVar4 + 0xd8);
                    *(long *)(lVar4 + 0xd8) = lVar3;
                    *(int *)(lVar4 + 0xe0) = *(int *)(lVar4 + 0xe0) + 1;
                    *(long *)(lVar3 + 200) = lVar4;
                    goto LAB_100497256;
                  }
                  uVar8 = FUN_1001cc310();
                  cVar2 = _os_log_type_enabled(uVar8,0x10);
                  if (cVar2 != '\0') {
                    local_4a = "childAlbum->parentAlbum == nullptr";
                    goto LAB_100497535;
                  }
                }
              }
              FUN_1001782e9(0,0);
              uVar7 = FUN_1001cc310();
              cVar2 = _os_log_type_enabled(uVar7,0x10);
              uVar8 = 0xffffffce;
              if (cVar2 != '\0') {
                local_58 = 0x8220202;
                local_54 = "Assertion failure";
                local_4c = 0x400;
                local_4a = (char *)CONCAT44(local_4a._4_4_,0xffffffce);
                __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: err == (%d)",&local_58,0x12)
                ;
              }
              goto LAB_100497387;
            }
LAB_1004970b7:
            for (lVar4 = FUN_100496392(param_1); lVar4 != 0; lVar4 = FUN_100496449(lVar4)) {
              if (*(ulong *)(lVar4 + 0x30) == uVar1) goto LAB_1004971cf;
            }
          }
        }
LAB_100497256:
      }
      *(undefined1 *)(param_1 + 0x2481) = 1;
    }
  }
LAB_100497387:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

