// name: FUN_1004066de
// address: 1004066de

int FUN_1004066de(long param_1,void *param_2,long param_3,long param_4,undefined8 param_5,
                 undefined8 param_6)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  long local_d20;
  undefined8 local_d18;
  void *local_d10;
  undefined4 local_d08;
  undefined4 uStack_d04;
  undefined4 uStack_d00;
  undefined2 local_cfc;
  char *local_cfa;
  undefined8 local_ca8;
  undefined1 local_ca0 [1056];
  ulong local_880;
  undefined8 local_878;
  undefined8 local_870;
  long local_868;
  undefined8 local_860;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == 0) {
LAB_1004068b6:
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_cfa = "TrackDataIsValid(trackData)";
LAB_100406a17:
      local_cfc = 0x822;
      uStack_d00 = 1;
      uStack_d04 = 0x7a0a90;
      local_d08 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_d08,0x16);
    }
  }
  else {
    if (*(int *)(param_1 + 0x80) != 0x74646174) {
      local_d18 = param_5;
      local_d10 = param_2;
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        local_d08 = 0x8220202;
        uStack_d04 = 0x7ab58c;
        uStack_d00 = 1;
        local_cfc = 0x822;
        local_cfa = "trackData->magic == \'tdat\'";
        __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_d08,0x16);
      }
      cVar1 = FUN_1001782e9(0,1);
      param_2 = local_d10;
      param_5 = local_d18;
      if (cVar1 == '\0') goto LAB_1004068b6;
    }
    if (*(int *)(param_1 + 0x84) == 0x646f5069) {
      local_d10 = param_2;
      cVar1 = FUN_10017cbd0(param_2);
      if (cVar1 == '\0') {
        uVar3 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar3,0x10);
        if (cVar1 != '\0') {
          local_cfa = "JRFileSpecIsValid(fileSpec)";
          goto LAB_100406a17;
        }
      }
      else if (param_3 == 0) {
        uVar3 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar3,0x10);
        if (cVar1 != '\0') {
          local_cfa = "gameGUID != 0";
          goto LAB_100406a17;
        }
      }
      else {
        if (param_4 != 0) {
          local_d18 = param_6;
          iVar2 = FUN_100405ee3(param_1);
          if (iVar2 == -0x80) goto LAB_100406a4b;
          if (iVar2 == 0) {
            iVar2 = FUN_1001f8a2c(local_d10,*(undefined4 *)(param_1 + 0x2c08),&local_d20);
            if (iVar2 == -0x80) goto LAB_100406a4b;
            if (iVar2 == 0) {
              FUN_1001c62d9(&local_d08,0xcc8);
              local_d08 = 5;
              uStack_d04 = 0;
              local_ca8 = 0x10007472616b;
              _memcpy(local_ca0,local_d10,0x420);
              local_880 = ((local_d20 + (ulong)*(uint *)(param_1 + 0x2c08)) - 1) /
                          (ulong)*(uint *)(param_1 + 0x2c08);
              local_870 = local_d18;
              local_878 = param_5;
              local_868 = param_3;
              local_860 = FUN_1001705fc(param_4);
              iVar2 = FUN_100406062(param_1,0,&local_d08);
              goto LAB_100406a4b;
            }
            uVar3 = FUN_1001cc310();
            cVar1 = _os_log_type_enabled(uVar3,0x10);
            if (cVar1 == '\0') goto LAB_100406a4b;
            local_cfa = (char *)CONCAT44(local_cfa._4_4_,iVar2);
          }
          else {
            uVar3 = FUN_1001cc310();
            cVar1 = _os_log_type_enabled(uVar3,0x10);
            if (cVar1 == '\0') goto LAB_100406a4b;
            local_cfa = (char *)CONCAT44(local_cfa._4_4_,iVar2);
          }
          local_cfc = 0x400;
          uStack_d00 = 1;
          uStack_d04 = 0x7a0a90;
          local_d08 = 0x8220202;
          __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_d08,0x12);
          goto LAB_100406a4b;
        }
        uVar3 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar3,0x10);
        if (cVar1 != '\0') {
          local_cfa = "gameDisplayName != nullptr";
          goto LAB_100406a17;
        }
      }
    }
    else {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        local_cfa = "trackData->trackDataKind == kTrackDataKind_iPod";
        goto LAB_100406a17;
      }
    }
  }
  FUN_1001782e9(0,0);
  iVar2 = -0x32;
LAB_100406a4b:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

