// name: FUN_1001f93aa
// address: 1001f93aa

int FUN_1001f93aa(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  char *pcVar6;
  char *pcVar7;
  uint uVar8;
  char local_f28 [32];
  long local_f08;
  undefined1 local_ed8 [24];
  long local_ec0;
  long local_eb0;
  uint local_ea8;
  uint local_ea4;
  undefined8 local_ea0;
  undefined1 local_e98 [1056];
  undefined1 local_a78 [1056];
  undefined1 local_658 [512];
  char local_458 [1024];
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_ea0 = 0;
  cVar2 = FUN_10017cbd0(param_2);
  if (cVar2 == '\0') {
    uVar5 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar5,0x10);
    if (cVar2 != '\0') {
      FUN_1006cad89(uVar5);
    }
    FUN_1001782e9(0,0);
    iVar3 = -0x32;
  }
  else {
    iVar3 = FUN_1001f7388(param_1,1,&local_ea0);
    if (iVar3 != -0x80) {
      if (iVar3 == 0) {
        iVar3 = FUN_1001f7852(local_ea0,&local_ea4);
        if (iVar3 != -0x80) {
          if (iVar3 == 0) {
            iVar4 = FUN_1001f7ba5(local_ea0);
            if (iVar4 == 0) {
              uVar8 = 1;
              local_eb0 = param_3;
              do {
                iVar3 = FUN_1001f7dcb(local_ea0,local_458,0x400,local_ed8,0,0,0,0);
                if (iVar3 != 0) {
                  if (iVar3 != -0x80) {
                    uVar5 = FUN_1001cc310();
                    cVar2 = _os_log_type_enabled(uVar5,0x10);
                    if (cVar2 != '\0') {
                      FUN_1006cabd9(iVar3,uVar5);
                    }
                  }
                  goto LAB_1001f94be;
                }
                local_ea8 = uVar8;
                pcVar6 = _strrchr(local_458,0x2f);
                pcVar7 = pcVar6 + 1;
                if (pcVar6 == (char *)0x0) {
                  pcVar7 = local_458;
                }
                FUN_1001e4a2e(pcVar7,local_658);
                iVar3 = FUN_1001f9145(param_2,local_458,local_a78);
                if ((iVar3 != 0) ||
                   (iVar3 = FUN_10017ecc9(local_a78,local_658,local_e98,local_f28),
                   uVar8 = local_ea8, lVar1 = local_eb0, iVar3 != 0)) goto LAB_1001f94be;
                if ((local_f28[0] == '\0') && (local_f08 != local_ec0)) {
                  iVar3 = -0x2b;
                  goto LAB_1001f94be;
                }
                if (local_ea4 < local_ea8) {
                  uVar5 = FUN_1001cc310();
                  cVar2 = _os_log_type_enabled(uVar5,0x10);
                  if (cVar2 != '\0') {
                    local_58 = 0x8220202;
                    local_54 = "Assertion failure";
                    local_4c = 0x822;
                    local_4a = "currentEntry <= numEntries";
                    __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)");
                  }
                  FUN_1001782e9(0,0);
                }
                if ((lVar1 != 0) &&
                   (iVar3 = FUN_1001ceb24(lVar1,0x7570726d,uVar8,local_ea4), iVar3 != 0)) {
                  if (iVar3 != -0x80) {
                    uVar5 = FUN_1001cc310();
                    cVar2 = _os_log_type_enabled(uVar5,0x10);
                    if (cVar2 != '\0') {
                      FUN_1006cab6d(iVar3,uVar5);
                    }
                  }
                  goto LAB_1001f94be;
                }
                iVar4 = FUN_1001f7c48(local_ea0);
                uVar8 = uVar8 + 1;
              } while (iVar4 == 0);
            }
            iVar3 = 0;
            if (iVar4 != -0x27) {
              iVar3 = iVar4;
            }
          }
          else {
            uVar5 = FUN_1001cc310();
            cVar2 = _os_log_type_enabled(uVar5,0x10);
            if (cVar2 != '\0') {
              FUN_1006cac45(iVar3,uVar5);
            }
          }
        }
LAB_1001f94be:
        iVar4 = FUN_1001f7652(local_ea0);
        if (iVar4 != 0) {
          uVar5 = FUN_1001cc310();
          cVar2 = _os_log_type_enabled(uVar5,0x10);
          if (cVar2 != '\0') {
            FUN_1006cacb1(iVar4,uVar5);
          }
        }
      }
      else {
        uVar5 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar5,0x10);
        if (cVar2 != '\0') {
          FUN_1006cad1d(iVar3,uVar5);
        }
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar3;
}

