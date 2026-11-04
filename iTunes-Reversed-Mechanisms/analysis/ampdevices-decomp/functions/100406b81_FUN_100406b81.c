// name: FUN_100406b81
// address: 100406b81

int FUN_100406b81(long param_1,int param_2,undefined8 param_3,long param_4,long param_5,long param_6
                 ,undefined8 param_7,undefined8 param_8,undefined8 param_9)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 local_d08;
  undefined4 uStack_d04;
  undefined4 uStack_d00;
  undefined2 local_cfc;
  char *local_cfa;
  int local_ca8;
  ulong local_880;
  undefined8 local_878;
  undefined8 local_870;
  long local_868;
  undefined8 local_860;
  undefined8 local_858;
  undefined1 local_850 [2072];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == 0) {
LAB_100406c7f:
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_cfa = "TrackDataIsValid(trackData)";
LAB_100406f17:
      local_cfc = 0x822;
      uStack_d00 = 1;
      uStack_d04 = 0x7a0a90;
      local_d08 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_d08,0x16);
    }
  }
  else {
    if (*(int *)(param_1 + 0x80) != 0x74646174) {
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
      if (cVar1 == '\0') goto LAB_100406c7f;
    }
    if (*(int *)(param_1 + 0x84) == 0x646f5069) {
      if (param_2 == 0x7472616b) {
        uVar3 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar3,0x10);
        if (cVar1 != '\0') {
          local_cfa = "itemKind != kCopyFileItemKind_Track";
          goto LAB_100406f17;
        }
      }
      else {
        if (param_6 != 0) {
          iVar2 = FUN_100405ee3(param_1);
          if (iVar2 != -0x80) {
            if (iVar2 == 0) {
              FUN_1001c62d9(&local_d08,0xcc8);
              local_d08 = 3;
              uStack_d04 = 0;
              local_880 = ((param_5 + (ulong)*(uint *)(param_1 + 0x2c08)) - 1) /
                          (ulong)*(uint *)(param_1 + 0x2c08);
              local_860 = param_7;
              local_878 = param_8;
              local_870 = param_9;
              local_ca8 = param_2;
              local_868 = param_6;
              local_858 = FUN_1001705fc(param_3);
              if (param_4 != 0) {
                FUN_1001e1c39(param_4,local_850);
              }
              iVar2 = FUN_100406062(param_1,0,&local_d08);
            }
            else {
              uVar3 = FUN_1001cc310();
              cVar1 = _os_log_type_enabled(uVar3,0x10);
              if (cVar1 != '\0') {
                local_d08 = 0x8220202;
                uStack_d04 = 0x7a0a90;
                uStack_d00 = 1;
                local_cfc = 0x400;
                local_cfa = (char *)CONCAT44(local_cfa._4_4_,iVar2);
                __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_d08,0x12
                                   );
              }
            }
          }
          goto LAB_100406cf0;
        }
        uVar3 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar3,0x10);
        if (cVar1 != '\0') {
          local_cfa = "getFileProc != nullptr";
          goto LAB_100406f17;
        }
      }
    }
    else {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        local_cfa = "trackData->trackDataKind == kTrackDataKind_iPod";
        goto LAB_100406f17;
      }
    }
  }
  FUN_1001782e9(0,0);
  iVar2 = -0x32;
LAB_100406cf0:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

