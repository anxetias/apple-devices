// name: FUN_10060aced
// address: 10060aced

int FUN_10060aced(long param_1)

{
  long lVar1;
  long lVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  undefined1 local_88 [16];
  ulong local_78;
  long local_70;
  long local_68;
  long local_60;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar1 = *(long *)(param_1 + 0x10);
  local_68 = *(long *)(param_1 + 0x20);
  local_60 = param_1;
  uVar4 = FUN_1002c0e84(*(undefined8 *)(local_68 + 0x858));
  if (uVar4 != 0) {
    FUN_100313e0b(*(undefined8 *)(lVar1 + 0x30));
    uVar9 = 0;
    do {
      lVar6 = FUN_100300729(*(undefined8 *)(lVar1 + 0x30),
                            *(undefined8 *)(**(long **)(local_68 + 0x858) + uVar9 * 8));
      if (lVar6 == 0) {
        uVar7 = FUN_1001cc310();
        cVar3 = _os_log_type_enabled(uVar7,0x10);
        if (cVar3 != '\0') {
          local_4a = "trackInfo != nullptr";
LAB_10060ae1f:
          local_4c = 0x822;
          local_54 = "Assertion failure";
          local_58 = 0x8220202;
          __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
        }
LAB_10060ade9:
        FUN_1001782e9(0,0);
      }
      else {
        cVar3 = FUN_1002bd28d(lVar6);
        if (cVar3 == '\0') {
          uVar7 = FUN_1001cc310();
          cVar3 = _os_log_type_enabled(uVar7,0x10);
          if (cVar3 != '\0') {
            local_4a = "IsIPodRentalTrack(trackInfo)";
            goto LAB_10060ae1f;
          }
          goto LAB_10060ade9;
        }
        FUN_100604878(local_60,lVar6);
        iVar5 = FUN_1006020dd(local_60);
        if (iVar5 != 0) {
          if (iVar5 != -0x80) {
            uVar7 = FUN_1001cc310();
            cVar3 = _os_log_type_enabled(uVar7,0x10);
            if (cVar3 != '\0') {
              local_58 = 0x8220202;
              local_54 = "Assertion failure";
              local_4c = 0x400;
              local_4a = (char *)CONCAT44(local_4a._4_4_,iVar5);
              __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: err == (%d)",&local_58,0x12);
            }
          }
          goto LAB_10060ae71;
        }
      }
      uVar9 = uVar9 + 1;
    } while (uVar4 != uVar9);
    iVar5 = 0;
LAB_10060ae71:
    FUN_1002fbbfc(*(undefined8 *)(lVar1 + 0x30));
    FUN_100321e5c(*(undefined8 *)(lVar1 + 0x30));
    if (iVar5 != 0) goto LAB_10060b1ef;
  }
  uVar4 = FUN_1002c0e84(*(undefined8 *)(local_68 + 0x850));
  if (uVar4 != 0) {
    local_70 = FUN_10048604a(*(undefined8 *)(local_60 + 0x18));
    if (local_70 == 0) {
      uVar7 = FUN_1001cc310();
      cVar3 = _os_log_type_enabled(uVar7,0x10);
      if (cVar3 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x822;
        local_4a = "destPrimaryPlaylist != nullptr";
        __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      iVar5 = 0;
      FUN_1001782e9(0,0);
      goto LAB_10060b1ef;
    }
    FUN_100313e0b(*(undefined8 *)(local_60 + 0x18));
    uVar9 = 0;
    local_78 = (ulong)uVar4;
    do {
      lVar6 = FUN_100300729(*(undefined8 *)(lVar1 + 0x30),
                            *(undefined8 *)(**(long **)(local_68 + 0x850) + uVar9 * 8));
      if (lVar6 == 0) {
        uVar7 = FUN_1001cc310();
        cVar3 = _os_log_type_enabled(uVar7,0x10);
        if (cVar3 != '\0') {
          local_4a = "trackInfo != nullptr";
LAB_10060b0f1:
          local_4c = 0x822;
          local_54 = "Assertion failure";
          local_58 = 0x8220202;
          __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
        }
LAB_10060b044:
        FUN_1001782e9(0,0);
      }
      else {
        cVar3 = FUN_1002bd28d(lVar6);
        if (cVar3 == '\0') {
          uVar7 = FUN_1001cc310();
          cVar3 = _os_log_type_enabled(uVar7,0x10);
          if (cVar3 != '\0') {
            local_4a = "IsIPodRentalTrack(trackInfo)";
            goto LAB_10060b0f1;
          }
          goto LAB_10060b044;
        }
        lVar8 = FUN_100597c13(lVar6,*(undefined8 *)(lVar1 + 0x30));
        if (lVar8 != 0) {
          iVar5 = FUN_1002b0559(lVar8,2);
          if (iVar5 == 0) {
            uVar7 = FUN_10048a4b3(lVar6);
            lVar6 = FUN_1003a790f(uVar7,0,local_70,0,6);
            if (lVar6 == 0) {
              uVar7 = FUN_1001cc310();
              cVar3 = _os_log_type_enabled(uVar7,0x10);
              if (cVar3 != '\0') {
                local_4a = "destPlaylistItem != nullptr";
                goto LAB_10060b0f1;
              }
              goto LAB_10060b044;
            }
          }
          else {
            lVar2 = *(long *)(local_60 + 0x28);
            *(undefined1 *)(lVar2 + 2) = 1;
            FUN_10057c238(lVar8,5,lVar2 + 0x58);
            if (DAT_1008c75c0 != -1) {
              _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
            }
            uVar7 = DAT_1008c75b8;
            cVar3 = _os_log_type_enabled(DAT_1008c75b8,1);
            if (cVar3 != '\0') {
              FUN_100476ac1(local_88,lVar6);
              local_54 = (char *)FUN_1001b83ae(local_88);
              local_58 = 0x8220202;
              local_4c = 0x400;
              local_4a = (char *)CONCAT44(local_4a._4_4_,iVar5);
              __os_log_impl(0x100000000,uVar7,1,"sync> failed to prepare track \"%{public}s\" (%d)",
                            &local_58,0x12);
              FUN_1001b7a50(local_88);
            }
          }
        }
        iVar5 = FUN_1006020dd(local_60);
        if (iVar5 != 0) {
          if (iVar5 == -0x80) {
            FUN_1002fbbfc(*(undefined8 *)(local_60 + 0x18));
            iVar5 = -0x80;
            goto LAB_10060b1ef;
          }
          uVar7 = FUN_1001cc310();
          cVar3 = _os_log_type_enabled(uVar7,0x10);
          if (cVar3 != '\0') {
            local_58 = 0x8220202;
            local_54 = "Assertion failure";
            local_4c = 0x400;
            local_4a = (char *)CONCAT44(local_4a._4_4_,iVar5);
            __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: err == (%d)",&local_58,0x12);
          }
          FUN_1002fbbfc(*(undefined8 *)(local_60 + 0x18));
          if (iVar5 == 0) goto LAB_10060b172;
          goto LAB_10060b1ef;
        }
      }
      uVar9 = uVar9 + 1;
    } while (local_78 != uVar9);
    FUN_1002fbbfc(*(undefined8 *)(local_60 + 0x18));
LAB_10060b172:
    iVar5 = FUN_100602bb3(*(undefined8 *)(local_60 + 0x18));
    if (iVar5 == -0x80) goto LAB_10060b1ef;
    if (iVar5 != 0) {
      uVar7 = FUN_1001cc310();
      cVar3 = _os_log_type_enabled(uVar7,0x10);
      if (cVar3 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x400;
        local_4a = (char *)CONCAT44(local_4a._4_4_,iVar5);
        __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: err == (%d)",&local_58,0x12);
      }
      if (iVar5 != 0) goto LAB_10060b1ef;
    }
    lVar1 = *(long *)(local_60 + 0x10);
    lVar6 = *(long *)(lVar1 + 0x6750);
    if (lVar6 != 0) {
      FUN_100529664(lVar6,0,0);
    }
    *(undefined2 *)(lVar1 + 0x67bc) = 0;
    *(undefined4 *)(local_60 + 0x458) = 0;
    *(undefined8 *)(local_60 + 0x460) = 0;
    *(undefined8 *)(local_60 + 0x468) = 0;
  }
  iVar5 = 0;
LAB_10060b1ef:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar5;
}

