// name: FUN_1002ec0b6
// address: 1002ec0b6

undefined8 FUN_1002ec0b6(long *param_1,undefined8 param_2)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  char *pcVar4;
  undefined8 uVar5;
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  long local_48 [2];
  undefined2 local_38 [8];
  
  FUN_10032f0f2(local_48);
  FUN_10032f0f2(local_58);
  FUN_1001a7b90(local_38);
  cVar1 = FUN_1001a92ae(param_2,local_38,local_48);
  FUN_1001ab240(local_38);
  uVar5 = 0;
  if (cVar1 == '\0') goto LAB_1002ec274;
  if (local_48[0] == 0) {
    if (DAT_1008c7660 != -1) {
      _dispatch_once(&DAT_1008c7660,&PTR___NSConcreteGlobalBlock_1008575c0);
    }
    uVar3 = DAT_1008c7658;
    cVar1 = _os_log_type_enabled(DAT_1008c7658,0x10);
    uVar5 = 0xffffffce;
    if (cVar1 == '\0') goto LAB_1002ec274;
    pcVar4 = "**ERROR** EntireLibrary - nil dbData";
  }
  else {
    lVar2 = FUN_1001a8610(local_48);
    if (lVar2 != 0) {
      FUN_1001a7a9e(local_78,local_48);
      (**(code **)(*param_1 + 0x38))(param_1,local_78);
      FUN_1001a85d4(local_78);
      FUN_1001a7b90(local_38);
      cVar1 = FUN_1001a9164(param_2,local_38,local_58);
      FUN_1001ab240(local_38);
      if (cVar1 != '\0') {
        FUN_1001a7a9e(local_68,local_58);
        (**(code **)(*param_1 + 0x40))(param_1,local_68);
        FUN_1001a8fac(local_68);
      }
      uVar3 = (**(code **)(*param_1 + 0x10))(param_1);
      uVar5 = 0;
      FUN_100319a94(uVar3,6,0);
      goto LAB_1002ec274;
    }
    if (DAT_1008c7660 != -1) {
      _dispatch_once(&DAT_1008c7660,&PTR___NSConcreteGlobalBlock_1008575c0);
    }
    uVar3 = DAT_1008c7658;
    cVar1 = _os_log_type_enabled(DAT_1008c7658,0x10);
    uVar5 = 0xffffffce;
    if (cVar1 == '\0') goto LAB_1002ec274;
    pcVar4 = "**ERROR** EntireLibrary - 0 length data";
  }
  local_38[0] = 0;
  uVar5 = 0xffffffce;
  __os_log_impl(0x100000000,uVar3,0x10,pcVar4,local_38,2);
LAB_1002ec274:
  FUN_1001a8fac(local_58);
  FUN_1001a85d4(local_48);
  return uVar5;
}

