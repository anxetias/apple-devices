// name: FUN_1005ec22f
// address: 1005ec22f

void FUN_1005ec22f(void)

{
  undefined *puVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar4 = FUN_100170720(DAT_1008c4d90,0,PTR__kCFTypeArrayCallBacks_10082e130);
  puVar1 = PTR__kCFTypeDictionaryValueCallBacks_10082e140;
  if (lVar4 == 0) {
    uVar6 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar6,0x10);
    if (cVar2 != '\0') {
      local_4a = "deviceInfoDictionaryArray != nullptr";
LAB_1005ec433:
      local_4c = 0x822;
      local_54 = "Assertion failure";
      local_58 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
  }
  else {
    lVar7 = 8;
    do {
      if ((*(uint *)((long)&DAT_10075c120 + lVar7) & 0xfffffffe) == 2) {
        lVar5 = FUN_100171409(DAT_1008c4d90,0,PTR__kCFTypeDictionaryKeyCallBacks_10082e138,puVar1);
        if (lVar5 == 0) {
          uVar6 = FUN_1001cc310();
          cVar2 = _os_log_type_enabled(uVar6,0x10);
          if (cVar2 == '\0') goto LAB_1005ec458;
          local_4a = "deviceInfoDictionary != nullptr";
          goto LAB_1005ec433;
        }
        FUN_100168746(lVar5,&cf_PID,
                      *(undefined2 *)
                       ("ZN10ArtistInfo22DeletePlaceholderTrackEvE3$_0" + lVar7 + 0x2a),1);
        FUN_1001709a5(lVar4);
        FUN_10017060f(lVar5);
      }
      lVar7 = lVar7 + 0x18;
    } while (lVar7 != 0x1928);
    cVar2 = FUN_1005b7c7f();
    if (cVar2 == '\0') {
      iVar3 = _AMRestoreEnableExtraDFUDevices(lVar4);
      if ((iVar3 == -4) || (iVar3 == 0)) goto LAB_1005ec461;
      uVar6 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar6,0x10);
      if (cVar2 != '\0') {
        local_4a = "error == kAMDSuccess || error == unimpErr";
        goto LAB_1005ec433;
      }
    }
    else {
      cVar2 = _AMRestorableDeviceEnableExtraDFUDevices(lVar4);
      if (cVar2 != '\0') goto LAB_1005ec461;
      uVar6 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar6,0x10);
      if (cVar2 != '\0') {
        local_4a = "AMRestorableDeviceEnableExtraDFUDevices(deviceInfoDictionaryArray)";
        goto LAB_1005ec433;
      }
    }
  }
LAB_1005ec458:
  FUN_1001782e9(0,0);
LAB_1005ec461:
  FUN_10017060f(lVar4);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

