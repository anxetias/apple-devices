// name: FUN_1005a4022
// address: 1005a4022

void FUN_1005a4022(long *param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  uint uVar12;
  int iVar13;
  undefined1 local_258 [512];
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1[0x2ce] == 0) {
    if ((*(uint *)((long)param_1 + 0x15b4) & *(uint *)(param_1 + 0x2b7) & 8) != 0) {
      for (lVar6 = FUN_100315ede(*(undefined8 *)(*param_1 + 0x30)); lVar6 != 0;
          lVar6 = FUN_100316031(lVar6)) {
        cVar2 = FUN_1005a94bc(lVar6);
        if (cVar2 != '\0') {
          FUN_1005a9612(param_1,4,*(undefined8 *)(lVar6 + 0x60));
        }
      }
    }
    lVar6 = FUN_10048604a(*(undefined8 *)(*param_1 + 0x30));
    if ((lVar6 != 0) && (iVar1 = *(int *)(*(long *)(lVar6 + 0x78) + 0x18), iVar1 != 0)) {
      iVar13 = 0;
      do {
        puVar7 = (undefined8 *)FUN_100380761(lVar6,0x79,0,iVar13);
        if ((puVar7 == (undefined8 *)0x0) || (puVar7[2] == 0)) {
          uVar8 = FUN_1001cc310();
          cVar2 = _os_log_type_enabled(uVar8,0x10);
          if (cVar2 != '\0') {
            local_58 = 0x8220202;
            local_54 = "Assertion failure";
            local_4c = 0x822;
            local_4a = "TrackInfoIsValid(trackInfo)";
            __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
          }
          FUN_1001782e9(0,0);
        }
        else {
          if (((*(uint *)((long)param_1 + 0x15b4) & *(uint *)(param_1 + 0x2b7) & 2) != 0) &&
             (iVar3 = FUN_100476928(puVar7,local_258), iVar3 == 0)) {
            if ((char)param_1[0x2cb] == '\0') {
              uVar8 = *puVar7;
              uVar11 = 3;
            }
            else {
              uVar8 = FUN_1005a98e6(local_258);
              uVar11 = 5;
            }
            FUN_1005a9612(param_1,uVar11,uVar8);
          }
          uVar4 = *(uint *)((long)param_1 + 0x15b4);
          uVar12 = *(uint *)(param_1 + 0x2b7);
          if ((uVar4 & uVar12 & 4) != 0) {
            FUN_1005a9612(param_1,2,*puVar7);
            uVar4 = *(uint *)((long)param_1 + 0x15b4);
            uVar12 = *(uint *)(param_1 + 0x2b7);
          }
          if ((((uVar12 & uVar4 & 0x10) != 0) ||
              (((*(char *)((long)param_1 + 0x15a2) != '\0' &&
                (*(char *)((long)param_1 + 0x15a3) == '\0')) &&
               (uVar10 = FUN_100474dd0(puVar7,0), (uVar10 & 0x200004) != 0)))) &&
             (((*(byte *)(param_1 + 0x2af) & 1) != 0 &&
              (iVar3 = FUN_1004772c4(puVar7,local_258), iVar3 == 0)))) {
            uVar8 = FUN_1005a98e6(local_258);
            FUN_1005a9612(param_1,5,uVar8);
          }
          if ((*(uint *)((long)param_1 + 0x15b4) & *(uint *)(param_1 + 0x2b7) & 0x10) != 0) {
            if (((*(byte *)(param_1 + 0x2af) & 4) != 0) &&
               (iVar3 = FUN_1004779ac(puVar7,local_258), iVar3 == 0)) {
              uVar8 = FUN_1005a98e6(local_258);
              FUN_1005a9612(param_1,5,uVar8);
            }
            if (((*(byte *)(param_1 + 0x2af) & 2) != 0) &&
               (iVar3 = FUN_100478022(puVar7,local_258), iVar3 == 0)) {
              uVar8 = FUN_1005a98e6(local_258);
              FUN_1005a9612(param_1,5,uVar8);
            }
            if (((*(byte *)(param_1 + 0x2af) & 0x10) != 0) &&
               (iVar3 = FUN_10047a0d2(puVar7,local_258), iVar3 == 0)) {
              uVar8 = FUN_1005a98e6(local_258);
              FUN_1005a9612(param_1,5,uVar8);
            }
            if (((*(byte *)(param_1 + 0x2af) & 0x20) != 0) &&
               (iVar3 = FUN_10047a7b5(puVar7,local_258), iVar3 == 0)) {
              uVar8 = FUN_1005a98e6(local_258);
              FUN_1005a9612(param_1,5,uVar8);
            }
            if (((*(byte *)(param_1 + 0x2af) & 8) != 0) &&
               (lVar9 = FUN_1002af284(puVar7[0xb]), lVar9 != 0)) {
              uVar4 = FUN_100176d97(lVar9);
              if (uVar4 != 0) {
                uVar12 = 1;
                do {
                  uVar5 = FUN_100176de6(lVar9,uVar12);
                  iVar3 = FUN_1001767b3(lVar9,uVar5,4,0x200,local_258);
                  if (iVar3 != -0x80) {
                    if (iVar3 == 0) {
                      uVar8 = FUN_1005a98e6(local_258);
                      FUN_1005a9612(param_1,5,uVar8);
                    }
                    else {
                      uVar8 = FUN_1001cc310();
                      cVar2 = _os_log_type_enabled(uVar8,0x10);
                      if (cVar2 != '\0') {
                        local_58 = 0x8220202;
                        local_54 = "Assertion failure";
                        local_4c = 0x400;
                        local_4a = (char *)CONCAT44(local_4a._4_4_,iVar3);
                        __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: err == (%d)",
                                            &local_58,0x12);
                      }
                    }
                  }
                  uVar12 = uVar12 + 1;
                } while (uVar12 <= uVar4);
              }
              FUN_100175848(lVar9);
            }
          }
        }
        iVar13 = iVar13 + 1;
      } while (iVar13 != iVar1);
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

