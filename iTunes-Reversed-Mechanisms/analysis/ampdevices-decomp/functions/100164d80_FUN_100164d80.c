// name: FUN_100164d80
// address: 100164d80

undefined1 FUN_100164d80(undefined8 param_1,undefined4 *param_2)

{
  char cVar1;
  long in_RAX;
  undefined8 uVar2;
  long local_18;
  
  if (param_2 == (undefined4 *)0x0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_10067276e(uVar2);
    }
  }
  else {
    *param_2 = 0;
    local_18 = in_RAX;
    cVar1 = FUN_100164e20(param_1,&local_18);
    if (cVar1 == '\0') {
      return 0;
    }
    if (local_18 + 0x80000000U >> 0x1f < 3) {
      *param_2 = (int)local_18;
      return 1;
    }
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_1006726f8(uVar2);
    }
  }
  FUN_1001782e9(0,0);
  return 0;
}

