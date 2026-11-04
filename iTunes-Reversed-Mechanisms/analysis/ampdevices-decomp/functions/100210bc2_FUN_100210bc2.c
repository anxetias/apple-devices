// name: FUN_100210bc2
// address: 100210bc2

undefined8 FUN_100210bc2(long param_1,int param_2,int param_3,void *param_4)

{
  char cVar1;
  undefined8 uVar2;
  void *pvVar3;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_4 == (void *)0x0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_3a = "outLogFileSpec != nullptr";
LAB_100210da1:
      local_3c = 0x822;
      local_44 = "Assertion failure";
      local_48 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
  }
  else {
    FUN_1001c62d9(param_4,0x420);
    if (param_2 == 2) {
      uVar2 = 0xffffffce;
      if (param_3 < 0x69506164) {
        if (param_3 < 0x57617463) {
          if (param_3 == 0x48506f64) {
            pvVar3 = (void *)(param_1 + 0x14a8);
          }
          else {
            if (param_3 != 0x4d616320) goto LAB_100210d60;
            pvVar3 = (void *)(param_1 + 0x18c8);
          }
        }
        else if (param_3 == 0x57617463) {
          pvVar3 = (void *)(param_1 + 0x1088);
        }
        else {
          if (param_3 != 0x69427269) goto LAB_100210d60;
          pvVar3 = (void *)(param_1 + 0x1ce8);
        }
      }
      else if (param_3 < 0x69506f74) {
        if (param_3 == 0x69506164) {
          pvVar3 = (void *)(param_1 + 0x848);
        }
        else {
          if (param_3 != 0x6950686e) goto LAB_100210d60;
          pvVar3 = (void *)(param_1 + 0x428);
        }
      }
      else if (param_3 == 0x69506f74) {
        pvVar3 = (void *)(param_1 + 8);
      }
      else {
        if (param_3 != 0x69545620) goto LAB_100210d60;
        pvVar3 = (void *)(param_1 + 0xc68);
      }
      cVar1 = FUN_10017cbd0(pvVar3);
      if (cVar1 == '\0') {
        uVar2 = 0xffffffd5;
      }
      else {
        _memcpy(param_4,pvVar3,0x420);
        uVar2 = 0;
      }
      goto LAB_100210d60;
    }
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_3a = "updateRestoreDeviceClass == kUpdateRestoreDeviceClassMobileDevice";
      goto LAB_100210da1;
    }
  }
  FUN_1001782e9(0,0);
  uVar2 = 0xffffffce;
LAB_100210d60:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

