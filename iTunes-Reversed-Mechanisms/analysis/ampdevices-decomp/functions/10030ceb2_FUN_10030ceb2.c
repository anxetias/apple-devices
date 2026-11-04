// name: FUN_10030ceb2
// address: 10030ceb2

void FUN_10030ceb2(long param_1,undefined8 param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  uVar2 = (**(code **)(param_1 + 0x58))(param_2);
  *(undefined4 *)(param_1 + 0x60) = uVar2;
  cVar1 = FUN_1001e96b8(param_1 + 100);
  if (cVar1 != '\0') {
    FUN_1001e9809(param_1 + 100);
    return;
  }
  FUN_1001c64c1(param_1);
  return;
}

