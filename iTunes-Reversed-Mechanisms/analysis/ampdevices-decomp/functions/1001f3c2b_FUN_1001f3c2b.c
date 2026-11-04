// name: FUN_1001f3c2b
// address: 1001f3c2b

undefined8 FUN_1001f3c2b(int *param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  if ((param_1 == (int *)0x0) || (*param_1 != 0x786d6c65)) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_1006c7ea9(uVar2);
    }
  }
  else {
    if ((char)param_1[0xe] != '\0') {
      if (param_1[1] != 0) {
        uVar2 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar2,0x10);
        if (cVar1 != '\0') {
          FUN_1006c7dbd(uVar2);
        }
        FUN_1001782e9(0,0);
      }
      uVar2 = (**(code **)(param_1 + 0x10))(param_1,"</plist>\n",9,*(undefined8 *)(param_1 + 0x12));
      *(undefined1 *)(param_1 + 0xe) = 0;
      return uVar2;
    }
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_1006c7e33(uVar2);
    }
  }
  FUN_1001782e9(0,0);
  return 0xffffffce;
}

