// name: FUN_100603b3e
// address: 100603b3e

int FUN_100603b3e(long param_1)

{
  long lVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  char *pcVar9;
  undefined4 *puVar10;
  int iVar11;
  int *local_70;
  undefined4 local_68;
  undefined8 local_64;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar1 = *(long *)(param_1 + 0x10);
  local_70 = (int *)0x0;
  iVar4 = FUN_100594adc(&local_70,0);
  if (iVar4 != -0x80) {
    if (iVar4 == 0) {
      for (lVar6 = FUN_1002f930c(*(undefined8 *)(lVar1 + 0x30)); lVar6 != 0;
          lVar6 = FUN_1002f9451(lVar6)) {
        if (((*(byte *)(lVar6 + 0xc3) & 1) != 0) &&
           (iVar4 = FUN_10059563f(local_70,lVar6,0), iVar4 != 0)) {
          if (iVar4 == -0x80) goto LAB_100603f0b;
          uVar8 = FUN_1001cc310();
          cVar3 = _os_log_type_enabled(uVar8,0x10);
          if (cVar3 == '\0') goto LAB_100603f0b;
          local_4a = (char *)CONCAT44(local_4a._4_4_,iVar4);
          goto LAB_100603c15;
        }
      }
      iVar4 = 0;
      if ((((local_70 != (int *)0x0) && (*local_70 == 0x4f4c5354)) && (local_70[1] != 0)) &&
         (iVar5 = (int)((ulong)(*(long *)(local_70 + 4) - *(long *)(local_70 + 2)) >> 3) *
                  -0x49249249, iVar5 != 0)) {
        iVar11 = 0;
        do {
          puVar7 = (undefined8 *)FUN_1005968ea(local_70,iVar11,0);
          if (puVar7 == (undefined8 *)0x0) {
            uVar8 = FUN_1001cc310();
            cVar3 = _os_log_type_enabled(uVar8,0x10);
            if (cVar3 != '\0') {
              local_58 = 0x8220202;
              local_54 = "Assertion failure";
              local_4c = 0x822;
              local_4a = "trackInfo != nullptr";
              __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
            }
            FUN_1001782e9(0,0);
          }
          else {
            if (*(char *)(lVar1 + 0x3a2) == '\0') {
              if (DAT_1008c75c0 != -1) {
                _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
              }
              uVar8 = DAT_1008c75b8;
              cVar3 = _os_log_type_enabled(DAT_1008c75b8,1);
              if (cVar3 == '\0') goto LAB_100603e38;
              FUN_100476ac1(&local_58,puVar7);
              local_64 = FUN_1001b83ae(&local_58);
              local_68 = 0x8220102;
              __os_log_impl(0x100000000,uVar8,1,"sync> deleting track \"%{public}s\"",&local_68,0xc)
              ;
              puVar10 = &local_58;
LAB_100603e33:
              FUN_1001b7a50(puVar10);
            }
            else {
              cVar3 = FUN_1002bd03f(puVar7,*(undefined1 *)(lVar1 + 0x39e),
                                    *(undefined1 *)(lVar1 + 0x39d));
              if (DAT_1008c75c0 != -1) {
                _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
              }
              uVar8 = DAT_1008c75b8;
              cVar2 = _os_log_type_enabled(DAT_1008c75b8,1);
              if (cVar3 == '\0') {
                if (cVar2 != '\0') {
                  FUN_100476ac1(&local_68,puVar7);
                  local_54 = (char *)FUN_1001b83ae(&local_68);
                  local_4a = (char *)*puVar7;
                  pcVar9 = "sync> deleting track \"%{public}s\", identifier \"%lld\"";
                  goto LAB_100603e21;
                }
              }
              else if (cVar2 != '\0') {
                FUN_100476ac1(&local_68,puVar7);
                local_54 = (char *)FUN_1001b83ae(&local_68);
                local_4a = (char *)*puVar7;
                pcVar9 = "sync> deleting track \"%{public}s\", identifier \"%016llX\"";
LAB_100603e21:
                local_4c = 0x800;
                local_58 = 0x8220202;
                puVar10 = &local_68;
                __os_log_impl(0x100000000,uVar8,1,pcVar9,&local_58,0x16);
                goto LAB_100603e33;
              }
            }
LAB_100603e38:
            FUN_100604878(param_1,puVar7);
            iVar4 = FUN_1006020dd(param_1);
            if (iVar4 != 0) {
              if (iVar4 != -0x80) {
                uVar8 = FUN_1001cc310();
                cVar3 = _os_log_type_enabled(uVar8,0x10);
                if (cVar3 != '\0') {
                  local_4a = (char *)CONCAT44(local_4a._4_4_,iVar4);
                  goto LAB_100603c15;
                }
              }
              break;
            }
          }
          iVar11 = iVar11 + 1;
          iVar4 = 0;
        } while (iVar5 != iVar11);
      }
    }
    else {
      uVar8 = FUN_1001cc310();
      cVar3 = _os_log_type_enabled(uVar8,0x10);
      if (cVar3 != '\0') {
        local_4a = (char *)CONCAT44(local_4a._4_4_,iVar4);
LAB_100603c15:
        local_4c = 0x400;
        local_54 = "Assertion failure";
        local_58 = 0x8220202;
        __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: err == (%d)",&local_58,0x12);
      }
    }
  }
LAB_100603f0b:
  FUN_100595344(local_70);
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar4;
}

