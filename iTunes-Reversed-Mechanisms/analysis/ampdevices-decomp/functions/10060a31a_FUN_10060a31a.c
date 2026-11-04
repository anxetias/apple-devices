// name: FUN_10060a31a
// address: 10060a31a

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_10060a31a(long param_1)

{
  long lVar1;
  double dVar2;
  double dVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  int iVar10;
  bool bVar11;
  int *local_88;
  long local_80;
  undefined4 local_78;
  undefined8 local_74;
  undefined4 local_68;
  undefined8 local_64;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar8 = *(long *)(param_1 + 0x10);
  lVar1 = *(long *)(param_1 + 0x18);
  local_88 = (int *)0x0;
  dVar2 = (double)FUN_1001ebd46();
  if (lVar8 == 0) {
LAB_10060a3fa:
    uVar7 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar7,0x10);
    if (cVar4 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "DulcimerHandlerDataIsValid(handlerData)";
      __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    if (*(int *)(lVar8 + 8) != 0x64756c63) {
      uVar7 = FUN_1001cc310();
      cVar4 = _os_log_type_enabled(uVar7,0x10);
      if (cVar4 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure (expected to be true)";
        local_4c = 0x822;
        local_4a = "handlerData->magic == kDulcimerHandlerDataMagic";
        __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      cVar4 = FUN_1001782e9(0,1);
      if (cVar4 == '\0') goto LAB_10060a3fa;
    }
    if (lVar1 != 0) {
      if (*(int *)(lVar1 + 0x80) != 0x74646174) {
        uVar7 = FUN_1001cc310();
        cVar4 = _os_log_type_enabled(uVar7,0x10);
        if (cVar4 != '\0') {
          local_58 = 0x8220202;
          local_54 = "Assertion failure (expected to be true)";
          local_4c = 0x822;
          local_4a = "trackData->magic == \'tdat\'";
          __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
        }
        cVar4 = FUN_1001782e9(0,1);
        if (cVar4 == '\0') goto LAB_10060a422;
      }
      if (*(char *)(lVar8 + 0x3a2) == '\0') {
        bVar11 = true;
      }
      else {
        bVar11 = (*(byte *)(lVar8 + 0x166e0) & 0xc) == 0;
      }
      local_80 = lVar8;
      FUN_100313e0b(*(undefined8 *)(lVar8 + 0x30));
      FUN_100313e0b(lVar1);
      for (lVar8 = FUN_1002f930c(*(undefined8 *)(local_80 + 0x30)); lVar8 != 0;
          lVar8 = FUN_1002f9451(lVar8)) {
        if ((bVar11) || (cVar4 = FUN_1004ebf47(local_80,lVar8), cVar4 == '\0')) {
          if (*(long *)(lVar8 + 0x188) != 0) {
            lVar9 = FUN_100300729(lVar1);
            if (lVar9 != 0) {
              FUN_10061ccf4(lVar9,lVar8);
              goto LAB_10060a69a;
            }
            if (DAT_1008c75c0 != -1) {
              _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
            }
            uVar7 = DAT_1008c75b8;
            cVar4 = _os_log_type_enabled(DAT_1008c75b8,1);
            if (cVar4 != '\0') {
              FUN_100476ac1(&local_58,lVar8);
              local_74 = FUN_1001b83ae(&local_58);
              local_78 = 0x8220102;
              __os_log_impl(0x100000000,uVar7,1,
                            "sync> did not find track \"%{public}s\" by persistent id for play counts"
                            ,&local_78,0xc);
              FUN_1001b7a50(&local_58);
            }
          }
          if ((local_88 == (int *)0x0) && (iVar5 = FUN_100594adc(&local_88,0), iVar5 != 0)) {
            if (iVar5 == -0x80) goto LAB_10060abc8;
            uVar7 = FUN_1001cc310();
            cVar4 = _os_log_type_enabled(uVar7,0x10);
            if (cVar4 == '\0') goto LAB_10060abc8;
            local_4a = (char *)CONCAT44(local_4a._4_4_,iVar5);
            goto LAB_10060abb5;
          }
          iVar5 = FUN_10059563f(local_88,lVar8,0);
          if (iVar5 != 0) {
            if (iVar5 == -0x80) goto LAB_10060abc8;
            uVar7 = FUN_1001cc310();
            cVar4 = _os_log_type_enabled(uVar7,0x10);
            if (cVar4 == '\0') goto LAB_10060abc8;
            local_4a = (char *)CONCAT44(local_4a._4_4_,iVar5);
            goto LAB_10060abb5;
          }
        }
        else if ((*(int *)(lVar8 + 0x148) != 0) || (*(int *)(lVar8 + 0x154) != 0)) {
          FUN_1001c62d9(&local_58,0x20);
          if (*(int *)(lVar8 + 0x148) != 0) {
            *(undefined4 *)(lVar8 + 0x148) = 0;
            FUN_1005389ba(&local_58,0x16);
          }
          if (*(int *)(lVar8 + 0x154) != 0) {
            *(undefined4 *)(lVar8 + 0x154) = 0;
            FUN_1005389ba(&local_58,0x44);
          }
          FUN_1004755ef(lVar8,0,&local_58);
          if (DAT_1008c75c0 != -1) {
            _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
          }
          uVar7 = DAT_1008c75b8;
          cVar4 = _os_log_type_enabled(DAT_1008c75b8,1);
          if (cVar4 != '\0') {
            FUN_100476ac1(&local_78,lVar8);
            local_64 = FUN_1001b83ae(&local_78);
            local_68 = 0x8220102;
            __os_log_impl(0x100000000,uVar7,1,
                          "sync> ignoring play counts for cloud track \"%{public}s\"",&local_68,0xc)
            ;
            FUN_1001b7a50(&local_78);
          }
        }
LAB_10060a69a:
      }
      if ((((local_88 != (int *)0x0) && (*local_88 == 0x4f4c5354)) && (local_88[1] != 0)) &&
         (iVar6 = (int)((ulong)(*(long *)(local_88 + 4) - *(long *)(local_88 + 2)) >> 3) *
                  -0x49249249, iVar6 != 0)) {
        iVar10 = 0;
        do {
          lVar8 = FUN_1005968ea(local_88,iVar10,0);
          if (lVar8 == 0) {
            uVar7 = FUN_1001cc310();
            cVar4 = _os_log_type_enabled(uVar7,0x10);
            if (cVar4 != '\0') {
              local_58 = 0x8220202;
              local_54 = "Assertion failure";
              local_4c = 0x822;
              local_4a = "destTrackInfo != nullptr";
              __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
            }
            FUN_1001782e9(0,0);
          }
          else {
            if (DAT_1008c7808 == '\0') {
              FUN_100538abf(&DAT_1008c77e8,&DAT_100753530);
              DAT_1008c7808 = '\x01';
            }
            _DAT_1008c77d8 = _DAT_1008c77f8;
            uRam00000001008c77e0 = uRam00000001008c7800;
            _DAT_1008c77c8 = _DAT_1008c77e8;
            uRam00000001008c77cc = uRam00000001008c77ec;
            uRam00000001008c77d0 = uRam00000001008c77f0;
            uRam00000001008c77d4 = uRam00000001008c77f4;
            if (*(char *)(local_80 + 0x390) == '\0') {
              bVar11 = false;
            }
            else {
              bVar11 = *(char *)(local_80 + 0x14d18) != '\0';
            }
            lVar9 = FUN_100306b8c(lVar1,lVar8,&DAT_1008c77c8,0,0,bVar11);
            if (lVar9 == 0) {
              if (DAT_1008c75c0 != -1) {
                _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
              }
              uVar7 = DAT_1008c75b8;
              cVar4 = _os_log_type_enabled(DAT_1008c75b8,1);
              if (cVar4 != '\0') {
                FUN_100476ac1(&local_58,lVar8);
                local_74 = FUN_1001b83ae(&local_58);
                local_78 = 0x8220102;
                __os_log_impl(0x100000000,uVar7,1,
                              "sync> did not find track \"%{public}s\" by matching fields for play counts"
                              ,&local_78,0xc);
                FUN_1001b7a50(&local_58);
              }
            }
            else {
              FUN_10061ccf4(lVar9,lVar8);
            }
            iVar5 = FUN_1006020dd(param_1);
            if (iVar5 != 0) {
              if (iVar5 != -0x80) {
                uVar7 = FUN_1001cc310();
                cVar4 = _os_log_type_enabled(uVar7,0x10);
                if (cVar4 != '\0') {
                  local_4a = (char *)CONCAT44(local_4a._4_4_,iVar5);
LAB_10060abb5:
                  local_4c = 0x400;
                  local_54 = "Assertion failure";
                  local_58 = 0x8220202;
                  __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: err == (%d)",&local_58,
                                      0x12);
                }
              }
              goto LAB_10060abc8;
            }
          }
          iVar10 = iVar10 + 1;
        } while (iVar6 != iVar10);
      }
      lVar8 = FUN_100315ede(*(undefined8 *)(local_80 + 0x30));
      iVar5 = 0;
      if (lVar8 != 0) {
        do {
          lVar9 = FUN_10048b5ec(lVar1,*(undefined8 *)(lVar8 + 0x60));
          if (lVar9 == 0) {
            if (DAT_1008c75c0 != -1) {
              _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
            }
            uVar7 = DAT_1008c75b8;
            cVar4 = _os_log_type_enabled(DAT_1008c75b8,1);
            if (cVar4 != '\0') {
              FUN_100486d8f(&local_58,lVar8);
              local_74 = FUN_1001b83ae(&local_58);
              local_78 = 0x8220102;
              __os_log_impl(0x100000000,uVar7,1,
                            "sync> did not find playlist \"%{public}s\" by persistent id for play data"
                            ,&local_78,0xc);
              FUN_1001b7a50(&local_58);
            }
          }
          else {
            FUN_10036389b(lVar9,lVar8);
          }
          lVar8 = FUN_100316031(lVar8);
        } while (lVar8 != 0);
      }
LAB_10060abc8:
      FUN_1002fbbfc(*(undefined8 *)(local_80 + 0x30));
      FUN_1002fbbfc(lVar1);
      FUN_100595344(local_88);
      if (DAT_1008c75c0 != -1) {
        _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
      }
      uVar7 = DAT_1008c75b8;
      cVar4 = _os_log_type_enabled(DAT_1008c75b8,1);
      if (cVar4 != '\0') {
        dVar3 = (double)FUN_1001ebd46();
        local_54 = (char *)((dVar3 - dVar2) * _DAT_100708b48);
        local_58 = 0x8000100;
        __os_log_impl(0x100000000,uVar7,1,"perf> SynchronizeIPodPlayCounts() took %.2f ms",&local_58
                      ,0xc);
      }
      goto LAB_10060a44e;
    }
LAB_10060a422:
    uVar7 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar7,0x10);
    if (cVar4 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "TrackDataIsValid(libraryTrackData)";
      __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
  }
  iVar5 = -0x32;
LAB_10060a44e:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar5;
}

