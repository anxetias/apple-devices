// name: FUN_10040503d
// address: 10040503d

int FUN_10040503d(void *param_1,long param_2,uint param_3,long param_4,long param_5,
                 undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  undefined1 local_df0 [80];
  long local_da0;
  void *local_d98;
  undefined1 *local_d90;
  uint local_d88;
  undefined4 local_d84;
  long local_d80;
  long local_d78;
  short local_d70;
  long local_d68;
  undefined8 local_d60;
  uint local_d54;
  undefined8 local_d50;
  long local_d48;
  long local_d40;
  long local_d38;
  long local_d30;
  undefined4 local_d28;
  undefined8 local_d24;
  undefined2 local_d1c;
  char *local_d1a;
  undefined1 local_cf4 [44];
  undefined4 local_cc8;
  int local_cc4;
  undefined1 local_cc0 [1056];
  long local_8a0;
  undefined8 local_898;
  undefined8 local_890;
  undefined1 local_888 [516];
  undefined4 local_684;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == (void *)0x0) {
    uVar5 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar5,0x10);
    if (cVar3 != '\0') {
      local_d28 = 0x8220202;
      local_d24 = "Assertion failure";
      local_d1c = 0x822;
      local_d1a = "fileSpec != nullptr";
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_d28,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    local_d60 = param_6;
    if (((param_4 == 0) || (puVar1 = *(undefined8 **)(param_4 + 8), puVar1 == (undefined8 *)0x0)) ||
       (puVar1[2] == 0)) {
      uVar5 = FUN_1001cc310();
      cVar3 = _os_log_type_enabled(uVar5,0x10);
      if (cVar3 != '\0') {
        local_d28 = 0x8220202;
        local_d24 = "Assertion failure";
        local_d1c = 0x822;
        local_d1a = "TrackInstanceIsValid(destTrackInstance) || TrackDataIsValid(destTrackData)";
        __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_d28,0x16);
      }
      FUN_1001782e9(0,0);
    }
    else {
      local_d68 = param_5;
      if (param_2 == 0) {
        local_d50 = CONCAT71((int7)((ulong)local_38 >> 8),1);
        if ((puVar1[0x31] == 0) || (lVar7 = FUN_100309333(puVar1[0x30]), lVar7 == 0)) {
          param_2 = 0;
        }
        else {
          param_2 = FUN_1003003ff(lVar7,puVar1[0x31],0);
          if (param_2 != 0) goto LAB_1004050a0;
          param_2 = 0;
        }
LAB_1004051b9:
        local_d40 = 0;
        local_d38 = 0;
      }
      else {
LAB_1004050a0:
        local_d38 = *(long *)(param_2 + 8);
        if (local_d38 == 0) {
          local_d50 = 0;
          goto LAB_1004051b9;
        }
        local_d40 = *(long *)(local_d38 + 0x10);
        local_d50 = 0;
      }
      FUN_1002b0e52(param_4);
      local_d54 = param_3;
      FUN_1002b0353(param_4,(param_3 & 0x10) >> 4 ^ 1);
      if ((*(long *)(param_4 + 8) != 0) &&
         (lVar7 = *(long *)(*(long *)(param_4 + 8) + 0x10), lVar7 != 0)) {
        local_d48 = param_2;
        if (((*(byte *)(lVar7 + 0x2be1) & 0x80) == 0) ||
           ((iVar4 = -0x80, *(int *)(lVar7 + 0x84) == 0x646f5069 &&
            ((*(byte *)(lVar7 + 0x2d1a) & 0x20) != 0)))) {
          if (((*(byte *)(lVar7 + 0x1bb0) & 1) != 0) && ((~*(uint *)(param_4 + 0x48) & 0x300) != 0))
          {
            *(uint *)(param_4 + 0x48) = *(uint *)(param_4 + 0x48) & 0xfffffcff | 0x100;
          }
          local_d30 = lVar7;
          if (((param_3 & 0x10) == 0) &&
             (((*(int *)(lVar7 + 0x84) == 0x646f5069 && ((*(byte *)(lVar7 + 0x2d1a) & 0x20) != 0))
              || ((local_d40 != 0 &&
                  ((*(int *)(local_d40 + 0x84) == 0x646f5069 &&
                   ((*(byte *)(local_d40 + 0x2d1a) & 0x20) != 0)))))))) {
            *(undefined1 *)(param_4 + 0x45) = 10;
            iVar4 = 0;
            if ((char)local_d50 != '\0') {
              plVar6 = *(long **)(lVar7 + 0x2d20);
              if (plVar6 == (long *)0x0) {
                plVar6 = operator_new(0x18,(nothrow_t *)PTR_nothrow_10082c970);
                if (plVar6 == (long *)0x0) {
                  *(undefined8 *)(local_d30 + 0x2d20) = 0;
                  uVar5 = FUN_1001cc310();
                  cVar3 = _os_log_type_enabled(uVar5,0x10);
                  if (cVar3 != '\0') {
                    local_d28 = 0x8220202;
                    local_d24 = "Assertion failure";
                    local_d1c = 0x822;
                    local_d1a = "trackData->u.iPod.copyFileSpecMap != nullptr";
                    __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_d28
                                        ,0x16);
                  }
                  iVar4 = 0;
                  FUN_1001782e9(0,0);
                  plVar6 = *(long **)(local_d30 + 0x2d20);
                  if (plVar6 == (long *)0x0) goto LAB_100405124;
                }
                else {
                  plVar6[1] = 0;
                  plVar6[2] = 0;
                  *plVar6 = (long)(plVar6 + 1);
                  *(long **)(local_d30 + 0x2d20) = plVar6;
                }
              }
              lVar7 = FUN_100407c0c(plVar6,*puVar1,puVar1);
              _memcpy((void *)(lVar7 + 0x28),param_1,0x420);
              iVar4 = 0;
            }
          }
          else {
            iVar4 = FUN_10017d477(param_1,local_df0,0);
            uVar2 = local_d54;
            if (iVar4 != -0x80) {
              if (iVar4 == 0) {
                iVar4 = FUN_100405ee3(local_d30);
                if (iVar4 == -0x80) goto LAB_100405124;
                if (iVar4 == 0) {
                  FUN_1001c62d9(&local_da0,0x38);
                  local_da0 = local_d48;
                  local_d88 = uVar2;
                  local_d84 = *(undefined4 *)(local_d30 + 0x2c08);
                  local_d98 = param_1;
                  local_d90 = local_df0;
                  iVar4 = FUN_1002fc1ae(local_d30,0x7464737a);
                  if (iVar4 == -0x80) goto LAB_100405124;
                  if (iVar4 == 0) {
                    FUN_1001c62d9(&local_d28,0xcc8);
                    local_d28 = 0;
                    local_d24 = (char *)CONCAT44(local_d24._4_4_,uVar2);
                    local_cc8 = 0x7472616b;
                    _memcpy(local_cc0,param_1,0x420);
                    uVar9 = (ulong)*(uint *)(local_d30 + 0x2c08);
                    uVar8 = (uVar9 - 1) + local_d78;
                    local_8a0 = uVar8 / uVar9 + (local_d80 + (uVar9 - 1)) / uVar9;
                    if (local_d68 != 0) {
                      FUN_1001e1c39(local_d68,local_888,uVar8 % uVar9);
                    }
                    if ((uVar2 & 1) != 0) {
                      if (local_d70 == 0) {
                        uVar5 = FUN_1001cc310(local_d48);
                        cVar3 = _os_log_type_enabled(uVar5,0x10);
                        if (cVar3 != '\0') {
                          local_58 = 0x8220202;
                          local_54 = "Assertion failure";
                          local_4c = 0x822;
                          local_4a = 
                          "trackDataParams.u.getTrackInstanceSizeOnDisk.transcodeBitRate != 0";
                          __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",
                                              &local_58,0x16);
                        }
                        FUN_1001782e9(0,0);
                      }
                      local_684 = 1;
                    }
                    local_890 = param_7;
                    local_898 = local_d60;
                    if ((char)local_d50 == '\0') {
                      FUN_10031bd9c(local_d48,(long)&local_d24 + 4);
                      local_cc4 = FUN_1004744bf(local_d38,0);
                      FUN_10035879d(local_d48,0,0);
                    }
                    FUN_10031bd9c(param_4,local_cf4);
                    if (local_cc4 == 0) {
                      local_cc4 = FUN_1002b1255(param_4,0);
                    }
                    iVar4 = FUN_100406062(local_d30,param_4,&local_d28);
                    goto LAB_100405124;
                  }
                  uVar5 = FUN_1001cc310();
                  cVar3 = _os_log_type_enabled(uVar5,0x10);
                  if (cVar3 == '\0') goto LAB_100405124;
                  local_d1a = (char *)CONCAT44(local_d1a._4_4_,iVar4);
                }
                else {
                  uVar5 = FUN_1001cc310();
                  cVar3 = _os_log_type_enabled(uVar5,0x10);
                  if (cVar3 == '\0') goto LAB_100405124;
                  local_d1a = (char *)CONCAT44(local_d1a._4_4_,iVar4);
                }
              }
              else {
                uVar5 = FUN_1001cc310();
                cVar3 = _os_log_type_enabled(uVar5,0x10);
                if (cVar3 == '\0') goto LAB_100405124;
                local_d1a = (char *)CONCAT44(local_d1a._4_4_,iVar4);
              }
              local_d1c = 0x400;
              local_d24 = "Assertion failure";
              local_d28 = 0x8220202;
              __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_d28,0x12);
            }
          }
        }
        goto LAB_100405124;
      }
      uVar5 = FUN_1001cc310();
      cVar3 = _os_log_type_enabled(uVar5,0x10);
      if (cVar3 != '\0') {
        local_d28 = 0x8220202;
        local_d24 = "Assertion failure";
        local_d1c = 0x822;
        local_d1a = "trackData";
        __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_d28,0x16);
      }
      FUN_1001782e9(0,0);
    }
  }
  iVar4 = -0x32;
LAB_100405124:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar4;
}

