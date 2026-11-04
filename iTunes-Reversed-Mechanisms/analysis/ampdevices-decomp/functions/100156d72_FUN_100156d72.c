// name: FUN_100156d72
// address: 100156d72

undefined * FUN_100156d72(void)

{
  char cVar1;
  undefined8 uVar2;
  
  FUN_100156ce8();
  if ((DAT_10088fec0 & 1) == 0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_1001574b1(uVar2);
    }
    FUN_1001782e9(0,1);
  }
  FUN_100156ce8();
  return &DAT_10088fd98;
}

