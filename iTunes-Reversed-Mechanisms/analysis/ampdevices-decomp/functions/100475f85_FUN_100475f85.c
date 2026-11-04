// name: FUN_100475f85
// address: 100475f85

undefined1 FUN_100475f85(long param_1,long param_2,long param_3,long param_4,int param_5)

{
  long lVar1;
  long lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  int iVar9;
  char cVar10;
  byte bVar11;
  undefined8 uVar12;
  char *pcVar13;
  undefined1 uVar14;
  byte bVar15;
  bool bVar16;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined2 uStack_4c;
  undefined2 uStack_4a;
  undefined6 uStack_48;
  long local_38;
  
  uVar7 = uStack_4a;
  uVar5 = uStack_4c;
  uVar3 = local_50;
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if ((param_1 == 0) || (lVar1 = *(long *)(param_1 + 0x10), lVar1 == 0)) {
    uVar12 = FUN_1001cc310();
    cVar10 = _os_log_type_enabled(uVar12,0x10);
    if (cVar10 != '\0') {
      pcVar13 = "TrackInfoIsValid(trackInfo)";
      goto LAB_100476198;
    }
  }
  else {
    bVar15 = *(byte *)(param_1 + 0x92);
    if (param_2 == 0) {
      if (param_3 == 0 && param_4 != 0) {
        uVar12 = FUN_1001cc310();
        cVar10 = _os_log_type_enabled(uVar12,0x10);
        if (cVar10 != '\0') {
          pcVar13 = "cloudUserID == 0 || cloudPurchasesID != ((UInt64)0)";
          goto LAB_100476198;
        }
      }
      else {
        if (param_3 != 0) {
          if (param_4 == 0) goto LAB_100476083;
          if (2 < param_5 - 2U) goto LAB_1004760c5;
          bVar16 = false;
LAB_100475feb:
          lVar2 = *(long *)(param_1 + 0xa0);
          uStack_4c = (undefined2)((ulong)param_1 >> 0x20);
          uVar6 = uStack_4c;
          uStack_4a = (undefined2)((ulong)param_1 >> 0x30);
          uVar8 = uStack_4a;
          local_50 = (undefined4)param_1;
          uVar4 = local_50;
          local_50 = uVar3;
          uStack_4c = uVar5;
          uStack_4a = uVar7;
          if (lVar2 == param_2) {
            uVar14 = 0;
          }
          else {
            if (param_2 == -2) {
              param_2 = 0;
              if (bVar16) {
                param_4 = param_2;
              }
              bVar15 = 7;
            }
            else if (param_2 == -1) {
              param_2 = 0;
              if (bVar16) {
                param_4 = param_2;
              }
              bVar15 = 4;
            }
            if (lVar2 == param_2) {
LAB_10047628c:
              if (param_2 != 0) goto LAB_100476291;
              bVar11 = *(byte *)(param_1 + 0x92);
              if ((*(byte *)(param_1 + 0x92) | 2) != 7) {
                bVar11 = bVar15;
              }
              bVar15 = bVar11;
              *(byte *)(param_1 + 0x90) = *(byte *)(param_1 + 0x90) & 8;
              *(undefined1 *)(param_1 + 0x91) = 0;
              bVar11 = 1;
            }
            else {
              if (lVar2 - 1U < 0xfffffffffffffffc) {
                FUN_100476435(lVar1 + 0x2700,param_1);
              }
              if (0xfffffffffffffffb < param_2 - 1U) goto LAB_10047628c;
              local_58 = (undefined4)param_2;
              uStack_54 = (undefined4)((ulong)param_2 >> 0x20);
              local_50 = uVar4;
              uStack_4c = uVar6;
              uStack_4a = uVar8;
              FUN_1002b7dfc(lVar1 + 0x2700);
LAB_100476291:
              bVar11 = 0;
            }
            if (param_5 == 2) {
              param_5 = (uint)(byte)(bVar11 ^ 1 | bVar15 != 0) * 2;
            }
            *(long *)(param_1 + 0xa0) = param_2;
            *(byte *)(param_1 + 0x92) = bVar15;
            uVar14 = 1;
          }
          if (*(long *)(param_1 + 0xa8) != param_3) {
            if (*(long *)(param_1 + 0xa8) - 1U < 0xfffffffffffffffc) {
              FUN_100476435(lVar1 + 0x2718,param_1);
            }
            if (param_3 - 1U < 0xfffffffffffffffc) {
              local_58 = (undefined4)param_3;
              uStack_54 = (undefined4)((ulong)param_3 >> 0x20);
              local_50 = uVar4;
              uStack_4c = uVar6;
              uStack_4a = uVar8;
              FUN_1002b7dfc(lVar1 + 0x2718);
            }
            iVar9 = param_5;
            if (bVar16) {
              *(byte *)(param_1 + 0x90) = *(byte *)(param_1 + 0x90) & 8;
              *(undefined2 *)(param_1 + 0x91) = 0;
              iVar9 = 0;
              if (1 < param_5 - 3U) {
                iVar9 = param_5;
              }
            }
            param_5 = iVar9;
            *(long *)(param_1 + 0xa8) = param_3;
            uVar14 = 1;
          }
          if ((bVar15 == 0 && param_2 == 0) && param_3 + 3U < 4) {
            param_4 = 0;
            param_5 = 0;
          }
          if (*(long *)(param_1 + 0xb0) != param_4) {
            *(long *)(param_1 + 0xb0) = param_4;
            uVar14 = 1;
          }
          if (*(int *)(param_1 + 0x98) != param_5) {
            *(int *)(param_1 + 0x98) = param_5;
            uVar14 = 1;
          }
          goto LAB_10047602a;
        }
        if (param_4 == 0) {
          if (param_5 == 0) {
            bVar16 = true;
            goto LAB_100475feb;
          }
          uVar12 = FUN_1001cc310();
          cVar10 = _os_log_type_enabled(uVar12,0x10);
          if (cVar10 != '\0') {
            pcVar13 = "cloudLibraryKind == kRemoteLibraryKind_Unknown";
            goto LAB_100476198;
          }
        }
        else {
          uVar12 = FUN_1001cc310();
          cVar10 = _os_log_type_enabled(uVar12,0x10);
          if (cVar10 != '\0') {
            pcVar13 = "cloudUserID == 0 || cloudMusicID != ((UInt64)0)";
LAB_100476198:
            local_50 = 1;
            uStack_54 = 0x7a0a90;
            uStack_4c = 0x822;
            local_58 = 0x8220202;
            uStack_4a = SUB82(pcVar13,0);
            uStack_48 = (undefined6)((ulong)pcVar13 >> 0x10);
            __os_log_error_impl(0x100000000,uVar12,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
          }
        }
      }
    }
    else if (param_4 == 0) {
LAB_100476083:
      uVar12 = FUN_1001cc310();
      cVar10 = _os_log_type_enabled(uVar12,0x10);
      if (cVar10 != '\0') {
        pcVar13 = "cloudUserID != 0";
        goto LAB_100476198;
      }
    }
    else {
      if (param_5 - 2U < 3) {
        bVar16 = param_3 == 0;
        goto LAB_100475feb;
      }
LAB_1004760c5:
      uVar12 = FUN_1001cc310();
      cVar10 = _os_log_type_enabled(uVar12,0x10);
      if (cVar10 != '\0') {
        pcVar13 = "IsCloudLibraryKind(cloudLibraryKind)";
        goto LAB_100476198;
      }
    }
  }
  uVar14 = 0;
  FUN_1001782e9(0,0);
LAB_10047602a:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return uVar14;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

