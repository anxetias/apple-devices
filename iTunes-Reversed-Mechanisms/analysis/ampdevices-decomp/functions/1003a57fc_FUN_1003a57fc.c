// name: FUN_1003a57fc
// address: 1003a57fc

undefined8 FUN_1003a57fc(long param_1,long *param_2)

{
  long lVar1;
  char cVar2;
  
  lVar1 = *param_2;
  cVar2 = FUN_1002b7185(*(undefined8 *)(lVar1 + 0x58));
  if (cVar2 == '\0') {
    cVar2 = FUN_100481a53(lVar1);
    if (cVar2 == '\0') {
      if (**(uint **)(param_1 + 8) < *(uint *)(lVar1 + 0x14c)) {
        **(uint **)(param_1 + 8) = *(uint *)(lVar1 + 0x14c);
      }
    }
  }
  return 0;
}

