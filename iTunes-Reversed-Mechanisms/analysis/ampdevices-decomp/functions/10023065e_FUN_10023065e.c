// name: FUN_10023065e
// address: 10023065e

void FUN_10023065e(void)

{
  undefined1 in_AL;
  char cVar1;
  undefined7 in_register_00000001;
  undefined8 uVar2;
  ulong local_18;
  
  local_18 = CONCAT71(in_register_00000001,in_AL);
  uVar2 = FUN_10023046d();
  uVar2 = _objc_retainAutoreleasedReturnValue(uVar2);
  cVar1 = _os_log_type_enabled(uVar2,0x10);
  if (cVar1 != '\0') {
    local_18 = local_18 & 0xffffffffffff0000;
    __os_log_impl(0x100000000,uVar2,0x10,"got BookKit connection interruption",&local_18,2);
  }
  (*(code *)PTR__objc_release_10082c7b0)(uVar2);
  return;
}

