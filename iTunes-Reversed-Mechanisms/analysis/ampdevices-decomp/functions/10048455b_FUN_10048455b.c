// name: FUN_10048455b
// address: 10048455b

undefined8 FUN_10048455b(int *param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  long lVar6;
  int iVar7;
  int iVar8;
  long *plVar9;
  undefined1 local_468 [392];
  undefined **local_2e0 [32];
  long *local_1e0;
  long local_1d8;
  long *plStack_1d0;
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  undefined4 local_1c0;
  undefined2 uStack_1bc;
  undefined2 uStack_1ba;
  undefined6 uStack_1b8;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_1d8 = 0;
  plStack_1d0 = (long *)0x0;
  ___bzero(local_468,0x188);
  FUN_10015805a(local_2e0);
  local_2e0[0] = &PTR_FUN_100854ac0;
  if (param_1 == (int *)0x0) {
LAB_10048473e:
    uVar5 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar5,0x10);
    if (cVar3 != '\0') {
      local_1c8 = 0x8220202;
      uStack_1c4 = 0x7a0a90;
      local_1c0 = 1;
      uStack_1bc = 0x822;
      uStack_1ba = 0xa159;
      uStack_1b8 = 0x1007b;
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_1c8,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    if (*param_1 != 0x706c7374) {
      uVar5 = FUN_1001cc310();
      cVar3 = _os_log_type_enabled(uVar5,0x10);
      if (cVar3 != '\0') {
        local_1c8 = 0x8220202;
        uStack_1c4 = 0x7ab58c;
        local_1c0 = 1;
        uStack_1bc = 0x822;
        uStack_1ba = 0x2d50;
        uStack_1b8 = 0x1007b;
        __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_1c8,0x16);
      }
      cVar3 = FUN_1001782e9(0,1);
      if (cVar3 == '\0') goto LAB_10048473e;
    }
    if (param_2 != 0) {
      uVar5 = FUN_1001cc310();
      cVar3 = _os_log_type_enabled(uVar5,0x10);
      if (cVar3 != '\0') {
        local_1c8 = 0x8220202;
        uStack_1c4 = 0x7a0a90;
        local_1c0 = 1;
        uStack_1bc = 0x822;
        uStack_1ba = 0x223a;
        uStack_1b8 = 0x1007d;
        __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_1c8,0x16);
      }
      FUN_1001782e9(0,0);
    }
    if (((*(byte *)(param_1 + 0x90) & 1) == 0) && (*(int *)(*(long *)(param_1 + 0x1e) + 0x18) != 0))
    {
      param_1[0x8f] = param_1[0x8f] + 1;
      FUN_100360d56(&local_1c8,local_2e0,PTR_cf_smartShuffleOptions_100854aa8);
      _memcpy(local_468,&local_1c8,0x188);
      uVar4 = FUN_10015829e(local_2e0,PTR_cf_keepAlbumsTogether_100854a78);
      FUN_10037f23e(&local_1c8,param_1,param_2,uVar4,0,local_468);
      lVar2 = CONCAT44(uStack_1c4,local_1c8);
      plVar9 = (long *)CONCAT26(uStack_1ba,CONCAT24(uStack_1bc,local_1c0));
      local_1d8 = lVar2;
      plStack_1d0 = plVar9;
      if (lVar2 == 0) {
        uVar5 = 0;
      }
      else {
        iVar8 = (int)((ulong)(*(long *)(lVar2 + 0x18) - *(long *)(lVar2 + 0x10)) >> 3);
        local_1e0 = plVar9;
        if (iVar8 != 0) {
          iVar7 = 0;
          do {
            lVar6 = FUN_10037b3b0(lVar2,iVar7);
            if (lVar6 != 0) {
              *(int *)(lVar6 + 0x44) = iVar7;
            }
            iVar7 = iVar7 + 1;
          } while (iVar8 != iVar7);
        }
        FUN_1004848f8(param_1,0x48);
        plVar9 = local_1e0;
        uVar5 = 1;
        FUN_1001c6987(param_1 + 0x32,0x63736866,param_1,param_2,0);
      }
      FUN_10015811a(local_2e0);
      if (plVar9 != (long *)0x0) {
        LOCK();
        plVar1 = plVar9 + 1;
        lVar2 = *plVar1;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (lVar2 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
          std::__shared_weak_count::__release_weak();
        }
      }
      goto LAB_10048476f;
    }
  }
  FUN_10015811a(local_2e0);
  uVar5 = 0;
LAB_10048476f:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

