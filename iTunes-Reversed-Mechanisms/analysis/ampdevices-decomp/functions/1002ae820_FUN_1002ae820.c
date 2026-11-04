// name: FUN_1002ae820
// address: 1002ae820

undefined8 * FUN_1002ae820(void *param_1,uint param_2,long param_3)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  char cVar18;
  uint uVar19;
  undefined4 uVar20;
  int iVar21;
  undefined8 *puVar22;
  undefined8 uVar23;
  long lVar24;
  long lVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  char *pcVar28;
  undefined8 *puVar29;
  undefined8 *puVar30;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined2 uStack_4c;
  undefined2 uStack_4a;
  undefined2 uStack_48;
  undefined4 uStack_46;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (((param_1 == (void *)0x0) || (lVar3 = *(long *)((long)param_1 + 8), lVar3 == 0)) ||
     (lVar4 = *(long *)(lVar3 + 0x10), lVar4 == 0)) {
    uVar23 = FUN_1001cc310();
    cVar18 = _os_log_type_enabled(uVar23,0x10);
    if (cVar18 != '\0') {
      pcVar28 = "TrackInstanceIsValid(trackInstance)";
LAB_1002aecaa:
      uStack_50 = 1;
      uStack_54 = 0x7a0a90;
      uStack_4c = 0x822;
      local_58 = 0x8220202;
      uStack_4a = SUB82(pcVar28,0);
      uStack_48 = (undefined2)((ulong)pcVar28 >> 0x10);
      uStack_46 = (undefined4)((ulong)pcVar28 >> 0x20);
      __os_log_error_impl(0x100000000,uVar23,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
  }
  else if ((param_3 == 0) || (lVar5 = *(long *)(param_3 + 0x10), lVar5 == 0)) {
    uVar23 = FUN_1001cc310();
    cVar18 = _os_log_type_enabled(uVar23,0x10);
    if (cVar18 != '\0') {
      pcVar28 = "TrackInfoIsValid(destTrackInfo)";
      goto LAB_1002aecaa;
    }
  }
  else {
    puVar22 = (undefined8 *)
              FUN_1002ae502(param_3,*(undefined4 *)((long)param_1 + 0x3c),
                            *(undefined4 *)((long)param_1 + 0x60),0);
    if (puVar22 != (undefined8 *)0x0) {
      uVar20 = *(undefined4 *)(puVar22 + 6);
      _memcpy(puVar22,param_1,0xb8);
      uVar8 = *(undefined4 *)((long)param_1 + 0xb8);
      uVar9 = *(undefined4 *)((long)param_1 + 0xbc);
      uVar10 = *(undefined4 *)((long)param_1 + 0xc0);
      uVar11 = *(undefined4 *)((long)param_1 + 0xc4);
      if (*(long *)((long)param_1 + 0xc0) != 0) {
        LOCK();
        plVar1 = (long *)(*(long *)((long)param_1 + 0xc0) + 8);
        *plVar1 = *plVar1 + 1;
        UNLOCK();
      }
      plVar1 = (long *)puVar22[0x18];
      *(undefined4 *)(puVar22 + 0x17) = uVar8;
      *(undefined4 *)((long)puVar22 + 0xbc) = uVar9;
      *(undefined4 *)(puVar22 + 0x18) = uVar10;
      *(undefined4 *)((long)puVar22 + 0xc4) = uVar11;
      if (plVar1 != (long *)0x0) {
        LOCK();
        plVar2 = plVar1 + 1;
        lVar24 = *plVar2;
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (lVar24 == 0) {
          (**(code **)(*plVar1 + 0x10))(plVar1);
          std::__shared_weak_count::__release_weak();
        }
      }
      puVar22[0x1d] = *(undefined8 *)((long)param_1 + 0xe8);
      uVar8 = *(undefined4 *)((long)param_1 + 200);
      uVar9 = *(undefined4 *)((long)param_1 + 0xcc);
      uVar10 = *(undefined4 *)((long)param_1 + 0xd0);
      uVar11 = *(undefined4 *)((long)param_1 + 0xd4);
      uVar12 = *(undefined4 *)((long)param_1 + 0xdc);
      uVar13 = *(undefined4 *)((long)param_1 + 0xe0);
      uVar14 = *(undefined4 *)((long)param_1 + 0xe4);
      *(undefined4 *)(puVar22 + 0x1b) = *(undefined4 *)((long)param_1 + 0xd8);
      *(undefined4 *)((long)puVar22 + 0xdc) = uVar12;
      *(undefined4 *)(puVar22 + 0x1c) = uVar13;
      *(undefined4 *)((long)puVar22 + 0xe4) = uVar14;
      *(undefined4 *)(puVar22 + 0x19) = uVar8;
      *(undefined4 *)((long)puVar22 + 0xcc) = uVar9;
      *(undefined4 *)(puVar22 + 0x1a) = uVar10;
      *(undefined4 *)((long)puVar22 + 0xd4) = uVar11;
      *puVar22 = 0;
      puVar22[1] = param_3;
      *(undefined4 *)(puVar22 + 6) = uVar20;
      uVar23 = FUN_1001c6588();
      puVar22[2] = uVar23;
      uVar23 = FUN_1001c6588();
      puVar22[3] = uVar23;
      uVar23 = FUN_1001c6588();
      puVar22[4] = uVar23;
      uVar23 = FUN_1001c6588();
      puVar22[0x10] = uVar23;
      *(undefined4 *)(puVar22 + 7) = 0;
      *(uint *)(puVar22 + 9) = *(uint *)(puVar22 + 9) & 0xfffe1ffb | (param_2 & 1) << 0x10;
      local_58 = 0;
      uStack_54 = 0;
      uStack_50 = 0;
      uStack_4c = 0;
      uStack_4a = 0;
      FUN_100217418(puVar22 + 0x17,&local_58);
      plVar1 = (long *)CONCAT26(uStack_4a,CONCAT24(uStack_4c,uStack_50));
      if (plVar1 != (long *)0x0) {
        LOCK();
        plVar2 = plVar1 + 1;
        lVar24 = *plVar2;
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (lVar24 == 0) {
          (**(code **)(*plVar1 + 0x10))(plVar1);
          std::__shared_weak_count::__release_weak();
        }
      }
      FUN_1002ff169(puVar22,0);
      *(undefined4 *)(puVar22 + 8) = 0;
      FUN_1002af037(puVar22,0);
      if ((*(int *)(lVar5 + 0x84) == 0x646f5069) &&
         (uVar19 = FUN_1004744bf(lVar3,0), (uVar19 & 0x818000) == 0x800000)) {
        FUN_1002bd466(param_1,0);
      }
      if ((**(byte **)((long)param_1 + 0x10) & 1) != 0) {
        FUN_1002af0ff(puVar22);
        _memcpy((void *)puVar22[2],*(void **)((long)param_1 + 0x10),0xb8);
        *(byte *)puVar22[2] = *(byte *)puVar22[2] & 0xf7;
        *(byte *)puVar22[2] = *(byte *)puVar22[2] & 0xef;
        *(undefined8 *)(puVar22[2] + 0xb0) = 0;
        uVar23 = FUN_1001705fc(*(undefined8 *)(*(long *)((long)param_1 + 0x10) + 0x98));
        lVar24 = puVar22[2];
        *(undefined8 *)(lVar24 + 0x98) = uVar23;
        *(undefined8 *)(lVar24 + 0x74) = 0;
        *(undefined8 *)(lVar24 + 0x7c) = 0;
        *(undefined8 *)(lVar24 + 0x68) = 0;
        *(undefined8 *)(lVar24 + 0x70) = 0;
        if (((*(byte *)((long)param_1 + 0x48) & 0x20) != 0) &&
           (lVar24 = FUN_1002af284(param_1), lVar24 != 0)) {
          lVar25 = FUN_100175898(lVar24);
          if (lVar25 != 0) {
            FUN_1002af370(puVar22,lVar25);
          }
          FUN_100175848(lVar24);
          FUN_100175848(lVar25);
        }
        if (((puVar22[1] != 0) && (*(long *)(puVar22[1] + 0x10) != 0)) &&
           (*(long *)(puVar22[2] + 0x38) != 0)) {
          FUN_1002af3dd(puVar22,param_1);
        }
      }
      if ((**(byte **)((long)param_1 + 0x18) & 1) != 0) {
        FUN_1002af503(puVar22);
        _memcpy((void *)puVar22[3],*(void **)((long)param_1 + 0x18),0x240);
      }
      if (((param_2 >> 9 & 1) == 0) && ((**(byte **)((long)param_1 + 0x20) & 1) != 0)) {
        FUN_1002af688(puVar22);
        FUN_1002af85d(puVar22,*(undefined8 *)(*(long *)((long)param_1 + 0x20) + 0x20));
        puVar6 = *(undefined4 **)((long)param_1 + 0x20);
        puVar7 = (undefined4 *)puVar22[4];
        uVar20 = *puVar6;
        uVar8 = puVar6[1];
        uVar9 = puVar6[2];
        uVar10 = puVar6[3];
        uVar11 = puVar6[4];
        uVar12 = puVar6[5];
        uVar13 = puVar6[6];
        uVar14 = puVar6[7];
        uVar15 = puVar6[9];
        uVar16 = puVar6[10];
        uVar17 = puVar6[0xb];
        puVar7[8] = puVar6[8];
        puVar7[9] = uVar15;
        puVar7[10] = uVar16;
        puVar7[0xb] = uVar17;
        puVar7[4] = uVar11;
        puVar7[5] = uVar12;
        puVar7[6] = uVar13;
        puVar7[7] = uVar14;
        *puVar7 = uVar20;
        puVar7[1] = uVar8;
        puVar7[2] = uVar9;
        puVar7[3] = uVar10;
        lVar24 = FUN_1002af980(param_1);
        if (lVar24 != 0) {
          uVar26 = FUN_1002af980(param_1);
          uVar23 = *(undefined8 *)(*(long *)((long)param_1 + 0x20) + 8);
          uVar27 = FUN_1002afe3f(param_1);
          uVar20 = FUN_1002aff0b(param_1);
          FUN_1002afa4c(puVar22,uVar26,uVar23,uVar27,uVar20);
        }
      }
      if (*(int *)(lVar5 + 0x84) == 0x646f5069) {
        cVar18 = FUN_1003203ad(lVar3);
        if (cVar18 != '\0') {
          FUN_1002affcc(param_1,puVar22 + 0x19);
        }
      }
      else {
        FUN_100177cff(puVar22 + 0xc);
      }
      lVar3 = *(long *)((long)param_1 + 0x80);
      lVar24 = FUN_1001c6588();
      if (lVar3 != lVar24) {
        FUN_1002ae6f7(puVar22);
        _memcpy((void *)puVar22[0x10],*(void **)((long)param_1 + 0x80),0x448);
      }
      iVar21 = *(int *)((long)param_1 + 0x3c);
      if (iVar21 < 0x48545450) {
        if (iVar21 == 0x43442020) {
          uVar23 = FUN_1001cc310();
          cVar18 = _os_log_type_enabled(uVar23,0x10);
          if (cVar18 != '\0') {
            local_58 = 0x8220202;
            uStack_54 = 0x7a0a90;
            uStack_50 = 1;
            uStack_4c = 0x822;
            uStack_4a = 0x16bc;
            uStack_48 = 0x7a;
            uStack_46 = 1;
            __os_log_error_impl(0x100000000,uVar23,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
          }
          FUN_1001782e9(0,0);
        }
        else if (iVar21 == 0x46494c45) {
          FUN_1002b0353(puVar22,0);
          if (*(char *)((long)param_1 + 0x44) == '\x01') {
LAB_1002aedcd:
            if ((param_2 & 0x20) == 0) {
              if ((*(byte *)(lVar5 + 0x1bb3) & 2) == 0) {
                if ((lVar4 != lVar5) && ((*(ulong *)(lVar4 + 0x1bb0) & 0x2000000) != 0)) {
LAB_1002aeec2:
                  if ((param_2 & 8) == 0) goto LAB_1002aeec8;
                }
              }
              else if (lVar4 != lVar5) goto LAB_1002aeec2;
              FUN_1002fc027(puVar22);
              goto LAB_1002aeeaa;
            }
LAB_1002aeec8:
            iVar21 = FUN_1004058aa(param_1,param_2 >> 5 & 4 | param_2 >> 3 & 8 | param_2 & 3,puVar22
                                   ,0,0);
            if ((iVar21 != -0x80) && (iVar21 != 0)) {
              uVar23 = FUN_1001cc310();
              cVar18 = _os_log_type_enabled(uVar23,0x10);
              if (cVar18 != '\0') {
                local_58 = 0x8220202;
                uStack_54 = 0x7a0a90;
                uStack_50 = 1;
                uStack_4c = 0x400;
                uStack_4a = (undefined2)iVar21;
                uStack_48 = (undefined2)((uint)iVar21 >> 0x10);
                __os_log_error_impl(0x100000000,uVar23,0x10,"%{public}s: err == (%d)",&local_58,0x12
                                   );
              }
              goto LAB_1002aef42;
            }
            FUN_100300c1d(param_1,puVar22,0);
            if (iVar21 == 0) goto LAB_1002aec21;
          }
          else {
            iVar21 = FUN_1002b0559(param_1,0);
            if ((iVar21 != -0x80) && (iVar21 != 0)) {
              uVar23 = FUN_1001cc310();
              cVar18 = _os_log_type_enabled(uVar23,0x10);
              if (cVar18 != '\0') {
                local_58 = 0x8220202;
                uStack_54 = 0x7a0a90;
                uStack_50 = 1;
                uStack_4c = 0x400;
                uStack_4a = (undefined2)iVar21;
                uStack_48 = (undefined2)((uint)iVar21 >> 0x10);
                __os_log_error_impl(0x100000000,uVar23,0x10,"%{public}s: err == (%d)",&local_58,0x12
                                   );
              }
            }
            if (*(char *)((long)param_1 + 0x44) == '\x01') goto LAB_1002aedcd;
LAB_1002aef42:
            FUN_100300c1d(param_1,puVar22,0);
          }
          puVar22 = (undefined8 *)0x0;
          goto LAB_1002aec21;
        }
      }
      else {
        if (iVar21 == 0x48545450) {
          FUN_1002b067f(*(undefined8 *)((long)param_1 + 0x88),*(undefined4 *)((long)param_1 + 0x90),
                        puVar22 + 0x11,puVar22 + 0x12);
          uVar23 = *(undefined8 *)((long)param_1 + 0x98);
          uVar20 = *(undefined4 *)((long)param_1 + 0xa0);
          puVar30 = puVar22 + 0x13;
          puVar29 = puVar22 + 0x14;
        }
        else {
          if (iVar21 != 0x53485244) goto LAB_1002aeeaa;
          uVar23 = *(undefined8 *)((long)param_1 + 0x88);
          uVar20 = *(undefined4 *)((long)param_1 + 0x90);
          puVar30 = puVar22 + 0x11;
          puVar29 = puVar22 + 0x12;
        }
        FUN_1002b067f(uVar23,uVar20,puVar30,puVar29);
      }
LAB_1002aeeaa:
      FUN_100300c1d(param_1,puVar22,0);
      goto LAB_1002aec21;
    }
    uVar23 = FUN_1001cc310();
    cVar18 = _os_log_type_enabled(uVar23,0x10);
    if (cVar18 != '\0') {
      pcVar28 = "result != nullptr";
      goto LAB_1002aecaa;
    }
  }
  puVar22 = (undefined8 *)0x0;
  FUN_1001782e9(0,0);
LAB_1002aec21:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return puVar22;
}

