// name: FUN_10014d572
// address: 10014d572

undefined8 FUN_10014d572(undefined8 param_1,long param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 local_40 [8];
  undefined1 local_38 [8];
  
  FUN_10032f0f2();
  if (*(char *)(param_2 + 0x30) == '\x01') {
    FUN_1001aaf3c(local_40,PTR_s_X_Apple_TID_Action_10088f4f8);
    FUN_1001aaf3c(local_38,PTR_s_FB_10088f540);
    FUN_10014ce64(param_1,local_40,local_38);
  }
  else {
    cVar1 = FUN_1001b8428(param_2 + 0x20);
    if (cVar1 != '\0') {
      uVar2 = FUN_1001cc310();
      uVar2 = _objc_retainAutoreleasedReturnValue(uVar2);
      cVar1 = _os_log_type_enabled(uVar2,0x10);
      if (cVar1 != '\0') {
        FUN_10014d957(uVar2);
      }
      (*(code *)PTR__objc_release_10082c7b0)(uVar2);
      cVar1 = FUN_1001782e9(0,0);
      if (cVar1 == '\0') {
        return param_1;
      }
    }
    cVar1 = FUN_1001b8428(param_2);
    if (cVar1 != '\0') {
      uVar2 = FUN_1001cc310();
      uVar2 = _objc_retainAutoreleasedReturnValue(uVar2);
      cVar1 = _os_log_type_enabled(uVar2,0x10);
      if (cVar1 != '\0') {
        FUN_10014d9cd(uVar2);
      }
      (*(code *)PTR__objc_release_10082c7b0)(uVar2);
      cVar1 = FUN_1001782e9(0,0);
      if (cVar1 == '\0') {
        return param_1;
      }
    }
    cVar1 = FUN_1001b8428(param_2 + 0x10);
    if (cVar1 != '\0') {
      uVar2 = FUN_1001cc310();
      uVar2 = _objc_retainAutoreleasedReturnValue(uVar2);
      cVar1 = _os_log_type_enabled(uVar2,0x10);
      if (cVar1 != '\0') {
        FUN_10014da43(uVar2);
      }
      (*(code *)PTR__objc_release_10082c7b0)(uVar2);
      cVar1 = FUN_1001782e9(0,0);
      if (cVar1 == '\0') {
        return param_1;
      }
    }
    FUN_1001aaf3c(local_40,PTR_s_X_Apple_TID_PKey_10088f4f0);
    FUN_1001aaf14(local_38,param_2 + 0x20);
    FUN_10014ce64(param_1,local_40,local_38);
    FUN_1001ab006(local_38);
    FUN_1001ab006(local_40);
    FUN_1001aaf3c(local_40,PTR_s_X_Apple_TID_Challenge_10088f500);
    FUN_1001aaf14(local_38,param_2);
    FUN_10014ce64(param_1,local_40,local_38);
    FUN_1001ab006(local_38);
    FUN_1001ab006(local_40);
    FUN_1001aaf3c(local_40,PTR_s_X_Apple_TID_Signature_10088f508);
    FUN_1001aaf14(local_38,param_2 + 0x10);
    FUN_10014ce64(param_1,local_40,local_38);
    FUN_1001ab006(local_38);
    FUN_1001ab006(local_40);
    FUN_1001aaf3c(local_40,PTR_s_X_Apple_TID_SignatureVersion_10088f510);
    FUN_1001aaf3c(local_38,PTR_s_1_10088f548);
    FUN_10014ce64(param_1,local_40,local_38);
  }
  FUN_1001ab006(local_38);
  FUN_1001ab006(local_40);
  return param_1;
}

