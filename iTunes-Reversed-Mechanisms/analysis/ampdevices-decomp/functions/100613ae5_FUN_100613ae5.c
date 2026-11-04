// name: FUN_100613ae5
// address: 100613ae5

int FUN_100613ae5(long param_1)

{
  undefined8 uVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  int iVar10;
  int *local_70;
  undefined4 local_68;
  undefined8 local_64;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  uVar9 = *(undefined8 *)(param_1 + 0x18);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x30);
  local_70 = (int *)0x0;
  FUN_100313e0b();
  iVar4 = FUN_100594adc(&local_70,0);
  if (iVar4 != -0x80) {
    if (iVar4 == 0) {
      for (lVar6 = FUN_1002f930c(uVar1); lVar6 != 0; lVar6 = FUN_1002f9451(lVar6)) {
        iVar4 = FUN_10059563f(local_70,lVar6,0);
        if (iVar4 != 0) {
          if (iVar4 == -0x80) goto LAB_100613f4d;
          uVar9 = FUN_1001cc310();
          cVar3 = _os_log_type_enabled(uVar9,0x10);
          if (cVar3 == '\0') goto LAB_100613f4d;
          local_4a = (char *)CONCAT44(local_4a._4_4_,iVar4);
          goto LAB_100613bcd;
        }
      }
      if (local_70 != (int *)0x0) {
        iVar4 = 0;
        bVar2 = false;
        if (*local_70 != 0x4f4c5354) goto LAB_100613f4f;
        if ((local_70[1] != 0) &&
           (iVar5 = (int)((ulong)(*(long *)(local_70 + 4) - *(long *)(local_70 + 2)) >> 3) *
                    -0x49249249, iVar5 != 0)) {
          iVar10 = 0;
          bVar2 = false;
          do {
            lVar6 = FUN_1005968ea(local_70,iVar10,0);
            if (lVar6 == 0) {
              uVar8 = FUN_1001cc310();
              cVar3 = _os_log_type_enabled(uVar8,0x10);
              if (cVar3 != '\0') {
                local_58 = 0x8220202;
                local_54 = "Assertion failure";
                local_4c = 0x822;
                local_4a = "destTrackInfo != nullptr";
                __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",&local_58,0x16
                                   );
              }
              FUN_1001782e9(0,0);
            }
            else {
              if (*(long *)(lVar6 + 0x188) != 0) {
                lVar7 = FUN_100300729(uVar9);
                if (lVar7 == 0) {
                  if (DAT_1008c75c0 != -1) {
                    _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
                  }
                  uVar8 = DAT_1008c75b8;
                  cVar3 = _os_log_type_enabled(DAT_1008c75b8,1);
                  if (cVar3 != '\0') {
                    FUN_100476ac1(&local_58,lVar6);
                    local_64 = FUN_1001b83ae(&local_58);
                    local_68 = 0x8220102;
                    __os_log_impl(0x100000000,uVar8,1,"sync> deleting \"%{public}s\"",&local_68,0xc)
                    ;
                    FUN_1001b7a50(&local_58);
                  }
                  FUN_1004737f5(lVar6);
                  bVar2 = true;
                }
                else {
                  cVar3 = FUN_1002fe487(lVar7,lVar6);
                  if (cVar3 != '\0') {
                    if (DAT_1008c75c0 != -1) {
                      _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
                    }
                    uVar8 = DAT_1008c75b8;
                    cVar3 = _os_log_type_enabled(DAT_1008c75b8,1);
                    bVar2 = true;
                    if (cVar3 != '\0') {
                      FUN_100476ac1(&local_58,lVar6);
                      local_64 = FUN_1001b83ae(&local_58);
                      local_68 = 0x8220102;
                      __os_log_impl(0x100000000,uVar8,1,
                                    "sync> updated tag fields for \"%{public}s\"",&local_68,0xc);
                      FUN_1001b7a50(&local_58);
                    }
                  }
                  cVar3 = FUN_1002ff053(lVar7,lVar6);
                  if (cVar3 != '\0') {
                    if (DAT_1008c75c0 != -1) {
                      _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
                    }
                    uVar8 = DAT_1008c75b8;
                    cVar3 = _os_log_type_enabled(DAT_1008c75b8,1);
                    bVar2 = true;
                    if (cVar3 != '\0') {
                      FUN_100476ac1(&local_58,lVar6);
                      local_64 = FUN_1001b83ae(&local_58);
                      local_68 = 0x8220102;
                      __os_log_impl(0x100000000,uVar8,1,
                                    "sync> updated non-tag fields for \"%{public}s\"",&local_68,0xc)
                      ;
                      FUN_1001b7a50(&local_58);
                    }
                  }
                }
              }
              iVar4 = FUN_1006020dd(param_1);
              if (iVar4 != 0) {
                if (iVar4 != -0x80) {
                  uVar9 = FUN_1001cc310();
                  cVar3 = _os_log_type_enabled(uVar9,0x10);
                  if (cVar3 != '\0') {
                    local_58 = 0x8220202;
                    local_54 = "Assertion failure";
                    local_4c = 0x400;
                    local_4a = (char *)CONCAT44(local_4a._4_4_,iVar4);
                    __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: err == (%d)",&local_58,
                                        0x12);
                  }
                }
                break;
              }
            }
            iVar10 = iVar10 + 1;
            iVar4 = 0;
          } while (iVar5 != iVar10);
          goto LAB_100613f4f;
        }
      }
      iVar4 = 0;
    }
    else {
      uVar9 = FUN_1001cc310();
      cVar3 = _os_log_type_enabled(uVar9,0x10);
      if (cVar3 != '\0') {
        local_4a = (char *)CONCAT44(local_4a._4_4_,iVar4);
LAB_100613bcd:
        local_4c = 0x400;
        local_54 = "Assertion failure";
        local_58 = 0x8220202;
        __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: err == (%d)",&local_58,0x12);
      }
    }
  }
LAB_100613f4d:
  bVar2 = false;
LAB_100613f4f:
  FUN_100595344(local_70);
  FUN_1002fbbfc(uVar1);
  if (bVar2) {
    FUN_100321e5c(uVar1);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar4;
}

