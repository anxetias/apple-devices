// name: FUN_10023e604
// address: 10023e604

void FUN_10023e604(undefined8 *param_1)

{
  ID IVar1;
  undefined8 uVar2;
  
  *param_1 = &PTR_FUN_10083ea08;
  if ((param_1[0xf] != 0) && (*(char *)(param_1 + 0x10) == '\x01')) {
    _PasteboardSetPromiseKeeper(param_1[0xf],FUN_10023e6f5,0);
    _CFRelease(param_1[0xf]);
    IVar1 = NSPasteboard::pasteboardWithName_
                      ((ID)PTR__OBJC_CLASS___NSPasteboard_10082d318,
                       PTR_s_pasteboardWithName__10088c470,
                       PTR_cf_com_apple_AMPDevicesAgent_10085c0f8);
    uVar2 = _objc_retainAutoreleasedReturnValue(IVar1);
    (*(code *)PTR__objc_msgSend_10082c770)(uVar2,PTR_s_releaseGlobally_10088c498);
    (*(code *)PTR__objc_release_10082c7b0)(uVar2);
  }
  if (param_1[0x14] != 0) {
    FUN_1001c64c1();
    param_1[0x14] = 0;
  }
  FUN_1001e9d75(param_1 + 6);
  FUN_100240464();
  if (param_1[2] != 0) {
    std::__shared_weak_count::__release_weak();
    return;
  }
  return;
}

