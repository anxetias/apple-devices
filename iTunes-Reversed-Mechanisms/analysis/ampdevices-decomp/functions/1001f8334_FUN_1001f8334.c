// name: FUN_1001f8334
// address: 1001f8334

int FUN_1001f8334(undefined8 *param_1,void *param_2,short *param_3,void *param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  long lVar5;
  undefined8 uVar6;
  char *pcVar7;
  ulong uVar8;
  ulong uVar9;
  undefined1 local_af0 [8];
  undefined4 local_ae8;
  ulong local_ad8;
  ulong local_ac8;
  ulong local_ac0;
  void *local_ab8;
  long local_ab0;
  undefined4 local_aa8;
  undefined8 local_aa4;
  undefined2 local_a9c;
  char *local_a9a;
  undefined1 local_a58 [1056];
  short local_638 [256];
  char local_438 [1024];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_ab0 = 0;
  if (param_2 == (void *)0x0) {
    uVar6 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar6,0x10);
    if (cVar1 != '\0') {
      FUN_1006ca2b3(uVar6);
    }
    FUN_1001782e9(0,0);
    iVar2 = -0x32;
    goto LAB_1001f88ce;
  }
  local_ab8 = param_4;
  iVar2 = FUN_1001f7dcb(*param_1,local_438,0x400,local_af0,0,0,0,0);
  if (iVar2 == -0x80) goto LAB_1001f88ce;
  if (iVar2 != 0) {
    uVar6 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar6,0x10);
    if (cVar1 != '\0') {
      FUN_1006ca247(iVar2,uVar6);
    }
    goto LAB_1001f88ce;
  }
  iVar2 = FUN_1001f805a(*param_1);
  if (iVar2 == -0x80) goto LAB_1001f88ce;
  if (iVar2 != 0) {
    uVar6 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar6,0x10);
    if (cVar1 != '\0') {
      FUN_1006ca1db(iVar2,uVar6);
    }
    goto LAB_1001f88ce;
  }
  pcVar4 = _strrchr(local_438,0x2f);
  pcVar7 = pcVar4 + 1;
  if (pcVar4 == (char *)0x0) {
    pcVar7 = local_438;
  }
  FUN_1001e4a2e(pcVar7,local_638);
  if ((param_3 == (short *)0x0) || (*param_3 == 0)) {
    param_3 = local_638;
  }
  if (local_638[0] == 0) {
    _memcpy(local_a58,param_2,0x420);
LAB_1001f8735:
    iVar2 = FUN_10017d477(local_a58,&local_aa8,0);
    if (iVar2 != -0x80) {
      if (iVar2 == 0) {
        local_aa4 = (char *)CONCAT44(local_ae8,local_ae8);
        iVar2 = FUN_100188f79(local_a58);
        if (iVar2 != -0x80) {
          if (iVar2 == 0) {
            iVar2 = 0;
            if (local_ab8 != (void *)0x0) {
              _memcpy(local_ab8,local_a58,0x420);
            }
          }
          else {
            uVar6 = FUN_1001cc310();
            cVar1 = _os_log_type_enabled(uVar6,0x10);
            if (cVar1 != '\0') {
              FUN_1006ca097(iVar2,uVar6);
            }
          }
        }
      }
      else {
        uVar6 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar6,0x10);
        if (cVar1 != '\0') {
          FUN_1006ca103(iVar2,uVar6);
        }
      }
    }
  }
  else {
    if (param_1[5] == 0) {
      param_1[6] = 1000000;
      lVar5 = FUN_1001c64e6(1000000);
      param_1[5] = lVar5;
      if (lVar5 == 0) {
        uVar6 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar6,0x10);
        if (cVar1 != '\0') {
          FUN_1006ca021(uVar6);
        }
        FUN_1001782e9(0,0);
        iVar2 = -0x6c;
        goto LAB_1001f888d;
      }
    }
    if (param_1[4] == 0) {
      param_1[4] = local_ad8;
    }
    iVar2 = FUN_1001891ea(param_2,param_3,local_a58);
    if (iVar2 == -0x30) {
      iVar2 = -0x30;
      if ((*(byte *)(param_1 + 1) & 1) != 0) {
        iVar2 = FUN_10017ecc9(param_2,param_3,local_a58,0);
        goto LAB_1001f8495;
      }
LAB_1001f87c9:
      uVar6 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar6,0x10);
      if (cVar1 != '\0') {
        FUN_1006c9fb5(iVar2,uVar6);
      }
    }
    else {
LAB_1001f8495:
      if (iVar2 != -0x80) {
        if (iVar2 != 0) goto LAB_1001f87c9;
        iVar2 = FUN_10017cc65(local_a58,0x64617461,(*(uint *)(param_1 + 1) & 2) << 10 | 0x202,
                              &local_ab0);
        if (iVar2 != -0x80) {
          uVar9 = local_ad8;
          if (iVar2 == 0) {
            do {
              if (uVar9 == 0) {
                iVar2 = FUN_10017cdfb(local_ab0);
                local_ab0 = 0;
                if (iVar2 == -0x80) goto LAB_1001f888d;
                if (iVar2 == 0) goto LAB_1001f8735;
                uVar6 = FUN_1001cc310();
                cVar1 = _os_log_type_enabled(uVar6,0x10);
                if (cVar1 != '\0') {
                  FUN_1006c9edd(iVar2,uVar6);
                }
                goto LAB_1001f888d;
              }
              uVar8 = param_1[6];
              if (uVar9 <= (ulong)param_1[6]) {
                uVar8 = uVar9;
              }
              iVar2 = FUN_1001f8126(*param_1,param_1[5],uVar8,&local_ac8);
              if (iVar2 != 0) {
                if (iVar2 != -0x80) {
                  uVar6 = FUN_1001cc310();
                  cVar1 = _os_log_type_enabled(uVar6,0x10);
                  if (cVar1 != '\0') {
                    FUN_1006c9e71(iVar2,uVar6);
                  }
                }
                goto LAB_1001f888d;
              }
              if (local_ac8 != uVar8) {
                uVar6 = FUN_1001cc310();
                cVar1 = _os_log_type_enabled(uVar6,0x10);
                if (cVar1 != '\0') {
                  local_aa8 = 0x8220202;
                  local_aa4 = "Assertion failure";
                  local_a9c = 0x822;
                  local_a9a = "readCount == ioBufferCount";
                  __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_aa8,
                                      0x16);
                }
                FUN_1001782e9(0,0);
              }
              iVar2 = FUN_10017d230(local_ab0,param_1[5],uVar8,1,&local_ac0);
              if (iVar2 != 0) {
                if (iVar2 != -0x80) {
                  uVar6 = FUN_1001cc310();
                  cVar1 = _os_log_type_enabled(uVar6,0x10);
                  if (cVar1 != '\0') {
                    FUN_1006c9e05(iVar2,uVar6);
                  }
                }
                goto LAB_1001f888d;
              }
              if (local_ac0 != uVar8) {
                uVar6 = FUN_1001cc310();
                cVar1 = _os_log_type_enabled(uVar6,0x10);
                if (cVar1 != '\0') {
                  local_aa8 = 0x8220202;
                  local_aa4 = "Assertion failure";
                  local_a9c = 0x822;
                  local_a9a = "writeCount == ioBufferCount";
                  __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_aa8,
                                      0x16);
                }
                FUN_1001782e9(0,0);
              }
              uVar9 = uVar9 - uVar8;
            } while ((param_1[2] == 0) ||
                    (iVar2 = FUN_1001ceb24(param_1[2],0x7570726d,(param_1[3] - uVar9) + local_ad8,
                                           param_1[4],param_3), iVar2 == 0));
            if (iVar2 != -0x80) {
              uVar6 = FUN_1001cc310();
              cVar1 = _os_log_type_enabled(uVar6,0x10);
              if (cVar1 != '\0') {
                FUN_1006c9d99(iVar2,uVar6);
              }
            }
          }
          else {
            uVar6 = FUN_1001cc310();
            cVar1 = _os_log_type_enabled(uVar6,0x10);
            if (cVar1 != '\0') {
              FUN_1006c9f49(iVar2,uVar6);
            }
          }
        }
      }
    }
  }
LAB_1001f888d:
  iVar3 = FUN_1001f825c(*param_1);
  if ((iVar3 != -0x80) && (iVar3 != 0)) {
    uVar6 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar6,0x10);
    if (cVar1 != '\0') {
      FUN_1006ca16f(iVar3,uVar6);
    }
  }
  if (local_ab0 != 0) {
    FUN_10017cdfb();
  }
LAB_1001f88ce:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar2;
}

