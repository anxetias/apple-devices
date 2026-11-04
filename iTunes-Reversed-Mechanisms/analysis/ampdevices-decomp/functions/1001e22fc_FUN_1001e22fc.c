// name: FUN_1001e22fc
// address: 1001e22fc

void FUN_1001e22fc(uint param_1,undefined2 *param_2)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  
  if (param_2 == (undefined2 *)0x0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_1006bbf0f(uVar3);
    }
    FUN_1001782e9(0,0);
    return;
  }
  bVar4 = 0x18;
  lVar2 = 0;
  do {
    uVar6 = param_1 >> (bVar4 & 0x1f) & 0xff;
    uVar5 = uVar6 + 0x20;
    if (0x19 < uVar6 - 0x41) {
      uVar5 = uVar6;
    }
    if ((uVar5 == 0x2e) || (0xdd < uVar5 - 0x21)) goto LAB_1001e2347;
    param_2[lVar2 + 1] = (short)uVar5;
    lVar2 = lVar2 + 1;
    bVar4 = bVar4 - 8;
  } while (lVar2 != 4);
  lVar2 = 4;
LAB_1001e2347:
  *param_2 = (short)lVar2;
  return;
}

