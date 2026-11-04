// name: FUN_1001a5fb4
// address: 1001a5fb4

undefined1 FUN_1001a5fb4(uint *param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined1 uVar9;
  bool bVar10;
  in_addr local_13c;
  long local_138 [32];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == (uint *)0x0) {
    uVar8 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar8,0x10);
    if (cVar2 != '\0') {
      FUN_10069e0ba(uVar8);
    }
LAB_1001a6296:
    uVar9 = 0;
    FUN_1001782e9(0,0);
  }
  else {
    *param_1 = 0;
    local_138[0] = 0;
    lVar4 = _SCDynamicStoreCreate(DAT_1008c4d90,&cf_CopyIPAddressListSCF,0,0);
    if (lVar4 == 0) {
      uVar8 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar8,0x10);
      if (cVar2 != '\0') {
        FUN_10069df58(uVar8);
      }
LAB_1001a6163:
      FUN_1001782e9(0,0);
      lVar5 = 0;
LAB_1001a6174:
      lVar6 = 0;
LAB_1001a6177:
      bVar1 = false;
      bVar10 = false;
      lVar7 = 0;
    }
    else {
      local_138[0] = _SCDynamicStoreKeyCreateNetworkServiceEntity
                               (DAT_1008c4d90,
                                *(undefined8 *)PTR__kSCDynamicStoreDomainState_10082c350,
                                *(undefined8 *)PTR__kSCCompAnyRegex_10082c348,
                                *(undefined8 *)PTR__kSCEntNetIPv4_10082c358);
      if (local_138[0] == 0) {
        uVar8 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar8,0x10);
        if (cVar2 != '\0') {
          FUN_10069dee2(uVar8);
        }
        goto LAB_1001a6163;
      }
      lVar5 = FUN_100170716(DAT_1008c4d90,local_138,1,PTR__kCFTypeArrayCallBacks_10082e130);
      if (lVar5 == 0) {
        uVar8 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar8,0x10);
        if (cVar2 != '\0') {
          FUN_10069de6c(uVar8);
        }
        goto LAB_1001a6163;
      }
      lVar6 = _SCDynamicStoreCopyMultiple(lVar4,0,lVar5);
      if (lVar6 == 0) {
        uVar8 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar8,0x10);
        if (cVar2 != '\0') {
          FUN_10069ddf6(uVar8);
        }
        FUN_1001782e9(0,0);
        goto LAB_1001a6174;
      }
      lVar7 = FUN_100170720(DAT_1008c4d90,0,PTR__kCFTypeArrayCallBacks_10082e130);
      if (lVar7 == 0) {
        uVar8 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar8,0x10);
        if (cVar2 != '\0') {
          FUN_10069dd80(uVar8);
        }
        FUN_1001782e9(0,0);
        goto LAB_1001a6177;
      }
      FUN_1001714c2(lVar6,FUN_1001a6ad8,lVar7);
      bVar1 = true;
      bVar10 = true;
    }
    FUN_10017060f(lVar4);
    FUN_10017060f(local_138[0]);
    FUN_10017060f(lVar5);
    FUN_10017060f(lVar6);
    if (bVar10 != (lVar7 != 0)) {
      uVar8 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar8,0x10);
      if (cVar2 != '\0') {
        FUN_10069dfce(uVar8);
      }
      FUN_1001782e9(0,0);
    }
    if (bVar1) {
      lVar4 = FUN_1001705e9(lVar7);
      lVar5 = FUN_10017070c();
      if (lVar4 != lVar5) {
        uVar8 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar8,0x10);
        if (cVar2 != '\0') {
          FUN_10069e044(uVar8);
        }
        goto LAB_1001a6296;
      }
      if (lVar7 != 0) {
        lVar4 = FUN_10017076e(lVar7);
        uVar9 = 0;
        if (lVar4 != 0) {
          lVar4 = FUN_100170853(lVar7,0);
          uVar9 = 0;
          if (lVar4 != 0) {
            cVar2 = FUN_10017393c(lVar4,local_138,0x100,0x600);
            if (cVar2 != '\0') {
              iVar3 = _inet_aton((char *)local_138,&local_13c);
              if (iVar3 != 0) {
                *param_1 = local_13c.s_addr >> 0x18 | (local_13c.s_addr & 0xff0000) >> 8 |
                           (local_13c.s_addr & 0xff00) << 8 | local_13c.s_addr << 0x18;
                uVar9 = 1;
                goto LAB_1001a6324;
              }
            }
            uVar9 = 0;
          }
        }
LAB_1001a6324:
        FUN_10017060f(lVar7);
        goto LAB_1001a62a1;
      }
    }
    uVar9 = 0;
  }
LAB_1001a62a1:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return uVar9;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

