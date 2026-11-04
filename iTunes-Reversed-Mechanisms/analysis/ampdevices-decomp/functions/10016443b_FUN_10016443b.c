// name: FUN_10016443b
// address: 10016443b

undefined8 FUN_10016443b(void)

{
  char cVar1;
  void *pvVar2;
  undefined8 uVar3;
  
  pvVar2 = operator_new(0xb8,(nothrow_t *)PTR_nothrow_10082c970);
  if (pvVar2 == (void *)0x0) {
    DAT_10088ff98 = (void *)0x0;
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_100671d4d(uVar3);
    }
    FUN_1001782e9(0,0);
    uVar3 = 0xffffff94;
  }
  else {
    FUN_100161f84(pvVar2);
    uVar3 = 0;
    DAT_10088ff98 = pvVar2;
  }
  return uVar3;
}

