// name: FUN_1006322f0
// address: 1006322f0

/* WARNING: Type propagation algorithm not settling */

long FUN_1006322f0(undefined8 param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  int local_5c [2];
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_5c[0] = 0;
  if (param_2 == (int *)0x0) {
    uVar6 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar6,0x10);
    if (cVar1 != '\0') {
      local_5c[1] = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "usbDeviceObject != __null";
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: err == (%d)",local_5c + 1,0x16);
    }
    FUN_1001782e9(0,0);
    lVar7 = 0xffffffce;
  }
  else {
    *param_2 = 0;
    uVar6 = *(undefined8 *)PTR__kCFAllocatorDefault_10082e018;
    lVar3 = _IORegistryEntryCreateCFProperty(param_1,&cf_locationID,uVar6,0);
    if (lVar3 == 0) {
      uVar6 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar6,0x10);
      if (cVar1 != '\0') {
        local_5c[1] = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x822;
        local_4a = "locationID != __null";
        __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: err == (%d)",local_5c + 1,0x16);
      }
      FUN_1001782e9(0,0);
      lVar7 = 0xffffffdc;
    }
    else {
      lVar4 = _IOServiceMatching("IOUSBDevice");
      if (lVar4 == 0) {
        uVar6 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar6,0x10);
        if (cVar1 != '\0') {
          local_5c[1] = 0x8220202;
          local_54 = "Assertion failure";
          local_4c = 0x822;
          local_4a = "matchingDictionary != __null";
          __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: err == (%d)",local_5c + 1,0x16);
        }
        lVar4 = 0;
        FUN_1001782e9(0,0);
        lVar7 = 0xffffffdc;
        lVar5 = 0;
      }
      else {
        lVar5 = FUN_100166547(uVar6,PTR__kCFTypeDictionaryKeyCallBacks_10082e138,
                              PTR__kCFTypeDictionaryValueCallBacks_10082e140,&cf_locationID,lVar3,0)
        ;
        if (lVar5 == 0) {
          uVar6 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar6,0x10);
          if (cVar1 != '\0') {
            local_5c[1] = 0x8220202;
            local_54 = "Assertion failure";
            local_4c = 0x822;
            local_4a = "propertyDictionary != __null";
            __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: err == (%d)",local_5c + 1,0x16);
          }
          lVar5 = 0;
          FUN_1001782e9(0,0);
          lVar7 = 0xffffff94;
        }
        else {
          FUN_100171502(lVar4,&cf_IOPropertyMatch,lVar5);
          iVar2 = _IOServiceGetMatchingServices
                            (*(undefined4 *)PTR__kIOMasterPortDefault_10082e788,lVar4,local_5c);
          if (iVar2 == 0 && local_5c[0] != 0) {
            iVar2 = _IOIteratorNext();
            *param_2 = iVar2;
            lVar4 = 0;
            lVar7 = 0xffffffd5;
            if (iVar2 != 0) {
              lVar7 = lVar4;
            }
            _IOObjectRelease(local_5c[0]);
          }
          else {
            uVar6 = FUN_1001cc310();
            cVar1 = _os_log_type_enabled(uVar6,0x10);
            if (cVar1 != '\0') {
              local_5c[1] = 0x8220202;
              local_54 = "Assertion failure";
              local_4c = 0x822;
              local_4a = "error == 0 && iterator != 0";
              __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: err == (%d)",local_5c + 1,0x16
                                 );
            }
            lVar4 = 0;
            FUN_1001782e9(0,0);
            lVar7 = 0xffffffd5;
          }
        }
      }
      FUN_10017060f(lVar5);
      FUN_10017060f(lVar4);
      FUN_10017060f(lVar3);
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return lVar7;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

