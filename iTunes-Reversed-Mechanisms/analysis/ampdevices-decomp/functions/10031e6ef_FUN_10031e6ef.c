// name: FUN_10031e6ef
// address: 10031e6ef

undefined8 FUN_10031e6ef(long param_1,char param_2,undefined8 param_3,long param_4,long param_5)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  char *pcVar12;
  undefined4 *puVar13;
  char extraout_DL;
  ulong uVar14;
  bool bVar15;
  bool bVar16;
  short local_36aa;
  undefined4 local_36a8;
  undefined4 uStack_36a4;
  undefined4 uStack_36a0;
  undefined2 uStack_369c;
  undefined2 uStack_369a;
  undefined6 uStack_3698;
  undefined1 local_35e0 [13704];
  uint local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  undefined8 uStack_40;
  long local_38;
  
  uStack_40 = 0x10031e707;
  lVar7 = FUN_100108310();
  lVar7 = -lVar7;
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == 0) {
LAB_10031eadd:
    *(undefined8 *)((long)&local_38 + lVar7) = 0x10031eae2;
    uVar8 = FUN_1001cc310();
    *(undefined8 *)((long)&local_38 + lVar7) = 0x10031eaf2;
    cVar4 = _os_log_type_enabled(uVar8,0x10);
    if (cVar4 != '\0') {
      pcVar12 = "TrackDataIsValid(trackData)";
LAB_10031eb80:
      uStack_369c = 0x822;
      uStack_36a0 = 1;
      uStack_36a4 = 0x7a0a90;
      local_36a8 = 0x8220202;
      uStack_369a = SUB82(pcVar12,0);
      uStack_3698 = (undefined6)((ulong)pcVar12 >> 0x10);
      *(undefined8 *)((long)&local_38 + lVar7) = 0x10031eba5;
      __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",&local_36a8,0x16);
    }
  }
  else {
    if (*(int *)(param_1 + 0x80) != 0x74646174) {
      *(undefined8 *)((long)&local_38 + lVar7) = 0x10031e749;
      uVar8 = FUN_1001cc310();
      *(undefined8 *)((long)&local_38 + lVar7) = 0x10031e759;
      cVar4 = _os_log_type_enabled(uVar8,0x10);
      if (cVar4 != '\0') {
        local_36a8 = 0x8220202;
        uStack_36a4 = 0x7ab58c;
        uStack_36a0 = 1;
        uStack_369c = 0x822;
        uStack_369a = 0xec03;
        uStack_3698 = 0x1007a;
        *(undefined8 *)((long)&local_38 + lVar7) = 0x10031ec27;
        __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",&local_36a8,0x16);
      }
      *(undefined8 *)((long)&local_38 + lVar7) = 0x10031e76d;
      cVar4 = FUN_1001782e9(0,1);
      if (cVar4 == '\0') goto LAB_10031eadd;
    }
    if (param_4 != 0) {
      *(undefined8 *)((long)&local_38 + lVar7) = 0x10031e792;
      FUN_1001c62d9(param_4,0x350);
      *(undefined8 *)((long)&local_38 + lVar7) = 0x10031e7a1;
      lVar9 = FUN_1002f9fc5(param_1);
      if (lVar9 == 0) {
        uVar8 = 0;
      }
      else {
        puVar13 = &local_36a8;
        if (param_5 == 0) {
          puVar13 = (undefined4 *)0x0;
        }
        bVar16 = false;
        do {
          lVar2 = *(long *)(lVar9 + 0x10);
          if (extraout_DL == '\0') {
            uVar8 = 0;
          }
          else {
            uVar8 = *(undefined8 *)(lVar2 + 0x28);
          }
          uVar14 = *(ulong *)(lVar2 + 8);
          bVar15 = uVar14 != 0;
          if (!bVar15 && param_2 != '\0') {
            uVar14 = *(ulong *)(lVar2 + 0x20);
            uVar8 = 0;
          }
          if (1 < uVar14) {
            lVar2 = *(long *)(lVar9 + 8);
            if ((lVar2 == 0) || (*(long *)(lVar2 + 0x10) == 0)) {
              *(undefined8 *)((long)&local_38 + lVar7) = 0x10031e94e;
              uVar8 = FUN_1001cc310();
              *(undefined8 *)((long)&local_38 + lVar7) = 0x10031e95e;
              cVar4 = _os_log_type_enabled(uVar8,0x10);
              if (cVar4 != '\0') {
                local_36a8 = 0x8220202;
                uStack_36a4 = 0x7a0a90;
                uStack_36a0 = 1;
                uStack_369c = 0x822;
                uStack_369a = 0x6950;
                uStack_3698 = 0x1007b;
                *(undefined8 *)((long)&local_38 + lVar7) = 0x10031ea87;
                __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",&local_36a8,
                                    0x16);
              }
              *(undefined8 *)((long)&local_38 + lVar7) = 0x10031e976;
              FUN_1001782e9(0,0);
            }
            else {
              *(undefined8 *)((long)&local_38 + lVar7) = 0x10031e849;
              FUN_10031ab0f(lVar9,&local_36aa,1);
              if (local_36aa != 0x259 && (ushort)(local_36aa - 0x1ffU) < 0xfff6) {
                if (0xfff9 < (ushort)(local_36aa - 0x197U)) goto LAB_10031ea17;
                *(undefined8 *)((long)&local_38 + lVar7) = 0x10031e882;
                uVar10 = FUN_1004744bf(lVar2,0);
                if ((uVar10 & 0x1465000) == 0) {
                  bVar3 = !bVar16;
                  bVar16 = true;
                  if (bVar3) {
                    *(undefined8 *)((long)&local_38 + lVar7) = 0x10031e8a0;
                    iVar5 = FUN_10031ae5a(param_1);
                    bVar16 = iVar5 == 0;
                  }
                  *(undefined8 *)((long)&local_38 + lVar7) = 0x10031e8b4;
                  uVar6 = FUN_1002b1325(lVar9);
                  *(undefined8 *)((long)&local_38 + lVar7) = 0x10031e8bb;
                  cVar4 = FUN_1003af97c(uVar6);
                  if (cVar4 == '\0') goto LAB_10031ea17;
                }
              }
              local_36a8 = 0;
              uStack_36a4 = 0;
              uStack_36a0 = 0;
              uStack_369c = 0;
              uStack_369a = 0;
              if ((param_5 != 0) || ((*(uint *)(lVar9 + 0x48) & 0x80) == 0)) {
                *(undefined8 *)((long)&local_38 + lVar7) = 0x10031e900;
                FUN_1003c3248(lVar9,1,0,puVar13,0,0);
                if ((*(byte *)(lVar9 + 0x48) & 0x80) == 0) {
                  *(undefined8 *)((long)&local_38 + lVar7) = 0x10031e90c;
                  uVar11 = FUN_1001cc310();
                  *(undefined8 *)((long)&local_38 + lVar7) = 0x10031e920;
                  cVar4 = _os_log_type_enabled(uVar11,0x10);
                  if (cVar4 != '\0') {
                    local_58 = 0x8220202;
                    local_54 = "Assertion failure";
                    local_4c = 0x822;
                    local_4a = "trackInstance->drmVersionsValid";
                    *(undefined8 *)((long)&local_38 + lVar7) = 0x10031ead8;
                    __os_log_error_impl(0x100000000,uVar11,0x10,"%{public}s: (%{public}s)");
                  }
                  *(undefined8 *)((long)&local_38 + lVar7) = 0x10031e931;
                  FUN_1001782e9(0,0);
                  if ((*(byte *)(lVar9 + 0x48) & 0x80) == 0) goto LAB_10031ea17;
                }
              }
              local_58 = local_58 & 0xffffff00;
              if (bVar15 || param_2 == '\0') {
                bVar15 = *(char *)(*(long *)(lVar9 + 0x10) + 0x86) != '\0';
              }
              else {
                bVar15 = false;
              }
              uVar1 = *(uint *)(lVar2 + 0xc2);
              *(undefined8 *)((long)&local_38 + lVar7) = 0x10031e9ad;
              cVar4 = FUN_10031e4ab(uVar14,uVar8,bVar15,uVar1 >> 0x1f);
              if (cVar4 == '\0') break;
              if ((param_5 != 0) && ((char)local_58 != '\0')) {
                *(undefined8 *)((long)&local_38 + lVar7) = 0x10031e9da;
                uVar8 = FUN_1001736b8(0,0,&cf__llu,uVar14);
                *(undefined8 *)((long)&local_38 + lVar7) = 0x10031e9eb;
                uVar11 = FUN_1001658f1(0,local_35e0);
                *(undefined8 *)((long)&local_38 + lVar7) = 0x10031ea00;
                FUN_1001714de(param_5,uVar8,uVar11);
                *(undefined8 *)((long)&local_38 + lVar7) = 0x10031ea08;
                FUN_10017060f(uVar8);
                *(undefined8 *)((long)&local_38 + lVar7) = 0x10031ea10;
                FUN_10017060f(uVar11);
              }
            }
          }
LAB_10031ea17:
          *(undefined8 *)((long)&local_38 + lVar7) = 0x10031ea1f;
          lVar9 = FUN_1002fa118(lVar9);
        } while (lVar9 != 0);
        uVar8 = 0;
        if (bVar16) {
          *(undefined8 *)((long)&local_38 + lVar7) = 0x10031eb3e;
          FUN_10031b040(param_1);
        }
      }
      goto LAB_10031ebb3;
    }
    *(undefined8 *)((long)&local_38 + lVar7) = 0x10031eb45;
    uVar8 = FUN_1001cc310();
    *(undefined8 *)((long)&local_38 + lVar7) = 0x10031eb55;
    cVar4 = _os_log_type_enabled(uVar8,0x10);
    if (cVar4 != '\0') {
      pcVar12 = "userIDList != nullptr";
      goto LAB_10031eb80;
    }
  }
  *(undefined8 *)((long)&local_38 + lVar7) = 0x10031ebae;
  FUN_1001782e9(0,0);
  uVar8 = 0xffffffce;
LAB_10031ebb3:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    *(code **)((long)&local_38 + lVar7) = FUN_10031ec31;
    ___stack_chk_fail();
  }
  return uVar8;
}

