// name: FUN_1001b0458
// address: 1001b0458

void FUN_1001b0458(undefined8 *param_1,undefined4 param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar3 = &DAT_1008c52e8;
  if ((undefined *)*param_1 == &DAT_1008c52e8) {
    uVar2 = FUN_1001cc310();
    uVar2 = _objc_retainAutoreleasedReturnValue(uVar2);
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_10069f74c(uVar2);
    }
    (*(code *)PTR__objc_release_10082c7b0)(uVar2);
    FUN_1001782e9(0,0);
    return;
  }
  *(undefined4 *)((long)param_1 + 0x1c) = param_2;
  switch(param_2) {
  case 0:
    puVar3 = &DAT_1008c52b0;
    break;
  case 1:
    puVar3 = &DAT_1008c5260 + (ulong)*(uint *)(param_1 + 0xb) * 0x28;
    break;
  case 2:
    DAT_1008c5258 = param_1;
  default:
    return;
  case 3:
    break;
  }
  FUN_1001b0678(puVar3,param_1);
  return;
}

