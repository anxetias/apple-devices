// name: FUN_1001bb41a
// address: 1001bb41a

ushort * FUN_1001bb41a(long *param_1,ushort *param_2)

{
  char cVar1;
  ulong uVar2;
  undefined2 *puVar3;
  undefined8 uVar5;
  ulong uVar6;
  long lVar4;
  
  if (param_2 == (ushort *)0x0) {
    uVar5 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar5,0x10);
    if (cVar1 != '\0') {
      FUN_1006a23fe(uVar5);
    }
    FUN_1001782e9(0,0);
    return (ushort *)0x0;
  }
  uVar2 = FUN_1001b8378();
  uVar6 = 0xff;
  if (uVar2 < 0xff) {
    uVar6 = uVar2;
  }
  *param_2 = (ushort)uVar6;
  lVar4 = *param_1;
  if (lVar4 == 0) {
    puVar3 = &DAT_100711b00;
    if (param_1[1] == 0) goto LAB_1001bb457;
    FUN_1001b8454(param_1);
    lVar4 = *param_1;
    if (lVar4 == 0) goto LAB_1001bb457;
  }
  puVar3 = (undefined2 *)(lVar4 + 0xc);
LAB_1001bb457:
  _memcpy(param_2 + 1,puVar3,(ulong)((uint)*param_2 * 2));
  return param_2;
}

