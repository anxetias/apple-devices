// name: FUN_100637d1a
// address: 100637d1a

void FUN_100637d1a(undefined8 *param_1,long param_2)

{
  undefined4 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  int *piVar4;
  char cVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  char *pcVar12;
  char local_1438 [80];
  undefined1 local_13e8 [24];
  long local_13d0;
  undefined1 local_13c1;
  undefined1 local_13b0 [52];
  undefined1 local_137c [84];
  long local_1328;
  long local_1320;
  ulong local_1318;
  undefined8 local_1310;
  uint local_1304;
  long local_1300;
  undefined8 *local_12f8;
  int *local_12f0;
  undefined1 local_12e8 [1056];
  int local_ec8 [264];
  undefined1 local_aa8 [512];
  undefined1 local_8a8 [1056];
  undefined4 local_488;
  char *local_484;
  undefined2 local_47c;
  char *local_47a;
  undefined8 uStack_40;
  long local_38;
  
  uStack_40 = 0x100637d32;
  lVar7 = FUN_100108310();
  lVar7 = -lVar7;
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_12f0 = *(int **)*param_1;
  lVar10 = *(long *)(local_12f0 + 2);
  lVar9 = lVar10;
  local_1300 = param_2;
  local_12f8 = param_1;
  if (*local_12f0 == 0x706c7374) {
LAB_100637da6:
    if (lVar9 != 0) {
      *(undefined8 *)((long)&local_38 + lVar7) = 0x100637db7;
      FUN_10048c0ca(local_12f0);
      goto LAB_100637e24;
    }
    *(undefined8 *)((long)&local_38 + lVar7) = 0x100637dbe;
    uVar8 = FUN_1001cc310();
    *(undefined8 *)((long)&local_38 + lVar7) = 0x100637dce;
    cVar5 = _os_log_type_enabled(uVar8,0x10);
    if (cVar5 != '\0') {
      local_47a = "inPlaylist->trackData != nullptr";
      goto LAB_100638302;
    }
  }
  else {
    *(undefined8 *)((long)&local_38 + lVar7) = 0x100637d73;
    uVar8 = FUN_1001cc310();
    *(undefined8 *)((long)&local_38 + lVar7) = 0x100637d83;
    cVar5 = _os_log_type_enabled(uVar8,0x10);
    if (cVar5 != '\0') {
      local_488 = 0x8220202;
      local_484 = "Assertion failure (expected to be true)";
      local_47c = 0x822;
      local_47a = "playlist->magic == \'plst\'";
      *(undefined8 *)((long)&local_38 + lVar7) = 0x10063828c;
      __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",&local_488,0x16);
    }
    *(undefined8 *)((long)&local_38 + lVar7) = 0x100637d97;
    cVar5 = FUN_1001782e9(0,1);
    if (cVar5 != '\0') {
      lVar9 = *(long *)(local_12f0 + 2);
      goto LAB_100637da6;
    }
    *(undefined8 *)((long)&local_38 + lVar7) = 0x100637e03;
    uVar8 = FUN_1001cc310();
    *(undefined8 *)((long)&local_38 + lVar7) = 0x100637e13;
    cVar5 = _os_log_type_enabled(uVar8,0x10);
    if (cVar5 != '\0') {
      local_47a = "PlaylistIsValid(inPlaylist)";
LAB_100638302:
      local_47c = 0x822;
      local_484 = "Assertion failure";
      local_488 = 0x8220202;
      *(undefined8 *)((long)&local_38 + lVar7) = 0x100638327;
      __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",&local_488,0x16);
    }
  }
  *(undefined8 *)((long)&local_38 + lVar7) = 0x100637e24;
  FUN_1001782e9(0,0);
LAB_100637e24:
  uVar2 = *(ulong *)(lVar10 + 0x1bb0);
  *(undefined8 *)((long)&local_38 + lVar7) = 0x100637e4d;
  FUN_100358940(1,(uint)(uVar2 >> 0x26) & 1,local_12f8,local_13e8);
  *(undefined8 *)((long)&local_38 + lVar7) = 0x100637e6a;
  iVar6 = FUN_1001ceb24(local_13b0,0x6370726d,0,0xffffffffffffffff,0);
  if (iVar6 != -0x80) {
    if (iVar6 == 0) {
      *(undefined8 *)((long)&local_38 + lVar7) = 0x100637e85;
      FUN_100313e0b(lVar10);
      local_1318 = *(ulong *)(lVar10 + 0x1bb0) & 0x1000000000000;
      *(ulong *)(lVar10 + 0x1bb0) = *(ulong *)(lVar10 + 0x1bb0) | 0x1000000000000;
      local_1320 = lVar10;
      if (*(short *)(local_1300 + 4) != 0) {
        pcVar12 = (char *)(local_1300 + 0x60);
        local_1328 = local_1300 + 0x10;
        uVar11 = 0;
        local_1304 = (uint)((byte)(uVar2 >> 0x26) & 1);
        do {
          *(undefined8 *)((long)&local_38 + lVar7) = 0x100637f11;
          FUN_1001c62d9(&local_488,0x448);
          if (*pcVar12 == '\0') {
            *(undefined8 *)((long)&local_38 + lVar7) = 0x100637f87;
            FUN_100637a00(local_1300,uVar11 & 0xffffffff,local_8a8);
            *(undefined8 *)((long)&local_38 + lVar7) = 0x100637fa5;
            iVar6 = FUN_100188aa6(local_8a8,local_8a8,1,local_1438,local_aa8);
            if (iVar6 == 0) {
              *(undefined8 *)((long)&local_38 + lVar7) = 0x100637fe1;
              FUN_10053672c(local_8a8,local_1438,&local_488);
              if (local_1438[0] != '\0') {
                *(undefined8 *)((long)&local_38 + lVar7) = 0x100637ffc;
                cVar5 = FUN_100358e4d(&local_488,local_1438,local_aa8);
                if (cVar5 == '\0') {
                  local_13c1 = 0;
                  *(undefined8 *)((long)&local_38 + lVar7) = 0x10063807a;
                  iVar6 = FUN_10017fdd8(&local_488,1,1,FUN_100638331,local_13e8);
                  if (iVar6 != -0x80) {
                    local_13c1 = 1;
                    goto LAB_100637fa9;
                  }
                  break;
                }
              }
              *(undefined8 *)((long)&local_38 + lVar7) = 0x100638016;
              cVar5 = FUN_100483d00(local_12f8,0x46494c45,&local_488,0);
              if (cVar5 != '\0') {
                *(undefined8 *)((long)&local_38 + lVar7) = 0x100638032;
                FUN_1001c62d9(local_137c,0x2c);
                *(undefined8 *)((long)&local_38 + lVar7) = 0x100638041;
                iVar6 = FUN_100358c8d(&local_488,local_13e8);
                if (iVar6 == 0) {
                  if (pcVar12[0x42c] != '\0') {
                    *(undefined8 *)((long)&local_38 + lVar7) = 0x1006380b0;
                    lVar10 = FUN_100490af0(local_137c);
                    if (lVar10 != 0) {
                      lVar10 = *(long *)(lVar10 + 8);
                      local_1310 = *(undefined8 *)(lVar10 + 0x58);
                      *(undefined8 *)((long)&local_38 + lVar7) = 0x1006380d1;
                      iVar6 = FUN_1002b1039(local_1310,local_ec8);
                      uVar8 = local_1310;
                      if (iVar6 == 0) {
                        uVar3 = *(undefined8 *)(lVar10 + 0x10);
                        *(undefined8 *)((long)&local_38 + lVar7) = 0x1006380f0;
                        iVar6 = FUN_100317a87(uVar3,local_1310,local_12e8);
                        if (iVar6 == 0) {
                          *(undefined8 *)((long)&local_38 + lVar7) = 0x10063810a;
                          iVar6 = FUN_1001894aa(local_ec8,local_12e8,local_ec8);
                          if (iVar6 == 0) {
                            *(undefined8 *)((long)&local_38 + lVar7) = 0x10063811f;
                            FUN_1002b4657(uVar8,local_ec8,0);
                            *(undefined8 *)((long)&local_38 + lVar7) = 0x100638127;
                            FUN_1002fc027(uVar8);
                          }
                        }
                      }
                    }
                  }
                }
                else if (iVar6 == -0x80) break;
              }
            }
          }
          else {
            *(undefined8 *)((long)&local_38 + lVar7) = 0x100637f2d;
            cVar5 = FUN_100483d00(local_12f8,0x48545450,&local_488,0);
            if (cVar5 != '\0') {
              uVar1 = *(undefined4 *)(pcVar12 + 8);
              *(undefined8 *)((long)&local_38 + lVar7) = 0x100637f4d;
              FUN_1001de2b7(local_1328,uVar1,local_8a8,local_ec8,0x400);
              *(undefined8 *)((long)&local_38 + lVar7) = 0x100637f73;
              FUN_100489f3f(local_12f0,local_1304,(long)local_ec8[0],local_8a8,local_12f8,0);
            }
          }
LAB_100637fa9:
          uVar11 = uVar11 + 1;
          pcVar12 = pcVar12 + 0x430;
        } while (uVar11 < *(ushort *)(local_1300 + 4));
      }
      lVar10 = local_1320;
      *(ulong *)(local_1320 + 0x1bb0) =
           *(ulong *)(local_1320 + 0x1bb0) & 0xfffeffffffffffff | local_1318;
      *(undefined8 *)((long)&local_38 + lVar7) = 0x100638161;
      FUN_1002773d4(local_1320);
      *(undefined8 *)((long)&local_38 + lVar7) = 0x100638169;
      FUN_1004cf6d4(lVar10);
      *(undefined8 *)((long)&local_38 + lVar7) = 0x100638181;
      FUN_1001ceb24(local_13b0,0x6470726d,0,0,0);
      *(undefined8 *)((long)&local_38 + lVar7) = 0x100638190;
      FUN_100358b97(local_13e8);
      piVar4 = local_12f0;
      if (local_13d0 != 0) {
        *(undefined8 *)((long)&local_38 + lVar7) = 0x1006381ad;
        FUN_10048ca43(local_12f0,local_13d0,1);
        *(undefined8 *)((long)&local_38 + lVar7) = 0x1006381bc;
        cVar5 = FUN_10048cb3b(piVar4,local_12f8);
        *(undefined8 *)((long)&local_38 + lVar7) = 0x1006381cd;
        FUN_100483f95(piVar4,0x706c616d,0);
        *(undefined8 *)((long)&local_38 + lVar7) = 0x1006381d7;
        FUN_1004897f6(piVar4,0);
        if (cVar5 != '\0') {
          *(undefined8 *)((long)&local_38 + lVar7) = 0x1006381e7;
          FUN_100380783(local_12f0);
        }
      }
      *(undefined8 *)((long)&local_38 + lVar7) = 0x1006381ef;
      FUN_1002fbbfc(lVar10);
    }
    else {
      *(undefined8 *)((long)&local_38 + lVar7) = 0x1006381f6;
      uVar8 = FUN_1001cc310();
      *(undefined8 *)((long)&local_38 + lVar7) = 0x100638206;
      cVar5 = _os_log_type_enabled(uVar8,0x10);
      if (cVar5 != '\0') {
        local_488 = 0x8220202;
        local_484 = "Assertion failure";
        local_47c = 0x400;
        local_47a = (char *)CONCAT44(local_47a._4_4_,iVar6);
        *(undefined8 *)((long)&local_38 + lVar7) = 0x1006382d6;
        __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: err == (%d)",&local_488,0x12);
      }
    }
  }
  *(undefined8 *)((long)&local_38 + lVar7) = 0x10063821a;
  FUN_100358c3c(local_13e8);
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    *(code **)((long)&local_38 + lVar7) = FUN_100638331;
    ___stack_chk_fail();
  }
  return;
}

