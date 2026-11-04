// name: FUN_100132f20
// address: 100132f20

bool FUN_100132f20(undefined8 param_1)

{
  ulong uVar1;
  char cVar2;
  undefined1 in_AL;
  char cVar3;
  undefined7 in_register_00000001;
  undefined8 uVar4;
  ulong local_28;
  
  local_28 = CONCAT71(in_register_00000001,in_AL);
  FUN_100132b20();
  cVar2 = DAT_10088f4a0;
  uVar1 = DAT_10088f490;
  if (DAT_10088f4a0 == '\x02') {
    if (DAT_10088f490 < DAT_10088f498) {
      FUN_1003da7e0(DAT_10088f490,param_1);
      DAT_10088f490 = uVar1 + 0x30;
    }
    else {
      DAT_10088f490 = FUN_1001336e6(&DAT_10088f488,param_1);
    }
  }
  else {
    uVar4 = FUN_100132aba();
    uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
    cVar3 = _os_log_type_enabled(uVar4,0x10);
    if (cVar3 != '\0') {
      local_28 = local_28 & 0xffffffffffff0000;
      __os_log_impl(0x100000000,uVar4,0x10,
                    "Could not register StoreServices un-initialization proc. Not initialized.",
                    &local_28,2);
    }
    (*(code *)PTR__objc_release_10082c7b0)(uVar4);
    uVar4 = FUN_1001cc310();
    uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
    cVar3 = _os_log_type_enabled(uVar4,0x10);
    if (cVar3 != '\0') {
      FUN_100133b1a(uVar4);
    }
    (*(code *)PTR__objc_release_10082c7b0)(uVar4);
    FUN_1001782e9(0,1);
  }
  return cVar2 == '\x02';
}

