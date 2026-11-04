// name: FUN_10037e1fc
// address: 10037e1fc

uint FUN_10037e1fc(undefined8 param_1,undefined8 *param_2,uint param_3,uint param_4)

{
  long *plVar1;
  long *plVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  char cVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  char *pcVar12;
  long *plVar13;
  uint uVar14;
  bool bVar15;
  long local_c8;
  long *local_c0;
  long local_b8;
  long *plStack_b0;
  long local_a8;
  long *plStack_a0;
  uint local_90;
  uint local_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  uint local_74;
  uint local_70;
  uint local_6c;
  ulong local_68;
  byte local_59;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined2 uStack_4c;
  undefined2 uStack_4a;
  undefined2 uStack_48;
  undefined4 uStack_46;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_70 = param_3;
  local_6c = param_4;
  if ((param_2 == (undefined8 *)0x0) || ((int *)*param_2 == (int *)0x0)) {
LAB_10037e44a:
    uVar9 = FUN_1001cc310();
    cVar8 = _os_log_type_enabled(uVar9,0x10);
    if (cVar8 != '\0') {
      pcVar12 = "PlaylistItemIsValid(inPlaylistItem)";
LAB_10037e4fe:
      uStack_50 = 1;
      uStack_54 = 0x7a0a90;
      uStack_4c = 0x822;
      local_58 = 0x8220202;
      uStack_4a = SUB82(pcVar12,0);
      uStack_48 = (undefined2)((ulong)pcVar12 >> 0x10);
      uStack_46 = (undefined4)((ulong)pcVar12 >> 0x20);
      __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: err == (%d)",&local_58,0x16);
    }
  }
  else {
    if (*(int *)*param_2 != 0x706c7374) {
      uVar9 = FUN_1001cc310();
      cVar8 = _os_log_type_enabled(uVar9,0x10);
      if (cVar8 != '\0') {
        local_58 = 0x8220202;
        uStack_54 = 0x7ab58c;
        uStack_50 = 1;
        uStack_4c = 0x822;
        uStack_4a = 0x2d50;
        uStack_48 = 0x7b;
        uStack_46 = 1;
        __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: err == (%d)",&local_58,0x16);
      }
      cVar8 = FUN_1001782e9(0,1);
      if (cVar8 == '\0') goto LAB_10037e44a;
    }
    if (*(int *)(param_2 + 8) == 0) goto LAB_10037e44a;
    if (param_2[2] == 0) {
      uVar9 = FUN_1001cc310();
      cVar8 = _os_log_type_enabled(uVar9,0x10);
      if (cVar8 == '\0') goto LAB_10037e463;
      pcVar12 = "inPlaylistItem->parent != nullptr";
      goto LAB_10037e4fe;
    }
    if (param_3 != 0) {
      FUN_10037c504(param_1,&local_70,&local_6c);
      local_59 = local_70 < 0x7a & (byte)local_6c;
      local_74 = param_4 & 0xfffffffe;
      if (local_59 == 0) {
        local_74 = param_4;
      }
      local_8c = local_70;
      local_a8 = 0;
      plStack_a0 = (long *)0x0;
      FUN_10037c504(param_1);
      uVar4 = local_74;
      uVar14 = local_8c;
      local_88 = 0;
      uStack_80 = (long *)0x0;
      local_b8 = 0;
      plStack_b0 = (long *)0x0;
      if ((local_8c == 0) ||
         (((local_8c - 0x2afc < 0xfffffffd && (0x70 < local_8c)) && (local_8c - 0x2737 < 0xffffffda)
          ))) {
        uVar9 = FUN_1001cc310();
        cVar8 = _os_log_type_enabled(uVar9,0x10);
        if (cVar8 != '\0') {
          pcVar12 = "IsValidTrackOrder(inSortOrder)";
LAB_10037e93c:
          uStack_4c = 0x822;
          uStack_50 = 1;
          uStack_54 = 0x7a0a90;
          local_58 = 0x8220202;
          uStack_4a = SUB82(pcVar12,0);
          uStack_48 = (undefined2)((ulong)pcVar12 >> 0x10);
          uStack_46 = (undefined4)((ulong)pcVar12 >> 0x20);
          __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: err == (%d)",&local_58,0x16);
        }
LAB_10037e357:
        FUN_1001782e9(0,0);
        local_68 = CONCAT44(local_68._4_4_,0xffffffce);
        bVar15 = false;
      }
      else {
        lVar10 = FUN_10037c952(param_1,local_8c,local_74,0,0);
        if (lVar10 != 0) {
          local_88 = *(ulong *)(lVar10 + 0x40);
          plVar13 = *(long **)(lVar10 + 0x48);
          if (plVar13 != (long *)0x0) {
            LOCK();
            plVar13[1] = plVar13[1] + 1;
            UNLOCK();
          }
          uStack_80 = plVar13;
          if (local_88 == 0) goto LAB_10037e6f7;
          goto LAB_10037e697;
        }
        plVar13 = (long *)0x0;
LAB_10037e6f7:
        FUN_10037d7c4(&local_58,param_1,uVar14,uVar4);
        local_b8 = CONCAT44(uStack_54,local_58);
        plStack_b0 = (long *)CONCAT26(uStack_4a,CONCAT24(uStack_4c,uStack_50));
        if (local_b8 == 0) {
          uVar9 = FUN_1001cc310();
          cVar8 = _os_log_type_enabled(uVar9,0x10);
          if (cVar8 != '\0') {
            local_58 = 0x8220202;
            uStack_54 = 0x7a0a90;
            uStack_50 = 1;
            uStack_4c = 0x822;
            uStack_4a = 0x6b1a;
            uStack_48 = 0x7c;
            uStack_46 = 1;
            __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: err == (%d)",&local_58,0x16);
          }
          bVar15 = false;
          FUN_1001782e9(0,0);
          local_68 = CONCAT44(local_68._4_4_,0xffffff94);
        }
        else {
          if (plStack_b0 != (long *)0x0) {
            LOCK();
            plStack_b0[1] = plStack_b0[1] + 1;
            UNLOCK();
          }
          local_c8 = local_b8;
          local_c0 = plStack_b0;
          FUN_10037b766(&local_58,0,&local_c8);
          uVar7 = uStack_50;
          uVar6 = uStack_54;
          uVar5 = local_58;
          uVar3 = CONCAT22(uStack_4a,uStack_4c);
          local_58 = 0;
          uStack_54 = 0;
          uStack_50 = 0;
          uStack_4c = 0;
          uStack_4a = 0;
          local_88 = CONCAT44(uVar6,uVar5);
          uStack_80 = (long *)CONCAT44(uVar3,uVar7);
          if (plVar13 != (long *)0x0) {
            LOCK();
            plVar2 = plVar13 + 1;
            lVar10 = *plVar2;
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (lVar10 == 0) {
              (**(code **)(*plVar13 + 0x10))(plVar13);
              std::__shared_weak_count::__release_weak();
            }
          }
          plVar13 = (long *)CONCAT26(uStack_4a,CONCAT24(uStack_4c,uStack_50));
          if (plVar13 != (long *)0x0) {
            LOCK();
            plVar2 = plVar13 + 1;
            lVar10 = *plVar2;
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (lVar10 == 0) {
              (**(code **)(*plVar13 + 0x10))(plVar13);
              std::__shared_weak_count::__release_weak();
            }
          }
          if (local_c0 != (long *)0x0) {
            LOCK();
            plVar13 = local_c0 + 1;
            lVar10 = *plVar13;
            *plVar13 = *plVar13 + -1;
            UNLOCK();
            if (lVar10 == 0) {
              (**(code **)(*local_c0 + 0x10))(local_c0);
              std::__shared_weak_count::__release_weak();
            }
          }
          plVar13 = uStack_80;
          if (local_88 == 0) {
            uVar9 = FUN_1001cc310();
            cVar8 = _os_log_type_enabled(uVar9,0x10);
            if (cVar8 != '\0') {
              pcVar12 = "indexLookupTable != nullptr";
              goto LAB_10037e93c;
            }
            goto LAB_10037e357;
          }
          local_68 = local_88;
          local_58 = (undefined4)local_88;
          uStack_54 = (undefined4)(local_88 >> 0x20);
          uStack_50 = SUB84(uStack_80,0);
          uStack_4c = (undefined2)((ulong)uStack_80 >> 0x20);
          uStack_4a = (undefined2)((ulong)uStack_80 >> 0x30);
          if (uStack_80 != (long *)0x0) {
            LOCK();
            uStack_80[1] = uStack_80[1] + 1;
            UNLOCK();
          }
          local_90 = uVar14;
          FUN_10037c504(param_1,&local_90,0);
          lVar10 = FUN_10037c952(param_1,local_90,uVar4,1,1);
          if (lVar10 == 0) {
            if (plVar13 != (long *)0x0) goto LAB_10037e9b9;
          }
          else {
            if (plVar13 != (long *)0x0) {
              LOCK();
              plVar13[1] = plVar13[1] + 1;
              UNLOCK();
            }
            if (local_68 != *(ulong *)(lVar10 + 0x40)) {
              FUN_100238d72(lVar10 + 0x40,local_68,plVar13);
            }
            if (plVar13 != (long *)0x0) {
              LOCK();
              plVar2 = plVar13 + 1;
              lVar10 = *plVar2;
              *plVar2 = *plVar2 + -1;
              UNLOCK();
              if (lVar10 == 0) {
                (**(code **)(*plVar13 + 0x10))(plVar13);
                std::__shared_weak_count::__release_weak();
              }
LAB_10037e9b9:
              LOCK();
              plVar2 = plVar13 + 1;
              lVar10 = *plVar2;
              *plVar2 = *plVar2 + -1;
              UNLOCK();
              local_68 = local_68 & 0xffffffff00000000;
              bVar15 = true;
              if (lVar10 == 0) {
                (**(code **)(*plVar13 + 0x10))(plVar13);
                std::__shared_weak_count::__release_weak();
                bVar15 = true;
              }
              goto LAB_10037e36a;
            }
          }
LAB_10037e697:
          local_68 = local_68 & 0xffffffff00000000;
          bVar15 = true;
        }
      }
LAB_10037e36a:
      if (plStack_b0 != (long *)0x0) {
        LOCK();
        plVar13 = plStack_b0 + 1;
        lVar10 = *plVar13;
        *plVar13 = *plVar13 + -1;
        UNLOCK();
        if (lVar10 == 0) {
          (**(code **)(*plStack_b0 + 0x10))(plStack_b0);
          std::__shared_weak_count::__release_weak();
        }
      }
      if (uStack_80 != (long *)0x0) {
        LOCK();
        plVar13 = uStack_80 + 1;
        lVar10 = *plVar13;
        *plVar13 = *plVar13 + -1;
        UNLOCK();
        if (lVar10 == 0) {
          (**(code **)(*uStack_80 + 0x10))(uStack_80);
          std::__shared_weak_count::__release_weak();
        }
      }
      if (bVar15) {
        lVar10 = FUN_10037c952(param_1,uVar14,local_74,0,0);
        plVar2 = plStack_a0;
        plVar13 = plStack_a0;
        if (lVar10 != 0) {
          local_a8 = *(long *)(lVar10 + 0x40);
          plVar13 = *(long **)(lVar10 + 0x48);
          if (plVar13 != (long *)0x0) {
            LOCK();
            plVar13[1] = plVar13[1] + 1;
            UNLOCK();
          }
          if (plStack_a0 != (long *)0x0) {
            LOCK();
            plVar1 = plStack_a0 + 1;
            lVar10 = *plVar1;
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (lVar10 == 0) {
              lVar10 = *plStack_a0;
              plStack_a0 = plVar13;
              (**(code **)(lVar10 + 0x10))(plVar2);
              std::__shared_weak_count::__release_weak();
              plVar13 = plStack_a0;
            }
          }
        }
      }
      else {
        uVar9 = FUN_1001cc310();
        cVar8 = _os_log_type_enabled(uVar9,0x10);
        plVar13 = plStack_a0;
        if (cVar8 != '\0') {
          local_58 = 0x8220202;
          uStack_54 = 0x7a0a90;
          uStack_50 = 1;
          uStack_4c = 0x400;
          uStack_4a = (undefined2)local_68;
          uStack_48 = (undefined2)(local_68 >> 0x10);
          __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: err == (%d)",&local_58,0x12);
          plVar13 = plStack_a0;
        }
      }
      plStack_a0 = plVar13;
      plVar13 = plStack_a0;
      if (local_a8 == 0) {
        uVar9 = FUN_1001cc310();
        cVar8 = _os_log_type_enabled(uVar9,0x10);
        if (cVar8 != '\0') {
          local_58 = 0x8220202;
          uStack_54 = 0x7a0a90;
          uStack_50 = 1;
          uStack_4c = 0x822;
          uStack_4a = 0x6b94;
          uStack_48 = 0x7c;
          uStack_46 = 1;
          __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: err == (%d)",&local_58,0x16);
        }
        uVar14 = 0xffffffff;
        FUN_1001782e9(0,0);
      }
      else {
        lVar10 = *(long *)(local_a8 + 0x18);
        uVar14 = 0xffffffff;
        if (lVar10 != 0) {
          lVar11 = local_a8 + 0x18;
          do {
            bVar15 = *(undefined8 **)(lVar10 + 0x20) < param_2;
            if (!bVar15) {
              lVar11 = lVar10;
            }
            lVar10 = *(long *)(lVar10 + (ulong)bVar15 * 8);
          } while (lVar10 != 0);
          if (((lVar11 != local_a8 + 0x18) && (*(undefined8 **)(lVar11 + 0x20) <= param_2)) &&
             (uVar14 = *(uint *)(lVar11 + 0x28), (local_59 & uVar14 != 0xffffffff) == 1)) {
            uVar14 = ~uVar14 + *(int *)(local_a8 + 0x20);
          }
        }
      }
      if (plVar13 != (long *)0x0) {
        LOCK();
        plVar2 = plVar13 + 1;
        lVar10 = *plVar2;
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (lVar10 == 0) {
          (**(code **)(*plVar13 + 0x10))(plVar13);
          std::__shared_weak_count::__release_weak();
        }
      }
      goto LAB_10037e472;
    }
    uVar9 = FUN_1001cc310();
    cVar8 = _os_log_type_enabled(uVar9,0x10);
    if (cVar8 != '\0') {
      pcVar12 = "inSortOrder != kTrackOrderInvalid";
      goto LAB_10037e4fe;
    }
  }
LAB_10037e463:
  uVar14 = 0xffffffff;
  FUN_1001782e9(0,0);
LAB_10037e472:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar14;
}

