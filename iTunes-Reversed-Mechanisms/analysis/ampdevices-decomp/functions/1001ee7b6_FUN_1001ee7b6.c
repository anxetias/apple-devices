// name: FUN_1001ee7b6
// address: 1001ee7b6

void FUN_1001ee7b6(uint param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  if (10000 < param_1) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_1006c5684(uVar2);
    }
    FUN_1001782e9(0,0);
  }
  _usleep(param_1 * 1000);
  return;
}

