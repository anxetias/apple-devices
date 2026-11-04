// name: FUN_1005d7388
// address: 1005d7388

void FUN_1005d7388(undefined8 param_1,int param_2)

{
  long lVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  uint uVar5;
  long lVar6;
  uint uVar7;
  ulong uVar8;
  long *plVar9;
  long local_78;
  long local_70;
  long local_68;
  long local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_60 = 0;
  iVar3 = FUN_10015c62d(param_1,&local_60,0,0);
  if (iVar3 != -0x80) {
    if (iVar3 == 0) {
      if (local_60 == 0) {
        uVar4 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar4,0x10);
        if (cVar2 != '\0') {
          local_58 = 0x8220202;
          uStack_54 = 0x7a0a90;
          uStack_50 = 1;
          local_4c = 0x822;
          local_4a = "moovTree->head != nullptr";
          __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
        }
        FUN_1001782e9(0,0);
      }
      else {
        plVar9 = *(long **)(local_60 + 0x10);
        if (plVar9 != (long *)0x0) {
          do {
            if (*(int *)(plVar9[4] + 4) == 0x6b617274) {
              FUN_10015d28d(plVar9,0x6d646961,&local_58);
              if (((CONCAT44(uStack_54,local_58) != 0) &&
                  (FUN_10015d28d(CONCAT44(uStack_54,local_58),0x6d696e66,&local_78), local_78 != 0))
                 && (FUN_10015d28d(local_78,0x7374626c,&local_70), local_70 != 0)) {
                FUN_10015d28d(local_70,0x7374636f,&local_68);
                if (local_68 == 0) {
                  FUN_10015d28d(local_70,0x636f3634,&local_68);
                  if (local_68 != 0) {
                    lVar1 = *(long *)(local_68 + 0x20);
                    uVar5 = *(uint *)(lVar1 + 0xc);
                    uVar5 = uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 |
                            uVar5 << 0x18;
                    if (0 < (int)uVar5) {
                      lVar6 = 0;
                      do {
                        uVar8 = *(ulong *)(lVar1 + 0x10 + lVar6 * 8);
                        uVar8 = (uVar8 >> 0x38 | (uVar8 & 0xff000000000000) >> 0x28 |
                                 (uVar8 & 0xff0000000000) >> 0x18 | (uVar8 & 0xff00000000) >> 8 |
                                 (uVar8 & 0xff000000) << 8 | (uVar8 & 0xff0000) << 0x18 |
                                 (uVar8 & 0xff00) << 0x28 | uVar8 << 0x38) + (long)param_2;
                        *(ulong *)(lVar1 + 0x10 + lVar6 * 8) =
                             uVar8 >> 0x38 | (uVar8 & 0xff000000000000) >> 0x28 |
                             (uVar8 & 0xff0000000000) >> 0x18 | (uVar8 & 0xff00000000) >> 8 |
                             (uVar8 & 0xff000000) << 8 | (uVar8 & 0xff0000) << 0x18 |
                             (uVar8 & 0xff00) << 0x28 | uVar8 << 0x38;
                        lVar6 = lVar6 + 1;
                      } while ((int)uVar5 != lVar6);
                    }
                  }
                }
                else {
                  lVar1 = *(long *)(local_68 + 0x20);
                  uVar5 = *(uint *)(lVar1 + 0xc);
                  uVar5 = uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 |
                          uVar5 << 0x18;
                  if (0 < (int)uVar5) {
                    lVar6 = 0;
                    do {
                      uVar7 = *(uint *)(lVar1 + 0x10 + lVar6 * 4);
                      uVar7 = (uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 |
                              uVar7 << 0x18) + param_2;
                      *(uint *)(lVar1 + 0x10 + lVar6 * 4) =
                           uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 |
                           uVar7 * 0x1000000;
                      lVar6 = lVar6 + 1;
                    } while ((int)uVar5 != lVar6);
                  }
                }
              }
            }
            plVar9 = (long *)*plVar9;
          } while (plVar9 != (long *)0x0);
        }
      }
    }
    else {
      uVar4 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar4,0x10);
      if (cVar2 != '\0') {
        local_58 = 0x8220202;
        uStack_54 = 0x7a0a90;
        uStack_50 = 1;
        local_4c = 0x400;
        local_4a = (char *)CONCAT44(local_4a._4_4_,iVar3);
        __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_58,0x12);
      }
    }
  }
  FUN_10015cc72(&local_60);
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

