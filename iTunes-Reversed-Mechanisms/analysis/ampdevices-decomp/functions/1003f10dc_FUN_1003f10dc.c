// name: FUN_1003f10dc
// address: 1003f10dc

int FUN_1003f10dc(long param_1,undefined8 param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  Bytef *pBVar5;
  Bytef *pBVar6;
  undefined8 uVar7;
  ulong uVar8;
  z_stream local_f0;
  long local_80;
  long local_78;
  ulong local_70;
  ulong local_68;
  ulong local_60;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_1001c62d9(&local_f0,0x70);
  pBVar5 = (Bytef *)FUN_1001c63e1(1000000);
  if (pBVar5 == (Bytef *)0x0) {
    uVar7 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar7,0x10);
    if (cVar2 != '\0') {
      local_4a = "sourceData != nullptr";
LAB_1003f14ec:
      local_4c = 0x822;
      local_54 = "Assertion failure";
      local_58 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
LAB_1003f11ea:
    pBVar6 = (Bytef *)0x0;
    FUN_1001782e9(0,0);
    iVar3 = -0x6c;
  }
  else {
    pBVar6 = (Bytef *)FUN_1001c63e1(2000000);
    if (pBVar6 == (Bytef *)0x0) {
      uVar7 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar7,0x10);
      if (cVar2 != '\0') {
        local_4a = "destData != nullptr";
        goto LAB_1003f14ec;
      }
      goto LAB_1003f11ea;
    }
    iVar3 = _inflateInit_(&local_f0,"1.2.12",0x70);
    if (iVar3 == 0) {
      iVar3 = FUN_100160c3f(*(undefined8 *)(param_1 + 0x100000),&local_80);
      if (iVar3 != -0x80) {
        if (iVar3 == 0) {
          iVar3 = FUN_100160255(*(undefined8 *)(param_1 + 0x100000),&local_78);
          if (iVar3 != -0x80) {
            if (iVar3 == 0) {
              uVar8 = local_80 - local_78;
              if (uVar8 == 0) {
LAB_1003f1647:
                uVar7 = FUN_1001cc310();
                cVar2 = _os_log_type_enabled(uVar7,0x10);
                if (cVar2 != '\0') {
                  local_58 = 0x8220202;
                  local_54 = "Assertion failure";
                  local_4c = 0x822;
                  local_4a = "zStatus == 1";
                  __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_58,
                                      0x16);
                }
                FUN_1001782e9(0,0);
              }
              else {
                do {
                  local_60 = 1000000;
                  if (uVar8 < 1000000) {
                    local_60 = uVar8;
                  }
                  local_68 = uVar8;
                  iVar3 = FUN_1003f0368(param_1);
                  if (iVar3 != 0) {
                    if (iVar3 == -0x80) goto LAB_1003f1593;
                    uVar7 = FUN_1001cc310();
                    cVar2 = _os_log_type_enabled(uVar7,0x10);
                    if (cVar2 == '\0') goto LAB_1003f1593;
                    local_4a = (char *)CONCAT44(local_4a._4_4_,iVar3);
                    goto LAB_1003f1462;
                  }
                  local_68 = local_68 - local_60;
                  local_f0.avail_in = (uInt)local_60;
                  local_f0.next_in = pBVar5;
                  do {
                    local_f0.avail_out = 2000000;
                    local_f0.next_out = pBVar6;
                    uVar4 = _inflate(&local_f0,0);
                    if (1 < uVar4) {
                      uVar7 = FUN_1001cc310();
                      cVar2 = _os_log_type_enabled(uVar7,0x10);
                      if (cVar2 != '\0') {
                        local_58 = 0x8220202;
                        local_54 = "Assertion failure";
                        local_4c = 0x822;
                        local_4a = "zStatus == 0 || zStatus == 1";
                        __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",
                                            &local_58,0x16);
                      }
                      FUN_1001782e9(0,0);
                      iVar3 = -0xd0;
                      goto LAB_1003f1593;
                    }
                    local_60 = CONCAT44(local_60._4_4_,uVar4);
                    local_70 = (ulong)(2000000 - local_f0.avail_out);
                    iVar3 = FUN_100160894(param_2,&local_70,pBVar6);
                    if (iVar3 != 0) {
                      if (iVar3 == -0x80) goto LAB_1003f1593;
                      uVar7 = FUN_1001cc310();
                      cVar2 = _os_log_type_enabled(uVar7,0x10);
                      if (cVar2 == '\0') goto LAB_1003f1593;
                      local_4a = (char *)CONCAT44(local_4a._4_4_,iVar3);
                      goto LAB_1003f1462;
                    }
                  } while (local_f0.avail_out == 0);
                  if (local_f0.avail_in != 0) {
                    uVar7 = FUN_1001cc310();
                    cVar2 = _os_log_type_enabled(uVar7,0x10);
                    if (cVar2 != '\0') {
                      local_58 = 0x8220202;
                      local_54 = "Assertion failure";
                      local_4c = 0x822;
                      local_4a = "zStream.avail_in == 0";
                      __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",
                                          &local_58,0x16);
                    }
                    FUN_1001782e9(0,0);
                  }
                  uVar8 = local_68;
                } while (local_68 != 0);
                if ((int)local_60 != 1) goto LAB_1003f1647;
              }
              bVar1 = false;
              iVar3 = 0;
              goto LAB_1003f11ff;
            }
            uVar7 = FUN_1001cc310();
            cVar2 = _os_log_type_enabled(uVar7,0x10);
            if (cVar2 != '\0') {
              local_4a = (char *)CONCAT44(local_4a._4_4_,iVar3);
              goto LAB_1003f1462;
            }
          }
        }
        else {
          uVar7 = FUN_1001cc310();
          cVar2 = _os_log_type_enabled(uVar7,0x10);
          if (cVar2 != '\0') {
            local_4a = (char *)CONCAT44(local_4a._4_4_,iVar3);
LAB_1003f1462:
            local_4c = 0x400;
            local_54 = "Assertion failure";
            local_58 = 0x8220202;
            __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: err == (%d)",&local_58,0x12);
          }
        }
      }
LAB_1003f1593:
      bVar1 = false;
      goto LAB_1003f11ff;
    }
    uVar7 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar7,0x10);
    if (cVar2 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "zStatus == 0";
      __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
    iVar3 = -0x32;
  }
  bVar1 = true;
LAB_1003f11ff:
  FUN_1001c64c1(pBVar5);
  FUN_1001c64c1(pBVar6);
  if (!bVar1) {
    _inflateEnd(&local_f0);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar3;
}

