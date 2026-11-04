// name: FUN_100593631
// address: 100593631

void FUN_100593631(long param_1,char param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  void *pvVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  bool bVar12;
  long local_70;
  ulong local_68;
  void *local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(uint *)(param_1 + 8);
  }
  uVar10 = (ulong)uVar2;
  local_60 = (void *)FUN_1001c63e1(uVar10 * 8);
  if (local_60 == (void *)0x0) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_58 = 0x8220202;
      uStack_54 = 0x7a0a90;
      uStack_50 = 1;
      local_4c = 0x822;
      local_4a = "imageInfoArray != nullptr";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    local_70 = FUN_100496019(param_1);
    if (uVar10 != 0 && local_70 != 0) {
      uVar7 = 1;
      do {
        *(long *)((long)local_60 + uVar7 * 8 + -8) = local_70;
        local_70 = FUN_1004960d0(local_70);
        if (local_70 == 0) break;
        bVar12 = uVar7 < uVar10;
        uVar7 = uVar7 + 1;
      } while (bVar12);
    }
    if (local_70 != 0) {
      uVar4 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar4,0x10);
      if (cVar1 != '\0') {
        local_58 = 0x8220202;
        uStack_54 = 0x7a0a90;
        uStack_50 = 1;
        local_4c = 0x822;
        local_4a = "imageInfo == nullptr";
        __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      FUN_1001782e9(0,0);
    }
    FUN_1001d26f2(local_60,uVar10,FUN_10059403e,0);
    for (lVar5 = FUN_100496392(param_1); lVar5 != 0; lVar5 = FUN_100496449(lVar5)) {
      uVar2 = *(uint *)(lVar5 + 0x50);
      uVar7 = (ulong)uVar2;
      if (uVar7 == 0) {
        lVar9 = *(long *)(lVar5 + 0x58);
        local_68 = 0;
        uVar7 = 0;
        lVar11 = lVar9;
LAB_100593817:
        uStack_54 = 1;
        local_58 = 0x59406d;
        pvVar6 = (void *)0x0;
        uVar8 = 0;
      }
      else {
        lVar11 = 0;
        uVar8 = 0;
        local_68 = 0;
        do {
          local_70 = *(long *)(*(long *)(lVar5 + 0x58) + lVar11);
          if (local_70 != 0) {
            if (((param_2 == '\0') || (*(char *)(local_70 + 0x83) == '\0')) &&
               (pvVar6 = _bsearch(&local_70,local_60,uVar10,8,(int *)FUN_100594054),
               pvVar6 != (void *)0x0)) {
              local_68 = (ulong)((int)local_68 + 1);
            }
            else {
              FUN_100496687(lVar5,uVar8 & 0xffffffff);
            }
          }
          uVar8 = uVar8 + 1;
          lVar11 = lVar11 + 0x10;
        } while (uVar7 != uVar8);
        lVar11 = *(long *)(lVar5 + 0x58);
        lVar9 = uVar7 * 0x10 + lVar11;
        local_58 = 0x59406d;
        uStack_54 = 1;
        uVar8 = uVar7;
        if (uVar2 < 0x81) goto LAB_100593817;
        do {
          pvVar6 = operator_new(uVar8 << 4,(nothrow_t *)PTR_nothrow_10082c970);
          if (pvVar6 != (void *)0x0) goto LAB_100593826;
          bVar12 = 1 < uVar8;
          uVar8 = uVar8 >> 1;
        } while (bVar12);
        pvVar6 = (void *)0x0;
        uVar8 = 0;
      }
LAB_100593826:
      FUN_100594083(lVar11,lVar9,&local_58,uVar7,pvVar6,uVar8);
      if (pvVar6 != (void *)0x0) {
        operator_delete(pvVar6);
      }
      *(int *)(lVar5 + 0x50) = (int)local_68;
      iVar3 = FUN_100591a43(lVar5);
      if (iVar3 != 0) {
        uVar4 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar4,0x10);
        if (cVar1 != '\0') {
          local_58 = 0x8220202;
          uStack_54 = 0x7a0a90;
          uStack_50 = 1;
          local_4c = 0x400;
          local_4a = (char *)CONCAT44(local_4a._4_4_,iVar3);
          __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_58,0x12);
        }
        break;
      }
    }
    FUN_1001c64c1(local_60);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

