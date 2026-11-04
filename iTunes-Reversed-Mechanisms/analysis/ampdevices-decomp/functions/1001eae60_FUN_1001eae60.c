// name: FUN_1001eae60
// address: 1001eae60

void FUN_1001eae60(long param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  if (param_1 != 0) {
    puVar3 = &DAT_1008a2a68;
    if (*(undefined **)(param_1 + 0x10) != (undefined *)0x0) {
      puVar3 = *(undefined **)(param_1 + 0x10);
    }
    FUN_1001e9de0(puVar3);
    return;
  }
  uVar2 = FUN_1001cc310();
  cVar1 = _os_log_type_enabled(uVar2,0x10);
  if (cVar1 != '\0') {
    FUN_1006c3796(uVar2);
  }
  FUN_1001782e9(0,1);
  return;
}

