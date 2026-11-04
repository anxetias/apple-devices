// name: FUN_10039565b
// address: 10039565b

int FUN_10039565b(uint *param_1,long param_2,uint param_3,undefined8 param_4,int *param_5)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  uint local_48 [3];
  undefined2 local_3c;
  char *local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  uVar1 = param_1[1];
  if (uVar1 == 0) {
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      local_48[0] = 0x8220202;
      local_48[1] = 0x7a0a90;
      local_48[2] = 1;
      local_3c = 0x822;
      local_3a = "imageInstanceDescriptor.logicalSize != 0";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",local_48,0x16);
    }
    FUN_1001782e9(0,0);
    iVar3 = -0x32;
  }
  else if (param_3 < *param_1 + uVar1) {
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      local_48[0] = 0x8220202;
      local_48[1] = 0x7a0a90;
      local_48[2] = 1;
      local_3c = 0x822;
      local_3a = 
      "imageInstanceDescriptor.fileOffset + imageInstanceDescriptor.logicalSize <= thumbnailCacheFileDataLength"
      ;
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",local_48,0x16);
    }
    FUN_1001782e9(0,0);
    iVar3 = -0x27;
  }
  else {
    local_48[1] = 0;
    local_48[0] = uVar1;
    iVar3 = FUN_100160894(param_4,local_48,param_2 + (ulong)*param_1);
    if (iVar3 != -0x80) {
      if (iVar3 == 0) {
        *param_5 = *param_5 + param_1[1];
        iVar3 = 0;
        if ((param_1[1] & 3) != 0) {
          lVar5 = 4 - ((ulong)param_1[1] & 3);
          iVar3 = FUN_100160bb2(param_4,lVar5);
          if (iVar3 != -0x80) {
            if (iVar3 != 0) {
              uVar4 = FUN_1001cc310();
              cVar2 = _os_log_type_enabled(uVar4,0x10);
              if (cVar2 != '\0') {
                local_48[0] = 0x8220202;
                local_48[1] = 0x7a0a90;
                local_48[2] = 1;
                local_3c = 0x400;
                local_3a = (char *)CONCAT44(local_3a._4_4_,iVar3);
                __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",local_48,0x12);
              }
              if (iVar3 != 0) goto LAB_10039578c;
            }
            *param_5 = *param_5 + (int)lVar5;
            iVar3 = 0;
          }
        }
      }
      else {
        uVar4 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar4,0x10);
        if (cVar2 != '\0') {
          local_48[0] = 0x8220202;
          local_48[1] = 0x7a0a90;
          local_48[2] = 1;
          local_3c = 0x400;
          local_3a = (char *)CONCAT44(local_3a._4_4_,iVar3);
          __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",local_48,0x12);
        }
      }
    }
  }
LAB_10039578c:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

