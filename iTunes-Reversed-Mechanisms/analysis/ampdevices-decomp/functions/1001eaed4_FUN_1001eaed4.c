// name: FUN_1001eaed4
// address: 1001eaed4

void FUN_1001eaed4(void)

{
  char cVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_1001cc310();
  cVar1 = _os_log_type_enabled(uVar2,0x10);
  if (cVar1 != '\0') {
    FUN_1006c380c(uVar2);
  }
  FUN_1001782e9(0,1);
  return;
}

