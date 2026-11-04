// name: FUN_1003f2244
// address: 1003f2244

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_1003f2244(long param_1,long *param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  char *pcVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  ulong uVar8;
  undefined1 auVar9 [16];
  uint local_35c;
  undefined8 local_358;
  ulong local_300;
  long local_2f8;
  long *local_2f0;
  int local_2e8;
  char *local_2e4;
  undefined2 local_2dc;
  int local_2da;
  int local_2c8;
  undefined8 local_2c4;
  undefined2 local_2bc;
  undefined2 uStack_2ba;
  undefined2 uStack_2b8;
  int local_2a8;
  undefined8 local_2a4;
  undefined2 local_29c;
  undefined2 uStack_29a;
  undefined2 uStack_298;
  int local_294;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  iVar2 = FUN_1003f16c4(param_1,&local_35c,0x5c);
  if (iVar2 != -0x80) {
    if (iVar2 == 0) {
      if (*(char *)(param_1 + 0x100127) != '\0') {
        local_35c = local_35c >> 0x18 | (local_35c & 0xff0000) >> 8 | (local_35c & 0xff00) << 8 |
                    local_35c << 0x18;
        auVar9._8_8_ = 0;
        auVar9._0_8_ = local_358;
        auVar9 = pshufb(auVar9,_DAT_10070e4b0);
        local_358 = auVar9._0_8_;
      }
      if (local_35c == 0x746c686d) {
        iVar2 = (**(code **)(*param_2 + 0x30))(param_2,0x746c686d,&local_35c,0x5c,0,param_3);
        if (iVar2 == 0) {
          if (local_358._4_4_ != 0) {
            local_2f8 = param_1 + 0x100030;
            uVar8 = 0;
            local_2f0 = param_2;
            do {
              iVar2 = FUN_1003f16c4(param_1,&local_2a8,0x270);
              if (iVar2 != 0) {
                if (iVar2 == -0x80) goto LAB_1003f2554;
                uVar3 = FUN_1001cc310();
                cVar1 = _os_log_type_enabled(uVar3,0x10);
                if (cVar1 == '\0') goto LAB_1003f2554;
                piVar5 = &local_2c8;
                local_2c8 = 0x8220202;
                local_2c4 = "Assertion failure";
                local_2bc = 0x400;
                uStack_2ba = (undefined2)iVar2;
                uStack_2b8 = (undefined2)((uint)iVar2 >> 0x10);
                goto LAB_1003f2518;
              }
              if (*(char *)(param_1 + 0x100127) != '\0') {
                FUN_1003f630f(local_2f8,&local_2a8);
              }
              if (local_2a8 != 0x7469686d) {
                uVar3 = FUN_1001cc310();
                cVar1 = _os_log_type_enabled(uVar3,0x10);
                if (cVar1 == '\0') goto LAB_1003f2546;
                piVar5 = &local_2c8;
                local_2c8 = 0x8220202;
                local_2c4 = "Assertion failure";
                local_2bc = 0x822;
                pcVar4 = "dbTrackInfo.magic == kDDBTrackInfoMagic";
                goto LAB_1003f25a3;
              }
              if (local_294 - 1U < 3) {
                iVar2 = (**(code **)(*param_2 + 0x30))
                                  (param_2,0x7469686d,&local_2a8,0x270,uVar8,param_3);
                if (iVar2 != 0) {
                  if (iVar2 == -0x80) goto LAB_1003f2554;
                  uVar3 = FUN_1001cc310();
                  cVar1 = _os_log_type_enabled(uVar3,0x10);
                  if (cVar1 == '\0') goto LAB_1003f2554;
                  piVar5 = &local_2c8;
                  local_2c8 = 0x8220202;
                  local_2c4 = "Assertion failure";
                  local_2bc = 0x400;
                  uStack_2ba = (undefined2)iVar2;
                  uStack_2b8 = (undefined2)((uint)iVar2 >> 0x10);
                  goto LAB_1003f2518;
                }
                if (CONCAT22(uStack_29a,local_29c) != 0) {
                  uVar7 = 0;
                  local_300 = uVar8;
                  do {
                    iVar2 = FUN_1004002e0(param_1,&local_2c8);
                    if (iVar2 != 0) {
                      if (iVar2 == -0x80) goto LAB_1003f2554;
                      uVar3 = FUN_1001cc310();
                      cVar1 = _os_log_type_enabled(uVar3,0x10);
                      if (cVar1 == '\0') goto LAB_1003f2554;
                      piVar5 = &local_2e8;
                      local_2e8 = 0x8220202;
                      local_2e4 = "Assertion failure";
                      local_2dc = 0x400;
                      local_2da = iVar2;
                      goto LAB_1003f2518;
                    }
                    iVar6 = local_2c4._4_4_ - (int)local_2c4;
                    iVar2 = FUN_1003f0368(param_1,param_1,iVar6);
                    if (iVar2 != 0) {
                      if (iVar2 == -0x80) goto LAB_1003f2554;
                      uVar3 = FUN_1001cc310();
                      cVar1 = _os_log_type_enabled(uVar3,0x10);
                      if (cVar1 == '\0') goto LAB_1003f2554;
                      piVar5 = &local_2e8;
                      local_2e8 = 0x8220202;
                      local_2e4 = "Assertion failure";
                      local_2dc = 0x400;
                      local_2da = iVar2;
                      goto LAB_1003f2518;
                    }
                    iVar2 = (**(code **)(*local_2f0 + 0x30))
                                      (local_2f0,CONCAT22(uStack_2ba,local_2bc),param_1,iVar6,0,
                                       param_3);
                    if (iVar2 != 0) {
                      if (iVar2 == -0x80) goto LAB_1003f2554;
                      uVar3 = FUN_1001cc310();
                      cVar1 = _os_log_type_enabled(uVar3,0x10);
                      if (cVar1 == '\0') goto LAB_1003f2554;
                      piVar5 = &local_2e8;
                      local_2e8 = 0x8220202;
                      local_2e4 = "Assertion failure";
                      local_2dc = 0x400;
                      local_2da = iVar2;
                      goto LAB_1003f2518;
                    }
                    uVar7 = uVar7 + 1;
                    uVar8 = local_300;
                  } while (uVar7 < CONCAT22(uStack_29a,local_29c));
                }
              }
              else {
                iVar2 = FUN_100160dce(*(undefined8 *)(param_1 + 0x100000),
                                      local_2a4._4_4_ - (int)local_2a4);
                if (iVar2 != 0) {
                  if (iVar2 == -0x80) goto LAB_1003f2554;
                  uVar3 = FUN_1001cc310();
                  cVar1 = _os_log_type_enabled(uVar3,0x10);
                  if (cVar1 == '\0') goto LAB_1003f2554;
                  piVar5 = &local_2c8;
                  local_2c8 = 0x8220202;
                  local_2c4 = "Assertion failure";
                  local_2bc = 0x400;
                  uStack_2ba = (undefined2)iVar2;
                  uStack_2b8 = (undefined2)((uint)iVar2 >> 0x10);
                  goto LAB_1003f2518;
                }
              }
              param_2 = local_2f0;
              iVar2 = (**(code **)(*local_2f0 + 0x30))
                                (local_2f0,0x7469686d,0,0,uVar8 & 0xffffffff,param_3);
              if (iVar2 != 0) goto LAB_1003f2554;
              iVar2 = FUN_1001ceb24(*(undefined8 *)(param_1 + 0x100168),0x7570726d,0,
                                    0xffffffffffffffff,0);
              if (iVar2 != 0) break;
              uVar7 = (int)uVar8 + 1;
              uVar8 = (ulong)uVar7;
            } while (uVar7 < local_358._4_4_);
          }
          iVar2 = (**(code **)(*param_2 + 0x30))(param_2,local_35c,0,0,0,param_3);
        }
      }
      else {
        uVar3 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar3,0x10);
        if (cVar1 != '\0') {
          piVar5 = &local_2a8;
          local_2a8 = 0x8220202;
          local_2a4 = "Assertion failure";
          local_29c = 0x822;
          pcVar4 = "header.magic == kDDBTrackListHeaderMagic";
LAB_1003f25a3:
          *(char **)((long)piVar5 + 0xe) = pcVar4;
          __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",piVar5,0x16);
        }
LAB_1003f2546:
        FUN_1001782e9(0,0);
        iVar2 = -0xd0;
      }
    }
    else {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        piVar5 = &local_2a8;
        local_2a8 = 0x8220202;
        local_2a4 = "Assertion failure";
        local_29c = 0x400;
        uStack_29a = (undefined2)iVar2;
        uStack_298 = (undefined2)((uint)iVar2 >> 0x10);
LAB_1003f2518:
        __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",piVar5,0x12);
      }
    }
  }
LAB_1003f2554:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar2;
}

