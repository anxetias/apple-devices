// name: FUN_1002bb23b
// address: 1002bb23b

void FUN_1002bb23b(long param_1)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  char *pcVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined2 uStack_4c;
  undefined2 uStack_4a;
  undefined6 uStack_48;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == 0) {
LAB_1002bb2eb:
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      pcVar9 = "TrackDataIsValid(inTrackData)";
LAB_1002bb595:
      uStack_4c = 0x822;
      uStack_50 = 1;
      uStack_54 = 0x7a0a90;
      local_58 = 0x8220202;
      uStack_4a = SUB82(pcVar9,0);
      uStack_48 = (undefined6)((ulong)pcVar9 >> 0x10);
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
  }
  else {
    if (*(int *)(param_1 + 0x80) != 0x74646174) {
      uVar4 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar4,0x10);
      if (cVar2 != '\0') {
        local_58 = 0x8220202;
        uStack_54 = 0x7ab58c;
        uStack_50 = 1;
        uStack_4c = 0x822;
        uStack_4a = 0xec03;
        uStack_48 = 0x1007a;
        __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      cVar2 = FUN_1001782e9(0,1);
      if (cVar2 == '\0') goto LAB_1002bb2eb;
    }
    iVar1 = *(int *)(param_1 + 0x84);
    lVar5 = FUN_10048bbac(param_1,(iVar1 == 0x646f5069) * '\x03' + '\x1f',0);
    if (lVar5 == 0) goto LAB_1002bb50b;
    if (iVar1 == 0x646f5069) {
      lVar6 = FUN_1002b9ffb(param_1,0xb,1);
    }
    else {
      lVar6 = FUN_10048bbac(param_1,10,0);
    }
    if (lVar6 != 0) {
      FUN_100313e0b(param_1);
      lVar10 = *(long *)(*(long *)(lVar5 + 0x78) + 8);
      if (lVar10 != 0) {
        do {
          lVar7 = FUN_1003a790f(lVar10,0,lVar6,0,0);
          if (lVar7 == 0) {
            uVar4 = FUN_1001cc310();
            cVar2 = _os_log_type_enabled(uVar4);
            if (cVar2 != '\0') {
              local_58 = 0x8220202;
              uStack_54 = 0x7a0a90;
              uStack_50 = 1;
              uStack_4c = 0x822;
              uStack_4a = 0xa049;
              uStack_48 = 0x1007b;
              __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
            }
            FUN_1001782e9(0);
          }
          else {
            if ((*(long *)(lVar10 + 8) == 0) || ((*(byte *)(*(long *)(lVar10 + 8) + 0xc5) & 4) == 0)
               ) {
              FUN_1002ba359(lVar10);
              lVar8 = FUN_1002ba73f(lVar6);
              if (lVar8 != 0) {
                local_58 = (undefined4)*(undefined8 *)(lVar7 + 0x28);
                uStack_54 = (undefined4)((ulong)*(undefined8 *)(lVar7 + 0x28) >> 0x20);
                uVar4 = *(undefined8 *)(lVar8 + 0x28);
                uStack_50 = (undefined4)uVar4;
                uStack_4c = (undefined2)((ulong)uVar4 >> 0x20);
                uStack_4a = (undefined2)((ulong)uVar4 >> 0x30);
                FUN_1002bbb84(lVar6 + 0x4a0,&local_58,&local_58);
              }
            }
            lVar7 = FUN_100242590(lVar7);
            if ((lVar7 != 0) && (uVar3 = FUN_1004744bf(lVar7), (uVar3 >> 0x15 & 1) != 0)) {
              *(uint *)(lVar7 + 0xd4) = *(uint *)(lVar7 + 0xd4) & 0xffdffffb | 4;
              cVar2 = FUN_10047669e(lVar7);
              if (cVar2 != '\0') {
                FUN_10047675c(lVar7,0);
              }
              FUN_1001c62d9(&local_58,0x20);
              FUN_1005389ba(&local_58);
              FUN_1004755ef(lVar7,0,&local_58);
              for (puVar11 = *(undefined8 **)(lVar7 + 0x58); puVar11 != (undefined8 *)0x0;
                  puVar11 = (undefined8 *)*puVar11) {
                if (*(int *)((long)puVar11 + 0x3c) == 0x46494c45) {
                  local_58 = 0;
                  uStack_54 = 0;
                  uStack_50 = 0;
                  uStack_4c = 0;
                  uStack_4a = 0;
                  FUN_10031f08e(puVar11,0,&local_58,0,1,0xc0);
                }
              }
            }
          }
          lVar10 = *(long *)(lVar10 + 0x18);
        } while (lVar10 != 0);
      }
      FUN_100488d27(lVar5,0,0);
      FUN_1002fbbfc(param_1);
      goto LAB_1002bb50b;
    }
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      pcVar9 = "podcastPlaylist != nullptr";
      goto LAB_1002bb595;
    }
  }
  FUN_1001782e9(0,0);
LAB_1002bb50b:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

