// name: FUN_1002b3b9a
// address: 1002b3b9a

int FUN_1002b3b9a(long param_1,long param_2)

{
  uint *puVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  long local_50;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  if ((((param_1 == 0) || (*(long *)(param_1 + 8) == 0)) ||
      (*(long *)(*(long *)(param_1 + 8) + 0x10) == 0)) || (*(char *)(param_1 + 0x44) != '\x01')) {
    uVar5 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar5,0x10);
    if (cVar2 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = 
      "TrackInstanceIsValid( trackInstance ) && (trackInstance->locationStatus == kTrackLocationStatus_Valid)"
      ;
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
    FUN_1001c62d9(param_2,0x460);
    iVar3 = 0x2354;
    goto LAB_1002b3c47;
  }
  iVar3 = *(int *)(param_1 + 0x3c);
  if (iVar3 < 0x48545450) {
    if (iVar3 == 0x43442020) {
      uVar5 = *(undefined8 *)(param_1 + 0x80);
      iVar3 = 0x43442020;
LAB_1002b3d9e:
      iVar3 = FUN_10030256d(iVar3,uVar5,param_2);
      goto LAB_1002b3da9;
    }
    if (iVar3 != 0x44574e4c) {
      if (iVar3 != 0x46494c45) goto LAB_1002b3dbb;
      goto LAB_1002b3d89;
    }
    FUN_1001c631b(*(undefined8 *)(param_1 + 0x80),param_2 + 0x2c,0x430);
    FUN_10031bd9c(param_1,param_2);
LAB_1002b3dfe:
    iVar3 = 0;
  }
  else {
    if (iVar3 < 0x4d46494c) {
      if (iVar3 == 0x48545450) goto LAB_1002b3cfa;
      if (iVar3 == 0x4d425546) goto LAB_1002b3d89;
LAB_1002b3dbb:
      FUN_10031bd9c(param_1,param_2);
      iVar3 = -0x32;
    }
    else {
      if (iVar3 == 0x4d46494c) {
LAB_1002b3d89:
        uVar5 = *(undefined8 *)(param_1 + 0x80);
        goto LAB_1002b3d9e;
      }
      if (iVar3 != 0x53485244) goto LAB_1002b3dbb;
LAB_1002b3cfa:
      if ((iVar3 == 0x48545450) || (iVar3 == 0x53485244)) {
        puVar1 = (uint *)(param_2 + 0x2c);
        iVar3 = FUN_1002b3f68(param_1,&local_50,puVar1);
        if (iVar3 == 0) {
          uVar4 = *puVar1;
          if (uVar4 < 0x401) {
            if (local_50 != 0) goto LAB_1002b3e9a;
            if (uVar4 != 0) goto LAB_1002b3e67;
          }
          else {
            *puVar1 = 0x400;
            uVar4 = 0x400;
            if (local_50 == 0) {
LAB_1002b3e67:
              uVar5 = FUN_1001cc310();
              cVar2 = _os_log_type_enabled(uVar5,0x10);
              if (cVar2 != '\0') {
                local_48 = 0x8220202;
                local_44 = "Assertion failure";
                local_3c = 0x822;
                local_3a = "(url != nullptr) || (urlLocation->length == 0)";
                __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_48,0x16
                                   );
              }
              FUN_1001782e9(0,0);
              if (local_50 == 0) goto LAB_1002b3ea5;
              uVar4 = *puVar1;
            }
LAB_1002b3e9a:
            FUN_1001c631b(local_50,param_2 + 0x30,uVar4);
          }
LAB_1002b3ea5:
          if (*(int *)(param_1 + 0x3c) == 0x53485244) {
            *(undefined1 *)(param_2 + 0x430) = 1;
          }
          else {
            *(undefined1 *)(param_2 + 0x430) = 0;
          }
          iVar3 = 0;
        }
        else {
          uVar5 = FUN_1001cc310();
          cVar2 = _os_log_type_enabled(uVar5,0x10);
          if (cVar2 != '\0') {
            local_48 = 0x8220202;
            local_44 = "Assertion failure";
            local_3c = 0x400;
            local_3a = (char *)CONCAT44(local_3a._4_4_,iVar3);
            __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_48,0x12);
          }
        }
      }
      else {
        uVar5 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar5,0x10);
        if (cVar2 != '\0') {
          local_48 = 0x8220202;
          local_44 = "Assertion failure";
          local_3c = 0x822;
          local_3a = "urlLocation != nullptr";
          __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
        }
        FUN_1001782e9(0,0);
        iVar3 = -0x32;
      }
LAB_1002b3da9:
      FUN_10031bd9c(param_1,param_2);
      if (iVar3 == 0) goto LAB_1002b3dfe;
    }
    FUN_1001c62d9(param_2,0x460);
  }
LAB_1002b3c47:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_30) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar3;
}

