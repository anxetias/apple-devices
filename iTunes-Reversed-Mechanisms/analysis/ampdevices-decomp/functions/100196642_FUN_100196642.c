// name: FUN_100196642
// address: 100196642

undefined8 FUN_100196642(long param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  uVar2 = FUN_1001705fc(param_2);
  FUN_10017060f(*(undefined8 *)(param_1 + 0x10));
  lVar3 = _CGImageMetadataCreateMutableCopy(uVar2);
  *(long *)(param_1 + 0x10) = lVar3;
  uVar4 = 0;
  if (lVar3 == 0) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      FUN_100695812(uVar4);
    }
    FUN_1001782e9(0,0);
    uVar4 = 0xffffff94;
  }
  FUN_10017060f(uVar2);
  return uVar4;
}

