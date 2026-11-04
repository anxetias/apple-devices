// name: FUN_100199809
// address: 100199809

undefined8 FUN_100199809(undefined8 *param_1)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  puVar2 = (undefined8 *)FUN_1001c6429(0x1b8);
  if (puVar2 == (undefined8 *)0x0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_100697c1a(uVar3);
    }
    FUN_1001782e9(0,0);
    uVar3 = 0xffffff94;
  }
  else {
    *puVar2 = 0x6874646c;
    uVar3 = 0;
  }
  *param_1 = puVar2;
  return uVar3;
}

