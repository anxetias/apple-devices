// name: FUN_1001f362f
// address: 1001f362f

undefined8 FUN_1001f362f(void)

{
  char cVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_1001cc310();
  cVar1 = _os_log_type_enabled(uVar2,0x10);
  if (cVar1 != '\0') {
    FUN_1006c7555(uVar2);
  }
  FUN_1001782e9(0,0);
  return 0xffffffce;
}

