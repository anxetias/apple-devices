// name: FUN_1002c94d6
// address: 1002c94d6

int FUN_1002c94d6(undefined8 *param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  void *pvVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  char *pcVar13;
  uint uVar14;
  undefined4 *puVar15;
  long *plVar16;
  undefined4 local_6a8;
  undefined4 uStack_6a4;
  undefined4 uStack_6a0;
  undefined4 uStack_69c;
  undefined8 local_698;
  long *local_690;
  long *local_688;
  undefined8 *local_680;
  undefined4 local_678;
  undefined4 local_674;
  undefined4 uStack_670;
  undefined2 uStack_66c;
  undefined2 uStack_66a;
  undefined2 uStack_668;
  undefined4 uStack_666;
  undefined1 local_258 [512];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined2 uStack_4c;
  undefined2 uStack_4a;
  undefined2 uStack_48;
  undefined4 uStack_46;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (*(char *)(param_2 + 0x35f) == '\0') {
    uVar9 = FUN_1001cc310();
    cVar5 = _os_log_type_enabled(uVar9,0x10);
    if (cVar5 != '\0') {
      local_678 = 0x8220202;
      local_674 = 0x7a0a90;
      uStack_670 = 1;
      uStack_66c = 0x822;
      uStack_66a = 0xbc52;
      uStack_668 = 0x7b;
      uStack_666 = 1;
      __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_678,0x16);
    }
    FUN_1001782e9(0,0);
    iVar6 = -0x32;
    goto LAB_1002c9b30;
  }
  lVar3 = *(long *)(param_2 + 0x30);
  if (lVar3 == 0) {
    uVar9 = FUN_1001cc310();
    cVar5 = _os_log_type_enabled(uVar9,0x10);
    if (cVar5 != '\0') {
      local_678 = 0x8220202;
      local_674 = 0x7a0a90;
      uStack_670 = 1;
      uStack_66c = 0x822;
      uStack_66a = 0x1013;
      uStack_668 = 0x7b;
      uStack_666 = 1;
      __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_678,0x16);
    }
    FUN_1001782e9(0,0);
    iVar6 = -0x1c;
    goto LAB_1002c9b30;
  }
  FUN_1001c62d9(param_1 + 0x113,0x18);
  *(undefined4 *)(param_1 + 0x113) = *(undefined4 *)(param_2 + 0x71b4);
  FUN_1001c631b(param_2 + 0x71a0,(long)param_1 + 0x89c);
  FUN_100626980(&local_678);
  plVar16 = param_1 + 1;
  FUN_100217418(plVar16,&local_678);
  plVar2 = (long *)CONCAT26(uStack_66a,CONCAT24(uStack_66c,uStack_670));
  if (plVar2 != (long *)0x0) {
    LOCK();
    plVar1 = plVar2 + 1;
    lVar11 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar11 == 0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (*plVar16 == 0) {
    uVar9 = FUN_1001cc310();
    cVar5 = _os_log_type_enabled(uVar9,0x10);
    if (cVar5 != '\0') {
      puVar15 = &local_678;
      local_678 = 0x8220202;
      local_674 = 0x7a0a90;
      uStack_670 = 1;
      uStack_66c = 0x822;
      pcVar13 = "mDatabase != __null";
LAB_1002c9ccb:
      *(char **)((long)puVar15 + 0xe) = pcVar13;
      __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",puVar15,0x16);
    }
LAB_1002c9a90:
    FUN_1001782e9(0,0);
    iVar6 = -0x6c;
    goto LAB_1002c9ac7;
  }
  iVar6 = FUN_100628c8c(*plVar16,&DAT_10085a410,4);
  if (iVar6 == -0x80) goto LAB_1002c9ac7;
  if (iVar6 != 0) {
    uVar9 = FUN_1001cc310();
    cVar5 = _os_log_type_enabled(uVar9,0x10);
    if (cVar5 != '\0') {
      puVar15 = &local_678;
      local_678 = 0x8220202;
      local_674 = 0x7a0a90;
      uStack_670 = 1;
      uStack_66c = 0x400;
      uStack_66a = (undefined2)iVar6;
      uStack_668 = (undefined2)((uint)iVar6 >> 0x10);
      goto LAB_1002c9d27;
    }
    goto LAB_1002c9abe;
  }
  puVar8 = operator_new(0x10,(nothrow_t *)PTR_nothrow_10082c970);
  if (puVar8 == (undefined8 *)0x0) {
    *param_1 = 0;
    uVar9 = FUN_1001cc310();
    cVar5 = _os_log_type_enabled(uVar9,0x10);
    if (cVar5 != '\0') {
      puVar15 = &local_678;
      local_678 = 0x8220202;
      local_674 = 0x7a0a90;
      uStack_670 = 1;
      uStack_66c = 0x822;
      pcVar13 = "mTrackDataSQL != __null";
      goto LAB_1002c9ccb;
    }
    goto LAB_1002c9a90;
  }
  *puVar8 = 0;
  puVar8[1] = 0;
  *param_1 = puVar8;
  local_6a8 = *(undefined4 *)(param_1 + 1);
  uStack_6a4 = *(undefined4 *)((long)param_1 + 0xc);
  uStack_6a0 = *(undefined4 *)(param_1 + 2);
  uStack_69c = *(undefined4 *)((long)param_1 + 0x14);
  if (param_1[2] != 0) {
    LOCK();
    plVar2 = (long *)(param_1[2] + 8);
    *plVar2 = *plVar2 + 1;
    UNLOCK();
  }
  local_688 = plVar16;
  FUN_100203686(puVar8,&local_6a8);
  plVar16 = (long *)CONCAT44(uStack_69c,uStack_6a0);
  if (plVar16 != (long *)0x0) {
    LOCK();
    plVar2 = plVar16 + 1;
    lVar11 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar11 == 0) {
      (**(code **)(*plVar16 + 0x10))(plVar16);
      std::__shared_weak_count::__release_weak();
    }
  }
  FUN_1002cd170(param_1 + 0x122,param_1[0x123]);
  param_1[0x122] = param_1 + 0x123;
  param_1[0x123] = 0;
  param_1[0x124] = 0;
  iVar6 = FUN_1004692e8(*param_1,lVar3,param_1 + 0x122);
  plVar16 = local_688;
  if (iVar6 == -0x80) goto LAB_1002c9ac7;
  if (iVar6 == 0) {
    local_690 = param_1 + 10;
    _memcpy(local_690,(void *)(param_2 + 0x16218),0x420);
    uVar14 = (uint)(*(char *)(param_2 + 0x364) != '\0');
    *(uint *)(param_1 + 0x112) = uVar14;
    if (*(char *)(param_2 + 0x374) != '\0') {
      *(uint *)(param_1 + 0x112) = uVar14 | 2;
    }
    *(uint *)((long)param_1 + 0x894) =
         (uint)((*(uint *)(param_2 + 0x284) & 0xfffffffe) != 0x10) * 0x10 + 0x7f;
    lVar11 = *(long *)(param_2 + 0x7168);
    if (lVar11 != 0) {
      uVar9 = _CFStringGetTypeID();
      local_680 = (undefined8 *)
                  FUN_1005ba383(lVar11,&cf_com_apple_international,&cf_Language,uVar9,0);
      uVar9 = *(undefined8 *)(param_2 + 0x7168);
      uVar10 = _CFDictionaryGetTypeID();
      lVar11 = FUN_1005ba383(uVar9,&cf_com_apple_international,&cf_SortSections,uVar10,0);
      if (lVar11 != 0 && local_680 != (undefined8 *)0x0) {
        lVar12 = FUN_10039f0f0(local_680,lVar11);
        param_1[0x127] = lVar12;
        if (lVar12 == 0) {
          local_698 = FUN_1001cc310(local_680);
          cVar5 = _os_log_type_enabled(local_698,0x10);
          if (cVar5 != '\0') {
            local_678 = 0x8220202;
            local_674 = 0x7a0a90;
            uStack_670 = 1;
            uStack_66c = 0x822;
            uStack_66a = 0xbcd2;
            uStack_668 = 0x7b;
            uStack_666 = 1;
            __os_log_error_impl(0x100000000,local_698,0x10,"%{public}s: (%{public}s)",&local_678,
                                0x16);
          }
          FUN_1001782e9(0,0);
        }
      }
      FUN_10017060f(local_680);
      FUN_10017060f(lVar11);
    }
    if (*(char *)((long)param_1 + 0x1c) == '\x01') {
      iVar6 = FUN_10018e9e7(&local_678);
      if (iVar6 != -0x80) {
        if (iVar6 == 0) {
          FUN_1001e04f5("iTunes Library.itlp",local_258);
          local_680 = param_1 + 0x8e;
          iVar6 = FUN_10017ecc9(&local_678,local_258,local_680,0);
          if (iVar6 == -0x2b) {
            iVar6 = FUN_100181256(&local_678,local_258,local_680);
          }
          if (iVar6 != -0x80) {
            if (iVar6 == 0) goto LAB_1002c987b;
            uVar9 = FUN_1001cc310();
            cVar5 = _os_log_type_enabled(uVar9,0x10);
            if (cVar5 != '\0') {
              puVar15 = &local_58;
              local_58 = 0x8220202;
              uStack_54 = 0x7a0a90;
              uStack_50 = 1;
              uStack_4c = 0x400;
              uStack_4a = (undefined2)iVar6;
              uStack_48 = (undefined2)((uint)iVar6 >> 0x10);
              goto LAB_1002c9d27;
            }
          }
        }
        else {
          uVar9 = FUN_1001cc310();
          cVar5 = _os_log_type_enabled(uVar9,0x10);
          if (cVar5 != '\0') {
            puVar15 = &local_58;
            local_58 = 0x8220202;
            uStack_54 = 0x7a0a90;
            uStack_50 = 1;
            uStack_4c = 0x400;
            uStack_4a = (undefined2)iVar6;
            uStack_48 = (undefined2)((uint)iVar6 >> 0x10);
            goto LAB_1002c9d27;
          }
        }
      }
      goto LAB_1002c9abe;
    }
LAB_1002c987b:
    FUN_1001e04f5("DBTemp",local_258);
    iVar6 = FUN_10017ecc9(local_690,local_258,&local_678,0);
    if (((iVar6 == 0) && (iVar6 = FUN_100182d59(&local_678,1), iVar6 != -0x80)) && (iVar6 != 0)) {
      local_680 = (undefined8 *)FUN_1001cc310();
      cVar5 = _os_log_type_enabled(local_680,0x10);
      if (cVar5 != '\0') {
        local_58 = 0x8220202;
        uStack_54 = 0x7a0a90;
        uStack_50 = 1;
        uStack_4c = 0x400;
        uStack_4a = (undefined2)iVar6;
        uStack_48 = (undefined2)((uint)iVar6 >> 0x10);
        __os_log_error_impl(0x100000000,local_680,0x10,"%{public}s: err == (%d)",&local_58,0x12);
      }
    }
    iVar6 = FUN_100467456(*param_1,lVar3,param_1 + 0x116,param_1 + 0x117);
    if (iVar6 != -0x80) {
      if (iVar6 == 0) {
        iVar6 = FUN_10046866a(*param_1,lVar3,param_1 + 0x118,param_1 + 0x119);
        if (iVar6 == -0x80) goto LAB_1002c9ac7;
        if (iVar6 == 0) {
          iVar6 = FUN_100468926(*param_1,lVar3,param_1 + 0x11a,param_1 + 0x11b);
          if (iVar6 == -0x80) goto LAB_1002c9ac7;
          if (iVar6 == 0) {
            iVar6 = FUN_100468c0a(*param_1,lVar3,param_1 + 0x11c,param_1 + 0x11d);
            if (iVar6 == -0x80) goto LAB_1002c9ac7;
            if (iVar6 == 0) {
              uVar14 = *(uint *)(lVar3 + 0x98);
              *(uint *)(param_1 + 0x11e) = uVar14;
              if ((ulong)uVar14 != 0) {
                lVar11 = FUN_1001c6429((ulong)uVar14 << 4);
                param_1[0x11f] = lVar11;
                if (lVar11 == 0) {
                  uVar9 = FUN_1001cc310();
                  cVar5 = _os_log_type_enabled(uVar9,0x10);
                  if (cVar5 != '\0') {
                    puVar15 = &local_58;
                    local_58 = 0x8220202;
                    uStack_54 = 0x7a0a90;
                    uStack_50 = 1;
                    uStack_4c = 0x822;
                    pcVar13 = "mPlaylistMediaKinds != __null";
                    goto LAB_1002c9ccb;
                  }
                  goto LAB_1002c9a90;
                }
                lVar11 = FUN_100315ede(lVar3);
                if (lVar11 == 0) {
                  uVar14 = 0;
                }
                else {
                  puVar8 = (undefined8 *)0x0;
                  local_690 = param_1 + 0x11f;
                  do {
                    *(undefined8 *)(param_1[0x11f] + (long)puVar8 * 0x10) =
                         *(undefined8 *)(lVar11 + 0x60);
                    local_680 = puVar8;
                    uVar7 = FUN_1004919da(lVar11,0);
                    *(undefined4 *)(*local_690 + 8 + (long)puVar8 * 0x10) = uVar7;
                    lVar11 = FUN_100316031(lVar11);
                    uVar14 = (int)local_680 + 1;
                    puVar8 = (undefined8 *)(ulong)uVar14;
                  } while (lVar11 != 0);
                }
                if (uVar14 != *(uint *)(param_1 + 0x11e)) {
                  uVar9 = FUN_1001cc310();
                  cVar5 = _os_log_type_enabled(uVar9,0x10);
                  if (cVar5 != '\0') {
                    local_58 = 0x8220202;
                    uStack_54 = 0x7a0a90;
                    uStack_50 = 1;
                    uStack_4c = 0x822;
                    uStack_4a = 0xbd25;
                    uStack_48 = 0x7b;
                    uStack_46 = 1;
                    __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_58,
                                        0x16);
                  }
                  FUN_1001782e9(0,0);
                }
              }
              iVar6 = FUN_100467fc8(*param_1,lVar3,param_1 + 0x121,param_1 + 0x120);
              plVar16 = local_688;
              if (iVar6 == -0x80) goto LAB_1002c9ac7;
              if (iVar6 == 0) {
                uVar9 = *(undefined8 *)(param_2 + 0x66d8);
                uVar10 = _CFDictionaryGetTypeID();
                uVar9 = FUN_10059ca0a(uVar9,&
                                            cf_com_apple_mobile_iTunes_SQLMusicLibraryPostProcessCommands
                                      ,uVar10);
                param_1[0x125] = uVar9;
                uVar9 = FUN_1001705fc(uVar9);
                param_1[0x125] = uVar9;
                uVar9 = FUN_100309008(lVar3);
                iVar6 = 0;
                _snprintf((char *)((long)param_1 + 0x1d),0x30,"MEM%llX",uVar9);
                goto LAB_1002c9b30;
              }
              uVar9 = FUN_1001cc310();
              cVar5 = _os_log_type_enabled(uVar9,0x10);
              plVar16 = local_688;
              if (cVar5 != '\0') {
                local_58 = 0x8220202;
                uStack_54 = 0x7a0a90;
                uStack_50 = 1;
                uStack_4c = 0x400;
                uStack_4a = (undefined2)iVar6;
                uStack_48 = (undefined2)((uint)iVar6 >> 0x10);
                __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: err == (%d)",&local_58,0x12)
                ;
                plVar16 = local_688;
              }
            }
            else {
              uVar9 = FUN_1001cc310();
              cVar5 = _os_log_type_enabled(uVar9,0x10);
              if (cVar5 != '\0') {
                puVar15 = &local_58;
                local_58 = 0x8220202;
                uStack_54 = 0x7a0a90;
                uStack_50 = 1;
                uStack_4c = 0x400;
                uStack_4a = (undefined2)iVar6;
                uStack_48 = (undefined2)((uint)iVar6 >> 0x10);
                goto LAB_1002c9d27;
              }
            }
          }
          else {
            uVar9 = FUN_1001cc310();
            cVar5 = _os_log_type_enabled(uVar9,0x10);
            if (cVar5 != '\0') {
              puVar15 = &local_58;
              local_58 = 0x8220202;
              uStack_54 = 0x7a0a90;
              uStack_50 = 1;
              uStack_4c = 0x400;
              uStack_4a = (undefined2)iVar6;
              uStack_48 = (undefined2)((uint)iVar6 >> 0x10);
              goto LAB_1002c9d27;
            }
          }
        }
        else {
          uVar9 = FUN_1001cc310();
          cVar5 = _os_log_type_enabled(uVar9,0x10);
          if (cVar5 != '\0') {
            puVar15 = &local_58;
            local_58 = 0x8220202;
            uStack_54 = 0x7a0a90;
            uStack_50 = 1;
            uStack_4c = 0x400;
            uStack_4a = (undefined2)iVar6;
            uStack_48 = (undefined2)((uint)iVar6 >> 0x10);
            goto LAB_1002c9d27;
          }
        }
      }
      else {
        uVar9 = FUN_1001cc310();
        cVar5 = _os_log_type_enabled(uVar9,0x10);
        if (cVar5 != '\0') {
          puVar15 = &local_58;
          local_58 = 0x8220202;
          uStack_54 = 0x7a0a90;
          uStack_50 = 1;
          uStack_4c = 0x400;
          uStack_4a = (undefined2)iVar6;
          uStack_48 = (undefined2)((uint)iVar6 >> 0x10);
LAB_1002c9d27:
          __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: err == (%d)",puVar15,0x12);
        }
      }
      goto LAB_1002c9abe;
    }
  }
  else {
    uVar9 = FUN_1001cc310();
    cVar5 = _os_log_type_enabled(uVar9,0x10);
    if (cVar5 != '\0') {
      puVar15 = &local_678;
      local_678 = 0x8220202;
      local_674 = 0x7a0a90;
      uStack_670 = 1;
      uStack_66c = 0x400;
      uStack_66a = (undefined2)iVar6;
      uStack_668 = (undefined2)((uint)iVar6 >> 0x10);
      goto LAB_1002c9d27;
    }
LAB_1002c9abe:
    if (iVar6 == 0) {
      iVar6 = 0;
      goto LAB_1002c9b30;
    }
  }
LAB_1002c9ac7:
  FUN_1002c93ec(param_1);
  local_58 = 0;
  uStack_54 = 0;
  uStack_50 = 0;
  uStack_4c = 0;
  uStack_4a = 0;
  FUN_100217418(plVar16,&local_58);
  plVar16 = (long *)CONCAT26(uStack_4a,CONCAT24(uStack_4c,uStack_50));
  if (plVar16 != (long *)0x0) {
    LOCK();
    plVar2 = plVar16 + 1;
    lVar3 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar3 == 0) {
      (**(code **)(*plVar16 + 0x10))(plVar16);
      std::__shared_weak_count::__release_weak();
    }
  }
  pvVar4 = (void *)*param_1;
  if (pvVar4 != (void *)0x0) {
    FUN_100467338(pvVar4);
    operator_delete(pvVar4);
  }
  *param_1 = 0;
LAB_1002c9b30:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar6;
}

