// name: FUN_10015fc81
// address: 10015fc81

uint FUN_10015fc81(undefined8 *param_1,int param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  int iVar3;
  undefined1 *puVar4;
  char cVar5;
  undefined8 uVar6;
  uint uVar7;
  
  if (8 < (byte)param_2) {
    uVar6 = FUN_1001cc310();
    cVar5 = _os_log_type_enabled(uVar6,0x10);
    if (cVar5 != '\0') {
      FUN_10066e835(uVar6);
    }
    FUN_1001782e9(0,0);
  }
  puVar4 = (undefined1 *)*param_1;
  uVar1 = *puVar4;
  uVar2 = puVar4[1];
  iVar3 = *(int *)(param_1 + 2);
  uVar7 = param_2 + iVar3;
  *param_1 = puVar4 + (uVar7 >> 3);
  *(uint *)(param_1 + 2) = uVar7 & 7;
  if ((undefined1 *)param_1[1] < puVar4 + (uVar7 >> 3)) {
    uVar6 = FUN_1001cc310();
    cVar5 = _os_log_type_enabled(uVar6,0x10);
    if (cVar5 != '\0') {
      FUN_10066e8ab(uVar6);
    }
    FUN_1001782e9(0,0);
  }
  return ((uint)CONCAT11(uVar1,uVar2) << ((byte)iVar3 & 0x1f) & 0xffff) >>
         (0x10 - (byte)param_2 & 0x1f) & 0xff;
}

