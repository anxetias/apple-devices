// name: FUN_100268255
// address: 100268255

void FUN_100268255(long param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  char cVar4;
  undefined1 uVar5;
  
  cVar4 = FUN_1001c19de();
  if (cVar4 == '\0') {
    uVar2 = *param_2;
    pcVar3 = (code *)param_2[1];
    uVar1 = *(undefined4 *)(param_1 + 0x24);
    uVar5 = FUN_100267f12(param_1 + 0x30);
    (*pcVar3)(uVar2,uVar1,uVar5,*(undefined1 *)(param_1 + 0x35),param_2[2]);
    FUN_100264ec8(*param_2);
  }
  else if (param_2 == (undefined8 *)0x0) {
    return;
  }
  operator_delete(param_2);
  return;
}

