// name: FUN_1001273f0
// address: 1001273f0

undefined1 * FUN_1001273f0(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 *puVar7;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
  if ((char)param_1[1] == '\0') {
    uVar5 = FUN_1001c63e1((ulong)*param_1 << 2);
    *(undefined8 *)(param_1 + 8) = uVar5;
    uVar5 = FUN_1001c63e1((ulong)*param_1 << 2);
    *(undefined8 *)(param_1 + 10) = uVar5;
    lVar6 = FUN_1001c63e1((ulong)*param_1 << 2);
    *(long *)(param_1 + 0xc) = lVar6;
    *(long *)(param_1 + 0xe) = lVar6;
    if ((*(long *)(param_1 + 8) != 0) && (lVar6 != 0 && *(long *)(param_1 + 10) != 0)) {
      return (undefined1 *)0x0;
    }
    uVar5 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar5,0x10);
    puVar7 = (undefined1 *)0xffffff94;
    if (cVar4 != '\0') {
      FUN_10066a0a0(uVar5);
    }
  }
  else {
    uVar5 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar5,0x10);
    puVar7 = &DAT_ffffff30;
    if (cVar4 != '\0') {
      FUN_10066a020(uVar5);
    }
  }
  FUN_1001782e9(0,0);
  return puVar7;
}

