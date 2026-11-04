// name: FUN_1005939e2
// address: 1005939e2

int FUN_1005939e2(long param_1,long param_2)

{
  char cVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == 0) {
    uVar5 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar5,0x10);
    if (cVar1 != '\0') {
      local_3a = "imageFileSpec != nullptr";
LAB_100593c00:
      local_3c = 0x822;
      local_44 = "Assertion failure";
      local_48 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
  }
  else {
    if (param_2 != 0) {
      lVar3 = FUN_10016ff43(0,param_1);
      if (lVar3 == 0) {
        uVar5 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar5,0x10);
        if (cVar1 != '\0') {
          local_3a = "sourceImageURL != nullptr";
LAB_100593c4e:
          local_3c = 0x822;
          local_44 = "Assertion failure";
          local_48 = 0x8220202;
          __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
        }
LAB_100593b96:
        lVar4 = 0;
        FUN_1001782e9(0,0);
        iVar2 = -0x6c;
      }
      else {
        lVar4 = _CGImageSourceCreateWithURL(lVar3,0);
        if (lVar4 == 0) {
          uVar5 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar5,0x10);
          if (cVar1 != '\0') {
            local_3a = "imageSource != nullptr";
            goto LAB_100593c4e;
          }
          goto LAB_100593b96;
        }
        iVar2 = FUN_100196700(lVar4,param_2);
        if ((iVar2 != -0x80) && (iVar2 != 0)) {
          uVar5 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar5,0x10);
          if (cVar1 != '\0') {
            local_48 = 0x8220202;
            local_44 = "Assertion failure";
            local_3c = 0x400;
            local_3a = (char *)CONCAT44(local_3a._4_4_,iVar2);
            __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_48,0x12);
          }
        }
      }
      FUN_10017060f(lVar4);
      FUN_10017060f(lVar3);
      goto LAB_100593bb8;
    }
    uVar5 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar5,0x10);
    if (cVar1 != '\0') {
      local_3a = "outMetadata != nullptr";
      goto LAB_100593c00;
    }
  }
  FUN_1001782e9(0,0);
  iVar2 = -0x32;
LAB_100593bb8:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

